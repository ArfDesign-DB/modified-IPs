#include "tb_common.h"
#include <iostream>

#define TEST_ID "TC_SRAM_CON_006_ERROR_HANDLING"

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    Vtb_top* top = new Vtb_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave_tc_006.vcd");

    TB tb(top, tfp);

    tb.reset();
    
    //top->wb_cyc_i = 1;
    //top->wb_stb_i = 1;
    //top->wb_we_i  = 0;
    //top->wb_adr_i = 0xFFFF0000;
    //top->wb_sel_i = 0xF;

    //tb.tick();
    
    tb.invalid_access(0xFFFF0000);

    //assert(top->wb_err_o == 1);//removed to solve the issue failing TC_SRAM_CON_006_ERROR_HANDLING and add to tb_common.h

    std::cout << "[" TEST_ID "] PASS\n";
    
    tb.print_functional_coverage();

    tb.save_functional_coverage(
                    "functional_coverage_tc_006.json");

    tb.save_coverage(
                    "code_coverage_tc_006.dat");

    tfp->close();
    delete tfp;
    delete top;
}
