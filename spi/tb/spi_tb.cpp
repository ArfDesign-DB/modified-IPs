// ================================================================
// SPI TOP TESTBENCH WITH FUNCTIONAL COVERAGE
// ================================================================

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_cov.h>
#include "Vspi_top.h"

#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <cstdlib>
#include <cstdint>

vluint64_t sim_time = 0;

// ================================================================
// FUNCTIONAL COVERAGE VARIABLES
// ================================================================

// Unique TX bytes covered
std::set<uint8_t> tx_data_cov;

// Unique RX bytes covered
std::set<uint8_t> rx_data_cov;

// Clock edge count
int sck_rising_edges = 0;

// Transaction counters
int total_transactions = 0;

// FSM Activity Coverage
bool send_state_seen = false;

// Corner case coverage
bool zero_seen  = false;
bool ff_seen    = false;
bool aa_seen    = false;
bool fifty_seen = false;

// FIFO stress coverage
bool fifo_stress_done = false;

// Alternating pattern coverage
bool alternating_test_done = false;

// Walking ones coverage
bool walking_ones_done = false;

// Walking zeros coverage
bool walking_zeros_done = false;

// Empty start coverage
bool empty_start_done = false;

// FIFO overflow coverage
bool fifo_overflow_done = false;

// Zero storm coverage
bool zero_storm_done = false;

// Partial transfer coverage
bool partial_test_done = false;

// Start glitch coverage
bool start_glitch_done = false;

// Mid reset coverage
bool mid_reset_done = false;

bool rapid_start_done = false;

// ================================================================
// SPI MONITOR
// ================================================================
void monitor_spi(Vspi_top* dut)
{
    static int prev_sck = 0;
    static int bit_cnt  = 0;

    static uint8_t byte = 0;

    //------------------------------------------------------------
    // Rising Edge Detection
    //------------------------------------------------------------
    if (prev_sck == 0 && dut->sck_o == 1)
    {
        sck_rising_edges++;

        //--------------------------------------------------------
        // Shift MOSI Data
        //--------------------------------------------------------
        byte = (byte << 1) | (dut->spi_tx_o & 1);

        bit_cnt++;

        //--------------------------------------------------------
        // Full Byte Sent
        //--------------------------------------------------------
        if (bit_cnt == 8)
        {
            std::cout << ">>> [SPI TX BYTE] 0x"
                      << std::hex
                      << std::setw(2)
                      << std::setfill('0')
                      << (int)byte
                      << std::dec
                      << "\n";

            //----------------------------------------------------
            // Functional Coverage Collection
            //----------------------------------------------------
            tx_data_cov.insert(byte);

            if (byte == 0x00) zero_seen  = true;
            if (byte == 0xFF) ff_seen    = true;
            if (byte == 0xAA) aa_seen    = true;
            if (byte == 0x55) fifty_seen = true;

            total_transactions++;

            bit_cnt = 0;
            byte    = 0;
        }
    }

    prev_sck = dut->sck_o;
}

// ================================================================
// CLOCK TICK
// ================================================================
void tick(Vspi_top* dut, VerilatedVcdC* tfp)
{
    //------------------------------------------------------------
    // Falling Edge
    //------------------------------------------------------------
    dut->clk_i = 0;
    dut->eval();

    if (tfp)
        tfp->dump(sim_time++);

    monitor_spi(dut);

    //------------------------------------------------------------
    // Rising Edge
    //------------------------------------------------------------
    dut->clk_i = 1;
    dut->eval();

    if (tfp)
        tfp->dump(sim_time++);

    monitor_spi(dut);

    //------------------------------------------------------------
    // FSM Coverage
    //------------------------------------------------------------
    if (dut->sck_o == 1)
    {
        send_state_seen = true;
    }
}

