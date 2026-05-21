#ifndef TICK_H
#define TICK_H

#include "Vwb_interconnect.h"
#include "verilated_vcd_c.h"

extern vluint64_t sim_time;

void tick(Vwb_interconnect* dut, VerilatedVcdC* trace);

#endif
