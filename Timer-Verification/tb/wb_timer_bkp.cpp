#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_cov.h>
#include "Vwb_timer_wrapper.h"

#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cstdlib>

vluint64_t sim_time = 0;

// -------------------------------------------------
static void tick(Vwb_timer_wrapper *dut,
                 VerilatedVcdC *trace) {

    dut->clk_i = 0;
    dut->eval();
    if (trace) trace->dump(sim_time);
    sim_time++;

    dut->clk_i = 1;
    dut->eval();
    if (trace) trace->dump(sim_time);
    sim_time++;
}

// -------------------------------------------------
void wb_write(Vwb_timer_wrapper *dut,
              VerilatedVcdC *trace,
              uint32_t addr,
              uint32_t data,
              uint8_t sel = 0xF) {

    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = 1;

    dut->wb_adr_i = addr;
    dut->wb_dat_i = data;
    dut->wb_sel_i = sel;

    do { tick(dut, trace); }
    while (!dut->wb_ack_o);

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    dut->wb_we_i  = 0;
}

// -------------------------------------------------
uint32_t wb_read(Vwb_timer_wrapper *dut,
                 VerilatedVcdC *trace,
                 uint32_t addr) {

    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = 0;

    dut->wb_adr_i = addr;
    dut->wb_sel_i = 0xF;

    do { tick(dut, trace); }
    while (!dut->wb_ack_o);

    uint32_t data = dut->wb_dat_o;

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;

    return data;
}

// ================= ORIGINAL TESTS =================

void basic_timer_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== BASIC TIMER TEST ===\n";

    uint32_t start = wb_read(dut, trace, 0x0);

    for (int i = 0; i < 20; i++) tick(dut, trace);

    uint32_t now = wb_read(dut, trace, 0x0);

    if (now > start)
        std::cout << "[PASS] Timer increments\n";

    uint32_t cmp = now + 10;

    wb_write(dut, trace, 0xC, 0x0);
    wb_write(dut, trace, 0x8, cmp);

    bool intr = false;

    for (int i = 0; i < 50; i++) {
        tick(dut, trace);
        if (dut->timer_irq_o) {
            intr = true;
            std::cout << "Interrupt at time " << sim_time << "\n";
            break;
        }
    }

    if (intr) std::cout << "[PASS] Interrupt\n";
    else      std::cout << "[FAIL] No interrupt\n";
}

// -------------------------------------------------
void preload_mtime_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== PRELOAD TEST ===\n";

    wb_write(dut, trace, 0x4, 0x0);
    wb_write(dut, trace, 0x0, 0x100);

    uint32_t now = wb_read(dut, trace, 0x0);

    uint32_t cmp = now + 20;

    wb_write(dut, trace, 0xC, 0x0);
    wb_write(dut, trace, 0x8, cmp);

    for (int i = 0; i < 100; i++) {
        tick(dut, trace);
        if (dut->timer_irq_o) {
            std::cout << "Interrupt at " << sim_time << "\n";
            break;
        }
    }

    for (int i = 0; i < 20; i++)
        tick(dut, trace);
}

// -------------------------------------------------
void back_to_back_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== BACK TO BACK TEST ===\n";

    wb_write(dut, trace, 0xC, 0x0);

    wb_write(dut, trace, 0x8, 10);
    wb_write(dut, trace, 0x8, 20);
    wb_write(dut, trace, 0x8, 30);

    for (int i = 0; i < 40; i++) {
        tick(dut, trace);

        uint32_t m = wb_read(dut, trace, 0x0);
        std::cout << "mtime=" << std::hex << m << "\n";

        if (dut->timer_irq_o) {
            std::cout << "Interrupt observed\n";
            break;
        }
    }
}

// -------------------------------------------------
void overflow_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== OVERFLOW TEST ===\n";

    wb_write(dut, trace, 0x4, 0xFFFFFFFF);
    wb_write(dut, trace, 0x0, 0xFFFFFFF0);

    for (int i = 0; i < 20; i++) {
        tick(dut, trace);
        uint32_t m = wb_read(dut, trace, 0x0);
        std::cout << "mtime_low=" << std::hex << m << "\n";
    }
}

// -------------------------------------------------
void invalid_access_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== INVALID ACCESS TEST ===\n";

    for (int i = 0; i < 5; i++) {
        uint32_t addr = 0x100 + i * 4;
        wb_write(dut, trace, addr, 0xDEADBEEF);

        std::cout << "Invalid write addr=0x"
                  << std::hex << addr << "\n";
    }
}