// ================================================================
// RESET
// ================================================================
void reset_dut(Vspi_top* dut, VerilatedVcdC* tfp)
{
    std::cout << "\n[RESET] START\n";

    dut->rst_ni = 0;
    dut->device_req_i   = 0;
    dut->device_we_i    = 0;
    dut->device_addr_i  = 0;
    dut->device_wdata_i = 0;
    dut->device_be_i    = 0;
    dut->spi_rx_i       = 0;

    dut->rst_ni = 0;

    for (int i = 0; i < 20; i++)
        tick(dut, tfp);

    dut->rst_ni = 1;

    tick(dut, tfp);

    std::cout << "[RESET] DONE\n";
}

// ================================================================
// REGISTER WRITE
// ================================================================
void write_reg(Vspi_top* dut,VerilatedVcdC* tfp,
               uint32_t addr,
               uint32_t data)
{
    if (addr == 0x0)
        std::cout << "[TX BYTE] 0x" << std::hex << (data & 0xFF) << std::dec << "\n";

    if (addr == 0x4)
        std::cout << "[START TRANSFER]\n";

    //------------------------------------------------------------
    // TX DATA COVERAGE
    //------------------------------------------------------------
    tx_data_cov.insert((uint8_t)data);

    dut->device_addr_i  = addr;
    dut->device_wdata_i = data;
    dut->device_be_i    = 0xF;

    //------------------------------------------------------------
    // Write Request
    //------------------------------------------------------------
    dut->device_req_i = 1;
    dut->device_we_i  = 1;

    tick(dut, tfp);

    //------------------------------------------------------------
    // Remove Request
    //------------------------------------------------------------
    dut->device_req_i = 0;
    dut->device_we_i  = 0;

    tick(dut, tfp);
}

    //------------------------------------------------------------
    // Read status
    //------------------------------------------------------------
   void read_status(Vspi_top* dut, VerilatedVcdC* tfp) {

    dut->device_addr_i = 0x4;
    dut->device_we_i   = 0;
    dut->device_req_i  = 1;

    tick(dut, tfp);   // request
    tick(dut, tfp);   // 🔥 response (FIX)

    uint32_t val = dut->device_rdata_o;

    std::cout << "[STATUS] 0x"
              << std::hex << val << std::dec
              << " | BUSY=" << ((val >> 0) & 1)
              << " | DONE=" << ((val >> 1) & 1)
              << "\n";

    dut->device_req_i = 0;
    tick(dut, tfp);
}

// ================================================================
// RUN CYCLES
// ================================================================
void run_cycles(Vspi_top* dut,
                VerilatedVcdC* tfp,
                int cycles)
{
    for (int i = 0; i < cycles; i++)
    {
        //--------------------------------------------------------
        // Loopback
        //--------------------------------------------------------
        dut->spi_rx_i = dut->spi_tx_o;

        tick(dut, tfp);
    }
}

// ================================================================
void run_no_rx(Vspi_top* dut, VerilatedVcdC* tfp, int cycles) {

    for (int i = 0; i < cycles; i++) {
        dut->spi_rx_i = 0;
        tick(dut, tfp);
    }
}

// ================================================================
// TEST 1: SINGLE BYTE (now hits status + FSM paths)
// ================================================================
void test_single(Vspi_top* dut, VerilatedVcdC* tfp) {
    std::cout << "\n=== SINGLE ===\n";

    write_reg(dut, tfp, 0x0, 0xA5);

    read_status(dut, tfp);   // before start

    write_reg(dut, tfp, 0x4, 1);

    read_status(dut, tfp);   // after start

    run_cycles(dut, tfp, 40);

    read_status(dut, tfp);   // after transfer
}

// ================================================================
// TEST 2: MULTI BYTE (FIFO + busy transitions)
// ================================================================
void test_multi(Vspi_top* dut, VerilatedVcdC* tfp) {
    std::cout << "\n=== MULTI ===\n";

    write_reg(dut, tfp, 0x0, 0xAA);
    write_reg(dut, tfp, 0x0, 0xBB);
    write_reg(dut, tfp, 0x0, 0xCC);

    write_reg(dut, tfp, 0x4, 1);

    run_cycles(dut, tfp, 120);

    read_status(dut, tfp);
}

