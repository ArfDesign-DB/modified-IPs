#pragma once

#include "memory_map.h"

#include <cstdint>
#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>

class CoverageManager {

public:

    std::map<std::string, uint64_t> bins;

    static constexpr uint32_t BOOT_ROM_BASE     = 0x00100000;
    static constexpr uint32_t BOOT_ROM_SIZE     = 0x00001000;
    static constexpr uint32_t SRAM_BASE         = 0x00101000;
    static constexpr uint32_t SRAM_SIZE         = 0x00002000;
    static constexpr uint32_t SPI_FLASH_BASE    = 0x20000000;
    static constexpr uint32_t SPI_FLASH_SIZE    = 0x10000000;
    static constexpr uint32_t UART_BASE         = 0x40000000;
    static constexpr uint32_t GPIO_BASE         = 0x40000100;
    static constexpr uint32_t RV_TIMER_BASE     = 0x40000200;
    static constexpr uint32_t SPI_CONTROL_BASE  = 0x40000300;
    static constexpr uint32_t I2C_BASE          = 0x40000400;
    static constexpr uint32_t SPI_HOST_BASE     = 0x40000500;
    static constexpr uint32_t PERIPHERAL_SIZE   = 0x00000100;

    // =====================================================
    // READ / WRITE COVERAGE
    // =====================================================

    void sample_rw(bool we) {

        if (we)
            bins["WRITE"]++;
        else
            bins["READ"]++;
    }

    // =====================================================
    // BYTE ENABLE COVERAGE
    // =====================================================

    void sample_byte_enable(uint8_t sel) {

        switch(sel) {

            case 0x1: bins["BYTE0"]++; break;
            case 0x2: bins["BYTE1"]++; break;
            case 0x4: bins["BYTE2"]++; break;
            case 0x8: bins["BYTE3"]++; break;

            case 0x3: bins["HALFWORD_LOW"]++; break;
            case 0xC: bins["HALFWORD_HIGH"]++; break;

            case 0xF: bins["FULL_WORD"]++; break;

            default:
                bins["OTHER_SEL"]++;
                break;
        }
    }

    // =====================================================
    // ADDRESS COVERAGE
    // =====================================================

    void sample_address(uint32_t addr) {

        if (in_range(addr, MemoryMap::SRAM_BASE, MemoryMap::SRAM_SIZE)) {
            uint32_t local_addr = addr - MemoryMap::SRAM_BASE;

            bins["SRAM_ADDR"]++;

            if (local_addr == 0x0000)
                bins["SRAM_FIRST_WORD"]++;

            if (local_addr == MemoryMap::SRAM_SIZE - 4)
                bins["SRAM_LAST_WORD"]++;

            if (local_addr <= 0x1F)
                bins["LOW_ADDR"]++;

            else if (local_addr >= 0x100 && local_addr <= 0x1FF)
                bins["MID_ADDR"]++;

            else if (local_addr >= 0x1F00 && local_addr <= 0x1FFC)
                bins["HIGH_ADDR"]++;
        }
        else {
            bins["INVALID_ADDR"]++;
            sample_memory_map_region(addr);
        }
    }


    // =====================================================
    // CROSS COVERAGE
    // =====================================================

    void sample_cross_rw_sel(bool we, uint8_t sel) {

        std::string rw = we ? "WRITE_" : "READ_";

        switch(sel) {

            case 0x1: bins[rw + "BYTE0"]++; break;
            case 0x2: bins[rw + "BYTE1"]++; break;
            case 0x4: bins[rw + "BYTE2"]++; break;
            case 0x8: bins[rw + "BYTE3"]++; break;
            case 0xF: bins[rw + "FULLWORD"]++; break;

            default:
                bins[rw + "OTHER"]++;
                break;
        }
    }

    // =====================================================
    // REPORT
    // =====================================================

    void report() {

        std::cout << "\n";
        std::cout << "========================================\n";
        std::cout << " FUNCTIONAL COVERAGE REPORT\n";
        std::cout << "========================================\n";

        for (const auto &b : bins) {

            std::cout
                << std::setw(25)
                << std::left
                << b.first
                << " : "
                << b.second
                << "\n";
        }

        std::cout << "========================================\n";
    }

    // =====================================================
    // EXPORT
    // =====================================================

    void export_report(const std::string &fname) {

        std::ofstream ofs(fname);

        ofs << "{\n";

        bool first = true;

        for (const auto &b : bins) {

            if (!first)
                ofs << ",\n";

            ofs << "  \"" << b.first << "\" : " << b.second;

            first = false;
        }

        ofs << "\n}\n";

        ofs.close();
    }

private:

    static bool in_range(
        uint32_t addr,
        uint32_t base,
        uint32_t size) {

        return (addr >= base) && (addr < base + size);
    }

    void sample_memory_map_region(uint32_t addr) {

        if (in_range(addr, MemoryMap::BOOT_ROM_BASE, MemoryMap::BOOT_ROM_SIZE))
            bins["BOOT_ROM_ADDR"]++;

        else if (in_range(addr, MemoryMap::SPI_FLASH_BASE, MemoryMap::SPI_FLASH_SIZE))
            bins["SPI_FLASH_XIP_ADDR"]++;

        else if (in_range(addr, MemoryMap::UART_BASE, MemoryMap::PERIPHERAL_SIZE))
            bins["UART_ADDR"]++;

        else if (in_range(addr, MemoryMap::GPIO_BASE, MemoryMap::PERIPHERAL_SIZE))
            bins["GPIO_ADDR"]++;

        else if (in_range(addr, MemoryMap::RV_TIMER_BASE, MemoryMap::PERIPHERAL_SIZE))
            bins["RV_TIMER_ADDR"]++;

        else if (in_range(addr, MemoryMap::SPI_CONTROL_BASE, MemoryMap::PERIPHERAL_SIZE))
            bins["SPI_CONTROL_ADDR"]++;

        else if (in_range(addr, MemoryMap::I2C_BASE, MemoryMap::PERIPHERAL_SIZE))
            bins["I2C_ADDR"]++;

        else if (in_range(addr, MemoryMap::SPI_HOST_BASE, MemoryMap::PERIPHERAL_SIZE))
            bins["SPI_HOST_ADDR"]++;

        else
            bins["UNMAPPED_ADDR"]++;
    }
};
