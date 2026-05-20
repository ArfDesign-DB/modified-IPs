#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <cstdint>

struct obi_transaction
{
    // =====================================================
    // OBI SIDE
    // =====================================================
    
    
    
    bool      we;
    uint32_t  addr;
    uint32_t  wdata;
    uint8_t   be;

    uint32_t  rdata;
    
    

    bool      obi_req;
    bool      obi_gnt;

    uint32_t  obi_addr;

    bool      obi_we;

    uint8_t   obi_be;

    uint32_t  obi_wdata;

    bool      obi_rvalid;

    uint32_t  obi_rdata;

    // =====================================================
    // WB SIDE
    // (optional debug visibility)
    // =====================================================

    bool      wb_cyc;

    bool      wb_stb;

    bool      wb_we;

    uint32_t  wb_adr;

    uint32_t  wb_dat_o;

    uint8_t   wb_sel;

    bool      wb_ack;

    uint32_t  wb_dat_i;

    bool      wb_stall;
};

#endif
