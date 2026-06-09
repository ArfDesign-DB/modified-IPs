#include "Vspi_flash_xip.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "spi_flash_xip_tb_utils.h"
#include "spi_flash_model.cpp"

#include <iostream>

// -------------------------------------------------
// SPI read helper
// -------------------------------------------------
static bool do_read(Vspi_flash_xip* dut,
                    VerilatedVcdC* tfp,
                    SpiFlashModel& flash,
                    uint32_t addr)
{
    dut->xip_addr_i = addr;
    dut->xip_we_i   = 0;
    dut->xip_req_i  = 1;

    bool rvalid_seen = false;

    // reset SPI model state per transaction (IMPORTANT)
    flash.state = SpiFlashModel::IDLE;
    flash.shift_reg = 0;
    flash.bit_cnt = 0;
    flash.addr = 0;
    flash.addr_cnt = 0;

    for (int i = 0; i < 1048; i++) {

        // -------------------------------------------------
        // Drive SPI flash model (deterministic MISO)
        // -------------------------------------------------
        bool miso = 0;

        flash.step(
            dut->spi_sck_o,
            dut->spi_csn_o,
            dut->spi_mosi_o,
            miso
        );

        dut->spi_miso_i = miso;

        tick(dut, tfp);

        if (dut->xip_rvalid_o) {
            rvalid_seen = true;
            break;
        }
    }

    dut->xip_req_i = 0;
    return rvalid_seen;
}

// -------------------------------------------------
// MAIN TEST
// -------------------------------------------------
int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto* dut = new Vspi_flash_xip;
    auto* tfp = new VerilatedVcdC;

    dut->trace(tfp, 5);
    tfp->open("../wave/TC_002.vcd");

    dut->clk_i = 0;
    reset_dut(dut, tfp);

    // -------------------------------------------------
    // SPI flash model instance
    // -------------------------------------------------
    SpiFlashModel flash;

    // preload memory (optional but recommended)
    flash.mem[0x111111 & 0xFFFF] = 0xAA;
    flash.mem[0x222222 & 0xFFFF] = 0xBB;
    flash.mem[0x333333 & 0xFFFF] = 0xCC;
    flash.mem[0xAAAAAA & 0xFFFF] = 0xDD;
    flash.mem[0x555555 & 0xFFFF] = 0xEE;

    // -------------------------------------------------
    // Back-to-back stress sequence
    // -------------------------------------------------
    uint32_t addrs[] = {
        0x111111,
        0x222222,
        0x333333,
        0xAAAAAA,
        0x555555
    };

    for (auto a : addrs) {
        if (!do_read(dut, tfp, flash, a)) {
            std::cerr << "FAIL: TC_002 at addr 0x"
                      << std::hex << a << std::endl;
            return 1;
        }
    }

    std::cout << "PASS: TC_002_spi_flash_xip_back_to_back_read_test\n";
    write_coverage("TC_002_spi_flash_xip_back_to_back_read_test");
    return 0;
}
