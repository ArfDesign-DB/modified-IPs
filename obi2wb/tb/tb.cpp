#include "Vobi2wb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include <cstdio>
#include <cstdint>

static Vobi2wb* dut = nullptr;
static VerilatedVcdC* tfp = nullptr;

static vluint64_t sim_time = 0;

static uint32_t mem[256];

// ============================================================
// TIME
// ============================================================

double sc_time_stamp()
{
    return sim_time;
}

// ============================================================
// CLOCK
// ============================================================

static void tick()
{
    dut->clk_i = 0;
    dut->eval();

    if (tfp)
        tfp->dump(sim_time);

    sim_time += 5;

    dut->clk_i = 1;
    dut->eval();

    if (tfp)
        tfp->dump(sim_time);

    sim_time += 5;
}

// ============================================================
// RESET
// ============================================================

static void reset_dut()
{
    dut->rst_ni = 0;

    dut->obi_req_i   = 0;
    dut->obi_addr_i  = 0;
    dut->obi_we_i    = 0;
    dut->obi_be_i    = 0;
    dut->obi_wdata_i = 0;

    dut->wb_ack_i    = 0;
    dut->wb_dat_i    = 0;
    dut->wb_stall_i  = 0;

    for (int i = 0; i < 5; i++)
        tick();

    dut->rst_ni = 1;

    for (int i = 0; i < 2; i++)
        tick();

    printf("\n========== RESET DONE ==========\n");
}

// ============================================================
// WRITE
// ============================================================

static void obi_write(uint32_t addr, uint32_t data)
{
    printf("\n================================================\n");
    printf("[OBI WRITE] ADDR=0x%08X DATA=0x%08X\n",
           addr, data);

    //--------------------------------------------------
    // Drive OBI request
    //--------------------------------------------------

    dut->obi_addr_i  = addr;
    dut->obi_wdata_i = data;
    dut->obi_we_i    = 1;
    dut->obi_be_i    = 0xF;
    dut->obi_req_i   = 1;

    dut->eval();

    printf("[REQ] GNT=%0d\n", dut->obi_gnt_o);

    //--------------------------------------------------
    // Grant should be combinational
    //--------------------------------------------------
    
   // dut->eval();

    while (!dut->obi_gnt_o)
        tick();
    tick();
    //--------------------------------------------------
    // Handshake complete
    //--------------------------------------------------

    dut->obi_req_i = 0;
    dut->eval();

    //--------------------------------------------------
    // Advance to WAIT_ACK state
    //--------------------------------------------------

    //tick();

    //--------------------------------------------------
    // WB slave response
    //--------------------------------------------------

    mem[(addr >> 2) & 0xFF] = data;

    dut->wb_ack_i = 1;
    dut->eval();

    printf("[WB WRITE] ADDR=0x%08X DATA=0x%08X\n",
           addr, data);

    //--------------------------------------------------
    // Sample ACK on next clock edge
    //--------------------------------------------------

    tick();

    

    //--------------------------------------------------
    // Verify rvalid occurred
    //--------------------------------------------------

    if (dut->obi_rvalid_o)
        printf("[RVALID]\n");
        
    dut->wb_ack_i = 0;
    dut->eval();

    printf("[WRITE COMPLETE]\n");
}

// ============================================================
// READ
// ============================================================

static void obi_read(uint32_t addr)
{
    printf("\n================================================\n");
    printf("[OBI READ] ADDR=0x%08X\n", addr);

    //--------------------------------------------------
    // Drive request
    //--------------------------------------------------

    dut->obi_addr_i = addr;
    dut->obi_we_i   = 0;
    dut->obi_be_i   = 0xF;
    dut->obi_req_i  = 1;

    dut->eval();

    printf("[REQ] GNT=%0d\n", dut->obi_gnt_o);

    //--------------------------------------------------
    // Wait grant
    //--------------------------------------------------

    while (!dut->obi_gnt_o)
        tick();

    //--------------------------------------------------
    // Handshake complete
    //--------------------------------------------------

    dut->obi_req_i = 0;
    dut->eval();

    //--------------------------------------------------
    // Advance DUT into WAIT_ACK
    //--------------------------------------------------

    tick();

    //--------------------------------------------------
    // WB slave returns data
    //--------------------------------------------------

    uint32_t exp =
        mem[(addr >> 2) & 0xFF];

    dut->wb_dat_i = exp;
    dut->wb_ack_i = 1;

    dut->eval();

    printf("[WB READ] ADDR=0x%08X DATA=0x%08X\n",
           addr, exp);

    //--------------------------------------------------
    // Let DUT sample ACK
    //--------------------------------------------------

    tick();

    dut->wb_ack_i = 0;
    dut->eval();

    //--------------------------------------------------
    // Check returned data
    //--------------------------------------------------

    uint32_t got = dut->obi_rdata_o;

    if (got == exp)
    {
        printf("[PASS] ADDR=0x%08X DATA=0x%08X\n",
               addr, got);
    }
    else
    {
        printf("[FAIL] ADDR=0x%08X EXP=0x%08X GOT=0x%08X\n",
               addr, exp, got);
    }
}

// ============================================================
// MAIN
// ============================================================

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);

    dut = new Vobi2wb;

    Verilated::traceEverOn(true);

    tfp = new VerilatedVcdC;

    dut->trace(tfp, 99);

    tfp->open("wave.vcd");

    for (int i = 0; i < 256; i++)
        mem[i] = 0;

    reset_dut();

    printf("\n============= START TEST =============\n");

    obi_write(0x00000004, 0x00000015);

    obi_write(0x00000008, 0xDEADBEEF);

    obi_read(0x00000004);

    obi_read(0x00000008);

    printf("\n============= END TEST =============\n");

    for (int i = 0; i < 10; i++)
        tick();

    tfp->close();

    delete tfp;
    delete dut;

    return 0;
}