// ================================================================
// TEST 3: BACK TO BACK
// ================================================================
void test_back_to_back(Vspi_top* dut,
                       VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: BACK TO BACK ===\n";

    write_reg(dut, tfp,0x0, 0x11);
    write_reg(dut,tfp, 0x0, 0x22);
    write_reg(dut, tfp,0x0, 0x33);

    write_reg(dut, tfp, 0x4, 1);
    
    run_cycles(dut, tfp, 50);
    read_status(dut, tfp);
}

// ================================================================
// TEST 4: RANDOM
// ================================================================

void test_random(Vspi_top* dut, VerilatedVcdC* tfp) {

    std::cout << "\n=== RANDOM ===\n";

    for (int i = 0; i < 40; i++) {

        uint8_t data = rand() & 0xFF;

        std::cout << "[TX BYTE] 0x"
                  << std::hex << (int)data << std::dec << "\n";

        write_reg(dut, tfp, 0x0, data);

        // Always start transfer
        write_reg(dut, tfp, 0x4, 1);

        // Enough cycles for full SPI transfer
        run_cycles(dut, tfp, 50);

        read_status(dut, tfp);
    }
}

// ================================================================
// TEST 5: CORNER CASES
// ================================================================
void test_corner(Vspi_top* dut,
                 VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: CORNER VALUES ===\n";

    uint8_t vals[] =
    {
        0x00,
        0xFF,
        0x01,
        0x80,
        0x7F,
        0xAA,
        0x55
    };

    for (auto v : vals)
    {
        write_reg(dut,tfp, 0x0, v);
    }

    write_reg(dut,tfp, 0x4, 0x1);

    run_cycles(dut, tfp, 500);
    read_status(dut, tfp);
}

// ================================================================
// TEST 6: FIFO FULL STRESS
// ================================================================
void test_fifo_stress(Vspi_top* dut,
                      VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: FIFO STRESS ===\n";

    //------------------------------------------------------------
    // Push many entries into FIFO
    //------------------------------------------------------------
    for (int i = 0; i < 100; i++)
    {
        uint8_t data = i;

        //--------------------------------------------------------
        // Functional Coverage
        //--------------------------------------------------------
        tx_data_cov.insert(data);

        //--------------------------------------------------------
        // Corner coverage
        //--------------------------------------------------------
        if (data == 0x00) zero_seen  = true;
        if (data == 0xFF) ff_seen    = true;
        if (data == 0xAA) aa_seen    = true;
        if (data == 0x55) fifty_seen = true;

        //--------------------------------------------------------
        // FIFO Write
        //--------------------------------------------------------
        write_reg(dut, tfp,0x0, data);
    }
write_reg(dut,tfp, 0x4, 0x1);
    //------------------------------------------------------------
    // Long simulation to empty FIFO
    //------------------------------------------------------------
    run_cycles(dut, tfp, 3000);
    read_status(dut, tfp);

    fifo_stress_done = true;

    std::cout << "[FIFO STRESS TEST COMPLETED]\n";
}

// ================================================================
// TEST 7: ALTERNATING PATTERNS
// ================================================================
void test_alternating(Vspi_top* dut,
                      VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: ALTERNATING PATTERNS ===\n";

    uint8_t patterns[] =
    {
        0xAA,
        0x55,
        0xAA,
        0x55,
        0xF0,
        0x0F
    };

    for (auto p : patterns)
    {
        //--------------------------------------------------------
        // Functional Coverage
        //--------------------------------------------------------
        tx_data_cov.insert(p);

        //--------------------------------------------------------
        // Corner Coverage
        //--------------------------------------------------------
        if (p == 0x00) zero_seen  = true;
        if (p == 0xFF) ff_seen    = true;
        if (p == 0xAA) aa_seen    = true;
        if (p == 0x55) fifty_seen = true;

        //--------------------------------------------------------
        // Write Pattern
        //--------------------------------------------------------
        write_reg(dut, tfp,0x0, p);
    }
write_reg(dut, tfp,0x4, 0x1);
    
    //------------------------------------------------------------
    // Run simulation
    //------------------------------------------------------------
    run_cycles(dut, tfp, 500);
    read_status(dut, tfp);
    alternating_test_done = true;

    std::cout << "[ALTERNATING PATTERN TEST COMPLETED]\n";
  }
  
    // ================================================================
