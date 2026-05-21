#include <iostream>

#include "Vwb_interconnect.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "../tick.h"
#include "../wb_txn.h"
#include "../wb_coverage.h"

// ============================================================
// TEST : UART WRITE
// ============================================================

void test_uart_write(Vwb_interconnect* dut,
                     VerilatedVcdC* trace)
{
    std::cout << "\n========================\n";
    std::cout << "TEST : UART WRITE\n";
    std::cout << "========================\n";

    // ========================================================
    // WRITE REQUEST
    // ========================================================

    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = 1;

    // 🔥 UART address (adjust if your decode differs)
    dut->wb_adr_i = 0x40000000;
    dut->wb_dat_i = 0xA555AAA5;
    dut->wb_sel_i = 0xF;

    tick(dut, trace);

    std::cout << "\n========== WB REQUEST ==========\n";

    std::cout << "CYC   : " << (int)dut->wb_cyc_i << "\n";
    std::cout << "STB   : " << (int)dut->wb_stb_i << "\n";
    std::cout << "WE    : " << (int)dut->wb_we_i  << "\n";

    std::cout << std::hex;
    std::cout << "ADDR  : 0x" << dut->wb_adr_i << "\n";
    std::cout << "WDATA : 0x" << dut->wb_dat_i << "\n";
    std::cout << std::dec;

    std::cout << "SEL   : " << (int)dut->wb_sel_i << "\n";

    // ========================================================
    // UART SIDE SIGNALS
    // ========================================================

    std::cout << "\n========== UART SIDE ==========\n";

    std::cout << "uart_req_o   : "
              << (int)dut->uart_req_o << "\n";

    std::cout << "uart_we_o    : "
              << (int)dut->uart_we_o << "\n";

    std::cout << std::hex;

    std::cout << "uart_addr_o  : 0x"
              << dut->uart_addr_o << "\n";

    std::cout << "uart_wdata_o : 0x"
              << dut->uart_wdata_o << "\n";

    std::cout << std::dec;

    std::cout << "uart_be_o    : "
              << (int)dut->uart_be_o << "\n";

    if (dut->uart_req_o)
        std::cout << "[UART SELECTED]\n";

    // ========================================================
    // SLAVE RESPONSE
    // ========================================================

    dut->sram_rvalid_i = 1;

    tick(dut, trace);

    std::cout << "\n========== WB RESPONSE ==========\n";

    std::cout << "ACK   : "
              << (int)dut->wb_ack_o << "\n";
              
    // ========================================================
    // FUNCTIONAL COVERAGE SAMPLING
    // ========================================================

    wb_txn txn;

    txn.addr      = dut->wb_adr_i;
    txn.wdata     = dut->wb_dat_i;
    txn.rdata     = dut->wb_dat_o;

    txn.we        = dut->wb_we_i;
    txn.sel       = dut->wb_sel_i;

    txn.ack       = dut->wb_ack_o;
    txn.is_error  = 0;

    txn.slave     = wb_slave_t::UART;

    coverage.sample(txn);

    // ========================================================
    // CLEANUP
    // ========================================================

    dut->uart_rvalid_i = 0;

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    dut->wb_we_i  = 0;

    tick(dut, trace);
}
