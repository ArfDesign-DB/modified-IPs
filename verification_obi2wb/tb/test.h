#ifndef TESTS_H
#define TESTS_H

//==============================================================
// INCLUDES
//==============================================================

#include <iostream>
#include <cstdlib>

#include "driver.h"

//==============================================================
// TEST 1 : BASIC READ WRITE
//==============================================================

inline void test_basic_rw(
    driver& drv,
    Vobi2wb* dut,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n====================================\n"
        << " TEST : BASIC READ WRITE\n"
        << "====================================\n";

    // WRITE
    drv.obi_write(
        dut,
        tfp,
        0x00000004,
        0x11111111);

    // READ
    drv.obi_read(
        dut,
        tfp,
        0x00000004);
}

//==============================================================
// TEST 2 : BACK TO BACK WRITES
//==============================================================

inline void test_back_to_back(
    driver& drv,
    Vobi2wb* dut,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n====================================\n"
        << " TEST : BACK TO BACK\n"
        << "====================================\n";

    drv.obi_write(
        dut,
        tfp,
        0x00001000,
        0xAAAA1111);

    drv.obi_write(
        dut,
        tfp,
        0x00001004,
        0xBBBB2222);

    drv.obi_write(
        dut,
        tfp,
        0x00001008,
        0xCCCC3333);

    drv.obi_read(
        dut,
        tfp,
        0x00001000);

    drv.obi_read(
        dut,
        tfp,
        0x00001004);

    drv.obi_read(
        dut,
        tfp,
        0x00001008);
}

//==============================================================
// TEST 3 : BYTE ENABLE TEST
//==============================================================

inline void test_byte_enable(
    driver& drv,
    Vobi2wb* dut,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n====================================\n"
        << " TEST : BYTE ENABLE\n"
        << "====================================\n";

    drv.obi_write_be(
        dut,
        tfp,
        0x00002000,
        0x000000AA,
        0x1);

    drv.obi_read(
        dut,
        tfp,
        0x00002000);
}

//==============================================================
// TEST 4 : RANDOM TEST
//==============================================================

inline void test_random(
    driver& drv,
    Vobi2wb* dut,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n====================================\n"
        << " TEST : RANDOM\n"
        << "====================================\n";

    for(int i=0; i<20; i++)
    {
        bool we =
            rand() % 2;

        uint32_t addr =
            (rand() % 256) << 2;

        uint32_t data =
            rand();

        uint8_t be =
            (rand() % 15) + 1;

        if(we)
        {
            drv.obi_write_be(
                dut,
                tfp,
                addr,
                data,
                be);
        }
        else
        {
            drv.obi_read(
                dut,
                tfp,
                addr);
        }
    }
}

//==============================================================
// TEST 5 : STRESS TEST
//==============================================================

inline void test_stress(
    driver& drv,
    Vobi2wb* dut,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n====================================\n"
        << " TEST : STRESS\n"
        << "====================================\n";

    for(int i=0; i<1000; i++)
    {
        bool we =
            rand() % 2;

        uint32_t addr =
            (rand() % 1024) << 2;

        uint32_t data =
            rand();

        if(we)
        {
            drv.obi_write(
                dut,
                tfp,
                addr,
                data);
        }
        else
        {
            drv.obi_read(
                dut,
                tfp,
                addr);
        }
    }
}

//==============================================================
// TEST 6 : SAME ADDRESS ACCESS
//==============================================================

inline void test_same_address(
    driver& drv,
    Vobi2wb* dut,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n====================================\n"
        << " TEST : SAME ADDRESS ACCESS\n"
        << "====================================\n";

    uint32_t addr = 0x3000;

    for(int i=0; i<10; i++)
    {
        drv.obi_write(
            dut,
            tfp,
            addr,
            i);

        drv.obi_read(
            dut,
            tfp,
            addr);
    }
}

//==============================================================
// TEST 7 : ADDRESS SWEEP
//==============================================================

inline void test_address_sweep(
    driver& drv,
    Vobi2wb* dut,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n====================================\n"
        << " TEST : ADDRESS SWEEP\n"
        << "====================================\n";

    // WRITE PHASE
    for(uint32_t addr=0; addr<256; addr+=4)
    {
        drv.obi_write(
            dut,
            tfp,
            addr,
            addr + 0x12340000);
    }

    // READ PHASE
    for(uint32_t addr=0; addr<256; addr+=4)
    {
        drv.obi_read(
            dut,
            tfp,
            addr);
    }
}

#endif
