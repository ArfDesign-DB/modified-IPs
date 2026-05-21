#pragma once
#include <cstdlib>

class UartTests {
public:

    virtual void uart_rx_byte(uint8_t d) = 0;
    virtual uint32_t mmio_read(uint32_t a) = 0;
    virtual void mmio_write(uint32_t a, uint32_t d) = 0;

    void test_basic_rx() {
        uart_rx_byte(0x55);
    }

    void test_basic_tx() {
        mmio_write(0x4, 0xA5);
    }

    void test_random_rx() {
        for(int i=0;i<10;i++) {
            uart_rx_byte(rand() & 0xFF);
        }
    }
};
