// =============================================================================
// tb_obi2wb.cpp
// Prints all signals at every posedge. No extra debug prints.
// =============================================================================

#include "Vobi2wb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_cov.h"

#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <functional>

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
// FORWARD DECLARATIONS
// =============================================================================

static void comb_eval();
static void posedge_half();
static void negedge_half();

// =============================================================================
// TIME STAMP
// =============================================================================

double sc_time_stamp()
{
    return sim_time;
}

// =============================================================================
// WB SLAVE SAMPLE (no prints)
// =============================================================================

//static bool ack_pending = false;
static bool ack_delay   = false;

static void slave_sample()
{
    if (dut->rst_ni &&
        dut->wb_cyc_o &&
        dut->wb_stb_o &&
        !dut->wb_stall_i)
    {
        ack_delay = true;     // first cycle after request

        was_write = dut->wb_we_o;
        lat_addr  = dut->wb_adr_o;
        lat_wdata = dut->wb_dat_o;
    }
}

static void slave_apply()
{
    dut->wb_ack_i = 0;

    if (ack_pending)
    {
        dut->wb_ack_i = 1;

        if (was_write)
            mem[(lat_addr >> 2) & 0xFF] = lat_wdata;
        else
            dut->wb_dat_i = mem[(lat_addr >> 2) & 0xFF];

        ack_pending = false;
    }

    // Move from delay state to pending state
    if (ack_delay)
    {
        ack_pending = true;
        ack_delay   = false;
    }
}




/*
// =============================================================================
// Wishbone Slave - Sample Request
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
    }
}

// =============================================================================
// Wishbone Slave - Apply Response
// =============================================================================
static void slave_apply()
{
    // Default outputs
    dut->wb_ack_i = 0;

    if (!ack_pending)
        return;

    dut->wb_ack_i = 1;

    uint32_t index = (lat_addr >> 2) & 0xFF;

    if (was_write)
    {
        // Write transaction
        mem[index] = lat_wdata;
    }
    else
    {
        // Read transaction
        dut->wb_dat_i = mem[index];
    }

    ack_pending = false;
}

*/
// =============================================================================
// COMB EVAL
// =============================================================================

static void comb_eval()
{
    dut->eval();
}

// =============================================================================
// POSEDGE HALF – prints ALL signals
// =============================================================================

static void posedge_half()
{
    slave_sample();

    dut->clk_i = 1;
    dut->eval();

    slave_apply();
    dut->eval();

    if (tfp)
        tfp->dump(sim_time);

    // Print all relevant signals at posedge
    /*printf(
        "[POSEDGE %5llu] "
        "REQ=%d GNT=%d RVALID=%d RDATA=0x%08X | "
        "OBI_ADDR=0x%08X WE=%d BE=0x%X WDATA=0x%08X | "
        "WB_CYC=%d STB=%d WE=%d ADR=0x%08X DAT_O=0x%08X SEL=0x%X ACK=%d DAT_I=0x%08X STALL=%d\n",
        (unsigned long long)sim_time,
        dut->obi_req_i,
        dut->obi_gnt_o,
        dut->obi_rvalid_o,
        dut->obi_rdata_o,
        dut->obi_addr_i,
        dut->obi_we_i,
        dut->obi_be_i,
        dut->obi_wdata_i,
        dut->wb_cyc_o,
        dut->wb_stb_o,
        dut->wb_we_o,
        dut->wb_adr_o,
        dut->wb_dat_o,
        dut->wb_sel_o,
        dut->wb_ack_i,
        dut->wb_dat_i,
        dut->wb_stall_i
    );*/

    sim_time += 5;
}

// =============================================================================
// NEGEDGE HALF (no prints)
// =============================================================================

static void negedge_half()
{
    dut->clk_i = 0;
    dut->eval();

    if (tfp)
        tfp->dump(sim_time);

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
// GENERIC WAIT FUNCTION (no internal prints)
// =============================================================================

static bool wait_for(std::function<bool()> condition, int timeout = 200)
{
    for (int i = 0; i < timeout; i++)
    {
        comb_eval();
        if (condition()) return true;
        posedge_half();
        negedge_half();
    }
    return false;
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
// OBI WRITE
// =============================================================================

static void obi_write(uint32_t addr, uint32_t data)
{

   posedge_half();
    negedge_half();
    
    dut->obi_addr_i  = addr;
    dut->obi_wdata_i = data;
    dut->obi_we_i    = 1;
    dut->obi_be_i    = 0xF;
    dut->obi_req_i   = 1;

    comb_eval();

    if (!wait_for([&]() { return dut->obi_req_i && dut->obi_gnt_o; }, 200))
    {
        printf("[ERROR] Timeout waiting for grant\n");
        dut->obi_req_i = 0;
        return;
    }

    posedge_half();
    negedge_half();
    dut->obi_req_i = 0;

    if (!wait_for([&]() { return dut->obi_rvalid_o; }, 200))
    {
        printf("[ERROR] Timeout waiting for rvalid\n");
        dut->obi_req_i = 0;
        return;
    }
    
    
    comb_eval();
    //posedge_half();
    //negedge_half();
    //negedge_half();
}

// =============================================================================
// OBI READ
// =============================================================================

static void obi_read(uint32_t addr)
{

    posedge_half();
    negedge_half();
    dut->obi_addr_i = addr;
    dut->obi_we_i   = 0;
    dut->obi_be_i   = 0xF;
    dut->obi_req_i  = 1;

    comb_eval();

    if (!wait_for([&]() { return dut->obi_req_i && dut->obi_gnt_o; }, 200))
    {
        printf("[ERROR] Timeout waiting for grant\n");
        dut->obi_req_i = 0;
        return;
    }

    posedge_half();
    negedge_half();
    dut->obi_req_i = 0;

    if (!wait_for([&]() { return dut->obi_rvalid_o; }, 200))
    {
        printf("[ERROR] Timeout waiting for rvalid\n");
        dut->obi_req_i = 0;
        return;
    }

    uint32_t got = dut->obi_rdata_o;
    uint32_t exp = mem[(addr >> 2) & 0xFF];

    if (got != exp)
        printf("[FAIL] ADDR=0x%08X EXP=0x%08X GOT=0x%08X\n", addr, exp, got);
    else
        printf("[PASS] ADDR=0x%08X DATA=0x%08X\n", addr, got);

    dut->obi_req_i = 0;
    comb_eval();
    //negedge_half();
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

    for (int i = 0; i < 256; i++)
        mem[i] = 0;

    do_reset();

    printf("\n============= START TEST =============\n");

    obi_write(0x00000004, 0x00000015);
    obi_write(0x00000008, 0xDEADBEEF);
    obi_read(0x00000004);
    obi_read(0x00000008);

    printf("\n============= END TEST =============\n");

    clk_cycles(20);

    tfp->close();
    delete tfp;
    delete dut;
    VerilatedCov::write("coverage.dat");
    return 0;
}
