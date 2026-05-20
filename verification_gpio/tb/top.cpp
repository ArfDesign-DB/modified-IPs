#include <verilated.h>
#include <verilated_vcd_c.h>
#include "verilated_cov.h"
#include "Vgpio.h"

#include <iostream>
#include "gpio_cov.hpp"

GpioCoverage cov;
vluint64_t sim_time = 0;
uint32_t rdata;
uint32_t ref_rdata;

// ------------------------------------------------------------
// CLOCK
// ------------------------------------------------------------
void tick(Vgpio *dut, VerilatedVcdC *tfp)
{
    dut->clk_i = 0;
    dut->eval();

    if (tfp)
        tfp->dump(sim_time);

    sim_time++;

    dut->clk_i = 1;
    dut->eval();

    if (tfp)
        tfp->dump(sim_time);

    sim_time++;
}

// ------------------------------------------------------------
// EXTERNAL FUNCTIONS
// ------------------------------------------------------------
extern void reset(Vgpio *dut, VerilatedVcdC *tfp);

extern void write_gpio(
    Vgpio *dut,
    VerilatedVcdC *tfp,
    uint32_t addr,
    uint32_t data,
    uint8_t be);

extern uint32_t read_gpio(
    Vgpio *dut,
    VerilatedVcdC *tfp,
    uint32_t addr);

extern void ref_reset();
extern void ref_write(uint32_t addr, uint32_t data, uint8_t be);
extern void ref_update_inputs(uint32_t gp_i);
extern uint32_t ref_read(uint32_t addr);
extern uint32_t ref_get_gpio();

extern void check_gpio(uint32_t dut_value, uint32_t ref_value);

extern void check_data(
    const char *msg,
    uint32_t dut_value,
    uint32_t ref_value);

