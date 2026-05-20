// =============================================================================

// tb_obi2wb.cpp

// COMPLETE UPDATED VERSION

//

// Correct OBI same-cycle req/gnt handshake

// Correct WB slave timing

// Correct rvalid generation timing

// =============================================================================
 
#include "Vobi2wb.h"

#include "verilated.h"

#include "verilated_vcd_c.h"
 
#include <cstdio>

#include <cstdint>

#include <cstdlib>
 
// =============================================================================

// GLOBALS

// =============================================================================
 
static Vobi2wb       *dut      = nullptr;

static VerilatedVcdC *tfp      = nullptr;
 
static vluint64_t sim_time = 0;
 
static uint32_t mem[256] = {};
 
// WB slave pipeline registers

static bool     ack_pending  = false;

static bool     was_write    = false;
 
static uint32_t lat_addr     = 0;

static uint32_t lat_wdata    = 0;
 
// =============================================================================

// TIME STAMP

// =============================================================================
 
double sc_time_stamp()

{

    return sim_time;

}
 
// =============================================================================

// WB SLAVE SAMPLE

//

// SAMPLE BEFORE POSEDGE

// =============================================================================
 
static void slave_sample()

{

    if (dut->rst_ni &&

        dut->wb_cyc_o &&

        dut->wb_stb_o &&

        !dut->wb_stall_i)

    {

        ack_pending = true;
 
        was_write = dut->wb_we_o;
 
        lat_addr  = dut->wb_adr_o;
 
        lat_wdata = dut->wb_dat_o;
 
        printf(

            "[SLAVE_SAMPLE] "

            "TIME=%llu "

            "CYC=%0d STB=%0d WE=%0d ADDR=0x%08X\n",
 
            sim_time,
 
            dut->wb_cyc_o,

            dut->wb_stb_o,

            dut->wb_we_o,
 
            dut->wb_adr_o

        );

    }

}
 
// =============================================================================

// WB SLAVE APPLY

//

// APPLY AFTER POSEDGE

// =============================================================================
 
static void slave_apply()

{

    if (ack_pending)

    {

        dut->wb_ack_i = 1;
 
        if (was_write)

        {

            mem[(lat_addr >> 2) & 0xFF] = lat_wdata;
 
            printf(

                "[WB WRITE] "

                "TIME=%llu "

                "ADDR=0x%08X DATA=0x%08X\n",
 
                sim_time,

                lat_addr,

                lat_wdata

            );

        }

        else

        {

            dut->wb_dat_i = mem[(lat_addr >> 2) & 0xFF];
 
            printf(

                "[WB READ] "

                "TIME=%llu "

                "ADDR=0x%08X DATA=0x%08X\n",
 
                sim_time,

                lat_addr,

                dut->wb_dat_i

            );

        }
 
        ack_pending = false;

    }

    else

    {

        dut->wb_ack_i = 0;

    }

}
 
// =============================================================================

// COMB EVAL

// =============================================================================
 
static void comb_eval()

{

    dut->eval();

}
 
// =============================================================================

// POSEDGE HALF

// =============================================================================
 
static void posedge_half()

{

    // ------------------------------------------------

    // SAMPLE WB REQUEST BEFORE CLOCK EDGE

    // ------------------------------------------------
 
    slave_sample();
 
    // ------------------------------------------------

    // POSEDGE

    // ------------------------------------------------
 
    dut->clk_i = 1;
 
    dut->eval();
 
    // ------------------------------------------------

    // APPLY ACK AFTER FF UPDATE

    // ------------------------------------------------
 
    slave_apply();
 
    // Re-evaluate combinational logic

    dut->eval();
 
    // ------------------------------------------------

    // TRACE

    // ------------------------------------------------
 
    if (tfp)

        tfp->dump(sim_time);
 
    // ------------------------------------------------

    // DEBUG

    // ------------------------------------------------
 
    printf(

        "[POSEDGE] "

        "TIME=%llu | "

        "REQ=%0d GNT=%0d RVALID=%0d | "

        "CYC=%0d STB=%0d ACK=%0d\n",
 
        sim_time,
 
        dut->obi_req_i,

        dut->obi_gnt_o,

        dut->obi_rvalid_o,
 
        dut->wb_cyc_o,

        dut->wb_stb_o,

        dut->wb_ack_i

    );
 
    sim_time += 5;

}
 
// =============================================================================

// NEGEDGE HALF

// =============================================================================
 
static void negedge_half()

