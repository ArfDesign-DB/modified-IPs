#include "tb_common.h"
#include <array>
#include <cstddef>
#include <iostream>

#define TEST_ID "TC_SRAM_CON_008_MEMORY_MAP"

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    Vtb_top* top = new Vtb_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave_tc_008.vcd");

    TB tb(top, tfp);

    tb.reset();

    const std::array<uint32_t, 3> valid_sram_addrs = {{
        SRAM_BASE,
        SRAM_BASE + 0x4,
        SRAM_BASE + SRAM_SIZE - 4
    }};

    for (std::size_t i = 0; i < valid_sram_addrs.size(); i++) {
        const uint32_t data = 0xA5000000 | static_cast<uint32_t>(i);

        tb.write(valid_sram_addrs[i], data);
        assert(tb.read(valid_sram_addrs[i]) == data);
    }

    const std::array<uint32_t, 11> non_sram_addrs = {{
        MemoryMap::BOOT_ROM_BASE,
        MemoryMap::BOOT_ROM_BASE + MemoryMap::BOOT_ROM_SIZE - 4,
        0x00101000, // Previous SRAM base; now unmapped after moving SRAM.
        MemoryMap::AFTER_SRAM_ADDR,
        MemoryMap::SPI_FLASH_BASE,
        MemoryMap::UART_BASE,
        MemoryMap::GPIO_BASE,
        MemoryMap::RV_TIMER_BASE,
        MemoryMap::SPI_CONTROL_BASE,
        MemoryMap::I2C_BASE,
        MemoryMap::SPI_HOST_BASE
    }};

    for (uint32_t addr : non_sram_addrs)
        tb.invalid_access(addr);

    std::cout << "[" TEST_ID "] PASS\n";

    tb.print_functional_coverage();

    tb.save_functional_coverage(
                    "functional_coverage_tc_008.json");

    tb.save_coverage(
                    "code_coverage_tc_008.dat");

    tfp->close();
    delete tfp;
    delete top;
}
