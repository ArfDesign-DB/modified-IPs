#ifndef TB_COMMON_H
#define TB_COMMON_H

#include "Vboot_rom.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_cov.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstdint>

vluint64_t sim_time = 0;

double sc_time_stamp() {
    return sim_time;
}

// ==================================================
// CLOCK TICK
// ==================================================
static void tick(Vboot_rom* top, VerilatedVcdC* tfp) {

    top->clk_i = 0;
    top->eval();
    tfp->dump(sim_time);
    sim_time += 5;

    top->clk_i = 1;
    top->eval();
    tfp->dump(sim_time);
    sim_time += 5;
}

// ==================================================
// FUNCTIONAL COVERAGE MODEL (UNCHANGED)
// ==================================================
class BootRomCov {
public:
    bool addr_quadrant[4] = {0};

    bool corner_0     = false;
    bool corner_max   = false;
    bool pattern_155  = false;
    bool pattern_2aa  = false;

    void sample(uint32_t addr) {

        if (addr < 256) addr_quadrant[0] = true;
        else if (addr < 512) addr_quadrant[1] = true;
        else if (addr < 768) addr_quadrant[2] = true;
        else addr_quadrant[3] = true;

        if (addr == 0x000) corner_0 = true;
        if (addr == 0x3FF) corner_max = true;
        if (addr == 0x155) pattern_155 = true;
        if (addr == 0x2AA) pattern_2aa = true;
    }

    float report(const std::string& filename) {

        std::ofstream report(filename);

        int hit = 0;
        int total = 8;

        for (int i = 0; i < 4; i++)
            if (addr_quadrant[i]) hit++;

        if (corner_0) hit++;
        if (corner_max) hit++;
        if (pattern_155) hit++;
        if (pattern_2aa) hit++;

        float cov = (100.0 * hit) / total;

        report << "FUNCTIONAL COVERAGE\n";

        for (int i = 0; i < 4; i++)
            report << "ADDR_BIN_" << i << " : "
                   << (addr_quadrant[i] ? "HIT" : "MISS") << "\n";

        report << "CORNER_000 : " << (corner_0 ? "HIT" : "MISS") << "\n";
        report << "CORNER_3FF : " << (corner_max ? "HIT" : "MISS") << "\n";
        report << "PATTERN_155 : " << (pattern_155 ? "HIT" : "MISS") << "\n";
        report << "PATTERN_2AA : " << (pattern_2aa ? "HIT" : "MISS") << "\n";

        report << "\nFunctional Coverage : " << cov << "%\n";

        return cov;
    }
};

// ==================================================
// TOGGLE-BOOST STIMULUS GENERATOR
// ==================================================
static inline uint32_t toggle_stim(uint32_t i, uint32_t last) {

    uint32_t pattern;

    switch (i % 6) {

        case 0:
            // walking 1-bit
            pattern = (1 << (i % 10));
            break;

        case 1:
            // full inversion
            pattern = (~last);
            break;

        case 2:
            // alternating bit masks
            pattern = (last ^ 0x155);
            break;

        case 3:
            // MSB-LSB cross toggle
            pattern = ((last << 2) | (last >> 2));
            break;

        case 4:
            // max stress alternating pattern
            pattern = (i & 1) ? 0x3FF : 0x000;
            break;

        default:
            // randomized bit spread
            pattern = (rand() % 1024) ^ (last >> (i % 5));
            break;
    }

    return pattern & 0x3FF;
}

// ==================================================
// OPTIONAL LOOP HELPER (reduces boilerplate)
// ==================================================
static inline void run_toggle_loop(
    Vboot_rom* top,
    VerilatedVcdC* tfp,
    BootRomCov& cov,
    int N)
{
    uint32_t last = 0;

    for (int i = 0; i < N; i++) {

        uint32_t addr = toggle_stim(i, last);

        top->addr_i = addr;
        tick(top, tfp);
        cov.sample(addr);

        last = addr;
    }
}

#endif
