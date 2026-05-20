//=========================================================
// gpio_cov.hpp
// Advanced Functional + Transition Coverage for GPIO TB
//=========================================================

#ifndef GPIO_COV_HPP
#define GPIO_COV_HPP

#include <iostream>
#include <iomanip>
#include <set>
#include <map>
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
    // Transition Coverage
    // =====================================================

    std::set<std::pair<uint32_t,uint32_t>>
        gpio_transitions;

    std::set<int> rising_edge_bits;
    std::set<int> falling_edge_bits;

    std::set<int> toggled_bits;

    int single_bit_toggles   = 0;
    int multi_bit_toggles    = 0;
    int no_change_transitions = 0;

    int walking_one_transitions  = 0;
    int walking_zero_transitions = 0;

    int alternating_transitions = 0;

    uint32_t prev_gpio_output = 0;
    bool first_sample = true;

    // =====================================================
    // Helper Function
    // =====================================================

    int count_bits(uint32_t x)
    {
        int c = 0;

        while (x) {
            c += (x & 1);
            x >>= 1;
        }

        return c;
    }

    // =====================================================
    // GPIO Transition Sampling
    // =====================================================

    void sample_gpio_transition(uint32_t curr)
    {
        curr &= 0xFFFF;

        // First sample initialization
        if (first_sample) {
            prev_gpio_output = curr;
            first_sample = false;
            return;
        }

        // ---------------------------------------------
        // Store transition
        // ---------------------------------------------

        gpio_transitions.insert(
            {prev_gpio_output, curr}
        );

        // ---------------------------------------------
        // Detect changed bits
        // ---------------------------------------------

        uint32_t diff =
            prev_gpio_output ^ curr;

        // ---------------------------------------------
        // No change transition
        // ---------------------------------------------

        if (diff == 0)
            no_change_transitions++;

        // ---------------------------------------------
        // Single / Multi bit toggles
        // ---------------------------------------------

        int changed_bits =
            count_bits(diff);

        if (changed_bits == 1)
            single_bit_toggles++;

        if (changed_bits > 1)
            multi_bit_toggles++;

        // ---------------------------------------------
        // Per-bit edge coverage
        // ---------------------------------------------

        for (int i = 0; i < 16; i++)
        {
            uint32_t mask = (1u << i);

            bool prev = prev_gpio_output & mask;
            bool now  = curr & mask;

            if (prev != now)
            {
                toggled_bits.insert(i);

                // Rising edge
                if (!prev && now)
                    rising_edge_bits.insert(i);

                // Falling edge
                if (prev && !now)
                    falling_edge_bits.insert(i);
            }
        }

        // ---------------------------------------------
        // Walking-1 transitions
        // ---------------------------------------------

        if (count_bits(prev_gpio_output) == 1 &&
            count_bits(curr) == 1)
        {
            walking_one_transitions++;
        }

        // ---------------------------------------------
        // Walking-0 transitions
        // ---------------------------------------------

        if (count_bits(~prev_gpio_output & 0xFFFF) == 1 &&
            count_bits(~curr & 0xFFFF) == 1)
        {
            walking_zero_transitions++;
        }

        // ---------------------------------------------
        // Alternating pattern transitions
        // ---------------------------------------------

        if ((prev_gpio_output == 0xAAAA &&
             curr == 0x5555) ||

            (prev_gpio_output == 0x5555 &&
             curr == 0xAAAA))
        {
            alternating_transitions++;
        }

        // Update previous value
        prev_gpio_output = curr;
    }

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

        // Cross coverage
        write_addr_be_cross.insert(
            {addr, be}
        );

        // Transition coverage
        sample_gpio_transition(data);

        // Invalid write detection
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
            gpio_input_values.insert(
                data & 0xFF
            );

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

        // -------------------------------------------------
        // Basic Stats
        // -------------------------------------------------

        std::cout << "\nTotal Reads  : "
                  << reads;

        std::cout << "\nTotal Writes : "
                  << writes;

        // -------------------------------------------------
        // Address Coverage
        // -------------------------------------------------

