#include <iostream>

#include "verilated.h"
#include "verilated_vcd_c.h"

#include "Vwb_interconnect.h"

#include "../tick.h"

//vluint64_t sim_time = 0;

// ============================================================
// TESTCASE DECLARATION
// ============================================================

void test_decode_error(Vwb_interconnect* dut,
                       VerilatedVcdC* trace);

// ============================================================
// RESET TASK
// ============================================================

static void apply_reset(Vwb_interconnect* dut,
                        VerilatedVcdC* trace)
{
    dut->rst_ni = 0;

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    dut->wb_we_i  = 0;

    dut->wb_adr_i = 0;
    dut->wb_dat_i = 0;
    dut->wb_sel_i = 0;

    tick(dut, trace);
    tick(dut, trace);
    tick(dut, trace);

    dut->rst_ni = 1;

    tick(dut, trace);
}

// ============================================================
// MAIN
// ============================================================

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);

    // ========================================================
    // DUT
    // ========================================================

    Vwb_interconnect* dut = new Vwb_interconnect;

    // ========================================================
    // TRACE
    // ========================================================

    Verilated::traceEverOn(true);

    VerilatedVcdC* trace = new VerilatedVcdC;

    dut->trace(trace, 5);

    trace->open("waveform.vcd");

    // ========================================================
    // RESET
    // ========================================================

    apply_reset(dut, trace);

    std::cout << "\n=========================================\n";
    std::cout << "DECODE ERROR TEST EXECUTION STARTED\n";
    std::cout << "=========================================\n";

    // ========================================================
    // RUN TEST
    // ========================================================

    test_decode_error(dut, trace);

    // ========================================================
    // FINISH
    // ========================================================

    std::cout << "\n=========================================\n";
    std::cout << "SIMULATION FINISHED\n";
    std::cout << "=========================================\n";

    trace->close();

    dut->final();

    delete trace;
    delete dut;

    return 0;
}
