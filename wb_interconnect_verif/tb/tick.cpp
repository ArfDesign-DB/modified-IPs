#include "tick.h"

vluint64_t sim_time = 0;

//extern vluint64_t sim_time;

void tick(Vwb_interconnect* dut, VerilatedVcdC* trace)
{
    dut->eval();

    trace->dump(sim_time++);
    dut->clk_i = 0;
    dut->eval();

    trace->dump(sim_time++);
    dut->clk_i = 1;
    dut->eval();

    trace->dump(sim_time++);
}
