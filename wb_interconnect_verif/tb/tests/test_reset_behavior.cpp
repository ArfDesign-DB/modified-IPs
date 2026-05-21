#include <iostream>
#include "Vwb_interconnect.h"

void test_reset_behavior(Vwb_interconnect* dut) {

    // RESET
    dut->rst_ni = 0;

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    dut->wb_we_i  = 0;
    dut->wb_adr_i = 0;
    dut->wb_sel_i = 0;
    dut->wb_dat_i = 0;

    dut->eval();

    std::cout << "========== RESET STATE ==========\n";
    
    std::cout << "ACK            : " << (int)dut->wb_ack_o << "\n";
    std::cout << "DATA           : 0x" << std::hex << dut->wb_dat_o << std::dec << "\n";

    // PERIPHERAL DECODE SIGNALS
    std::cout << "\n--- PERIPHERAL SELECTS ---\n";
    std::cout << "bootrom_req_o  : " << (int)dut->bootrom_req_o << "\n";
    std::cout << "sram_req_o     : " << (int)dut->sram_req_o << "\n";
    std::cout << "uart_req_o     : " << (int)dut->uart_req_o << "\n";
    std::cout << "gpio_req_o     : " << (int)dut->gpio_req_o << "\n";
    std::cout << "timer_req_o    : " << (int)dut->timer_req_o << "\n";
    std::cout << "spictrl_req_o  : " << (int)dut->spictrl_req_o << "\n";
    std::cout << "i2c_req_o      : " << (int)dut->i2c_req_o << "\n";
    std::cout << "spihost_req_o  : " << (int)dut->spihost_req_o << "\n";
    

    if (dut->wb_ack_o != 0) {
        std::cout << "[FAIL] ACK not zero in reset\n";
    } else {
        std::cout << "[PASS] Reset OK\n";
    }
}
