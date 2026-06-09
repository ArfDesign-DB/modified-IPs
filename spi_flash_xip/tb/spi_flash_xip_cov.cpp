#include "spi_flash_xip_cov.h"
#include <fstream>
#include <iostream>

SpiFlashXipCov func_cov;

void SpiFlashXipCov::write(const std::string& test_name) {
    std::string filename = "../coverage/" + test_name + "_functional_coverage.json";
    std::ofstream out(filename);
    
    if (out.is_open()) {
        out << "{\n";
        bool first = true;
        
        for (auto const& [name, val] : bins) {
            if (!first) out << ",\n";
            out << "  \"" << name << "\": " << val;
            first = false;
        }
        
        out << "\n}\n";
        out.close();
        std::cout << "[COVERAGE] Written Functional Coverage: " << filename << "\n";
    } else {
        std::cerr << "[ERROR] Could not write functional coverage to " << filename << "\n";
    }
}
