#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>

#include "Vobi2wb.h"
#include "verilated_vcd_c.h"

extern vluint64_t sim_time;

void tick(
    Vobi2wb* dut,
    VerilatedVcdC* tfp);

class driver
{
public:

    //==========================================================
    // WRITE
    //==========================================================

    void obi_write(
        Vobi2wb* dut,
        VerilatedVcdC* tfp,
        uint32_t addr,
        uint32_t data)
    {
        obi_write_be(
            dut,
            tfp,
            addr,
            data,
            0xF);
    }

    //==========================================================
    // WRITE WITH BYTE ENABLE
    //==========================================================

    void obi_write_be(
        Vobi2wb* dut,
        VerilatedVcdC* tfp,
        uint32_t addr,
        uint32_t data,
        uint8_t be)
    {
    
     tick(dut, tfp);
        std::cout
            << "\n[DRV] WRITE"
            << " addr=0x" << std::hex << addr
            << " data=0x" << data
            << " be=0x"   << (int)be
            << std::endl;

        dut->obi_addr_i  <= addr;

        dut->obi_wdata_i <= data;

        dut->obi_we_i    <= 1;

        dut->obi_be_i    <= be;

        dut->obi_req_i   <= 1;

        // WAIT GNT
        do {
            tick(dut, tfp);
            //std::cout
            //<< "\n[DRV] waiting for the Grant"
            //<< std::endl;
        }
        while(!dut->obi_gnt_o);

        dut->obi_req_i = 0;

        tick(dut, tfp);

        // WAIT RVALID
        do {
            tick(dut, tfp);
        }
        while(!dut->obi_rvalid_o);

        tick(dut, tfp);
    }

    //==========================================================
    // READ
    //==========================================================

    void obi_read(
        Vobi2wb* dut,
        VerilatedVcdC* tfp,
        uint32_t addr)
    {
        std::cout
            << "\n[DRV] READ"
            << " addr=0x" << std::hex << addr
            << std::endl;

        dut->obi_addr_i  = addr;

        dut->obi_wdata_i = 0;

        dut->obi_we_i    = 0;

        dut->obi_be_i    = 0xF;

        dut->obi_req_i   = 1;

        // WAIT GNT
        do {
            tick(dut, tfp);
        }
        while(!dut->obi_gnt_o);
        
        std::cout
            << "\n[DRV] obi_gnt_o"
            << " obi_gnt_o=0x" << std::hex << dut->obi_gnt_o
            << std::endl;

        dut->obi_req_i = 0;

        tick(dut, tfp);

        // WAIT RVALID
        do {
            tick(dut, tfp);
        }
        while(!dut->obi_rvalid_o);

        std::cout
            << "[DRV] READ DATA = 0x"
            << std::hex
            << dut->obi_rdata_o
            << std::endl;

        tick(dut, tfp);
    }
};

#endif
