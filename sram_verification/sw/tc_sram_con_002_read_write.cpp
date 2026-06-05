#include "tb_common.h"
#include <iostream>

#define TEST_ID "TC_SRAM_CON_002_READ_WRITE"

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    Vtb_top* top = new Vtb_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave_tc_002.vcd");

    TB tb(top, tfp);

    tb.reset();

    tb.write(SRAM_BASE + 0x10, 0xDEADFACE);
    assert(tb.read(SRAM_BASE + 0x10) == 0xDEADFACE);

    std::cout << "[" TEST_ID "] PASS\n";
    
    tb.print_functional_coverage();

    tb.save_functional_coverage(
                    "functional_coverage_tc_002.json");

    tb.save_coverage(
                    "code_coverage_tc_002.dat");

    tfp->close();
    delete tfp;
    delete top;
}
