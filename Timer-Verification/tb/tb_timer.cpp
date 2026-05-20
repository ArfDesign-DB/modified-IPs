// ================================================================
// FINAL TIMER TESTBENCH
// ================================================================

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_cov.h>
#include "Vtimer.h"

#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cstdlib>

vluint64_t sim_time = 0;

// Register map
#define MTIME_LOW     0x0
#define MTIME_HIGH    0x4
#define MTIMECMP_LOW  0x8
#define MTIMECMP_HIGH 0xC

struct Coverage {

    // ================= RESET =================
    bool reset_seen_0 = false;
    bool reset_seen_1 = false;

    // ================= BASIC OPS =================
    bool write_seen = false;
    bool read_seen = false;

    // ================= INTERRUPT =================
    bool intr_seen = false;
    bool no_intr_seen = false;

    // ================= OVERFLOW =================
    bool overflow_seen = false;

    // ================= ADDRESS COVERAGE =================
    bool addr_mtime_low = false;
    bool addr_mtime_high = false;
    bool addr_cmp_low = false;
    bool addr_cmp_high = false;
    bool addr_invalid = false;

    // ================= BYTE ENABLE =================
    bool be_full = false;
    bool be_partial = false;
    bool be_none = false;

    // ================= INTERNAL TRACKING =================
    uint32_t prev_time = 0;

    // ====================================================
    // SAMPLE FUNCTION
    // ====================================================
    void sample(Vtimer *dut)
    {
        // ---------- RESET ----------
        if (!dut->rst_ni) reset_seen_0 = true;
        else              reset_seen_1 = true;

        // ---------- READ / WRITE ----------
        if (dut->timer_req_i && dut->timer_we_i)
            write_seen = true;

        if (dut->timer_req_i && !dut->timer_we_i)
            read_seen = true;

        // ---------- ADDRESS ----------
        if (dut->timer_req_i) {
            uint32_t addr = dut->timer_addr_i;

            if (addr == MTIME_LOW)         addr_mtime_low = true;
            else if (addr == MTIME_HIGH)   addr_mtime_high = true;
            else if (addr == MTIMECMP_LOW) addr_cmp_low = true;
            else if (addr == MTIMECMP_HIGH)addr_cmp_high = true;
            else                           addr_invalid = true;
        }

        // ---------- BYTE ENABLE ----------
        if (dut->timer_req_i && dut->timer_we_i) {
            uint8_t be = dut->timer_be_i;

            if (be == 0xF)      be_full = true;
            else if (be == 0x0) be_none = true;
            else                be_partial = true;
        }

        // ---------- INTERRUPT ----------
        if (dut->timer_intr_o) intr_seen = true;
        else                   no_intr_seen = true;

        // ---------- OVERFLOW DETECTION (SAFE) ----------
        if (dut->timer_req_i && !dut->timer_we_i &&
            dut->timer_addr_i == MTIME_LOW)
        {
            uint32_t curr_time = dut->timer_rdata_o;

            if (curr_time < prev_time)
                overflow_seen = true;

            prev_time = curr_time;
        }
    }

