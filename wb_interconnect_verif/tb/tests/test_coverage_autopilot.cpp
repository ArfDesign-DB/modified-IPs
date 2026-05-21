#include <iostream>

#include "Vwb_interconnect.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "../tick.h"
#include "../wb_txn.h"
#include "../wb_coverage.h"

// ============================================================
// AUTOPILOT TEST IMPLEMENTATION
// ============================================================

static uint32_t rand32()
{
    return ((uint32_t)rand() << 16) ^ rand();
}

void test_coverage_autopilot(Vwb_interconnect* dut,
                             VerilatedVcdC* trace)
{
    std::cout << "\n============================\n";
    std::cout << "TEST : COVERAGE AUTOPILOT\n";
    std::cout << "============================\n";

    srand(1); // deterministic for regression stability

    // RESET
    dut->rst_ni = 0;
    for (int i = 0; i < 5; i++) tick(dut, trace);

    dut->rst_ni = 1;
    for (int i = 0; i < 5; i++) tick(dut, trace);

    // RANDOM STIMULUS
    for (int i = 0; i < 60; i++) {

        dut->wb_cyc_i = rand() % 2;
        dut->wb_stb_i = rand() % 2;
        dut->wb_we_i  = rand() % 2;
        dut->wb_adr_i = rand32();
        dut->wb_dat_i = rand32();
        dut->wb_sel_i = rand() & 0xF;

        tick(dut, trace);

        wb_txn txn;
        txn.addr = dut->wb_adr_i;
        txn.wdata = dut->wb_dat_i;
        txn.rdata = dut->wb_dat_o;
        txn.we = dut->wb_we_i;
        txn.sel = dut->wb_sel_i;
        txn.ack = dut->wb_ack_o;
        txn.is_error = 0;

        coverage.sample(txn);
    }

    std::cout << "\n[AUTOPILOT DONE]\n";
}
