#pragma once
#include "Vspi_flash_xip.h"
#include <string>
#include <map>

class SpiFlashXipCov {
private:
    bool req_pending = false;
    bool csn_prev = 1;
    bool sck_prev = 0;

public:
    std::map<std::string, int> bins;

    SpiFlashXipCov() {
        // Initialize functional bins
        bins["c_cmd_read"] = 0;
        bins["c_cmd_write"] = 0;
        bins["c_addr_region_low"] = 0;
        bins["c_addr_region_mid"] = 0;
        bins["c_addr_region_high"] = 0;
        bins["c_read_req_to_rvalid"] = 0;
        bins["c_spi_transaction"] = 0;
        bins["c_spi_clock_toggle"] = 0;
    }

    // Call this every rising edge of the clock
    void sample(Vspi_flash_xip* dut) {
        // 1. Command & Address Decode
        if (dut->xip_req_i) {
            if (!dut->xip_we_i) bins["c_cmd_read"]++;
            else bins["c_cmd_write"]++;

            uint32_t addr = dut->xip_addr_i;
            if (addr <= 0x000FFF) bins["c_addr_region_low"]++;
            else if (addr >= 0x001000 && addr <= 0xEFFFFF) bins["c_addr_region_mid"]++;
            else if (addr >= 0xF00000) bins["c_addr_region_high"]++;
            
            if (!dut->xip_we_i) req_pending = true;
        }

        // 2. Protocol Behaviors
        if (req_pending && dut->xip_rvalid_o) {
            bins["c_read_req_to_rvalid"]++;
            req_pending = false;
        }

        if (csn_prev == 1 && dut->spi_csn_o == 0) {
            bins["c_spi_transaction"]++;
        }
        csn_prev = dut->spi_csn_o;

        if (sck_prev != dut->spi_sck_o) {
            bins["c_spi_clock_toggle"]++;
        }
        sck_prev = dut->spi_sck_o;
    }

    void write(const std::string& test_name);
};

// Global instance accessible by the testbench
extern SpiFlashXipCov func_cov;
