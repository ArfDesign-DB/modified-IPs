#include <iostream>

#include "Vwb_interconnect.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "../tick.h"
#include "../wb_txn.h"
#include "../wb_coverage.h"

// ============================================================
// TEST : SPICTRL READ
// ============================================================

void test_spictrl_read(Vwb_interconnect* dut,
                        VerilatedVcdC* trace)
{
    std::cout << "\n========================\n";
    std::cout << "TEST : SPICTRL READ\n";
    std::cout << "========================\n";

    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = 0;

    dut->wb_adr_i = 0x40000300;
    dut->wb_dat_i = 0x0;
    dut->wb_sel_i = 0xF;

    tick(dut, trace);

    std::cout << "ADDR : 0x" << std::hex << dut->wb_adr_i << std::dec << "\n";

    std::cout << "\nSPICTRL SIDE\n";
    std::cout << "req  : " << (int)dut->spictrl_req_o << "\n";
    std::cout << "we   : " << (int)dut->spictrl_we_o << "\n";

    dut->spictrl_rdata_i  = 0x11112222;
    dut->spictrl_rvalid_i = 1;

    tick(dut, trace);

    std::cout << "ACK  : " << (int)dut->wb_ack_o << "\n";
    std::cout << "RDATA: 0x" << std::hex << dut->wb_dat_o << std::dec << "\n";

    wb_txn txn;
    txn.addr      = dut->wb_adr_i;
    txn.wdata     = 0;
    txn.rdata     = dut->wb_dat_o;
    txn.we        = 0;
    txn.sel       = dut->wb_sel_i;
    txn.ack       = dut->wb_ack_o;
    txn.is_error  = 0;
    txn.slave     = wb_slave_t::SPICTRL;

    coverage.sample(txn);

    dut->spictrl_rvalid_i = 0;
    dut->spictrl_rdata_i  = 0;

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;

    tick(dut, trace);
}
