#pragma once

#include "verilated.h"
#include "Vspi_flash_xip.h"
#include "verilated_vcd_c.h"
#include "spi_flash_xip_cov.h"
#include <string>

extern vluint64_t sim_time;

// clock tick
inline void tick(Vspi_flash_xip* dut, VerilatedVcdC* tfp) {
    dut->clk_i = !dut->clk_i;
    dut->eval();
    tfp->dump(sim_time++);
    
    // Sample coverage on rising clock edge while out of reset
    if (dut->clk_i == 1 && dut->rst_ni == 1) {
        func_cov.sample(dut);
    }
}

// reset
inline void reset_dut(Vspi_flash_xip* dut, VerilatedVcdC* tfp, int cycles = 8) {
    dut->rst_ni = 0;
    for (int i = 0; i < cycles; i++) tick(dut, tfp);
    dut->rst_ni = 1;
}

// coverage writer (defined in tb_globals.cpp)
void write_coverage(const std::string& test_name);
