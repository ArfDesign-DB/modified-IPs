#include "verilated.h"
#include "verilated_cov.h"
#include "spi_flash_xip_cov.h"
#include <iostream>
#include <string>

vluint64_t sim_time = 0;

double sc_time_stamp() {
    return sim_time;
}

struct CoverageInit {
    CoverageInit() {
        Verilated::traceEverOn(true); 
        std::cout << "[COVERAGE] Enabled Verilator coverage\n";
    }
};

static CoverageInit coverage_init;

void write_coverage(const std::string& test_name) {
    std::string dir = "../coverage";
    
    // 1. Output Verilator Structural Code Coverage
    std::string code_file = dir + "/" + test_name + "_code_coverage.dat";
    VerilatedCov::write(code_file.c_str());
    std::cout << "[COVERAGE] Written Code Coverage: " << code_file << std::endl;

    // 2. Output Custom C++ Functional Coverage
    func_cov.write(test_name);
}
