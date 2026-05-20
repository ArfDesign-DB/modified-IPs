#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <unordered_map>
#include <queue>
#include <iostream>

#include "transaction.h"

extern std::queue<obi_transaction> mon2sb;

class scoreboard
{
private:

    std::unordered_map<uint32_t,uint32_t> ref_mem;

public:

    int pass_count = 0;

    int fail_count = 0;

    void check()
    {
        while(!mon2sb.empty())
        {
            obi_transaction tr =
                mon2sb.front();

            mon2sb.pop();

            // =========================================
            // WRITE
            // =========================================

            if(tr.obi_we)
            {
                ref_mem[tr.obi_addr]
                    = tr.obi_wdata;

                std::cout
                    << "[SB] WRITE UPDATE"
                    << " addr=0x"
                    << std::hex
                    << tr.obi_addr
                    << " data=0x"
                    << tr.obi_wdata
                    << std::endl;
            }

            // =========================================
            // READ
            // =========================================

            else
            {
                uint32_t expected =
                    ref_mem[tr.obi_addr];

                if(expected == tr.obi_rdata)
                {
                    pass_count++;

                    std::cout
                        << "[PASS]"
                        << " addr=0x"
                        << std::hex
                        << tr.obi_addr
                        << " data=0x"
                        << tr.obi_rdata
                        << std::endl;
                }
                else
                {
                    fail_count++;

                    std::cout
                        << "[FAIL]"
                        << " addr=0x"
                        << std::hex
                        << tr.obi_addr
                        << " exp=0x"
                        << expected
                        << " got=0x"
                        << tr.obi_rdata
                        << std::endl;
                }
            }

            // =========================================
            // WB CHECK
            // =========================================

            if(!tr.wb_ack)
            {
                std::cout
                    << "[SB WARNING] WB_ACK not asserted"
                    << std::endl;
            }

            if(tr.wb_stall)
            {
                std::cout
                    << "[SB INFO] WB_STALL detected"
                    << std::endl;
            }
        }
    }

    void report()
    {
        std::cout
            << "\n================================\n"
            << " SCOREBOARD REPORT\n"
            << "================================\n"
            << "PASS : " << pass_count << "\n"
            << "FAIL : " << fail_count << "\n"
            << "================================\n";
    }
};

#endif
