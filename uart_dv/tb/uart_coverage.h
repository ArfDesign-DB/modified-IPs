#pragma once
#include <iostream>

struct UartCoverage {

    // reset scenarios
    bool reset_basic = false;
    bool reset_mid_transaction = false;

    // TX scenarios
    bool tx_single_write = false;
    bool tx_back_to_back = false;
    bool tx_burst = false;

    // RX scenarios
    bool rx_single_byte = false;
    bool rx_multiple_bytes = false;
    bool rx_random_bytes = false;

    // FIFO / stress
    bool fifo_stress = false;
    bool fifo_boundary = false;

    int functional_coverage() const {
        int hit = 0;
int total = 7;
        hit += reset_basic;
        hit += reset_mid_transaction;

        hit += tx_single_write;
        hit += tx_back_to_back;
        hit += tx_burst;

        hit += rx_single_byte;
        hit += rx_multiple_bytes;
        hit += rx_random_bytes;

        hit += fifo_stress;
        hit += fifo_boundary;

        return (hit * 100) / TOTAL_BINS;
    }

    void report() {
        std::cout << "\n====================\n";
        std::cout << "FUNCTIONAL COVERAGE\n";
        std::cout << "====================\n\n";

        std::cout << "reset_basic           : " << reset_basic << "\n";
        std::cout << "reset_mid_transaction : " << reset_mid_transaction << "\n\n";

        std::cout << "tx_single_write       : " << tx_single_write << "\n";
        std::cout << "tx_back_to_back       : " << tx_back_to_back << "\n";
 //       std::cout << "tx_burst              : " << tx_burst << "\n\n";

        std::cout << "rx_single_byte        : " << rx_single_byte << "\n";
        std::cout << "rx_multiple_bytes     : " << rx_multiple_bytes << "\n";
        std::cout << "rx_random_bytes       : " << rx_random_bytes << "\n\n";

        std::cout << "fifo_stress           : " << fifo_stress << "\n";
   //     std::cout << "fifo_boundary         : " << fifo_boundary << "\n\n";

        std::cout << "TOTAL FUNCTIONAL COVERAGE = "
                  << score() << "%\n";

        std::cout << "====================\n";
    }
};
