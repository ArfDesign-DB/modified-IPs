#include <iostream>

#include "Vwb_interconnect.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "../tick.h"
#include "../wb_txn.h"
#include "../wb_coverage.h"

// ============================================================
// TEST : DECODE ERROR
// ============================================================

void test_decode_error(Vwb_interconnect* dut,
                       VerilatedVcdC* trace)
{
    std::cout << "\n========================\n";
    std::cout << "TEST : DECODE ERROR\n";
    std::cout << "========================\n";

    // ========================================================
    // INVALID WB REQUEST
    // ========================================================

    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = 0;

    // Invalid address
    dut->wb_adr_i = 0x90000000;

    dut->wb_dat_i = 0x0;
    dut->wb_sel_i = 0xF;

    tick(dut, trace);

    std::cout << "\n========== WB REQUEST ==========\n";

    std::cout << "CYC   : " << (int)dut->wb_cyc_i << "\n";
    std::cout << "STB   : " << (int)dut->wb_stb_i << "\n";
    std::cout << "WE    : " << (int)dut->wb_we_i  << "\n";

    std::cout << std::hex;

    std::cout << "ADDR  : 0x" << dut->wb_adr_i << "\n";

    std::cout << std::dec;

    // ========================================================
    // CHECK NO PERIPHERAL SELECTED
    // ========================================================

    std::cout << "\n========== PERIPHERAL REQUESTS ==========\n";

    std::cout << "bootrom_req_o : " << (int)dut->bootrom_req_o << "\n";
    std::cout << "sram_req_o    : " << (int)dut->sram_req_o    << "\n";
    std::cout << "xip_req_o     : " << (int)dut->xip_req_o     << "\n";
    std::cout << "uart_req_o    : " << (int)dut->uart_req_o    << "\n";
    std::cout << "gpio_req_o    : " << (int)dut->gpio_req_o    << "\n";
    std::cout << "timer_req_o   : " << (int)dut->timer_req_o   << "\n";
    std::cout << "spictrl_req_o : " << (int)dut->spictrl_req_o << "\n";
    std::cout << "i2c_req_o     : " << (int)dut->i2c_req_o     << "\n";
    std::cout << "spihost_req_o : " << (int)dut->spihost_req_o << "\n";

    std::cout << "\n[NO PERIPHERAL SHOULD BE SELECTED]\n";

    // ========================================================
    // DECODE ERROR RESPONSE
    // ========================================================

    tick(dut, trace);

    std::cout << "\n========== WB RESPONSE ==========\n";

    std::cout << "ACK   : " << (int)dut->wb_ack_o << "\n";

    std::cout << std::hex;
    std::cout << "RDATA : 0x" << dut->wb_dat_o << "\n";
    std::cout << std::dec;

    if (dut->wb_ack_o && dut->wb_dat_o == 0)
        std::cout << "\n[DECODE ERROR RESPONSE GENERATED]\n";
        
      // ========================================================
    // FUNCTIONAL COVERAGE SAMPLING
    // ========================================================

    wb_txn txn;

    txn.addr      = dut->wb_adr_i;
    txn.wdata     = dut->wb_dat_i;
    txn.rdata     = dut->wb_dat_o;

    txn.we        = dut->wb_we_i;
    txn.sel       = dut->wb_sel_i;

    txn.ack       = dut->wb_ack_o;
    txn.is_error  = 1;

    txn.slave     = wb_slave_t::NONE;

    coverage.sample(txn);
 

    // ========================================================
    // CLEANUP
    // ========================================================

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;

    tick(dut, trace);
}
