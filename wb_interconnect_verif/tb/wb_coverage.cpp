#include "wb_coverage.h"

#include <iostream>

// ============================================================
// GLOBAL COVERAGE OBJECT
// ============================================================

WBCoverage coverage;

// ============================================================
// CONSTRUCTOR
// ============================================================

WBCoverage::WBCoverage()
{
    bootrom_accesses = 0;
    sram_accesses    = 0;
    uart_accesses    = 0;
    gpio_accesses    = 0;
    timer_accesses   = 0;
    i2c_accesses     = 0;
    xip_accesses     = 0;

    read_transactions  = 0;
    write_transactions = 0;

    ack_count   = 0;
    error_count = 0;

    valid_addresses   = 0;
    invalid_addresses = 0;

    back_to_back_transactions = 0;

    previous_transaction_valid = false;
}

// ============================================================
// SAMPLE FUNCTION
// ============================================================

void WBCoverage::sample(const wb_txn& txn)
{
    // ========================================================
    // SLAVE COVERAGE
    // ========================================================

    switch (txn.slave)
    {
        case wb_slave_t::BOOTROM:
            bootrom_accesses++;
            break;

        case wb_slave_t::SRAM:
            sram_accesses++;
            break;

        case wb_slave_t::UART:
            uart_accesses++;
            break;

        case wb_slave_t::GPIO:
            gpio_accesses++;
            break;

        case wb_slave_t::TIMER:
            timer_accesses++;
            break;

        case wb_slave_t::I2C:
            i2c_accesses++;
            break;

        case wb_slave_t::XIP:
            xip_accesses++;
            break;

        default:
            break;
    }

    // ========================================================
    // OPERATION COVERAGE
    // ========================================================

    if (txn.we)
        write_transactions++;
    else
        read_transactions++;

    // ========================================================
    // RESPONSE COVERAGE
    // ========================================================

    if (txn.ack)
        ack_count++;

    if (txn.is_error)
        error_count++;

    // ========================================================
    // ADDRESS COVERAGE
    // ========================================================

    if (txn.is_error)
        invalid_addresses++;
    else
        valid_addresses++;

    // ========================================================
    // SCENARIO COVERAGE
    // ========================================================

    if (previous_transaction_valid)
        back_to_back_transactions++;

    previous_transaction_valid = true;
}

// ============================================================
// REPORT FUNCTION
// ============================================================

void WBCoverage::report()
{
    std::cout << "\n=========================================\n";
    std::cout << "FUNCTIONAL COVERAGE REPORT\n";
    std::cout << "=========================================\n";

    // ========================================================
    // SLAVE COVERAGE
    // ========================================================

    std::cout << "\n[SLAVE COVERAGE]\n";

    std::cout << "BOOTROM Accesses : "
              << bootrom_accesses << "\n";

    std::cout << "SRAM Accesses    : "
              << sram_accesses << "\n";

    std::cout << "UART Accesses    : "
              << uart_accesses << "\n";

    std::cout << "GPIO Accesses    : "
              << gpio_accesses << "\n";

    std::cout << "TIMER Accesses   : "
              << timer_accesses << "\n";

    std::cout << "I2C Accesses     : "
              << i2c_accesses << "\n";

    std::cout << "XIP Accesses     : "
              << xip_accesses << "\n";

    // ========================================================
    // OPERATION COVERAGE
    // ========================================================

    std::cout << "\n[OPERATION COVERAGE]\n";

    std::cout << "READ Transactions  : "
              << read_transactions << "\n";

    std::cout << "WRITE Transactions : "
              << write_transactions << "\n";

    // ========================================================
    // RESPONSE COVERAGE
    // ========================================================

    std::cout << "\n[RESPONSE COVERAGE]\n";

    std::cout << "ACK Count   : "
              << ack_count << "\n";

    std::cout << "ERROR Count : "
              << error_count << "\n";

    // ========================================================
    // ADDRESS COVERAGE
    // ========================================================

    std::cout << "\n[ADDRESS COVERAGE]\n";

    std::cout << "VALID Addresses   : "
              << valid_addresses << "\n";

    std::cout << "INVALID Addresses : "
              << invalid_addresses << "\n";

    // ========================================================
    // SCENARIO COVERAGE
    // ========================================================

    std::cout << "\n[SCENARIO COVERAGE]\n";

    std::cout << "BACK_TO_BACK Transactions : "
              << back_to_back_transactions << "\n";

    // ========================================================
    // FUNCTIONAL COVERAGE PERCENTAGE
    // ========================================================

    int covered_bins = 0;

    if (bootrom_accesses  > 0) covered_bins++;
    if (sram_accesses     > 0) covered_bins++;
    if (uart_accesses     > 0) covered_bins++;
    if (gpio_accesses     > 0) covered_bins++;
    if (timer_accesses    > 0) covered_bins++;
    if (i2c_accesses      > 0) covered_bins++;
    if (xip_accesses      > 0) covered_bins++;

    if (read_transactions  > 0) covered_bins++;
    if (write_transactions > 0) covered_bins++;

    if (ack_count   > 0) covered_bins++;
    if (error_count > 0) covered_bins++;

    if (valid_addresses   > 0) covered_bins++;
    if (invalid_addresses > 0) covered_bins++;

    if (back_to_back_transactions > 0) covered_bins++;

    int total_bins = 14;

    float coverage_percentage =
        (static_cast<float>(covered_bins) /
         static_cast<float>(total_bins)) * 100.0f;

    std::cout << "\n[FUNCTIONAL COVERAGE SUMMARY]\n";

    std::cout << "Covered Bins : "
              << covered_bins
              << " / "
              << total_bins
              << "\n";

    std::cout << "Coverage     : "
              << coverage_percentage
              << "%\n";

    std::cout << "\n=========================================\n";
}
