// ================================================================
// TIMER VERILATOR TESTBENCH
// ================================================================

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_cov.h>

#include "Vtimer.h"

#include <iostream>
#include <iomanip>
#include <cstdint>

vluint64_t sim_time = 0;

static const uint32_t MTIME_LOW     = 0x0;
static const uint32_t MTIME_HIGH    = 0x4;
static const uint32_t MTIMECMP_LOW  = 0x8;
static const uint32_t MTIMECMP_HIGH = 0xC;

// ================================================================
// Clock helper
// ================================================================

void tick(Vtimer *dut, VerilatedVcdC *m_trace)
{
    dut->clk_i = 0;
    dut->eval();
    m_trace->dump(sim_time++);

    dut->clk_i = 1;
    dut->eval();
    m_trace->dump(sim_time++);
}

// ================================================================
// Timer write helper
// ================================================================

void timer_write(
    Vtimer *dut,
    VerilatedVcdC *m_trace,
    uint32_t addr,
    uint32_t data
)
{
    dut->timer_req_i   = 1;
    dut->timer_we_i    = 1;
    dut->timer_addr_i  = addr;
    dut->timer_wdata_i = data;
    dut->timer_be_i    = 0xF;

    tick(dut, m_trace);

    dut->timer_req_i = 0;
    dut->timer_we_i  = 0;

    tick(dut, m_trace);

    std::cout << "[WRITE] Addr: 0x"
              << std::hex << addr
              << " Data: 0x"
              << data
              << std::dec << std::endl;
}

// ================================================================
// Timer read helper
// ================================================================

uint32_t timer_read(
    Vtimer *dut,
    VerilatedVcdC *m_trace,
    uint32_t addr
)
{
    dut->timer_req_i  = 1;
    dut->timer_we_i   = 0;
    dut->timer_addr_i = addr;
    dut->timer_be_i   = 0xF;

    tick(dut, m_trace);

    dut->timer_req_i = 0;

    tick(dut, m_trace);

    uint32_t data = dut->timer_rdata_o;

    std::cout << "[READ ] Addr: 0x"
              << std::hex << addr
              << " Data: 0x"
              << data
              << std::dec << std::endl;

    return data;
}

// ================================================================
// MTIME reset test
// ================================================================

void test_mtime_reset_value(Vtimer *dut, VerilatedVcdC *m_trace)
{
    std::cout << "\n========== MTIME RESET VALUE TEST ==========\n";

    uint32_t low  = timer_read(dut, m_trace, MTIME_LOW);
    uint32_t high = timer_read(dut, m_trace, MTIME_HIGH);

    if (low == 0 && high == 0)
        std::cout << "[PASS] MTIME reset is 0\n";
    else
        std::cout << "[FAIL] MTIME reset mismatch\n";
}

// ================================================================
// MAIN
// ================================================================

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);

    Vtimer *dut = new Vtimer;

    Verilated::traceEverOn(true);

    // ============================================================
    // COVERAGE ENABLE
    // ============================================================
    VerilatedCov::enable(true);

    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("timer_waveform.vcd");

    // Init signals
    dut->clk_i = 0;
    dut->rst_ni = 0;

    dut->timer_req_i = 0;
    dut->timer_we_i = 0;
    dut->timer_addr_i = 0;
    dut->timer_be_i = 0;
    dut->timer_wdata_i = 0;

    // Reset
    std::cout << "\n================ RESET ================\n";

    for (int i = 0; i < 5; i++)
        tick(dut, m_trace);

    dut->rst_ni = 1;

    for (int i = 0; i < 5; i++)
        tick(dut, m_trace);

    // MTIME reset test
    test_mtime_reset_value(dut, m_trace);

    // MTIME increment
    std::cout << "\n========== MTIME INCREMENT TEST ==========\n";

    uint32_t m1 = timer_read(dut, m_trace, MTIME_LOW);

    for (int i = 0; i < 10; i++)
        tick(dut, m_trace);

    uint32_t m2 = timer_read(dut, m_trace, MTIME_LOW);

    if (m2 > m1)
        std::cout << "[PASS] MTIME incrementing\n";
    else
        std::cout << "[FAIL] MTIME not incrementing\n";

    // MTIMECMP write
    std::cout << "\n========== MTIMECMP WRITE TEST ==========\n";

    timer_write(dut, m_trace, MTIMECMP_LOW, 50);
    timer_write(dut, m_trace, MTIMECMP_HIGH, 0);

    // Interrupt test
    std::cout << "\n========== INTERRUPT TEST ==========\n";

    bool irq = false;

    for (int i = 0; i < 100; i++) {
        tick(dut, m_trace);
        if (dut->timer_intr_o) {
            std::cout << "[PASS] Interrupt at cycle " << sim_time << std::endl;
            irq = true;
            break;
        }
    }

    if (!irq)
        std::cout << "[FAIL] Interrupt not seen\n";

    // Invalid access
    std::cout << "\n========== INVALID ADDRESS TEST ==========\n";

    dut->timer_req_i  = 1;
    dut->timer_we_i   = 0;
    dut->timer_addr_i = 0x100;

    tick(dut, m_trace);

    dut->timer_req_i = 0;
    tick(dut, m_trace);

    if (dut->timer_err_o)
        std::cout << "[PASS] Invalid address detected\n";
    else
        std::cout << "[FAIL] No error detected\n";

    // ============================================================
    // COVERAGE DUMP (FIXED)
    // ============================================================

    std::cout << "\n========== SIMULATION FINISHED ==========\n";

    // IMPORTANT: flush simulation before writing coverage
    Verilated::runFlushCallbacks();

    // Write coverage database
    VerilatedCov::write("coverage.dat");

    std::cout << "[INFO] coverage.dat generated\n";

    m_trace->close();

    delete dut;
    delete m_trace;

    return 0;
}
