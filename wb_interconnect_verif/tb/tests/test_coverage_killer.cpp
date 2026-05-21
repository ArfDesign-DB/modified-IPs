#include <iostream>
#include <random>

#include "Vwb_interconnect.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "../tick.h"
#include "../wb_txn.h"
#include "../wb_coverage.h"

// ============================================================
// RANDOM HELPERS
// ============================================================
static std::mt19937 rng(12345);

static uint32_t rand32()
{
    return rng();
}

static uint8_t rand8()
{
    return rand32() & 0xFF;
}

// ============================================================
// CORE ACCESS (improved observability model)
// ============================================================
static void access(Vwb_interconnect* dut,
                   VerilatedVcdC* trace,
                   uint32_t addr,
                   uint32_t data,
                   bool we,
                   uint8_t sel,
                   bool cyc,
                   bool stb,
                   uint32_t rdata_force = 0x0,
                   bool force_rvalid = true)
{
    // -----------------------------
    // DRIVE REQUEST
    // -----------------------------
    dut->wb_cyc_i = cyc;
    dut->wb_stb_i = stb;
    dut->wb_we_i  = we;
    dut->wb_adr_i = addr;
    dut->wb_dat_i = data;
    dut->wb_sel_i = sel;

    tick(dut, trace);

    // -----------------------------
    // DEFAULT RESPONSE CLEAR
    // -----------------------------
    dut->bootrom_rvalid_i = 0;
    dut->sram_rvalid_i    = 0;
    dut->xip_rvalid_i     = 0;
    dut->uart_rvalid_i    = 0;
    dut->gpio_rvalid_i    = 0;
    dut->timer_rvalid_i   = 0;
    dut->spictrl_rvalid_i = 0;
    dut->i2c_rvalid_i     = 0;
    dut->spihost_rvalid_i = 0;

    dut->bootrom_rdata_i = 0;
    dut->sram_rdata_i    = 0;
    dut->xip_rdata_i     = 0;
    dut->uart_rdata_i    = 0;
    dut->gpio_rdata_i    = 0;
    dut->timer_rdata_i   = 0;
    dut->spictrl_rdata_i = 0;
    dut->i2c_rdata_i     = 0;
    dut->spihost_rdata_i = 0;

    // -----------------------------
    // SELECTIVE RESPONSE MODEL
    // -----------------------------
    if (force_rvalid)
    {
        if ((addr & 0xFFFFF000) == 0x00100000) dut->bootrom_rvalid_i = 1;
        else if ((addr & 0xFFFFF000) == 0x00101000) dut->sram_rvalid_i = 1;
        else if ((addr & 0xF0000000) == 0x20000000) dut->xip_rvalid_i = 1;
        else if ((addr & 0xFFFFFF00) == 0x40000000) dut->uart_rvalid_i = 1;
        else if ((addr & 0xFFFFFF00) == 0x40000100) dut->gpio_rvalid_i = 1;
        else if ((addr & 0xFFFFFF00) == 0x40000200) dut->timer_rvalid_i = 1;
        else if ((addr & 0xFFFFFF00) == 0x40000300) dut->spictrl_rvalid_i = 1;
        else if ((addr & 0xFFFFFF00) == 0x40000400) dut->i2c_rvalid_i = 1;
        else if ((addr & 0xFFFFFF00) == 0x40000500) dut->spihost_rvalid_i = 1;
    }

    // -----------------------------
    // RESPONSE DATA MODEL
    // -----------------------------
    dut->bootrom_rdata_i = rdata_force ^ 0xA1;
    dut->sram_rdata_i    = rdata_force ^ 0xB2;
    dut->xip_rdata_i     = rdata_force ^ 0xC3;
    dut->uart_rdata_i    = rdata_force ^ 0xD4;
    dut->gpio_rdata_i    = rdata_force ^ 0xE5;
    dut->timer_rdata_i   = rdata_force ^ 0xF6;
    dut->spictrl_rdata_i = rdata_force ^ 0x11;
    dut->i2c_rdata_i     = rdata_force ^ 0x22;
    dut->spihost_rdata_i = rdata_force ^ 0x33;

    // -----------------------------
    // RESPONSE PHASE
    // -----------------------------
    tick(dut, trace);

    // -----------------------------
    // DEASSERT
    // -----------------------------
    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;

    tick(dut, trace);

    // -----------------------------
    // COVERAGE SAMPLE
    // -----------------------------
    wb_txn txn;
    txn.addr     = addr;
    txn.wdata    = data;
    txn.rdata    = dut->wb_dat_o;
    txn.we       = we;
    txn.sel      = sel;
    txn.ack      = dut->wb_ack_o;
    txn.is_error = (dut->wb_ack_o == 0);

    coverage.sample(txn);
}

