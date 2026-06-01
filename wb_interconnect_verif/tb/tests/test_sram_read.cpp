#include <iostream>

#include "Vwb_interconnect.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "../tick.h"
#include "../wb_txn.h"
#include "../wb_coverage.h"


// ============================================================
// TEST : SRAM READ
// ============================================================

void test_sram_read(Vwb_interconnect* dut,
                    VerilatedVcdC* trace)
{
    std::cout << "\n========================\n";
    std::cout << "TEST : SRAM READ\n";
    std::cout << "========================\n";

    // ========================================================
    // READ REQUEST
    // ========================================================

    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = 0;

    dut->wb_adr_i = 0x00102000;
    dut->wb_dat_i = 0x0;
    dut->wb_sel_i = 0xF;

    tick(dut, trace);
    
    std::cout << "\n========== WB REQUEST ==========\n";

    std::cout << "CYC   : " << (int)dut->wb_cyc_i << "\n";
    std::cout << "STB   : " << (int)dut->wb_stb_i << "\n";
    std::cout << "WE    : " << (int)dut->wb_we_i  << "\n";

    std::cout << std::hex;

    std::cout << "ADDR  : 0x" << dut->wb_adr_i << "\n";
    std::cout << "WDATA : 0x" << dut->wb_dat_i << "\n";

    std::cout << std::dec;

    std::cout << "SEL   : " << (int)dut->wb_sel_i << "\n";

    std::cout << "\n========== SRAM SIDE ==========\n";

    std::cout << "sram_req_o   : "
              << (int)dut->sram_req_o << "\n";

    std::cout << "sram_we_o    : "
              << (int)dut->sram_we_o << "\n";

    std::cout << std::hex;

    std::cout << "sram_addr_o  : 0x"
              << dut->sram_addr_o << "\n";

    std::cout << std::dec;

    std::cout << "sram_be_o    : "
              << (int)dut->sram_be_o << "\n";

    if (dut->sram_req_o)
        std::cout << "[SRAM SELECTED]\n";

    // ========================================================
    // MEMORY RESPONSE (READ DATA)
    // ========================================================

    dut->sram_rdata_i  = 0xDEADBEEF;
    dut->sram_rvalid_i = 1;

    tick(dut, trace);

    std::cout << "\n========== WB RESPONSE ==========\n";

    std::cout << "ACK   : "
              << (int)dut->wb_ack_o << "\n";

    std::cout << std::hex;
    std::cout << "RDATA : 0x"
              << dut->wb_dat_o << "\n";
    std::cout << std::dec;

    // ========================================================
    // COVERAGE SAMPLE
    // ========================================================

    wb_txn txn;

    txn.addr      = dut->wb_adr_i;
    txn.wdata     = dut->wb_dat_i;
    txn.rdata     = dut->wb_dat_o;

    txn.we        = dut->wb_we_i;
    txn.sel       = dut->wb_sel_i;

    txn.ack       = dut->wb_ack_o;
    txn.is_error  = 0;

    txn.slave     = wb_slave_t::SRAM;

    coverage.sample(txn);

    // ========================================================
    // CLEANUP
    // ========================================================

    dut->sram_rvalid_i = 0;
    dut->sram_rdata_i  = 0;

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    dut->wb_we_i  = 0;

    tick(dut, trace);
}