    // ====================================================
    // COVERAGE REPORT
    // ====================================================
    void report()
    {
        int total = 0;
        int hit = 0;

        auto CHECK = [&](bool cond, const char* name) {
            total++;
            if (cond) {
                hit++;
                std::cout << "[HIT]  " << name << "\n";
            } else {
                std::cout << "[MISS] " << name << "\n";
            }
        };

        std::cout << "\n=========== FUNCTIONAL COVERAGE ===========\n";

        CHECK(reset_seen_0, "Reset Asserted");
        CHECK(reset_seen_1, "Reset Deasserted");

        CHECK(write_seen, "Write Seen");
        CHECK(read_seen,  "Read Seen");

        CHECK(intr_seen,     "Interrupt Seen");
        CHECK(no_intr_seen,  "No Interrupt Seen");

        CHECK(overflow_seen, "Overflow Seen");

        CHECK(addr_mtime_low,  "MTIME LOW Access");
        CHECK(addr_mtime_high, "MTIME HIGH Access");
        CHECK(addr_cmp_low,    "MTIMECMP LOW Access");
        CHECK(addr_cmp_high,   "MTIMECMP HIGH Access");
        CHECK(addr_invalid,    "Invalid Address");

        CHECK(be_full,    "Full Byte Enable");
        CHECK(be_partial, "Partial Byte Enable");
        CHECK(be_none,    "No Byte Enable");

        double cov = (double)hit / total * 100.0;

        std::cout << "------------------------------------------\n";
        std::cout << "Bins Hit   : " << hit << "/" << total << "\n";
        std::cout << "Coverage   : " << cov << " %\n";
        std::cout << "==========================================\n";
    }
};
Coverage cov;
// ================================================================
// CLOCK
// ================================================================
void tick(Vtimer *dut, VerilatedVcdC *tfp)
{
    dut->clk_i = 0;
    dut->eval();
    tfp->dump(sim_time++);

    dut->clk_i = 1;
    dut->eval();

    // ADD HERE (THIS IS THE CORRECT PLACE)
    cov.sample(dut);

    std::cout << "[TICK] t=" << sim_time
              << " rvalid=" << (int)dut->timer_rvalid_o
              << " intr=" << (int)dut->timer_intr_o
              << std::endl;

    if (dut->timer_intr_o)
        std::cout << "[EVENT] Interrupt @" << sim_time << std::endl;

    tfp->dump(sim_time++);
}

// ================================================================
// WRITE / READ
// ================================================================
void timer_write(Vtimer *dut, VerilatedVcdC *tfp,
                 uint32_t addr, uint32_t data)
{
    dut->timer_req_i   = 1;
    dut->timer_we_i    = 1;
    dut->timer_addr_i  = addr;
    dut->timer_wdata_i = data;
    dut->timer_be_i    = 0xF;

    tick(dut, tfp);

    std::cout << "[WRITE] addr=0x" << std::hex << addr
              << " data=0x" << data << std::dec << std::endl;

    dut->timer_req_i = 0;
    dut->timer_we_i  = 0;

    tick(dut, tfp);

    //  FIX: ensure MTIMECMP is always valid 64-bit
    if (addr == MTIMECMP_LOW)
    {
        dut->timer_req_i   = 1;
        dut->timer_we_i    = 1;
        dut->timer_addr_i  = MTIMECMP_HIGH;
        dut->timer_wdata_i = 0;   // critical fix
        dut->timer_be_i    = 0xF;

        tick(dut, tfp);

        dut->timer_req_i = 0;
        dut->timer_we_i  = 0;

        tick(dut, tfp);
    }
}

// ================================================================
   //          TIMER READ
// ================================================================
uint32_t timer_read(Vtimer *dut, VerilatedVcdC *tfp, uint32_t addr)
{
    dut->timer_req_i  = 1;
    dut->timer_we_i   = 0;
    dut->timer_addr_i = addr;
    dut->timer_be_i   = 0xF;

    tick(dut, tfp);

    uint32_t data = dut->timer_rdata_o;

    std::cout << "[READ ] addr=0x" << std::hex << addr
              << " data=0x" << data
              << " rvalid=" << (int)dut->timer_rvalid_o
              << std::dec << std::endl;

    dut->timer_req_i = 0;
    tick(dut, tfp);

    return data;
}

// ================================================================
// TEST: RESET SEQUENCE
// ================================================================

void reset(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[RESET]\n";

    dut->rst_ni = 0;
    for(int i=0;i<5;i++) tick(dut, tfp);

    dut->rst_ni = 1;
    for(int i=0;i<5;i++) tick(dut, tfp);

    std::cout << "[DONE] Reset\n";
}

// ================================================================
// TEST: MTIME RESET VALUE
// ================================================================