// ============================================================
// COVERAGE KILLER v3 (FINAL UPGRADE)
// ============================================================
void test_coverage_killer(Vwb_interconnect* dut,
                          VerilatedVcdC* trace)
{
    std::cout << "\n=============================\n";
    std::cout << "COVERAGE KILLER v3 (FINAL)\n";
    std::cout << "=============================\n";

    // ========================================================
    // RESET EDGE + FIRST TRANSACTION TRANSITION
    // ========================================================
    dut->rst_ni = 0;
    for (int i = 0; i < 3; i++) tick(dut, trace);

    dut->rst_ni = 1;
    tick(dut, trace);

    access(dut, trace, 0x00100000, 0xAA, 0, 0xF, 1, 1);

    // ========================================================
    // 1. HANDSHAKE GLITCH SPACE (stb/cyc permutations)
    // ========================================================
    access(dut, trace, 0x40000000, 0x11, 1, 0xF, 1, 0);
    access(dut, trace, 0x40000000, 0x11, 1, 0xF, 0, 1);
    access(dut, trace, 0x40000000, 0x11, 1, 0xF, 1, 1);

    // ========================================================
    // 2. INVALID ADDRESS BURST (decode_err stress)
    // ========================================================
    for (int i = 0; i < 10; i++)
    {
        access(dut, trace,
               0xDEAD0000 + i,
               rand32(),
               i & 1,
               rand8(),
               1,
               1,
               0,
               true);
    }

    // ========================================================
    // 3. BYTE ENABLE FULL SWEEP (CRITICAL FIX)
    // ========================================================
    for (int i = 0; i < 32; i++)
    {
        uint8_t sel = (1 << (i % 4)); // 0x1,0x2,0x4,0x8

        access(dut, trace,
               0x40000300 + (i * 4),
               rand32(),
               i & 1,
               sel,
               1,
               1);
    }

    // ========================================================
    // 4. ALL SLAVES DIRECT HITS (deterministic)
    // ========================================================
    uint32_t base[] = {
        0x00100000, 0x00101000, 0x20000000,
        0x40000000, 0x40000100, 0x40000200,
        0x40000300, 0x40000400, 0x40000500
    };

    for (int i = 0; i < 9; i++)
    {
        access(dut, trace,
               base[i],
               0x100 + i,
               i & 1,
               0xF,
               1,
               1,
               0x1234 + i);
    }

    // ========================================================
    // 5. MUX SWITCHING CHAOS (forces device_sel_resp coverage)
    // ========================================================
    for (int i = 0; i < 15; i++)
    {
        access(dut, trace,
               base[rand32() % 9] + (rand32() & 0xFF),
               rand32(),
               rand32() & 1,
               rand8(),
               1,
               1);
    }

    // ========================================================
    // 6. DEFAULT RESPONSE FORCE CASE
    // ========================================================
    access(dut, trace,
           0x99999999,
           0,
           0,
           0x0,   // IMPORTANT: no select
           1,
           1,
           0,
           false);

    std::cout << "\n[COVERAGE KILLER v3 COMPLETE]\n";




// ========================================================
// 7. DECODE ERROR FLAP STRESS (CRITICAL FOR MISSING BINS)
// ========================================================
for (int i = 0; i < 5; i++)
{
    // valid hit first
    access(dut, trace,
           0x40000300, 0x10, 1, 0xF, 1, 1);

    // invalid burst
    access(dut, trace,
           0xDEAD0000 + (i * 0x10), 0x0, 0, 0xF, 1, 1);

    // back to valid
    access(dut, trace,
           0x00100000, 0x20, 0, 0xF, 1, 1);
}




// ========================================================
// 8. DEVICE PRIORITY SWITCH STRESS (IMPORTANT)
// ========================================================
access(dut, trace, 0x00100000, 0x1, 0, 0xF, 1, 1); // bootrom
access(dut, trace, 0x00101000, 0x2, 0, 0xF, 1, 1); // sram
access(dut, trace, 0x20000000, 0x3, 0, 0xF, 1, 1); // xip

// rapid switching (forces all else-if branches)
for (int i = 0; i < 10; i++)
{
    uint32_t addr = (i % 3 == 0) ? 0x40000300 :
                    (i % 3 == 1) ? 0x40000400 :
                                   0x40000500;

    access(dut, trace,
           addr + (i * 4),
           rand32(),
           i & 1,
           0xF,
           1,
           1);
}






// ========================================================
// 9. NO-SLAVE FULL CYCLE HOLD (IMPORTANT FOR decode_err)
// ========================================================
dut->wb_cyc_i = 1;
dut->wb_stb_i = 1;
dut->wb_adr_i = 0x12345678;
dut->wb_we_i  = 0;
dut->wb_dat_i = 0;
dut->wb_sel_i = 0xF;

tick(dut, trace);
tick(dut, trace);   // HOLD 2 cycles (THIS IS KEY)

dut->wb_cyc_i = 0;
dut->wb_stb_i = 0;

tick(dut, trace);




uint8_t sels[] = {0x1, 0x2, 0x3, 0x5, 0x9, 0xA, 0xC, 0xF};

for (int i = 0; i < 20; i++)
{
    access(dut, trace,
           0x40000300 + (i * 4),
           rand32(),
           i & 1,
           sels[i % 8],
           1,
           1);
}



for (int i = 0; i < 10; i++)
{
    // valid
    access(dut, trace, 0x40000000, i, 1, 0xF, 1, 1);

    // invalid
    access(dut, trace, 0xBAD00000 + i, i, 0, 0xF, 1, 1);

    // valid again
    access(dut, trace, 0x00100000, i, 1, 0xF, 1, 1);
}



for (int i = 0; i < 8; i++)
{
    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = i & 1;
    dut->wb_adr_i = 0x40000300;

    tick(dut, trace);

    // delay response (IMPORTANT)
    dut->spictrl_rvalid_i = (i % 2);
    dut->spictrl_rdata_i  = i * 0x10;

    tick(dut, trace);

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;

    tick(dut, trace);
}

for (int i = 0; i < 6; i++)
{
    // Force multiple selects TRUE in same cycle
    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = i & 1;
    dut->wb_adr_i = 0x00100000; // bootrom base (can alias in decode logic)
    dut->wb_dat_i = i;
    dut->wb_sel_i = 0xF;

    tick(dut, trace);

    // immediately change address before response
    dut->wb_adr_i = 0x40000300; // spictrl
    tick(dut, trace);

    dut->wb_adr_i = 0x40000500; // spihost
    tick(dut, trace);

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    tick(dut, trace);
}


for (int i = 0; i < 10; i++)
{
    // valid
    access(dut, trace, 0x40000200, i, 1, 0xF, 1, 1);

    // invalid (forces decode_err_resp)
    access(dut, trace, 0xBAD00000 + i, i, 1, 0xF, 1, 1);

    // invalid but no cycle (different condition)
    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 0;
    tick(dut, trace);

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 1;
    tick(dut, trace);
}

for (int i = 0; i < 8; i++)
{
    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = 0;
    dut->wb_adr_i = 0x40000400;

    tick(dut, trace);

    // delay response (forces mux + ack edge coverage)
    if (i % 3 == 0)
        dut->i2c_rvalid_i = 1;
    else
        dut->i2c_rvalid_i = 0;

    dut->i2c_rdata_i = i * 0x100;

    tick(dut, trace);

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;

    tick(dut, trace);
}

for (int i = 0; i < 12; i++)
{
    dut->wb_cyc_i = i % 2;
    dut->wb_stb_i = (i % 3 == 0);
    dut->wb_we_i  = i & 1;
    dut->wb_adr_i = 0x40000300;
    dut->wb_dat_i = i;

    tick(dut, trace);

    dut->wb_cyc_i = (i % 3 == 1);
    dut->wb_stb_i = 1;
    tick(dut, trace);
}

uint32_t clash_addrs[] = {
    0x40000000, // uart
    0x40000100, // gpio
    0x40000200, // timer
};

for (int i = 0; i < 10; i++)
{
    uint32_t a = clash_addrs[i % 3];

    // First hit
    access(dut, trace, a, i, 1, 0xF, 1, 1);

    // immediate override (same cycle pressure)
    dut->wb_adr_i = a ^ 0x100;
    tick(dut, trace);
}

for (int i = 0; i < 8; i++)
{
    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = 0;
    dut->wb_adr_i = 0x40000500;

    tick(dut, trace);

    // introduce randomness in rvalid timing
    for (int d = 0; d < (i % 4); d++)
        tick(dut, trace);

    dut->spihost_rvalid_i = 1;
    dut->spihost_rdata_i  = i;

    tick(dut, trace);

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    tick(dut, trace);
}

for (int i = 0; i < 12; i++)
{
    dut->wb_cyc_i = (i & 1);
    dut->wb_stb_i = (i & 2) ? 1 : 0;
    dut->wb_we_i  = i & 1;
    dut->wb_adr_i = (i % 3 == 0) ? 0xBAD00000 : 0x40000300;

    tick(dut, trace);
}

uint32_t addrs[] = {
    0x00100000, // bootrom
    0x00101000, // sram
    0x20000000, // xip
};

for (int i = 0; i < 15; i++)
{
    // force overlapping selection over time
    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_adr_i = addrs[i % 3];

    tick(dut, trace);

    // change address BEFORE mux resolves fully
    dut->wb_adr_i = addrs[(i+1) % 3];
    tick(dut, trace);

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    tick(dut, trace);
}

for (int i = 0; i < 10; i++)
{
    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i  = 0;
    dut->wb_adr_i = 0x40000200;

    tick(dut, trace);

    // variable delay pattern
    for (int d = 0; d < (i % 5); d++)
        tick(dut, trace);

    dut->timer_rvalid_i = 1;
    dut->timer_rdata_i  = i * 0x100;

    tick(dut, trace);

    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    tick(dut, trace);
}

// NO DEVICE MATCH (forces decode_err_resp = 1)
access(dut, trace, 0x60000000, 0x1234, 1, 0xF, 1, 1);
access(dut, trace, 0x70000000, 0x5678, 1, 0xF, 1, 1);

dut->spihost_rvalid_i = 0;
access(dut, trace, 0x40000500, 0x55, 0, 0xF, 1, 1);

for (int i = 0; i < 20; i++) {
    access(dut, trace,
           0x40000300,
           rand32(),
           i & 1,
           (1 << (i % 4)),   // 0x1,0x2,0x4,0x8
           1, 1);
}

for (int i = 0; i < 10; i++) {
    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    tick(dut, trace);
}

}