// TEST 8: WALKING 1s
// ================================================================
void test_walking_ones(Vspi_top* dut,
                       VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: WALKING ONES ===\n";

    //------------------------------------------------------------
    // Walk a single 1 through all bit positions
    //------------------------------------------------------------
    for (int i = 0; i < 8; i++)
    {
        uint8_t data = (1 << i);

        //--------------------------------------------------------
        // Functional Coverage
        //--------------------------------------------------------
        tx_data_cov.insert(data);

        //--------------------------------------------------------
        // Corner Coverage
        //--------------------------------------------------------
        if (data == 0x00) zero_seen  = true;
        if (data == 0xFF) ff_seen    = true;
        if (data == 0xAA) aa_seen    = true;
        if (data == 0x55) fifty_seen = true;

        //--------------------------------------------------------
        // FIFO Write
        //--------------------------------------------------------
        write_reg(dut,tfp, 0x0, data);
    }
write_reg(dut, tfp,0x4, 0x1);
    //------------------------------------------------------------
    // Allow all transfers to complete
    //------------------------------------------------------------
    run_cycles(dut, tfp, 600);
read_status(dut, tfp);

    //------------------------------------------------------------
    // Coverage Point
    //------------------------------------------------------------
    walking_ones_done = true;

    std::cout << "[WALKING ONES TEST COMPLETED]\n";

}

// ================================================================
// TEST 9: WALKING ZEROS
// ================================================================
void test_walking_zeros(Vspi_top* dut,
                        VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: WALKING ZEROS ===\n";

    //------------------------------------------------------------
    // Send walking zero patterns
    //------------------------------------------------------------
    for (int i = 0; i < 8; i++)
    {
        uint8_t data = ~(1 << i);

        //--------------------------------------------------------
        // Keep only 8 bits
        //--------------------------------------------------------
        data &= 0xFF;

        //--------------------------------------------------------
        // Functional coverage
        //--------------------------------------------------------
        tx_data_cov.insert(data);

        //--------------------------------------------------------
        // Corner coverage update
        //--------------------------------------------------------
        if (data == 0x00) zero_seen  = true;
        if (data == 0xFF) ff_seen    = true;
        if (data == 0xAA) aa_seen    = true;
        if (data == 0x55) fifty_seen = true;

        //--------------------------------------------------------
        // FIFO write
        //--------------------------------------------------------
        write_reg(dut, tfp,0x0, data);
    }
write_reg(dut,tfp, 0x4, 0x1);
    //------------------------------------------------------------
    // Allow SPI transfer completion
    //------------------------------------------------------------
    run_cycles(dut, tfp, 600);
read_status(dut, tfp);

    //------------------------------------------------------------
    // Coverage flag
    //------------------------------------------------------------
    walking_zeros_done = true;

    std::cout << "[WALKING ZEROS TEST COMPLETED]\n";
}

// ================================================================
// TEST 10: EMPTY START
// ================================================================
void test_empty_start(Vspi_top* dut,
                      VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: EMPTY START ===\n";

    //------------------------------------------------------------
    // Start transfer WITHOUT writing TX FIFO data
    //------------------------------------------------------------
    write_reg(dut, tfp, 0x4, 1);

    //------------------------------------------------------------
    // Read status immediately
    //------------------------------------------------------------
    read_status(dut, tfp);

    //------------------------------------------------------------
    // Run few cycles
    //------------------------------------------------------------
    run_cycles(dut, tfp, 50);

    //------------------------------------------------------------
    // Read status again
    //------------------------------------------------------------
    read_status(dut, tfp);

    //------------------------------------------------------------
    // Coverage point
    //------------------------------------------------------------
    empty_start_done = true;

    std::cout << "[EMPTY START TEST COMPLETED]\n";
}

