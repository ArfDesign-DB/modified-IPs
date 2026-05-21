#include <iostream>

#include "Vwb_interconnect.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "../tick.h"
#include "../wb_txn.h"
#include "../wb_coverage.h"

// ============================================================
// TEST : SPIHOST READ (COVERAGE OPTIMIZED)
// ============================================================

void test_spihost_read(Vwb_interconnect* dut,
                       VerilatedVcdC* trace)
{
    std::cout << "\n========================\n";
    std::cout << "TEST : SPIHOST READ\n";
    std::cout << "========================\n";

    // Cycle 1: request
    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = 0;
    dut->wb_adr_i = 0x40000500;
    dut->wb_dat_i = 0x0;
    dut->wb_sel_i = 0xF;

    dut->spihost_rvalid_i = 0;
    dut->spihost_rdata_i  = 0;

    tick(dut, trace);

    std::cout << "SPIHOST req: " << (int)dut->spihost_req_o << "\n";

    // Cycle 2: valid read response
    dut->spihost_rvalid_i = 1;
    dut->spihost_rdata_i  = 0xABCDEF01;

    tick(dut, trace);

    wb_txn txn{};
    txn.addr     = 0x40000500;
    txn.wdata    = 0;
    txn.rdata    = dut->wb_dat_o;
    txn.we       = 0;
    txn.sel      = 0xF;
    txn.ack      = dut->wb_ack_o;
    txn.is_error = 0;
    txn.slave    = wb_slave_t::SPIHOST;

    coverage.sample(txn);

    // Cycle 3: invalidate response
    dut->spihost_rvalid_i = 0;
    dut->spihost_rdata_i  = 0;

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;

    tick(dut, trace);
}