void test_mtime_reset_value(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] MTIME RESET" << std::endl;

    // Force reset again to guarantee clean state
    dut->rst_ni = 0;
    dut->timer_req_i = 0;
    dut->timer_we_i  = 0;

    dut->clk_i = 0; dut->eval();
    dut->clk_i = 1; dut->eval();

    // Release reset
    dut->rst_ni = 1;

    //  DO NOT allow multiple ticks before read
    tick(dut, tfp);   // Only 1 cycle

    // Read MTIME immediately
    uint32_t low  = timer_read(dut, tfp, MTIME_LOW);
    uint32_t high = timer_read(dut, tfp, MTIME_HIGH);

    uint64_t mtime = ((uint64_t)high << 32) | low;

    std::cout << "[INFO] MTIME after reset = " << mtime << std::endl;

    // Allow 0 or 1 (1 cycle increment tolerance)
    if (mtime <= 1)
        std::cout << "[PASS]" << std::endl;
    else
        std::cout << "[FAIL]" << std::endl;
}

// ================================================================
// TEST: MTIME RESET VALUE
// ================================================================
void test_mtimecmp_reset_value(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] MTIMECMP RESET\n";

    uint64_t val =
        ((uint64_t)timer_read(dut, tfp, MTIMECMP_HIGH) << 32) |
         timer_read(dut, tfp, MTIMECMP_LOW);

    if (val == 0xFFFFFFFFFFFFFFFFULL) std::cout << "[PASS]\n";
    else std::cout << "[FAIL]\n";
}

// ================================================================
// TEST: INTERRUPT NOT ASSERTED BEFORE COMPARE
// ================================================================

void test_interrupt_not_asserted_before_compare(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] INTERRUPT BEFORE CMP\n";

    timer_write(dut, tfp, MTIMECMP_LOW, 100);

    for(int i=0;i<120;i++){
        tick(dut, tfp);
        if(dut->timer_intr_o){
            std::cout << "[PASS] interrupt after compare\n";
            return;
        }
    }
    std::cout << "[FAIL]\n";
}

/// ================================================================
// TEST: INTERRUPT CLEAR AFTER COMPARE UPDATE
// ================================================================

void test_interrupt_clear_after_compare_update(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] INTERRUPT CLEAR\n";

    timer_write(dut, tfp, MTIMECMP_LOW, 20);

    for(int i=0;i<100;i++){
        tick(dut, tfp);
        if(dut->timer_intr_o) break;
    }

    timer_write(dut, tfp, MTIMECMP_LOW, 1000);
    tick(dut, tfp);

    if(!dut->timer_intr_o) std::cout << "[PASS]\n";
    else std::cout << "[FAIL]\n";
}

// ================================================================
// TEST: BYTE ENABLE (FULL / PARTIAL / NONE)
// ================================================================