// ------------------------------------------------------------
// MAIN
// ------------------------------------------------------------
int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);

    Vgpio *dut = new Vgpio;

    Verilated::traceEverOn(true);

    VerilatedVcdC *tfp = new VerilatedVcdC;

    dut->trace(tfp, 99);
    tfp->open("tb_gpio.vcd");

    // --------------------------------------------------------
    // RESET
    // --------------------------------------------------------
    reset(dut, tfp);
    ref_reset();

    std::cout << "\n=== GPIO TEST START ===\n";

    // ========================================================
    // DEBOUNCE TESTS
    // ========================================================

    std::cout << "\nD01 : STABLE HIGH INPUT\n";

    dut->gp_i = 0x1;

    for (int i = 0; i < 600; i++)
    {
        tick(dut, tfp);
        ref_update_inputs(0x1);
    }

    rdata = read_gpio(dut, tfp, 0x8);
    ref_rdata = ref_read(0x8);
    // --------------------------------------------------------

    std::cout << "\nD02 : STABLE LOW INPUT\n";

    dut->gp_i = 0x0;

    for (int i = 0; i < 600; i++)
    {
        tick(dut, tfp);
        ref_update_inputs(0x0);
    }

    rdata = read_gpio(dut, tfp, 0x8);
     ref_rdata = ref_read(0x8);
    check_data("D02", rdata, ref_rdata);

    // --------------------------------------------------------

    std::cout << "\nD03 : SHORT PULSE\n";

    dut->gp_i = 0x1;

    for (int i = 0; i < 200; i++)
    {
        tick(dut, tfp);
        ref_update_inputs(0x1);
    }

    dut->gp_i = 0x0;

    for (int i = 0; i < 20; i++)
    {
        tick(dut, tfp);
        ref_update_inputs(0x0);
    }

    rdata = read_gpio(dut, tfp, 0x8);

    check_data("D03", rdata & 0x1, 0x0);

    // --------------------------------------------------------

    std::cout << "\nD04 : LONG PULSE\n";

    dut->gp_i = 0x1;

    for (int i = 0; i < 600; i++)
    {
        tick(dut, tfp);
        ref_update_inputs(0x1);
    }

    rdata = read_gpio(dut, tfp, 0x8);

    check_data("D04", rdata & 0x1, 0x1);

    // --------------------------------------------------------

    std::cout << "\nD05 : BOUNCING INPUT\n";

    for (int i = 0; i < 50; i++)
    {
        dut->gp_i = 0x1;
        tick(dut, tfp);
        ref_update_inputs(0x1);

        dut->gp_i = 0x0;
        tick(dut, tfp);
        ref_update_inputs(0x0);
    }

    dut->gp_i = 0x1;

    for (int i = 0; i < 600; i++)
    {
        tick(dut, tfp);
        ref_update_inputs(0x1);
    }

    rdata = read_gpio(dut, tfp, 0x8);

    check_data("D05", rdata & 0x1, 0x1);

    // ========================================================
    // WRITE TESTS
    // ========================================================

    std::cout << "\nW01 : BASIC WRITE\n";

    write_gpio(dut, tfp, 0x0, 0xAA55, 0xF);
    ref_write(0x0, 0xAA55, 0xF);

    check_data("W01", dut->gp_o, ref_get_gpio());

    // --------------------------------------------------------

    std::cout << "\nW02 : BYTE ENABLE WRITE\n";

    write_gpio(dut, tfp, 0x0, 0xFFFF, 0x3);
    ref_write(0x0, 0xFFFF, 0x3);

    check_data("W02", dut->gp_o, ref_get_gpio());

    // --------------------------------------------------------

    std::cout << "\nW03 : INVALID ADDRESS\n";

    uint32_t before = ref_get_gpio();

    write_gpio(dut, tfp, 0x0C, 0x1234, 0xF);
    ref_write(0x0C, 0x1234, 0xF);

    check_data("W03", dut->gp_o, before);

    // ========================================================
    // READ TESTS
    // ========================================================

    std::cout << "\nR01 : READ GPIO_OUT REGISTER\n";

    rdata = read_gpio(dut, tfp, 0x0);

    check_data("R01", rdata, ref_read(0x0));

    // --------------------------------------------------------

    std::cout << "\nR02 : READ GPIO_IN REGISTER\n";

    dut->gp_i = 0x23;

    for (int i = 0; i < 3; i++)
    {
        tick(dut, tfp);
        ref_update_inputs(0x23);
    }

    rdata = read_gpio(dut, tfp, 0x4);

    check_data("R02", rdata, ref_read(0x4));

    // --------------------------------------------------------

    std::cout << "\nR03 : READ DEBOUNCED INPUT\n";

    dut->gp_i = 0x3C;

    for (int i = 0; i < 600; i++)
    {
        tick(dut, tfp);
        ref_update_inputs(0x3C);
    }

    rdata = read_gpio(dut, tfp, 0x8);

    check_data("R03", rdata, ref_read(0x8));



















    // ============================================================
// ADDITIONAL GPIO COVERAGE TEST CASES
// ============================================================

// ============================================================
// BYTE ENABLE TESTS
// ============================================================

std::cout << "\nW04 : BYTE ENABLE 0x1\n";

write_gpio(dut, tfp, 0x0, 0xAAAA5555, 0x1);
ref_write(0x0, 0xAAAA5555, 0x1);

check_data(
    "W04",
    dut->gp_o,
    ref_get_gpio());

// ------------------------------------------------------------

std::cout << "\nW05 : BYTE ENABLE 0x2\n";

write_gpio(dut, tfp, 0x0, 0x12345678, 0x2);
ref_write(0x0, 0x12345678, 0x2);

check_data(
    "W05",
    dut->gp_o,
    ref_get_gpio());

// ------------------------------------------------------------

std::cout << "\nW06 : BYTE ENABLE 0x4\n";

write_gpio(dut, tfp, 0x0, 0xDEADBEEF, 0x4);
ref_write(0x0, 0xDEADBEEF, 0x4);

check_data(
    "W06",
    dut->gp_o,
    ref_get_gpio());