// ================================================================
// TEST 11: FIFO OVERFLOW
// ================================================================
void test_fifo_overflow(Vspi_top* dut,
                        VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: FIFO OVERFLOW ===\n";

    //------------------------------------------------------------
    // Push more data than FIFO depth
    //------------------------------------------------------------
    for (int i = 0; i < 150; i++)
    {
        uint8_t data = rand() & 0xFF;

        //--------------------------------------------------------
        // Functional Coverage
        //--------------------------------------------------------
        tx_data_cov.insert(data);

        //--------------------------------------------------------
        // Corner Coverage
        //--------------------------------------------------------
        if (data == 0x00) zero_seen  = true;
        if (data == 0xFF) ff_seen    = true;
        if (data == 0xAA) aa_seen    = true;
        if (data == 0x55) fifty_seen = true;

        //--------------------------------------------------------
        // FIFO Write
        //--------------------------------------------------------
        write_reg(dut, tfp, 0x0, data);
    }

    //------------------------------------------------------------
    // No RX activity
    //------------------------------------------------------------
    run_no_rx(dut, tfp, 150);

    //------------------------------------------------------------
    // Start transfer
    //------------------------------------------------------------
    write_reg(dut, tfp, 0x4, 1);

    //------------------------------------------------------------
    // Allow transfer completion
    //------------------------------------------------------------
    run_cycles(dut, tfp, 1000);

    //------------------------------------------------------------
    // Read status
    //------------------------------------------------------------
    read_status(dut, tfp);

    //------------------------------------------------------------
    // Coverage Point
    //------------------------------------------------------------
    fifo_overflow_done = true;

    std::cout << "[FIFO OVERFLOW TEST COMPLETED]\n";
}

// ================================================================
// TEST 12: ZERO STORM
// ================================================================
void test_zero_storm(Vspi_top* dut,
                     VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: ZERO STORM ===\n";

    //------------------------------------------------------------
    // Continuously push 0x00 into FIFO
    //------------------------------------------------------------
    for (int i = 0; i < 50; i++)
    {
        //--------------------------------------------------------
        // Functional Coverage
        //--------------------------------------------------------
        tx_data_cov.insert(0x00);

        //--------------------------------------------------------
        // Corner Coverage
        //--------------------------------------------------------
        zero_seen = true;

        //--------------------------------------------------------
        // FIFO Write
        //--------------------------------------------------------
        write_reg(dut, tfp, 0x0, 0x00);
    }

    //------------------------------------------------------------
    // Start transfer
    //------------------------------------------------------------
    write_reg(dut, tfp, 0x4, 1);

    //------------------------------------------------------------
    // Run simulation
    //------------------------------------------------------------
    run_cycles(dut, tfp, 800);

    //------------------------------------------------------------
    // Read status
    //------------------------------------------------------------
    read_status(dut, tfp);

    //------------------------------------------------------------
    // Coverage point
    //------------------------------------------------------------
    zero_storm_done = true;

    std::cout << "[ZERO STORM TEST COMPLETED]\n";
}

// ================================================================
// TEST 13: PARTIAL TRANSFER
// ================================================================
void test_partial(Vspi_top* dut,
                  VerilatedVcdC* tfp)
{
    std::cout << "\n=== PARTIAL ===\n";

    //------------------------------------------------------------
    // Write few bytes but DO NOT start transfer
    //------------------------------------------------------------
    write_reg(dut, tfp, 0x0, 0x11);
    write_reg(dut, tfp, 0x0, 0x22);
    write_reg(dut, tfp, 0x0, 0x33);

    //------------------------------------------------------------
    // Wait without asserting START
    //------------------------------------------------------------
    run_cycles(dut, tfp, 60);

    //------------------------------------------------------------
    // Read status
    //------------------------------------------------------------
    read_status(dut, tfp);

    //------------------------------------------------------------
    // Coverage update
    //------------------------------------------------------------
    partial_test_done = true;

    std::cout << "[PARTIAL TEST COMPLETED]\n";
}