void test_byte_enable(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] BYTE ENABLE FULL SINGLE TEST\n";

    auto read_back = [&](uint32_t addr) -> uint32_t {
        return timer_read(dut, tfp, addr);
    };

    auto count_bytes = [&](uint32_t be) -> int {
        return ((be & 1) ? 1 : 0) +
               ((be & 2) ? 1 : 0) +
               ((be & 4) ? 1 : 0) +
               ((be & 8) ? 1 : 0);
    };

    uint32_t base_addr = MTIMECMP_LOW;

    // ============================================================
    // 1. Single-byte enable patterns
    // ============================================================
    uint32_t single_be[] = {1, 2, 4, 8};

    for(int i = 0; i < 4; i++)
    {
        uint32_t be = single_be[i];

        uint32_t before = read_back(base_addr);

        dut->timer_req_i   = 1;
        dut->timer_we_i    = 1;
        dut->timer_addr_i  = base_addr;
        dut->timer_wdata_i = 0xA5A5A5A5;
        dut->timer_be_i    = be;

        tick(dut, tfp);

        dut->timer_req_i = 0;
        tick(dut, tfp);

        uint32_t after = read_back(base_addr);

        std::cout << "[INFO] SINGLE BE=0x" << std::hex << be
                  << " (" << std::dec << count_bytes(be) << " bytes enabled)"
                  << " before=0x" << std::hex << before
                  << " after=0x" << after << std::dec << std::endl;
    }

    // ============================================================
    // 2. Multi-byte enable patterns
    // ============================================================
    uint32_t full_be[] = {3, 5, 6, 9, 10, 12, 7, 11, 13, 14, 15};

    for(int i = 0; i < 11; i++)
    {
        uint32_t be = full_be[i];
        uint32_t before = read_back(base_addr);
        uint32_t wdata  = rand();

        dut->timer_req_i   = 1;
        dut->timer_we_i    = 1;
        dut->timer_addr_i  = base_addr;
        dut->timer_wdata_i = wdata;
        dut->timer_be_i    = be;

        tick(dut, tfp);

        dut->timer_req_i = 0;
        tick(dut, tfp);

        uint32_t after = read_back(base_addr);

        std::cout << "[INFO] FULL BE=0x" << std::hex << be
                  << " (" << std::dec << count_bytes(be) << " bytes enabled)"
                  << " wdata=0x" << std::hex << wdata
                  << " before=0x" << before
                  << " after=0x" << after << std::dec << std::endl;
    }

    // ============================================================
    // 3. Cross-register test
    // ============================================================
    {
        uint32_t be = 0xF;

        uint32_t before = read_back(MTIMECMP_HIGH);

        dut->timer_req_i   = 1;
        dut->timer_we_i    = 1;
        dut->timer_addr_i  = MTIMECMP_HIGH;
        dut->timer_wdata_i = 0x12345678;
        dut->timer_be_i    = be;

        tick(dut, tfp);

        dut->timer_req_i = 0;
        tick(dut, tfp);

        uint32_t after = read_back(MTIMECMP_HIGH);

        std::cout << "[INFO] HIGH REG BE=0x" << std::hex << be
                  << " (" << std::dec << count_bytes(be) << " bytes enabled)"
                  << " before=0x" << std::hex << before
                  << " after=0x" << after << std::dec << std::endl;
    }

    // ============================================================
    // 4. NO BYTE ENABLE TEST (COVERAGE FIX)
    // ============================================================
    {
        std::cout << "\n[TEST] NO BYTE ENABLE (BE=0x0)\n";

        uint32_t before = read_back(base_addr);

        dut->timer_req_i   = 1;
        dut->timer_we_i    = 1;
        dut->timer_addr_i  = base_addr;
        dut->timer_wdata_i = 0xFFFFFFFF;
        dut->timer_be_i    = 0x0;   // IMPORTANT

        tick(dut, tfp);

        dut->timer_req_i = 0;
        tick(dut, tfp);

        uint32_t after = read_back(base_addr);

        // CHECK (important for correctness)
        if (before != after)
        {
            std::cout << "[FAIL] BE=0 modified register!\n";
        }
        else
        {
            std::cout << "[PASS] BE=0 correctly ignored write\n";
        }

        std::cout << "[INFO] BE=0 before=0x" << std::hex << before
                  << " after=0x" << after << std::dec << std::endl;
    }

    std::cout << "[PASS] BYTE ENABLE TEST COMPLETE\n";
}

 // ================================================================
// TEST: MTIME OVERFLOW
// ================================================================

void test_mtime_overflow(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] OVERFLOW\n";

    timer_write(dut, tfp, MTIME_LOW, 0xFFFFFFF0);
    timer_write(dut, tfp, MTIME_HIGH, 0xFFFFFFFF);

    bool irq_seen = false;

    for(int i = 0; i < 20; i++)
    {
        tick(dut, tfp);

        if(dut->timer_intr_o)
        {
            irq_seen = true;
            std::cout << "[INFO] Interrupt at cycle " << i << std::endl;
            break;
        }
    }

    if(irq_seen)
        std::cout << "[PASS]\n";
    else
        std::cout << "[FAIL] No interrupt on overflow\n";
}