// ------------------------------------------------------------

std::cout << "\nW07 : BYTE ENABLE 0x8\n";

write_gpio(dut, tfp, 0x0, 0xCAFEBABE, 0x8);
ref_write(0x0, 0xCAFEBABE, 0x8);

check_data(
    "W07",
    dut->gp_o,
    ref_get_gpio());


// ============================================================
// INVALID ADDRESS TESTS
// ============================================================

std::cout << "\nR04 : INVALID READ ADDRESS\n";

rdata = read_gpio(dut, tfp, 0xFF);

check_data(
    "R04",
    rdata,
    ref_read(0xFF));

// ------------------------------------------------------------

std::cout << "\nW08 : INVALID WRITE ADDRESS\n";

before = ref_get_gpio();

write_gpio(dut, tfp, 0x20, 0x12345678, 0xF);
ref_write(0x20, 0x12345678, 0xF);

check_data(
    "W08",
    dut->gp_o,
    before);


// ============================================================
// BACK TO BACK OPERATIONS
// ============================================================

std::cout << "\nW09 : BACK TO BACK WRITE\n";

write_gpio(dut, tfp, 0x0, 0x1111, 0xF);
ref_write(0x0, 0x1111, 0xF);

write_gpio(dut, tfp, 0x0, 0x2222, 0xF);
ref_write(0x0, 0x2222, 0xF);

check_data(
    "W09",
    dut->gp_o,
    ref_get_gpio());

// ------------------------------------------------------------

std::cout << "\nR05 : CONSECUTIVE READS\n";

rdata = read_gpio(dut, tfp, 0x0);

check_data(
    "R05_OUT",
    rdata,
    ref_read(0x0));

rdata = read_gpio(dut, tfp, 0x4);

check_data(
    "R05_IN",
    rdata,
    ref_read(0x4));


// ============================================================
// RESET DURING OPERATION
// ============================================================

std::cout << "\nT01 : RESET AFTER WRITE\n";

write_gpio(dut, tfp, 0x0, 0xABCD, 0xF);
ref_write(0x0, 0xABCD, 0xF);

reset(dut, tfp);
ref_reset();

check_data(
    "T01",
    dut->gp_o,
    ref_get_gpio());


// ============================================================
// DEBOUNCE EDGE TESTS
// ============================================================

std::cout << "\nD06 : BEFORE DEBOUNCE LIMIT\n";

dut->gp_i = 0x1;

for (int i = 0; i < 499; i++)
{
    tick(dut, tfp);
    ref_update_inputs(0x1);
}

rdata = read_gpio(dut, tfp, 0x8);

check_data(
    "D06",
    rdata & 0x1,
    0x0);

// ------------------------------------------------------------

std::cout << "\nD07 : AFTER DEBOUNCE LIMIT\n";

tick(dut, tfp);
ref_update_inputs(0x1);

rdata = read_gpio(dut, tfp, 0x8);

check_data(
    "D07",
    rdata & 0x1,
    0x1);


// ============================================================
// MULTI-BIT TOGGLE TEST
// ============================================================

std::cout << "\nD08 : MULTIPLE BIT TOGGLE\n";

dut->gp_i = 0x55;

for (int i = 0; i < 600; i++)
{
    tick(dut, tfp);
    ref_update_inputs(0x55);
}

rdata = read_gpio(dut, tfp, 0x8);

check_data(
    "D08_55",
    rdata,
    0x55);

// ------------------------------------------------------------

dut->gp_i = 0xAA;

for (int i = 0; i < 600; i++)
{
    tick(dut, tfp);
    ref_update_inputs(0xAA);
}

rdata = read_gpio(dut, tfp, 0x8);

check_data(
    "D08_AA",
    rdata,
    0xAA);


// ============================================================
// WIDTH / TRUNCATION TEST
// ============================================================

std::cout << "\nW10 : WIDTH LIMIT\n";

