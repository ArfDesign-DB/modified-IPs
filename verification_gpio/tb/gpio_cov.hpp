#ifndef GPIO_COV_HPP
#define GPIO_COV_HPP

#include <iostream>
#include <iomanip>
#include <set>
#include <cstdint>

class GpioCoverage {
public:

    // =====================================================
    // Basic Coverage
    // =====================================================

    std::set<uint32_t> read_addresses;
    std::set<uint32_t> write_addresses;

    std::set<uint8_t> byte_enables;

    std::set<uint32_t> gpio_input_values;
    std::set<uint32_t> gpio_output_values;

    int invalid_reads  = 0;
    int invalid_writes = 0;

    int reads  = 0;
    int writes = 0;

    // =====================================================
    // Cross Coverage
    // =====================================================

    std::set<std::pair<uint32_t,uint8_t>>
        write_addr_be_cross;

    // =====================================================
    // Sample WRITE transaction
    // =====================================================

    void sample_write(uint32_t addr,
                      uint32_t data,
                      uint8_t  be)
    {
        writes++;

        write_addresses.insert(addr);

        byte_enables.insert(be);

        gpio_output_values.insert(
            data & 0xFFFF
        );

        write_addr_be_cross.insert(
            {addr, be}
        );

        if (addr != 0x0)
            invalid_writes++;
    }

    // =====================================================
    // Sample READ transaction
    // =====================================================

    void sample_read(uint32_t addr,
                     uint32_t data)
    {
        reads++;

        read_addresses.insert(addr);

        if (addr == 0x4 || addr == 0x8)
        {
            gpio_input_values.insert(
                data & 0xFF
            );
        }

        if (addr != 0x0 &&
            addr != 0x4 &&
            addr != 0x8)
        {
            invalid_reads++;
        }
    }

    // =====================================================
    // Direct GPIO Input Sampling
    // =====================================================

    void sample_gpio_input(uint32_t value)
    {
        gpio_input_values.insert(
            value & 0xFF
        );
    }

    // =====================================================
    // Coverage Report
    // =====================================================

    void report()
    {
        std::cout << "\n";
        std::cout << "=====================================\n";
        std::cout << " GPIO FUNCTIONAL COVERAGE REPORT\n";
        std::cout << "=====================================\n";

        std::cout << "\nTotal Reads  : "
                  << reads;

        std::cout << "\nTotal Writes : "
                  << writes;

        int score = 0;
        int total = 0;

        // Read addresses

        total += 3;

        score += read_addresses.count(0x0);
        score += read_addresses.count(0x4);
        score += read_addresses.count(0x8);

        // Write address

        total += 1;

        score += write_addresses.count(0x0);

        // Byte enables

        std::set<uint8_t> expected_be =
        {
            0x1,
            0x2,
            0x4,
            0x8,
            0x3,
            0xC,
            0xF
        };

        total += expected_be.size();

        for (auto be : expected_be)
        {
            score += byte_enables.count(be);
        }

        double cov =
            (100.0 * score) / total;

        std::cout << "\n\nFUNCTIONAL COVERAGE = "
                  << std::fixed
                  << std::setprecision(2)
                  << cov
                  << "%";

        std::cout << "\n=====================================\n";
    }
};

#endif