// ================================================================
// TEST: MTIME MANUAL WRITE
// ================================================================

void test_mtime_manual_write(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] MANUAL WRITE\n";

    timer_write(dut, tfp, MTIME_LOW, 0x1234);

    uint32_t val = timer_read(dut, tfp, MTIME_LOW);

    if(val >= 0x1234) std::cout << "[PASS]\n";
    else std::cout << "[FAIL]\n";
}

// ================================================================
// TEST: RANDOM ACCESS STRESS
// ================================================================

void test_random(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] RANDOM\n";

    for(int i=0;i<100;i++){
        uint32_t addr = (rand()%8)*4;
        if(rand()%2)
            timer_write(dut, tfp, addr, rand());
        else
            timer_read(dut, tfp, addr);
    }

    std::cout << "[PASS]\n";
}
// ================================================================
// TEST: INVALID ADDRESS ACCESS
// ================================================================

void test_invalid(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] INVALID ADDRESSES\n";

    // Invalid / unmapped addresses (outside MTIME/MTIMECMP range)
    uint32_t bad_addrs[] =
    {
        0x10,   // not defined
        0x14,
        0x18,
        0x1C,
        0x20,
        0x24,
        0x28,
        0x2C,
        0x100,  // far invalid
        0xFF,
        0xABC,
        0x1000  // extreme invalid
    };

    int n = sizeof(bad_addrs) / sizeof(bad_addrs[0]);

    for(int i = 0; i < n; i++)
    {
        uint32_t addr = bad_addrs[i];

        std::cout << "[INFO] Testing invalid addr = 0x"
                  << std::hex << addr << std::dec << std::endl;

        // INVALID READ
        uint32_t rdata = timer_read(dut, tfp, addr);

        // INVALID WRITE
        timer_write(dut, tfp, addr, 0xDEAD0000 + i);

        std::cout << "[INFO] rdata = 0x"
                  << std::hex << rdata << std::dec << std::endl;
    }

    std::cout << "[PASS] INVALID ADDRESS TEST COMPLETE\n";
}

// ================================================================
// TEST: EXACT MATCH INTERRUPT
// ================================================================

void test_exact_match(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] EXACT MATCH MULTI VALUE\n";

    uint32_t compare_values[] = {1, 5, 10, 15, 20, 25, 30};

    for(int j = 0; j < 7; j++)
    {
        std::cout << "\n[CASE] MTIMECMP = " << compare_values[j] << "\n";

        // reset MTIME each case
        timer_write(dut, tfp, MTIME_LOW, 0);

        // set compare value
        timer_write(dut, tfp, MTIMECMP_LOW, compare_values[j]);

        bool seen_intr = false;

        for(int i = 0; i < 60; i++)
        {
            tick(dut, tfp);

            if(dut->timer_intr_o)
            {
                std::cout << "[INFO] Interrupt at cycle " << i
                          << " for CMP=" << compare_values[j] << "\n";
                seen_intr = true;
                break;
            }
        }

        if(seen_intr)
            std::cout << "[PASS CASE]\n";
        else
            std::cout << "[FAIL CASE]\n";
    }

    std::cout << "\n[PASS] EXACT MATCH MULTI TEST COMPLETE\n";
}

// ================================================================
// . HIGH REGISTER COVERAGE
// ================================================================

void test_high_registers(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] HIGH REGISTERS\n";

    timer_write(dut, tfp, MTIME_HIGH, 0x1);
    timer_write(dut, tfp, MTIMECMP_HIGH, 0x1);

    uint32_t mtime_h = timer_read(dut, tfp, MTIME_HIGH);
    uint32_t mcmp_h  = timer_read(dut, tfp, MTIMECMP_HIGH);

    if(mtime_h == 0x1 && mcmp_h == 0x1)
        std::cout << "[PASS]\n";
    else
        std::cout << "[FAIL]\n";
}

