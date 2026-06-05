#include "tb_common.h"
#include <iostream>

#define TEST_ID "TC_SRAM_CON_001_RESET"

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtb_top* top = new Vtb_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave_tc_001.vcd");

    TB tb(top, tfp);

    tb.reset();
    tb.idle();

    assert(top->sram_rvalid_o == 0);
    

    std::cout << "[" TEST_ID "] PASS\n";

    tb.print_functional_coverage();
    
    tb.save_functional_coverage(
		    "functional_coverage_tc_001.json");
    
    tb.save_coverage(
		    "code_coverage_tc_001.dat");

    tfp->close();
    delete tfp;
    delete top;
}
