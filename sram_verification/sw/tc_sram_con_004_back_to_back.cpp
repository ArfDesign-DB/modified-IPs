#include "tb_common.h"
#include <iostream>

#define TEST_ID "TC_SRAM_CON_004_BACK_TO_BACK"

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    Vtb_top* top = new Vtb_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave_tc_004.vcd");

    TB tb(top, tfp);

    tb.reset();

    for (int i = 0; i < 10; i++) {
        tb.write(SRAM_BASE + 0x100 + i*4, i);
        assert(tb.read(SRAM_BASE + 0x100 + i*4) == (uint32_t)i);
    }

    std::cout << "[" TEST_ID "] PASS\n";
    
    tb.print_functional_coverage();

    tb.save_functional_coverage(
                    "functional_coverage_tc_004.json");

    tb.save_coverage(
                    "code_coverage_tc_004.dat");


    tfp->close();
    delete tfp;
    delete top;
}
