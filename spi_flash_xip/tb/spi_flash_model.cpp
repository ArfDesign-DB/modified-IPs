#pragma once
#include <cstdint>

struct SpiFlashModel {
    uint32_t mem[1 << 16] = {0};

    uint8_t shift_reg = 0;
    int bit_cnt = 0;

    enum State { IDLE, CMD, ADDR, DATA } state = IDLE;

    uint32_t addr = 0;
    int addr_cnt = 0;

    uint8_t read_byte(uint32_t a) {
        return (mem[a & 0xFFFF] & 0xFF);
    }

    void step(bool sck, bool csn, bool mosi, bool &miso) {

        if (csn) {
            state = IDLE;
            bit_cnt = 0;
            miso = 0;
            return;
        }

        // sample on SCK falling edge behavior (simplified)
        if (!sck) return;

        switch (state) {

        case IDLE:
            shift_reg = (shift_reg << 1) | mosi;
            bit_cnt++;
            if (bit_cnt == 8) {
                if (shift_reg == 0x03) {
                    state = ADDR;
                    addr = 0;
                    addr_cnt = 0;
                }
                bit_cnt = 0;
                shift_reg = 0;
            }
            break;

        case ADDR:
            addr = (addr << 1) | mosi;
            bit_cnt++;
            if (bit_cnt == 24) {
                state = DATA;
                bit_cnt = 0;
            }
            break;

        case DATA:
            miso = read_byte(addr++);
            break;
        }
    }
};