write_gpio(dut, tfp, 0x0, 0xFFFFFFFF, 0xF);
ref_write(0x0, 0xFFFFFFFF, 0xF);

check_data(
    "W10",
    dut->gp_o,
    ref_get_gpio());



// ============================================================
// ADDITIONAL COVERAGE IMPROVEMENT TESTS
// ============================================================

// ============================================================
// R06 : RAW GPIO MULTI READ
// ============================================================

std::cout << "\nR06 : RAW GPIO MULTI READ\n";

std::cout
    << "\nR06 : RAW GPIO MULTI READ\n";

for (uint32_t i = 0; i < 10; i++) {

    // Apply same input to DUT + REF
    dut->gp_i = i;
    ref_update_inputs(i);

    // Advance synchronizer stages
    for (int j = 0; j < 3; j++) {
        tick(dut, tfp);
        ref_update_inputs(i);
    }

    // Read DUT
    uint32_t dut_raw =
        read_gpio(dut, tfp, 0x4);

    // Read REF
    uint32_t ref_raw =
        ref_read(0x4);

    // Compare
    check_data(
        "R06",
        dut_raw,
        ref_raw
    );
}

// ============================================================
// D09 : MULTI DEBOUNCE VALUES
// ============================================================

std::cout
    << "\n--- TEST 3 : MULTI DEBOUNCE VALUES  ---\n";

// Apply GPIO input
dut->gp_i = 0xAA;

// Update reference model input
ref_update_inputs(0xAA);

// Wait for 3-stage synchronizer latency
for (int i = 0; i < 3; i++) {
    tick(dut, tfp);

    // Advance reference model every cycle
    ref_update_inputs(0xAA);
}

// Read DUT GPIO_IN register
uint32_t dut_raw =
    read_gpio(dut, tfp, 0x4);

// Read reference model GPIO_IN register
uint32_t ref_raw =
    ref_read(0x4);

// Compare DUT vs REF
check_data(
    "RAW INPUT",
    dut_raw,
    ref_raw
);

 std::cout
     << "\n--- TEST 3 : write operation BYTE ENBLE  VALUES  ---\n";

 // ===============================
    // 2. BYTE ENABLE = 0 (NO UPDATE)
    // ===============================
    write_gpio(dut, tfp, 0x0, 0xBBBB6666, 0xf);
    ref_write(0x0, 0xBBBB6666, 0xf);   // IMPORTANT FIX

    tick(dut, tfp);

  //  uint32_t dut15 = read_gpio(dut, tfp, 0x0);
//    uint32_t ref15 = ref_write(0x0);

//    check_data("BE=0 HOLD VALUE", dut15, ref15);

// ============================================================
// R07 : INVALID ADDRESS PATTERNS
// ============================================================
dut->gp_i = 0x55;
std::cout << "\nR07 : INVALID ADDRESS PATTERNS\n";

uint32_t invalid_addrs[] =
{
    0x10,
    0x20,
    0x40,
    0x80,
    0x100,
    0xABC
};

for (int i = 0; i < 6; i++)
{
    // DUT read
    rdata =
        read_gpio(
            dut,
            tfp,
           invalid_addrs[i]);

    tick(dut, tfp);

    // Reference model read
    ref_rdata =
        ref_read(
            invalid_addrs[i]);

    // Compare DUT vs REF
    check_data(
        "R07",
        rdata,
        ref_rdata);
}


// ============================================================
// T02 : RESET DURING READ
// ============================================================

std::cout << "\nT02 : RESET DURING READ\n";

dut->device_req_i  = 1;
dut->device_we_i   = 0;
dut->device_addr_i = 0x4;

tick(dut, tfp);

reset(dut, tfp);
ref_reset();

check_data(
    "T02",
    dut->gp_o,
    ref_get_gpio());


// ============================================================
// D10 : GPIO TOGGLE PATTERNS
// ============================================================

std::cout << "\nD10 : GPIO TOGGLE PATTERNS\n";

