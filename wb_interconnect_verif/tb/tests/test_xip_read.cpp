#include <iostream>

#include "Vwb_interconnect.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "../tick.h"
#include "../wb_txn.h"
#include "../wb_coverage.h"

// ============================================================
// TEST : XIP READ
// ============================================================

void test_xip_read(Vwb_interconnect* dut,
                   VerilatedVcdC* trace)
{
    std::cout << "\n========================\n";
    std::cout << "TEST : XIP READ\n";
    std::cout << "========================\n";

    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = 0;

    dut->wb_adr_i = 0x20000000;
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
    std::cout << "SEL   : " << (int)dut->wb_sel_i << "\n";

    std::cout << "\n========== XIP SIDE ==========\n";

    std::cout << "xip_req_o   : " << (int)dut->xip_req_o << "\n";
    std::cout << "xip_we_o    : " << (int)dut->xip_we_o << "\n";

    std::cout << std::hex;
    std::cout << "xip_addr_o  : 0x" << dut->xip_addr_o << "\n";
    std::dec;

    std::cout << "xip_be_o    : " << (int)dut->xip_be_o << "\n";

    if (dut->xip_req_o)
        std::cout << "[XIP SELECTED]\n";

    dut->xip_rdata_i  = 0xFACEB00C;
    dut->xip_rvalid_i = 1;

    tick(dut, trace);

    std::cout << "\n========== WB RESPONSE ==========\n";
    std::cout << "ACK   : " << (int)dut->wb_ack_o << "\n";
    std::cout << std::hex;
    std::cout << "RDATA : 0x" << dut->wb_dat_o << "\n";
    std::dec;

    wb_txn txn;
    txn.addr = dut->wb_adr_i;
    txn.wdata = dut->wb_dat_i;
    txn.rdata = dut->wb_dat_o;
    txn.we = dut->wb_we_i;
    txn.sel = dut->wb_sel_i;
    txn.ack = dut->wb_ack_o;
    txn.is_error = 0;
    txn.slave = wb_slave_t::XIP;

    coverage.sample(txn);

    dut->xip_rvalid_i = 0;
    dut->xip_rdata_i  = 0;

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    dut->wb_we_i  = 0;

    tick(dut, trace);
}