// ================================================================
// TEST 14: START GLITCH
// ================================================================
void test_start_glitch(Vspi_top* dut,
                       VerilatedVcdC* tfp)
{
    std::cout << "\n=== START GLITCH ===\n";

    //------------------------------------------------------------
    // Assert START multiple times without data
    //------------------------------------------------------------
    write_reg(dut, tfp, 0x4, 1);
    write_reg(dut, tfp, 0x4, 1);
    write_reg(dut, tfp, 0x4, 1);

    //------------------------------------------------------------
    // Allow DUT to react
    //------------------------------------------------------------
    run_cycles(dut, tfp, 50);

    //------------------------------------------------------------
    // Read status register
    //------------------------------------------------------------
    read_status(dut, tfp);

    //------------------------------------------------------------
    // Coverage update
    //------------------------------------------------------------
    start_glitch_done = true;

    std::cout << "[START GLITCH TEST COMPLETED]\n";
}

// ================================================================
// TEST 15: MID TRANSFER RESET
// ================================================================
void test_mid_reset(Vspi_top* dut,
                    VerilatedVcdC* tfp)
{
    std::cout << "\n=== MID TRANSFER RESET ===\n";

    //------------------------------------------------------------
    // Load FIFO with data
    //------------------------------------------------------------
    write_reg(dut, tfp, 0x0, 0xAA);
    write_reg(dut, tfp, 0x0, 0x55);
    write_reg(dut, tfp, 0x0, 0xF0);

    //------------------------------------------------------------
    // Start SPI transfer
    //------------------------------------------------------------
    write_reg(dut, tfp, 0x4, 1);

    //------------------------------------------------------------
    // Allow partial transfer
    //------------------------------------------------------------
    run_cycles(dut, tfp, 20);

    //------------------------------------------------------------
    // Assert reset during active transfer
    //------------------------------------------------------------
    std::cout << "[ASSERT MID RESET]\n";

    dut->rst_ni = 0;

    run_cycles(dut, tfp, 10);

    //------------------------------------------------------------
    // Release reset
    //------------------------------------------------------------
    dut->rst_ni = 1;

    std::cout << "[RELEASE MID RESET]\n";

    //------------------------------------------------------------
    // Allow recovery
    //------------------------------------------------------------
    run_cycles(dut, tfp, 50);

    //------------------------------------------------------------
    // Read status
    //------------------------------------------------------------
    read_status(dut, tfp);

    //------------------------------------------------------------
    // Coverage update
    //------------------------------------------------------------
    mid_reset_done = true;

    std::cout << "[MID RESET TEST COMPLETED]\n";
}

// ================================================================
// TEST 16: RAPID START STORM
// ================================================================
void test_rapid_start(Vspi_top* dut,
                      VerilatedVcdC* tfp)
{
    std::cout << "\n=== RAPID START STORM ===\n";

    //------------------------------------------------------------
    // Fill FIFO partially
    //------------------------------------------------------------
    for (int i = 0; i < 5; i++)
    {
        write_reg(dut, tfp, 0x0, rand() & 0xFF);
    }

    //------------------------------------------------------------
    // Continuously assert START rapidly
    //------------------------------------------------------------
    for (int i = 0; i < 20; i++)
    {
        write_reg(dut, tfp, 0x4, 1);

        //--------------------------------------------------------
        // Very few cycles
        //--------------------------------------------------------
        run_cycles(dut, tfp, 2);
    }

    //------------------------------------------------------------
    // Long run
    //------------------------------------------------------------
    run_cycles(dut, tfp, 300);

    //------------------------------------------------------------
    // Read final status
    //------------------------------------------------------------
    read_status(dut, tfp);

    rapid_start_done = true;

    std::cout << "[RAPID START TEST COMPLETED]\n";
}