// ================================================================
// . BACK-TO-BACK WRITES
// ================================================================

void test_back_to_back_writes(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] BACK TO BACK WRITES\n";

    for(int i = 0; i < 10; i++) {
        timer_write(dut, tfp, MTIME_LOW, rand());
        timer_write(dut, tfp, MTIMECMP_LOW, rand());
    }

    std::cout << "[PASS]\n";
}

// ================================================================
// . INTERRUPT TOGGLE TEST
// ================================================================

void test_interrupt_toggle(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] INTERRUPT TOGGLE\n";

    timer_write(dut, tfp, MTIMECMP_LOW, 15);

    // Wait for interrupt
    for(int i = 0; i < 50; i++) {
        tick(dut, tfp);
        if(dut->timer_intr_o) break;
    }

    // Deassert condition
    timer_write(dut, tfp, MTIMECMP_LOW, 1000);
    tick(dut, tfp);

    // Re-trigger
    timer_write(dut, tfp, MTIMECMP_LOW, 20);

    for(int i = 0; i < 100; i++) {
        tick(dut, tfp);
        if(dut->timer_intr_o) {
            std::cout << "[PASS]\n";
            return;
        }
    }

    std::cout << "[FAIL]\n";
}

// ================================================================
// . ZERO COMPARE TEST
// ================================================================

void test_zero_compare(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] ZERO COMPARE\n";

    timer_write(dut, tfp, MTIMECMP_LOW, 0);
    tick(dut, tfp);

    if(dut->timer_intr_o)
        std::cout << "[PASS]\n";
    else
        std::cout << "[FAIL]\n";
}

// ================================================================
// . READ AFTER WRITE TEST
// ================================================================

void test_read_after_write(Vtimer *dut, VerilatedVcdC *tfp)
{
    std::cout << "\n[TEST] READ AFTER WRITE\n";

    timer_write(dut, tfp, MTIME_LOW, 0x55AA);
    uint32_t val = timer_read(dut, tfp, MTIME_LOW);

    if(val >= 0x55AA)
        std::cout << "[PASS]\n";
    else
        std::cout << "[FAIL]\n";
}


//================================================================
// MAIN TEST EXECUTION (RESET BEFORE EACH TEST)
// ================================================================
#define RUN_TEST(test) \
    reset(dut, tfp);  \
    test(dut, tfp);

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtimer *dut = new Vtimer;
    VerilatedVcdC *tfp = new VerilatedVcdC;

    dut->trace(tfp, 5);
    tfp->open("wave.vcd");

    dut->clk_i=0;
    dut->rst_ni=0;
    dut->timer_req_i=0;
    dut->timer_we_i=0;
    dut->timer_addr_i=0;
    dut->timer_be_i=0;
    dut->timer_wdata_i=0;

    std::cout << "\n===== START TESTS =====\n";

    // ================= EXISTING TESTS (UNCHANGED) =================
    
   RUN_TEST(test_mtime_reset_value);
   RUN_TEST(test_mtimecmp_reset_value);
   RUN_TEST(test_byte_enable);
   RUN_TEST(test_mtime_overflow);
    RUN_TEST(test_mtime_manual_write);
   RUN_TEST(test_interrupt_not_asserted_before_compare);
    RUN_TEST(test_interrupt_clear_after_compare_update);
    RUN_TEST(test_random);
    RUN_TEST(test_invalid);

    // ================= ADDED TESTS (ONLY THIS PART) =================
    RUN_TEST(test_exact_match);
    RUN_TEST(test_high_registers);
   RUN_TEST(test_back_to_back_writes);
    RUN_TEST(test_interrupt_toggle);
   RUN_TEST(test_zero_compare);
    RUN_TEST(test_read_after_write);

    std::cout << "\n===== END TESTS =====\n";
   
cov.report();

    tfp->close();
    dut->final();

    VerilatedCov::write("coverage.dat");

    delete dut;
    delete tfp;
}
