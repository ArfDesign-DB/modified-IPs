#include <iostream>

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_cov.h"

#include "Vwb_interconnect.h"

#include "../wb_coverage.h"

// ============================================================
// TEST FUNCTION DECLARATIONS
// ============================================================

void test_bootrom_write(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_bootrom_read(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_sram_write(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);

void test_sram_read(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);

void test_gpio_write(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_gpio_read(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_uart_write(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_uart_read(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_timer_write(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_timer_read(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);

void test_decode_error(Vwb_interconnect* dut,
                       VerilatedVcdC* trace);
                       
void test_i2c_write(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_i2c_read(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_xip_write(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_xip_read(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_spictrl_write(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);                     
                     
void test_spictrl_read(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);
                     
void test_spihost_write(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);                     
                     
void test_spihost_read(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);               
                     
void test_coverage_killer(Vwb_interconnect*, VerilatedVcdC*);      

void test_coverage_autopilot(Vwb_interconnect*, VerilatedVcdC*);
                       

// ============================================================
// MAIN REGRESSION
// ============================================================

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);

    std::cout << "\n=========================================\n";
    std::cout << "WB INTERCONNECT REGRESSION STARTED\n";
    std::cout << "=========================================\n";

    // ========================================================
    // DUT + TRACE
    // ========================================================

    Vwb_interconnect* dut = new Vwb_interconnect;

    VerilatedVcdC* trace = new VerilatedVcdC;

    dut->trace(trace, 99);

    trace->open("regression_wave.vcd");

    // ========================================================
    // RESET
    // ========================================================

    dut->rst_ni = 0;
    dut->eval();

    dut->rst_ni = 1;
    dut->eval();

    // ========================================================
    // RUN TESTCASES
    // ========================================================

    test_bootrom_write(dut, trace);
    
    test_bootrom_read(dut, trace);
    
    test_sram_write(dut, trace);
    
    test_sram_read(dut, trace);
    
    test_gpio_write(dut, trace);
    
    test_gpio_read(dut, trace);
    
    test_uart_write(dut, trace);
    
    test_uart_read(dut, trace);
    
    test_timer_write(dut, trace);
    
    test_timer_read(dut, trace);

    test_decode_error(dut, trace);
    
    test_i2c_write(dut, trace);
    
    test_i2c_read(dut, trace);
    
    test_xip_write(dut, trace);
    
    test_xip_read(dut, trace);
    
    test_spictrl_write(dut, trace);
    
    test_spictrl_read(dut, trace);
    
    test_spihost_write(dut, trace);
    
    test_spihost_read(dut, trace);
    
    test_coverage_killer(dut, trace);
    
    test_coverage_autopilot(dut, trace);

    // ========================================================
    // FINAL CUMULATIVE COVERAGE REPORT
    // ========================================================

    coverage.report();
    
// ========================================================
    // IMPORTANT: DUMP CODE COVERAGE DATABASE
    // ========================================================

    VerilatedCov::write("coverage.dat");

    // ========================================================
    // CLEANUP
    // ========================================================

    trace->close();

    delete trace;
    delete dut;

    std::cout << "\n=========================================\n";
    std::cout << "REGRESSION FINISHED\n";
    std::cout << "=========================================\n";

    return 0;
}