{

    dut->clk_i = 0;
 
    dut->eval();
 
    if (tfp)

        tfp->dump(sim_time);
 
    printf(

        "[NEGEDGE] "

        "TIME=%llu | "

        "REQ=%0d GNT=%0d RVALID=%0d\n",
 
        sim_time,
 
        dut->obi_req_i,

        dut->obi_gnt_o,

        dut->obi_rvalid_o

    );
 
    sim_time += 5;

}
 
// =============================================================================

// FULL CLOCK

// =============================================================================
 
static void tick()

{

    posedge_half();
 
    negedge_half();

}
 
// =============================================================================

// MULTIPLE CLOCKS

// =============================================================================
 
static void clk_cycles(int n)

{

    for (int i = 0; i < n; i++)

        tick();

}
 
// =============================================================================

// RESET

// =============================================================================
 
static void do_reset()

{

    ack_pending = false;
 
    dut->rst_ni      = 0;
 
    dut->obi_req_i   = 0;

    dut->obi_addr_i  = 0;

    dut->obi_we_i    = 0;

    dut->obi_be_i    = 0;

    dut->obi_wdata_i = 0;
 
    dut->wb_ack_i    = 0;

    dut->wb_dat_i    = 0;

    dut->wb_stall_i  = 0;
 
    dut->clk_i       = 0;
 
    dut->eval();
 
    clk_cycles(5);
 
    dut->rst_ni = 1;
 
    dut->eval();
 
    clk_cycles(2);
 
    printf("\n========== RESET DONE ==========\n");

}
 
// =============================================================================

// WAIT FOR GNT

//

// REQ + GNT MUST BE HIGH SAME CYCLE

// =============================================================================
 
static bool wait_gnt(int timeout = 200)

{

    for (int i = 0; i < timeout; i++)

    {

        // ------------------------------------------------

        // COMBINATIONAL EVALUATION

        // ------------------------------------------------
 
        comb_eval();
 
        // ------------------------------------------------

        // DEBUG

        // ------------------------------------------------
 
        printf(

            "[WAIT_GNT] "

            "TIME=%llu | "

            "REQ=%0d GNT=%0d | "

            "WB_CYC=%0d WB_STB=%0d\n",
 
            sim_time,
 
            dut->obi_req_i,

            dut->obi_gnt_o,
 
            dut->wb_cyc_o,

            dut->wb_stb_o

        );
 
        // ------------------------------------------------

        // SAME CYCLE HANDSHAKE

        // ------------------------------------------------
 
        if (dut->obi_req_i && dut->obi_gnt_o)

        {

            printf(

                "[OBI HANDSHAKE SUCCESS] "

                "TIME=%llu\n",
 
                sim_time

            );
 
            return true;

        }
 
        // Advance cycle
 
        posedge_half();
 
        negedge_half();

    }
 
    printf("[ERROR] TIMEOUT WAITING FOR GNT\n");
 
    return false;

}
 
// =============================================================================

// WAIT FOR RVALID

// =============================================================================
 
static bool wait_rvalid(int timeout = 200)

{

    for (int i = 0; i < timeout; i++)

    {

        posedge_half();
 
        if (dut->obi_rvalid_o)

        {

            printf(

                "[RVALID RECEIVED] "

                "TIME=%llu DATA=0x%08X\n",
 
                sim_time,
 
                dut->obi_rdata_o

            );
 
            negedge_half();
 
            return true;

        }
 
        negedge_half();

    }
 
    printf("[ERROR] TIMEOUT WAITING FOR RVALID\n");
 
    return false;

}
 
// =============================================================================

// OBI WRITE

// =============================================================================
 
static void obi_write(uint32_t addr, uint32_t data)

{

    printf("\n================================================\n");
 
    printf(

        "[OBI WRITE START] "

        "ADDR=0x%08X DATA=0x%08X\n",
 
        addr,

        data

    );
 
    // ------------------------------------------------

    // DRIVE REQUEST

    // ------------------------------------------------
 
    dut->obi_addr_i  = addr;
 
    dut->obi_wdata_i = data;
 
    dut->obi_we_i    = 1;
 
    dut->obi_be_i    = 0xF;
 
    dut->obi_req_i   = 1;
 
    comb_eval();
 
    printf(

        "[AFTER DRIVE] "

        "REQ=%0d GNT=%0d\n",
 
        dut->obi_req_i,

        dut->obi_gnt_o

    );
 
    // ------------------------------------------------

    // WAIT FOR SAME-CYCLE HANDSHAKE

    // ------------------------------------------------
 
    if (!wait_gnt())

        return;
 
    // ------------------------------------------------

    // COMPLETE ACCEPTANCE CLOCK EDGE

    // ------------------------------------------------
 
    posedge_half();
 
    negedge_half();
 
    // ------------------------------------------------

    // WAIT FOR RESPONSE

    // ------------------------------------------------
 
    if (!wait_rvalid())

        return;
 
    // ------------------------------------------------

    // CLEAR REQUEST

    // ------------------------------------------------
 
    dut->obi_req_i = 0;
 
    comb_eval();
 
    printf(

        "[OBI WRITE DONE] "

        "ADDR=0x%08X DATA=0x%08X\n",
 
        addr,

        data

    );

}
 
