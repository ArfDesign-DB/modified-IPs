#include "Vspi_flash_xip.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "spi_flash_xip_tb_utils.h"
#include <iostream>

int main(int argc, char **argv) {

    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto* dut = new Vspi_flash_xip;
    auto* tfp = new VerilatedVcdC;

    dut->trace(tfp, 5);
    tfp->open("../wave/TC_003.vcd");

    dut->clk_i = 0;
    reset_dut(dut, tfp);

    dut->xip_req_i = 1;
    dut->xip_we_i  = 0;
    dut->xip_addr_i = 0xABCDEF;

    bool saw_rvalid_pre_reset = false;
    bool saw_rvalid_post_reset = false;

    for (int i = 0; i < 1000; i++) {

        if (i == 80) {
            // Check that it didn't prematurely fire valid before the reset
            if (dut->xip_rvalid_o) saw_rvalid_pre_reset = true; 
            
            // De-assert request so it stays idle post-reset
            dut->xip_req_i = 0; 
            reset_dut(dut, tfp);   // mid transaction reset
        }

        tick(dut, tfp);

        // Track if rvalid ever wakes up after the reset event
        if (i > 88 && dut->xip_rvalid_o) {
            saw_rvalid_post_reset = true;
        }
    }

    // SUCCESS CRITERIA: 
    // 1. Rvalid was never asserted (transaction cleanly killed)
    // 2. CSN line returned high (idle state)
    bool test_passed = (!saw_rvalid_pre_reset) && (!saw_rvalid_post_reset) && (dut->spi_csn_o == 1);

    std::cout << (test_passed ? "PASS TC_003" : "FAIL TC_003") << "\n";
    write_coverage("TC_003_spi_flash_xip_reset_mid_transaction_test");
    
    return test_passed ? 0 : 1;
}