// ================================================================
// TEST 18: FSM HAMMER
// ================================================================
void test_fsm_hammer(Vspi_top* dut,
                     VerilatedVcdC* tfp)
{
    std::cout << "\n=== FSM HAMMER ===\n";

    for (int i = 0; i < 100; i++)
    {
        //--------------------------------------------------------
        // Random byte
        //--------------------------------------------------------
        uint8_t data = rand() & 0xFF;

        //--------------------------------------------------------
        // Write single byte
        //--------------------------------------------------------
        write_reg(dut, tfp, 0x0, data);

        //--------------------------------------------------------
        // Immediate START
        //--------------------------------------------------------
        write_reg(dut, tfp, 0x4, 1);

        //--------------------------------------------------------
        // Very short run
        //--------------------------------------------------------
        run_cycles(dut, tfp, 15);
    }

    //------------------------------------------------------------
    // Final settle
    //------------------------------------------------------------
    run_cycles(dut, tfp, 300);

    read_status(dut, tfp);

    std::cout << "[FSM HAMMER TEST COMPLETED]\n";
}

// ================================================================
// FUNCTIONAL COVERAGE REPORT
// ================================================================
void print_coverage()
{
    std::cout << "\n";
    std::cout << "================================================\n";
    std::cout << "FUNCTIONAL COVERAGE REPORT\n";
    std::cout << "================================================\n";

    //------------------------------------------------------------
    // Transaction Coverage
    //------------------------------------------------------------
    std::cout << "Total SPI Transactions : "
              << total_transactions << "\n";

    //------------------------------------------------------------
    // TX Data Coverage
    //------------------------------------------------------------
    std::cout << "Unique TX Bytes Covered : "
              << tx_data_cov.size() << "\n";

    //------------------------------------------------------------
    // Clock Coverage
    //------------------------------------------------------------
    std::cout << "SCK Rising Edges Seen : "
              << sck_rising_edges << "\n";

    //------------------------------------------------------------
    // FSM Coverage
    //------------------------------------------------------------
    std::cout << "SEND State Seen : "
              << (send_state_seen ? "YES" : "NO")
              << "\n";

    //------------------------------------------------------------
    // Corner Case Coverage
    //------------------------------------------------------------
    std::cout << "0x00 Covered : "
              << (zero_seen ? "YES" : "NO")
              << "\n";

    std::cout << "0xFF Covered : "
              << (ff_seen ? "YES" : "NO")
              << "\n";

    std::cout << "0xAA Covered : "
              << (aa_seen ? "YES" : "NO")
              << "\n";

    std::cout << "0x55 Covered : "
              << (fifty_seen ? "YES" : "NO")
              << "\n";

    //------------------------------------------------------------
    // FIFO Stress Coverage
    //------------------------------------------------------------
    std::cout << "FIFO Stress Test : "
              << (fifo_stress_done ? "YES" : "NO")
              << "\n";
              
//------------------------------------------------------------
// Alternating Pattern Coverage
//------------------------------------------------------------
std::cout << "Alternating Pattern Test : "
          << (alternating_test_done ? "YES" : "NO")
          << "\n";
          
//------------------------------------------------------------
// Walking Ones Coverage
//------------------------------------------------------------
std::cout << "Walking Ones Test : "
          << (walking_ones_done ? "YES" : "NO")
          << "\n";
                
                //------------------------------------------------------------
// Walking Zeros Coverage
//------------------------------------------------------------
std::cout << "Walking Zeros Test : "
          << (walking_zeros_done ? "YES" : "NO")
          << "\n";
          
//------------------------------------------------------------
// Empty Start Coverage
//------------------------------------------------------------
std::cout << "Empty Start Test : "
          << (empty_start_done ? "YES" : "NO")
          << "\n";

//------------------------------------------------------------
// FIFO Overflow Coverage
//------------------------------------------------------------
std::cout << "FIFO Overflow Test : "
          << (fifo_overflow_done ? "YES" : "NO")
          << "\n";

//------------------------------------------------------------
// Zero Storm Coverage
//------------------------------------------------------------
std::cout << "Zero Storm Test : "
          << (zero_storm_done ? "YES" : "NO")
          << "\n";
                    
//------------------------------------------------------------
// Partial Transfer Coverage
//------------------------------------------------------------
std::cout << "Partial Transfer Test : "
          << (partial_test_done ? "YES" : "NO")
          << "\n";
 
 //------------------------------------------------------------
// Start Glitch Coverage
//------------------------------------------------------------
std::cout << "Start Glitch Test : "
          << (start_glitch_done ? "YES" : "NO")
          << "\n";
          
//------------------------------------------------------------
// Mid Reset Coverage
//------------------------------------------------------------
std::cout << "Mid Reset Test : "
          << (mid_reset_done ? "YES" : "NO")
          << "\n";

std::cout << "Rapid Start Test : "
          << (rapid_start_done ? "YES" : "NO")
          << "\n";
                             
    //------------------------------------------------------------
    // Approximate Functional Coverage
    //------------------------------------------------------------
    int cov_points = 0;

    if (send_state_seen) cov_points++;
    if (zero_seen)       cov_points++;
    if (ff_seen)         cov_points++;
    if (aa_seen)         cov_points++;
    if (fifty_seen)      cov_points++;
    if (fifo_stress_done) cov_points++;
    if (alternating_test_done) cov_points++;
    if (walking_ones_done)     cov_points++;
    if (walking_zeros_done) cov_points++;
    if (empty_start_done) cov_points++;
    if (fifo_overflow_done) cov_points++;
    if (zero_storm_done) cov_points++;
    if (partial_test_done) cov_points++;
    if (start_glitch_done) cov_points++; 
    if (mid_reset_done) cov_points++;
    if (rapid_start_done) cov_points++;
    
    float coverage =
    (cov_points / 16.0) * 100.0;

    std::cout << "\nFunctional Coverage = "
              << coverage
              << "%\n";

    std::cout << "================================================\n";
}

