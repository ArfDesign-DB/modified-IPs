#include <verilated.h>
#include <verilated_vcd_c.h>

#include "Vgpio.h"

#include <iostream>
#include "gpio_cov.hpp"

extern GpioCoverage cov;
//
// EXTERN TICK FUNCTION
//
extern void tick(Vgpio *dut,
                 VerilatedVcdC *tfp);

//
// RESET
//
void reset(Vgpio *dut,
           VerilatedVcdC *tfp)
{
    dut->rst_ni = 0;

    dut->device_req_i   = 0;
    dut->device_addr_i  = 0;
    dut->device_we_i    = 0;
    dut->device_be_i    = 0xF;
    dut->device_wdata_i = 0;

    dut->gp_i = 0;

    for (int i = 0; i < 5; i++)
        tick(dut, tfp);

    dut->rst_ni = 1;

    tick(dut, tfp);

    std::cout << "[DRIVER] RESET DONE\n";
}

//
// WRITE TRANSACTION
//
void write_gpio(
    Vgpio *dut,
    VerilatedVcdC *tfp,
    uint32_t addr,
    uint32_t data,
    uint8_t be)
{
    dut->device_req_i   = 1;
    dut->device_addr_i  = addr;
    dut->device_we_i    = 1;
    dut->device_be_i    = be;
    dut->device_wdata_i = data;

    tick(dut, tfp);

    dut->device_req_i   = 0;
    dut->device_we_i    = 0;
    dut->device_be_i    = 0xF;
    dut->device_wdata_i = 0;

   // tick(dut, tfp);

     while (!dut->device_rvalid_o)
        tick(dut, tfp);

tick(dut, tfp);

cov.sample_write(addr, data, be);

    std::cout
        << "[WRITE] "
        << "addr=0x"
        << std::hex
        << addr
        << " data=0x"
        << data
        << " be=0x"
        << (int)be
        << std::endl;  
}

//
// READ TRANSACTION
//
uint32_t read_gpio(
    Vgpio *dut,
    VerilatedVcdC *tfp,
    uint32_t addr)
{
    dut->device_req_i  = 1;
    dut->device_addr_i = addr;
    dut->device_we_i   = 0;
    dut->device_be_i   = 0xF;

    tick(dut, tfp);

    while (!dut->device_rvalid_o)
        tick(dut, tfp);

    uint32_t rdata = dut->device_rdata_o;

    dut->device_req_i = 0;

    tick(dut, tfp);
    cov.sample_read(addr,rdata);

    std::cout
        << "[READ ] "
        << "addr=0x"
        << std::hex
        << addr
        << " data=0x"
        << rdata
        << std::endl;

    return rdata;
}
