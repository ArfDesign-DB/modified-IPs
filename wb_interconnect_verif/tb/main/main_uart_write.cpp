#include <iostream>   // ✅ REQUIRED (fixes your error)

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vwb_interconnect.h"

void test_uart_write(Vwb_interconnect* dut,
                     VerilatedVcdC* trace);

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);   // ✅ important

    std::cout << "\n=========================================\n";
    std::cout << "UART WRITE TEST STARTED\n";
    std::cout << "=========================================\n";

    Vwb_interconnect* dut = new Vwb_interconnect;
    VerilatedVcdC* trace = new VerilatedVcdC;

    dut->trace(trace, 99);
    trace->open("wave.vcd");

    // RESET
    dut->rst_ni = 0;
    dut->eval();

    dut->rst_ni = 1;
    dut->eval();

    // RUN TEST
    test_uart_write(dut, trace);

    trace->close();
    delete trace;
    delete dut;

    std::cout << "\nTEST FINISHED\n";

    return 0;
}
