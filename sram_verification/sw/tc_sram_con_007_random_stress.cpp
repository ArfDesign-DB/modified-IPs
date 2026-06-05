#include "tb_common.h"
#include <iostream>
#include <random>

#define TEST_ID "TC_SRAM_CON_007_RANDOM_STRESS"

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    Vtb_top* top = new Vtb_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave_tc_007.vcd");

    TB tb(top, tfp);

    tb.reset();

    std::mt19937 rng(1);
    std::uniform_int_distribution<uint32_t> ad(0, 2047);
    std::uniform_int_distribution<uint32_t> dt(0, 0xFFFFFFFF);

    for (int i = 0; i < 100; i++) {
        uint32_t a = SRAM_BASE + (ad(rng) << 2);
        uint32_t d = dt(rng);

        tb.write(a, d);
        assert(tb.read(a) == d);
    }

    std::cout << "[" TEST_ID "] PASS\n";
    tb.print_functional_coverage();

    tb.save_functional_coverage(
                    "functional_coverage_tc_007.json");

    tb.save_coverage(
                    "code_coverage_tc_007.dat");

    tfp->close();
    delete tfp;
    delete top;
}