/*        std::cout << "\n\nREAD ADDRESSES COVERED:\n";

        for (auto a : read_addresses)
        {
            std::cout << " 0x"
                      << std::hex
                      << a
                      << std::dec
                      << "\n";
        }

        std::cout << "\nWRITE ADDRESSES COVERED:\n";

        for (auto a : write_addresses)
        {
            std::cout << " 0x"
                      << std::hex
                      << a
                      << std::dec
                      << "\n";
        }

        // -------------------------------------------------
        // Byte Enable Coverage
        // -------------------------------------------------

        std::cout << "\nBYTE ENABLES COVERED:\n";

        for (auto be : byte_enables)
        {
            std::cout << " 0x"
                      << std::hex
                      << (int)be
                      << std::dec
                      << "\n";
        }

        // -------------------------------------------------
        // Cross Coverage
        // -------------------------------------------------

        std::cout << "\nWRITE ADDR x BE CROSS:\n";

        for (auto &x : write_addr_be_cross)
        {
            std::cout << " Addr=0x"
                      << std::hex
                      << x.first
                      << "  BE=0x"
                      << (int)x.second
                      << std::dec
                      << "\n";
        }

        // -------------------------------------------------
        // GPIO Value Coverage
        // -------------------------------------------------

        std::cout << "\nGPIO INPUT VALUES COVERED : "
                  << gpio_input_values.size();

        std::cout << "\nGPIO OUTPUT VALUES COVERED : "
                  << gpio_output_values.size();

        // -------------------------------------------------
        // Invalid Accesses
        // -------------------------------------------------

        std::cout << "\n\nINVALID READS  : "
                  << invalid_reads;

        std::cout << "\nINVALID WRITES : "
                  << invalid_writes;

        // =================================================
        // Transition Coverage
        // =================================================

        std::cout << "\n\n=====================================";
        std::cout << "\n TRANSITION COVERAGE";
        std::cout << "\n=====================================";

        // -------------------------------------------------
        // Transition Statistics
        // -------------------------------------------------

        std::cout << "\n\nUnique transitions : "
                  << gpio_transitions.size();

        std::cout << "\nSingle-bit toggles : "
                  << single_bit_toggles;

        std::cout << "\nMulti-bit toggles  : "
                  << multi_bit_toggles;

        std::cout << "\nNo-change transitions : "
                  << no_change_transitions;

        // -------------------------------------------------
        // Rising Edge Coverage
        // -------------------------------------------------

        std::cout << "\n\nRISING EDGE BITS:\n";

        for (auto b : rising_edge_bits)
        {
            std::cout << " bit[" << b << "]\n";
        }

        // -------------------------------------------------
        // Falling Edge Coverage
        // -------------------------------------------------

        std::cout << "\nFALLING EDGE BITS:\n";

        for (auto b : falling_edge_bits)
        {
            std::cout << " bit[" << b << "]\n";
        }

        // -------------------------------------------------
        // Toggle Coverage
        // -------------------------------------------------

        std::cout << "\nTOGGLED BITS:\n";

        for (auto b : toggled_bits)
        {
            std::cout << " bit[" << b << "]\n";
        }

        // -------------------------------------------------
        // Pattern Transition Coverage
        // -------------------------------------------------

        std::cout << "\nWALKING-1 TRANSITIONS : "
                  << walking_one_transitions;

        std::cout << "\nWALKING-0 TRANSITIONS : "
                  << walking_zero_transitions;

        std::cout << "\nALTERNATING TRANSITIONS : "
                  << alternating_transitions;
*/
        // =================================================
        // Functional Coverage Score
        // =================================================

        int score = 0;
        int total = 0;

        // -------------------------------------------------
        // Valid Read Addresses
        // -------------------------------------------------

        total += 3;

        score += read_addresses.count(0x0);
        score += read_addresses.count(0x4);
        score += read_addresses.count(0x8);

        // -------------------------------------------------
        // Valid Write Address
        // -------------------------------------------------

        total += 1;

        score += write_addresses.count(0x0);

        // -------------------------------------------------
        // Byte Enable Coverage
        // -------------------------------------------------

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
            score += byte_enables.count(be);

        // -------------------------------------------------
        // Edge Coverage
        // -------------------------------------------------

        // -------------------------------------------------
// Rising edge coverage
// -------------------------------------------------

total += 16;
score += rising_edge_bits.size();

// -------------------------------------------------
// Falling edge coverage
// -------------------------------------------------

total += 16;
score += falling_edge_bits.size();

// -------------------------------------------------
// Walking-1 transition coverage
// -------------------------------------------------

total += 1;

if (walking_one_transitions > 0)
    score += 1;

// -------------------------------------------------
// Walking-0 transition coverage
// -------------------------------------------------

total += 1;

if (walking_zero_transitions > 0)
    score += 1;

// -------------------------------------------------
// Alternating transition coverage
// -------------------------------------------------

total += 1;

if (alternating_transitions > 0)
    score += 1;

// -------------------------------------------------
// Single-bit toggle coverage
// -------------------------------------------------

total += 1;

if (single_bit_toggles > 0)
    score += 1;

// -------------------------------------------------
// Multi-bit toggle coverage
// -------------------------------------------------

total += 1;

if (multi_bit_toggles > 0)
    score += 1;

// -------------------------------------------------
// No-change transition coverage
// -------------------------------------------------

total += 1;

if (no_change_transitions > 0)
    score += 1;

        // -------------------------------------------------
        // Coverage Percentage
        // -------------------------------------------------

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
