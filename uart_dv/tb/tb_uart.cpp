#include <verilated.h>
#include <verilated_vcd_c.h>
#include "verilated_cov.h"
#include "Vuart.h"

#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>

vluint64_t sim_time = 0;

double sc_time_stamp() {
    return sim_time;
}

class UARTTB {
public:
    Vuart *dut;
    VerilatedVcdC *m_trace;

    std::queue<uint8_t> expected_rx;

    int pass_count = 0;
    int fail_count = 0;

    // -------------------------
    // Functional coverage bins
    // -------------------------
    int cov_tx_single = 0;
    int cov_tx_multi  = 0;

    int cov_rx_single = 0;
    int cov_rx_multi  = 0;
    int cov_rx_random = 0;

    int cov_reset_basic = 0;
    int cov_reset_mid   = 0;

    int cov_fifo = 0;

    UARTTB() {
        dut = new Vuart;
        Verilated::traceEverOn(true);

        m_trace = new VerilatedVcdC;
        dut->trace(m_trace, 5);
        m_trace->open("waves/uart.vcd");
    }

    ~UARTTB() {
        m_trace->close();
        delete dut;
    }

    void tick() {
        dut->clk_i = 0;
        dut->eval();
        m_trace->dump(sim_time++);

        dut->clk_i = 1;
        dut->eval();
        m_trace->dump(sim_time++);
    }

    // -------------------------
    // RESET
    // -------------------------
    void reset() {
        dut->rst_ni = 0;

        dut->device_req_i = 0;
        dut->device_we_i = 0;
        dut->device_be_i = 0;
        dut->device_addr_i = 0;
        dut->device_wdata_i = 0;
        dut->uart_rx_i = 1;

        for(int i = 0; i < 20; i++)
            tick();

        dut->rst_ni = 1;

        cov_reset_basic++;
    }

    // -------------------------
    // MMIO WRITE
    // -------------------------
    void mmio_write(uint32_t addr, uint32_t data) {
        dut->device_req_i = 1;
        dut->device_we_i = 1;
        dut->device_be_i = 1;
        dut->device_addr_i = addr;
        dut->device_wdata_i = data;

        tick();

        dut->device_req_i = 0;
        dut->device_we_i = 0;

        tick();
    }

    // -------------------------
    // MMIO READ
    // -------------------------
    uint32_t mmio_read(uint32_t addr) {
        dut->device_req_i = 1;
        dut->device_we_i = 0;
        dut->device_be_i = 1;
        dut->device_addr_i = addr;

        tick();

        uint32_t rdata = dut->device_rdata_o;

        dut->device_req_i = 0;

        tick();

        return rdata;
    }

    // -------------------------
    // UART RX STIMULUS
    // -------------------------
    void uart_rx_byte(uint8_t data) {
        int baud_ticks = 434;

        dut->uart_rx_i = 1;
        for(int i = 0; i < baud_ticks; i++) tick();

        dut->uart_rx_i = 0;
        for(int i = 0; i < baud_ticks; i++) tick();

        for(int b = 0; b < 8; b++) {
            dut->uart_rx_i = (data >> b) & 1;
            for(int i = 0; i < baud_ticks; i++)
                tick();
        }

        dut->uart_rx_i = 1;

        for(int i = 0; i < baud_ticks; i++)
            tick();

        expected_rx.push(data);
    }

    // -------------------------
    // CHECK RX
    // -------------------------
    void check_rx_data() {
        if(expected_rx.empty())
            return;

        uint32_t rdata = mmio_read(0x0);

        uint8_t actual = rdata & 0xFF;
        uint8_t expected = expected_rx.front();

        expected_rx.pop();

        if(actual == expected) {
            std::cout << "[PASS] RX Match : " << std::hex << (int)actual << std::endl;
            pass_count++;
        } else {
            std::cout << "[FAIL] exp=" << std::hex << (int)expected
                      << " got=" << (int)actual << std::endl;
            fail_count++;
        }
    }

    // -------------------------
    // TESTS
    // -------------------------
    void test_basic_rx() {
        std::cout << "\n[TEST] BASIC RX\n";
        uart_rx_byte(0x55);
        check_rx_data();
        cov_rx_single++;
    }

    void test_basic_tx() {
        std::cout << "\n[TEST] BASIC TX\n";
        mmio_write(0x4, 0xA5);
        cov_tx_single++;

        mmio_write(0x4, 0x11);
        mmio_write(0x4, 0x22);
        cov_tx_multi++;

        for(int i = 0; i < 8000; i++)
            tick();

        std::cout << "[INFO] TX completed\n";
    }

    void test_random_rx() {
        std::cout << "\n[TEST] RANDOM RX\n";
        for(int i = 0; i < 20; i++) {
            uint8_t d = rand() & 0xFF;
            uart_rx_byte(d);
            check_rx_data();
        }
        cov_rx_random++;
        cov_rx_multi++;
    }

    void test_fifo_stress() {
        std::cout << "\n[TEST] FIFO STRESS\n";
        for(int i = 0; i < 50; i++)
            uart_rx_byte(i);

        for(int i = 0; i < 50; i++)
            check_rx_data();

        cov_fifo++;
    }

    void test_reset_mid_transaction() {
        std::cout << "\n[TEST] RESET MID TRANSACTION\n";
        uart_rx_byte(0xAA);
        tick();
        reset();
        cov_reset_mid++;
    }

    // -------------------------
    // FUNCTIONAL COVERAGE PERCENTAGE
    // -------------------------
    int functional_coverage() const {
        int total = 8; // number of coverage items
        int hit = 0;

        hit += (cov_tx_single > 0);
        hit += (cov_tx_multi  > 0);

        hit += (cov_rx_single > 0);
        hit += (cov_rx_multi  > 0);
        hit += (cov_rx_random > 0);

        hit += (cov_reset_basic > 0);
        hit += (cov_reset_mid   > 0);

        hit += (cov_fifo > 0);

        return (hit * 100) / total;
    }

    // -------------------------
    // REPORT
    // -------------------------
    void report() {
        std::cout << "\n========================\n";
        std::cout << "PASS COUNT : " << pass_count << "\n";
        std::cout << "FAIL COUNT : " << fail_count << "\n";

        std::cout << "\nFunctional Coverage\n";
        std::cout << "TX single : " << cov_tx_single << "\n";
        std::cout << "TX multi  : " << cov_tx_multi << "\n";
        std::cout << "RX single : " << cov_rx_single << "\n";
        std::cout << "RX multi  : " << cov_rx_multi << "\n";
        std::cout << "RX random : " << cov_rx_random << "\n";
        std::cout << "RESET basic : " << cov_reset_basic << "\n";
        std::cout << "RESET mid   : " << cov_reset_mid << "\n";
        std::cout << "FIFO stress : " << cov_fifo << "\n";

        std::cout << "\nTOTAL FUNCTIONAL COVERAGE = "
                  << functional_coverage() << "%\n";

        std::cout << "========================\n";
    }
};

// -------------------------
// MAIN
// -------------------------
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    srand(time(NULL));

    UARTTB tb;

    tb.reset();

    tb.test_basic_rx();
    tb.test_basic_tx();
    tb.test_random_rx();
    tb.test_fifo_stress();
    tb.test_reset_mid_transaction();

    tb.report();

    VerilatedCov::write("obj_dir/Vuart_coverage.dat");

    return 0;
}
