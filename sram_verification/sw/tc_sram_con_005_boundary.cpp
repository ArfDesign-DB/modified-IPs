#include "tb_common.h"
#include <iostream>

#define TEST_ID "TC_SRAM_CON_005_BOUNDARY"

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    Vtb_top* top = new Vtb_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave_tc_005.vcd");

    TB tb(top, tfp);

    tb.reset();

    uint32_t last_addr =
    	SRAM_BASE + SRAM_SIZE - 4;

    tb.write(last_addr, 0x1234);

    assert(
		    tb.read(last_addr)
		    == 0x1234
		    );



    std::cout << "[" TEST_ID "] PASS\n";

        tb.print_functional_coverage();

    tb.save_functional_coverage(
                    "functional_coverage_tc_005.json");

    tb.save_coverage(
                    "code_coverage_tc_005.dat");

    tfp->close();
    delete tfp;
    delete top;
}
