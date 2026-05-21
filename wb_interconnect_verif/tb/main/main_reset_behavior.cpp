#include <iostream>
#include "verilated.h"
#include "Vwb_interconnect.h"

void test_reset_behavior(Vwb_interconnect* dut);

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    std::cout << "\n=========================================\n";
    std::cout << "RESET BEHAVIOR TEST EXECUTION STARTED\n";
    std::cout << "=========================================\n\n";

    Vwb_interconnect* dut = new Vwb_interconnect;

    test_reset_behavior(dut);   // 🔥 THIS WAS MISSING

    delete dut;

    return 0;
}