// =============================================================================

// OBI READ

// =============================================================================
 
static void obi_read(uint32_t addr)

{

    printf("\n================================================\n");
 
    printf(

        "[OBI READ START] "

        "ADDR=0x%08X\n",
 
        addr

    );
 
    // ------------------------------------------------

    // DRIVE REQUEST

    // ------------------------------------------------
 
    dut->obi_addr_i = addr;
 
    dut->obi_we_i   = 0;
 
    dut->obi_be_i   = 0xF;
 
    dut->obi_req_i  = 1;
 
    comb_eval();
 
    printf(

        "[AFTER DRIVE] "

        "REQ=%0d GNT=%0d\n",
 
        dut->obi_req_i,

        dut->obi_gnt_o

    );
 
    // ------------------------------------------------

    // WAIT FOR SAME-CYCLE HANDSHAKE

    // ------------------------------------------------
 
    if (!wait_gnt())

        return;
 
    // ------------------------------------------------

    // COMPLETE ACCEPTANCE CLOCK EDGE

    // ------------------------------------------------
 
    posedge_half();
 
    negedge_half();
 
    // ------------------------------------------------

    // WAIT FOR RESPONSE

    // ------------------------------------------------
 
    if (!wait_rvalid())

        return;
 
    // ------------------------------------------------

    // CHECK DATA

    // ------------------------------------------------
 
    uint32_t got =

        dut->obi_rdata_o;
 
    uint32_t exp =

        mem[(addr >> 2) & 0xFF];
 
    if (got != exp)

    {

        printf(

            "[FAIL] "

            "ADDR=0x%08X EXP=0x%08X GOT=0x%08X\n",
 
            addr,

            exp,

            got

        );

    }

    else

    {

        printf(

            "[PASS] "

            "ADDR=0x%08X DATA=0x%08X\n",
 
            addr,

            got

        );

    }
 
    // ------------------------------------------------

    // CLEAR REQUEST

    // ------------------------------------------------
 
    dut->obi_req_i = 0;
 
    comb_eval();
 
    printf("[OBI READ DONE]\n");

}
 
// =============================================================================

// TESTS

// =============================================================================
 
static void test_basic_rw()

{

    printf("\n===== TEST_BASIC_RW =====\n");
 
    obi_write(0x00000004, 0x11111111);
 
    obi_read(0x00000004);

}
 
static void test_back_to_back()

{

    printf("\n===== TEST_BACK_TO_BACK =====\n");
 
    obi_write(0x1000, 0xAAAA1111);
 
    obi_write(0x1004, 0xBBBB2222);
 
    obi_write(0x1008, 0xCCCC3333);

}
 
// =============================================================================

// MAIN

// =============================================================================
 
int main(int argc, char **argv)

{

    Verilated::commandArgs(argc, argv);
 
    Verilated::traceEverOn(true);
 
    dut = new Vobi2wb;
 
    tfp = new VerilatedVcdC;
 
    dut->trace(tfp, 99);
 
    tfp->open("wave.vcd");
 
    // ------------------------------------------------

    // INITIALIZE MEMORY

    // ------------------------------------------------
 
    for (int i = 0; i < 256; i++)

        mem[i] = 0;
 
    // ------------------------------------------------

    // RESET

    // ------------------------------------------------
 
    do_reset();
 
    // ------------------------------------------------

    // MAIN TEST

    // ------------------------------------------------
 
    printf("\n============= START TEST =============\n");
 
    obi_write(0x00000004, 0x00000015);
 
    obi_write(0x00000008, 0xDEADBEEF);
 
    obi_read(0x00000004);
 
    obi_read(0x00000008);
 
    printf("\n============= END TEST =============\n");
 
    // Optional tests
 
    // do_reset();

    // test_basic_rw();
 
    // do_reset();

    // test_back_to_back();
 
    // ------------------------------------------------

    // EXTRA CYCLES

    // ------------------------------------------------
 
    clk_cycles(20);
 
    // ------------------------------------------------

    // CLOSE

    // ------------------------------------------------
 
    tfp->close();
 
    delete tfp;
 
    delete dut;
 
    return 0;

}
 