// ================================================================
// MAIN
// ================================================================
int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);

    //------------------------------------------------------------
    // Enable Waveform Dump
    //------------------------------------------------------------
    Verilated::traceEverOn(true);

    //------------------------------------------------------------
    // DUT
    //------------------------------------------------------------
    Vspi_top* dut = new Vspi_top;

    //------------------------------------------------------------
    // Trace
    //------------------------------------------------------------
    VerilatedVcdC* tfp = new VerilatedVcdC;

    dut->trace(tfp, 99);

    tfp->open("spi_top.vcd");

    //------------------------------------------------------------
    // Reset
    //------------------------------------------------------------
    reset_dut(dut, tfp);

    std::cout << "\n=== SPI VERIFICATION START ===\n";

    //------------------------------------------------------------
    // Execute Testcases
    //------------------------------------------------------------
    
    test_single(dut, tfp);

    test_multi(dut, tfp);

    test_back_to_back(dut, tfp);

    test_random(dut, tfp);

    test_corner(dut, tfp);

    test_fifo_stress(dut, tfp);
    
    test_alternating(dut, tfp);
    
    test_walking_ones(dut, tfp);
   
    test_walking_zeros(dut, tfp);
    
    test_empty_start(dut, tfp);

    test_fifo_overflow(dut, tfp);
    
    test_zero_storm(dut, tfp);
    
    test_partial(dut, tfp);
    
    test_start_glitch(dut, tfp);
    
    test_mid_reset(dut, tfp);
    
    test_rapid_start(dut, tfp);
    
    test_fsm_hammer(dut, tfp);
    //------------------------------------------------------------
    // Print Functional Coverage
    //------------------------------------------------------------
    print_coverage();

    std::cout << "\n=== TEST COMPLETE ===\n";

    //------------------------------------------------------------
    // Close Trace
    //------------------------------------------------------------
    tfp->close();

    //------------------------------------------------------------
    // Write Coverage
    //------------------------------------------------------------
    VerilatedCov::write("coverage.dat");

    delete dut;
    delete tfp;

    return 0;
}
