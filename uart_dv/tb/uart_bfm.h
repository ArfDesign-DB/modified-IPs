#pragma once
#include <cstdint>
#include <queue>

class UartBFM {
public:
    virtual void mmio_write(uint32_t addr, uint32_t data) = 0;
    virtual uint32_t mmio_read(uint32_t addr) = 0;
    virtual void tick() = 0;

    int baud = 434;

    void send_byte(uint8_t data) {
        // start bit
        drive_rx(0);
        for(int i=0;i<baud;i++) tick();

        // data bits
        for(int b=0;b<8;b++) {
            drive_rx((data >> b) & 1);
            for(int i=0;i<baud;i++) tick();
        }

        // stop bit
        drive_rx(1);
        for(int i=0;i<baud;i++) tick();
    }

    virtual void drive_rx(int val) = 0;
};
