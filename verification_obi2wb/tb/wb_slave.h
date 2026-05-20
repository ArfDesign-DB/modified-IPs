#ifndef WB_SLAVE_H
#define WB_SLAVE_H

#include <iostream>
#include <cstdint>

#include "Vobi2wb.h"

class wb_slave
{
private:

    uint32_t mem[256];

public:

    wb_slave()
    {
        for(int i=0; i<256; i++)
        {
            mem[i] = 0;
        }
    }

    void run(Vobi2wb* dut)
    {
        dut->wb_ack_i   <= 0;

        dut->wb_stall_i <= 0;

        //======================================================
        // WB REQUEST
        //======================================================
        
       // std::cout
         //           << "In the Wb slave model"
                    
           //         << std::endl;

        if(dut->wb_cyc_o &&
           dut->wb_stb_o)
        {
        
         std::cout
                    << "In the Wb slave model"
                    
                    << std::endl;
            dut->wb_ack_i <= 1;

            uint32_t index =
                (dut->wb_adr_o >> 2) & 0xFF;

            //==================================================
            // WRITE
            //==================================================

            if(dut->wb_we_o)
            {
                uint32_t old_data =
                    mem[index];

                uint32_t new_data =
                    old_data;

                // BYTE ENABLE SUPPORT
                for(int b=0; b<4; b++)
                {
                    if(dut->wb_sel_o & (1 << b))
                    {
                        new_data &=
                            ~(0xFF << (8*b));

                        new_data |=
                            ((dut->wb_dat_o >> (8*b)) & 0xFF)
                            << (8*b);
                    }
                }

                mem[index] = new_data;

                std::cout
                    << "[WB SLAVE] WRITE"
                    << " addr=0x"
                    << std::hex
                    << dut->wb_adr_o
                    << " data=0x"
                    << new_data
                    << std::endl;
            }

            //==================================================
            // READ
            //==================================================

            else
            {
                dut->wb_dat_i =
                    mem[index];

                std::cout
                    << "[WB SLAVE] READ"
                    << " addr=0x"
                    << std::hex
                    << dut->wb_adr_o
                    << " data=0x"
                    << dut->wb_dat_i
                    << std::endl;
            }
        }
    }
};

#endif
