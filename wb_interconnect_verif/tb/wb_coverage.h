#pragma once

#include "wb_txn.h"



// ============================================================
// FUNCTIONAL COVERAGE CLASS
// ============================================================

class WBCoverage
{
public:

    // ========================================================
    // CONSTRUCTOR
    // ========================================================

    WBCoverage();

    // ========================================================
    // COVERAGE API
    // ========================================================

    void sample(const wb_txn& txn);

    void report();

private:

    // ========================================================
    // SLAVE COVERAGE
    // ========================================================

    int bootrom_accesses;
    int sram_accesses;
    int uart_accesses;
    int gpio_accesses;
    int timer_accesses;
    int i2c_accesses;
    int xip_accesses;

    // ========================================================
    // OPERATION COVERAGE
    // ========================================================

    int read_transactions;
    int write_transactions;

    // ========================================================
    // RESPONSE COVERAGE
    // ========================================================

    int ack_count;
    int error_count;

    // ========================================================
    // ADDRESS COVERAGE
    // ========================================================

    int valid_addresses;
    int invalid_addresses;

    // ========================================================
    // SCENARIO COVERAGE
    // ========================================================

    int back_to_back_transactions;

    bool previous_transaction_valid;
};

// ============================================================
// GLOBAL COVERAGE OBJECT
// ============================================================

extern WBCoverage coverage;
