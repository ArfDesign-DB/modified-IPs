#ifndef MONITOR_H
#define MONITOR_H

#include <iostream>
#include <queue>

#include "transaction.h"
#include "Vobi2wb.h"

//==============================================================
// GLOBAL MAILBOX
//==============================================================

extern std::queue<obi_transaction> mon2sb;

//==============================================================
// MONITOR
//==============================================================

class monitor
{
private:

    bool pending = false;

    obi_transaction tr;

public:

    void sample(Vobi2wb* dut)
    {
        //======================================================
        // CAPTURE REQUEST
        //======================================================

        if(dut->obi_req_i &&
           dut->obi_gnt_o)
        {
            tr.we    = dut->obi_we_i;

            tr.addr  = dut->obi_addr_i;

            tr.wdata = dut->obi_wdata_i;

            tr.be    = dut->obi_be_i;

            pending = true;
        }

        //======================================================
        // CAPTURE RESPONSE
        //======================================================

        if(dut->obi_rvalid_o &&
           pending)
        {
            tr.rdata = dut->obi_rdata_o;

            mon2sb.push(tr);

            pending = false;

            std::cout
                << "\n================ MONITOR ================\n"
                << "ADDR      : 0x" << std::hex << tr.addr << "\n"
                << "WRITE     : " << tr.we << "\n"
                << "WDATA     : 0x" << tr.wdata << "\n"
                << "RDATA     : 0x" << tr.rdata << "\n"
                << "=========================================\n";
        }
    }
};

#endif
