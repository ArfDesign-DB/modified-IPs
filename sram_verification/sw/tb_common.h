#pragma once

#include "Vtb_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_cov.h"

#include "coverage_manager.h"
#include "memory_map.h"

#include <cassert>

static vluint64_t main_time = 0;

static constexpr uint32_t SRAM_BASE = MemoryMap::SRAM_BASE;
static constexpr uint32_t SRAM_SIZE = MemoryMap::SRAM_SIZE;

class TB {

public:

    Vtb_top* top;
    VerilatedVcdC* tfp;

    CoverageManager cov;

    TB(Vtb_top* t, VerilatedVcdC* vcd)
        : top(t), tfp(vcd) {}

    void tick() {

        top->clk = 0;
        top->eval();

        if (tfp)
            tfp->dump(main_time++);

        top->clk = 1;
        top->eval();

        if (tfp)
            tfp->dump(main_time++);
    }

    void reset() {

        top->rst_n = 0;

        for (int i = 0; i < 5; i++)
            tick();

        top->rst_n = 1;

        tick();
    }

    void idle() {

        top->sram_req_i   = 0;
        top->sram_we_i    = 0;
        top->sram_addr_i  = 0;
        top->sram_wdata_i = 0;
        top->sram_be_i    = 0;
    }

    void wait_rvalid() {

        int timeout = 50;

        while (!top->sram_rvalid_o && timeout--)
            tick();

        assert(timeout > 0 && "TIMEOUT");
    }

    void write(
        uint32_t addr,
        uint32_t data,
        uint8_t sel = 0xF) {

        top->sram_req_i   = 1;
        top->sram_we_i    = 1;
        top->sram_addr_i  = addr;
        top->sram_wdata_i = data;
        top->sram_be_i    = sel;

        cov.sample_rw(1);
        cov.sample_byte_enable(sel);
        cov.sample_address(addr);
        cov.sample_cross_rw_sel(1, sel);

        wait_rvalid();

        top->sram_req_i = 0;

        tick();
    }

    uint32_t read(uint32_t addr) {

        top->sram_req_i   = 1;
        top->sram_we_i    = 0;
        top->sram_addr_i  = addr;
        top->sram_be_i    = 0xF;

        cov.sample_rw(0);
        cov.sample_byte_enable(0xF);
        cov.sample_address(addr);
        cov.sample_cross_rw_sel(0, 0xF);

        wait_rvalid();

        uint32_t data = top->sram_rdata_o;

        top->sram_req_i = 0;

        tick();

        return data;
    }

    void invalid_access(uint32_t addr) {

        top->sram_req_i  = 1;
        top->sram_we_i   = 0;
        top->sram_addr_i = addr;
        top->sram_be_i   = 0xF;

        cov.sample_rw(0);
        cov.sample_byte_enable(0xF);
        cov.sample_address(addr);
        cov.sample_cross_rw_sel(0, 0xF);

        tick();

        assert(top->sram_rvalid_o == 0);

        top->sram_req_i = 0;

        tick();
    }

    void save_coverage(const char* fname) {

        VerilatedCov::write(fname);
    }

    void save_functional_coverage(
        const std::string &fname) {

        cov.export_report(fname);
    }

    void print_functional_coverage() {

        cov.report();
    }
};
