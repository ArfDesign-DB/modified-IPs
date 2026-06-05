#include "tb_common.h"
#include <iostream>

#define TEST_ID "TC_SRAM_CON_003_BYTE_ENABLE"

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    Vtb_top* top = new Vtb_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave_tc_003.vcd");

    TB tb(top, tfp);

    tb.reset();

    tb.write(SRAM_BASE + 0x20, 0xFFFFFFFF);
    tb.write(SRAM_BASE + 0x20, 0x000000AA, 0x1);

    uint32_t r = tb.read(SRAM_BASE + 0x20);
    assert(r == 0xFFFFFFAA);

    tb.write(SRAM_BASE + 0x24, 0x00000000);
    tb.write(SRAM_BASE + 0x24, 0x0000BB00, 0x2);
    tb.write(SRAM_BASE + 0x24, 0x00CC0000, 0x4);
    tb.write(SRAM_BASE + 0x24, 0xDD000000, 0x8);
    assert(tb.read(SRAM_BASE + 0x24) == 0xDDCCBB00);

    tb.write(SRAM_BASE + 0x28, 0xFFFFFFFF);
    tb.write(SRAM_BASE + 0x28, 0x00001234, 0x3);
    tb.write(SRAM_BASE + 0x28, 0x56780000, 0xC);
    assert(tb.read(SRAM_BASE + 0x28) == 0x56781234);

    std::cout << "[" TEST_ID "] PASS\n";

    tb.print_functional_coverage();

    tb.save_functional_coverage(
                    "functional_coverage_tc_003.json");

    tb.save_coverage(
                    "code_coverage_tc_003.dat");

    tfp->close();
    delete tfp;
    delete top;
}
