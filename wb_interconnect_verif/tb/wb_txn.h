#pragma once

#include <cstdint>

enum class wb_slave_t {
    NONE,
    BOOTROM,
    SRAM,
    UART,
    GPIO,
    TIMER,
    I2C,
    XIP,
    SPICTRL,
    SPIHOST
};

struct wb_txn {

    uint32_t addr;
    uint32_t wdata;
    uint32_t rdata;

    uint8_t  we;
    uint8_t  sel;

    uint8_t  ack;
    uint8_t  is_error;

    wb_slave_t slave;
};