uint32_t patterns[] =
{
    0x00,
    0xFF,
    0xAA,
    0x55,
    0xF0,
    0x0F
};

for (int p = 0; p < 6; p++)
{
    dut->gp_i = patterns[p];

    for (int i = 0; i < 10; i++)
    {
        tick(dut, tfp);
        ref_update_inputs(patterns[p]);
    }

    rdata = read_gpio(
        dut,
        tfp,
        0x4);

    check_data(
        "D10",
        rdata & 0xFF,
        patterns[p]);
}

std::cout << "\nW11 : BYTE DISABLED RETENTION\n";

// Initialize register
write_gpio(dut, tfp, 0x0, 0xABCD, 0xF);

// Write with no byte enables
write_gpio(dut, tfp, 0x0, 0x1234, 0x0);

// Read back
uint32_t dut_data =
    read_gpio(dut, tfp, 0x0);

// Expect unchanged value
check_data(
    "W11",
    dut_data,
    0xABCD
);


std::cout << "\n=== COVERAGE BOOST TESTS ===\n";

// ===============================
    // 1. FULL WRITE
    // ===============================
    write_gpio(dut, tfp, 0x0, 0xAAAA5555, 0xF);
    ref_write(0x0, 0xAAAA5555, 0xF);

    tick(dut, tfp);

    // ===============================
    // 2. BYTE ENABLE = 0 (NO UPDATE)
    // ===============================
    write_gpio(dut, tfp, 0x0, 0xBBBB6666, 0x0);
    ref_write(0x0, 0xBBBB6666, 0x0);   // IMPORTANT FIX

    tick(dut, tfp);

    uint32_t dut0 = read_gpio(dut, tfp, 0x0);
    uint32_t ref0 = ref_read(0x0);

    check_data("BE=0 HOLD VALUE", dut0, ref0);

    // ===============================
    // 3. PARTIAL BYTE ENABLES
    // ===============================
    write_gpio(dut, tfp, 0x0, 0x12345678, 0xF);
    ref_write(0x0, 0x12345678, 0xF);

    write_gpio(dut, tfp, 0x0, 0x87654321, 0x3);
    ref_write(0x0, 0x87654321, 0x3);

    write_gpio(dut, tfp, 0x0, 0xDEADBEEF, 0xC);
    ref_write(0x0, 0xDEADBEEF, 0xC);

    tick(dut, tfp);

    uint32_t dut1 = read_gpio(dut, tfp, 0x0);
    uint32_t ref1 = ref_read(0x0);

    check_data("PARTIAL BYTE WRITE", dut1, ref1);

    // ===============================
    // 4. INVALID ADDRESS (NO DECODE)
    // ===============================
     before = read_gpio(dut, tfp, 0x0);

    write_gpio(dut, tfp, 0xFF, 0x1234, 0xF);
    tick(dut, tfp);

    uint32_t after = read_gpio(dut, tfp, 0x0);

    check_data("INVALID ADDR SHOULD HOLD", after, before);

   
    // ===============================
    // 5. READ GPIO DBNC
    // ===============================
    uint32_t dut_dbnc = read_gpio(dut, tfp, 0x8);
    uint32_t ref_dbnc = ref_read(0x8);

    check_data("DEBOUNCED INPUT", dut_dbnc, ref_dbnc);

    


// ============================================================
// END OF ADDITIONAL COVERAGE TESTS
// ============================================================




// ============================================================
// END OF ADDITIONAL TESTS
// ============================================================

    // ========================================================
    // RESET TEST
    // ========================================================

    std::cout << "\nRESET TEST\n";

    reset(dut, tfp);
    ref_reset();

    check_gpio(dut->gp_o, ref_get_gpio());

    // ========================================================
    // FINISH
    // ========================================================

    std::cout << "\n=== ALL TESTS COMPLETED ===\n";

    tfp->close();

    VerilatedCov::write("coverage.dat");

    delete tfp;
    delete dut;
    cov.report();

    return 0;
}