// ================= PREVIOUSLY ADDED =================

void byte_enable_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== BYTE ENABLE TEST ===\n";

    for (int sel = 1; sel < 16; sel++) {
        wb_write(dut, trace, 0x8, 0xA5A5A5A5, sel);
        uint32_t val = wb_read(dut, trace, 0x8);

        std::cout << "SEL=" << std::hex << sel
                  << " -> val=0x" << val << "\n";
    }
}

// -------------------------------------------------
void invalid_read_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== INVALID READ TEST ===\n";

    for (int i = 0; i < 5; i++) {
        uint32_t addr = 0x200 + i * 4;
        uint32_t val = wb_read(dut, trace, addr);

        std::cout << "Invalid read addr=0x"
                  << std::hex << addr
                  << " data=0x" << val << "\n";
    }
}

// -------------------------------------------------
void stress_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== STRESS TEST ===\n";

    for (int i = 0; i < 200; i++) {
        wb_write(dut, trace, 0x8, rand());
        uint32_t val = wb_read(dut, trace, 0x0);

        if (i % 20 == 0)
            std::cout << "Iter " << i
                      << " mtime=" << val << "\n";
    }
}

// ================= NEW COVERAGE TESTS =================

void interrupt_retrigger_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== RETRIGGER TEST ===\n";

    uint32_t now = wb_read(dut, trace, 0x0);

    wb_write(dut, trace, 0x8, now + 10);

    while (!dut->timer_irq_o)
        tick(dut, trace);

    std::cout << "First interrupt\n";

    wb_write(dut, trace, 0x8, now + 30);

    for (int i = 0; i < 50; i++) {
        tick(dut, trace);
        if (dut->timer_irq_o) {
            std::cout << "[PASS] Retrigger\n";
            break;
        }
    }
}

// -------------------------------------------------
void exact_match_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== EXACT MATCH TEST ===\n";

    uint32_t now = wb_read(dut, trace, 0x0);

    wb_write(dut, trace, 0x8, now);

    tick(dut, trace);

    if (dut->timer_irq_o)
        std::cout << "[PASS] Exact match interrupt\n";
}

// -------------------------------------------------
void mid_reset_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== MID RESET TEST ===\n";

    for (int i = 0; i < 10; i++)
        tick(dut, trace);

    dut->rst_ni = 0;
    tick(dut, trace);
    dut->rst_ni = 1;

    uint32_t val = wb_read(dut, trace, 0x0);

    std::cout << "mtime after reset=" << val << "\n";
}

// -------------------------------------------------
void cmp_order_test(Vwb_timer_wrapper *dut, VerilatedVcdC *trace) {
    std::cout << "\n=== CMP ORDER TEST ===\n";

    uint32_t now = wb_read(dut, trace, 0x0);

    wb_write(dut, trace, 0x8, now + 50);
    wb_write(dut, trace, 0xC, 0x0);

    for (int i = 0; i < 60; i++) {
        tick(dut, trace);
        if (dut->timer_irq_o) {
            std::cout << "Interrupt observed\n";
            break;
        }
    }
}

// ================= MAIN =================

int main(int argc, char **argv) {

    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vwb_timer_wrapper *dut = new Vwb_timer_wrapper;
    VerilatedVcdC *trace = new VerilatedVcdC;

    dut->trace(trace, 5);
    trace->open("wb_timer.vcd");

    dut->clk_i = 0;
    dut->rst_ni = 0;

    for (int i = 0; i < 5; i++)
        tick(dut, trace);

    dut->rst_ni = 1;

    std::cout << "Reset done\n";

    // ORIGINAL
    basic_timer_test(dut, trace);
    preload_mtime_test(dut, trace);
    back_to_back_test(dut, trace);
    overflow_test(dut, trace);
    invalid_access_test(dut, trace);

    // PREVIOUS
    byte_enable_test(dut, trace);
    invalid_read_test(dut, trace);
    stress_test(dut, trace);

    // NEW
    interrupt_retrigger_test(dut, trace);
    exact_match_test(dut, trace);
    mid_reset_test(dut, trace);
    cmp_order_test(dut, trace);

    std::cout << "\nSimulation done\n";

    VerilatedCov::write("coverage.dat");

    trace->close();
    delete dut;
    delete trace;

    return 0;
}
