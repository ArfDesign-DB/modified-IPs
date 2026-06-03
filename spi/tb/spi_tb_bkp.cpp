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
void write_reg(Vspi_top* dut,
               uint32_t addr,
               uint32_t data)
{
    std::cout << "[FIFO WRITE] 0x"
              << std::hex
              << std::setw(2)
              << std::setfill('0')
              << data
              << std::dec
              << "\n";

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

    tick(dut, nullptr);

    //------------------------------------------------------------
    // Remove Request
    //------------------------------------------------------------
    dut->device_req_i = 0;
    dut->device_we_i  = 0;

    tick(dut, nullptr);
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
// TEST 1: SINGLE BYTE
// ================================================================
void test_single(Vspi_top* dut,
                 VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: SINGLE BYTE ===\n";

    write_reg(dut, 0x0, 0xA5);

    run_cycles(dut, tfp, 150);
}

// ================================================================
// TEST 2: MULTI BYTE
// ================================================================
void test_multi(Vspi_top* dut,
                VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: MULTI BYTE ===\n";

    write_reg(dut, 0x0, 0xA5);
    write_reg(dut, 0x0, 0x3C);
    write_reg(dut, 0x0, 0xF0);

    run_cycles(dut, tfp, 300);
}

// ================================================================
// TEST 3: BACK TO BACK
// ================================================================
void test_back_to_back(Vspi_top* dut,
                       VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: BACK TO BACK ===\n";

    write_reg(dut, 0x0, 0x11);
    write_reg(dut, 0x0, 0x22);
    write_reg(dut, 0x0, 0x33);

    run_cycles(dut, tfp, 250);
}

// ================================================================
// TEST 4: RANDOM
// ================================================================
void test_random(Vspi_top* dut,
                 VerilatedVcdC* tfp)
{
    std::cout << "\n=== TEST: RANDOM ===\n";

    for (int i = 0; i < 10; i++)
    {
        uint8_t d = rand() % 256;

        write_reg(dut, 0x0, d);
    }

    run_cycles(dut, tfp, 400);
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
        write_reg(dut, 0x0, v);
    }

    write_reg(dut, 0x4, 0x1);

    run_cycles(dut, tfp, 500);
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
        write_reg(dut, 0x0, data);
    }

    //------------------------------------------------------------
    // Long simulation to empty FIFO
    //------------------------------------------------------------
    run_cycles(dut, tfp, 3000);

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
        write_reg(dut, 0x0, p);
    }

    //------------------------------------------------------------
    // Run simulation
    //------------------------------------------------------------
    run_cycles(dut, tfp, 500);
    
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
        write_reg(dut, 0x0, data);
    }

    //------------------------------------------------------------
    // Allow all transfers to complete
    //------------------------------------------------------------
    run_cycles(dut, tfp, 600);

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
        write_reg(dut, 0x0, data);
    }

    //------------------------------------------------------------
    // Allow SPI transfer completion
    //------------------------------------------------------------
    run_cycles(dut, tfp, 600);

    //------------------------------------------------------------
    // Coverage flag
    //------------------------------------------------------------
    walking_zeros_done = true;

    std::cout << "[WALKING ZEROS TEST COMPLETED]\n";
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
    if (walking_zero_done) cov_points++;

    float coverage =
    (cov_points / 9.0) * 100.0;

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
