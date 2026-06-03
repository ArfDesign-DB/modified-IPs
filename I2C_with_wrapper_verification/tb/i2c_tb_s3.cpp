// Step - 3
// Stuctured the code by writing separate testcase function and performing function call in the main function. This would improve the readability an help with future testcase additions
// Cov - 92%

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_cov.h>

#include "Vi2c_master_top.h"

#include <iostream>
#include <iomanip>

//--------------------------------------------------
// GLOBAL SIMULATION TIME
//--------------------------------------------------

vluint64_t sim_time = 0;

double sc_time_stamp()
{
    return sim_time;
}

//--------------------------------------------------
// FUNCTIONAL COVERAGE VARIABLES
//--------------------------------------------------

bool cov_reset_done        = false;
bool cov_prer_low_written  = false;
bool cov_prer_high_written = false;
bool cov_ctr_enable        = false;
bool cov_txr_written       = false;
bool cov_start_cmd         = false;
bool cov_stop_cmd          = false;
bool cov_write_cmd         = false;
bool cov_status_read       = false;
bool cov_tip_detected      = false;
bool cov_ack_received      = false;
bool cov_address_match     = false;
bool cov_nack_detected     = false;

//--------------------------------------------------
// SIMPLE SLAVE MODEL VARIABLES
//--------------------------------------------------

uint8_t slave_address = 0x50;

bool ack_enable = false;

//--------------------------------------------------
// CLOCK TICK + SLAVE MODEL
//--------------------------------------------------

void tick(Vi2c_master_top* top, VerilatedVcdC* tfp)
{
    //--------------------------------------------------
    // CLOCK LOW
    //--------------------------------------------------

    top->wb_clk_i = 0;

    //--------------------------------------------------
    // SIMPLE ACK / NACK MODEL
    //--------------------------------------------------

    if(ack_enable)
        top->sda_pad_i = 0; // ACK
    else
        top->sda_pad_i = 1; // NACK

    top->eval();

    tfp->dump(sim_time++);

    //--------------------------------------------------
    // CLOCK HIGH
    //--------------------------------------------------

    top->wb_clk_i = 1;

    if(ack_enable)
        top->sda_pad_i = 0;
    else
        top->sda_pad_i = 1;

    top->eval();

    tfp->dump(sim_time++);
}

//--------------------------------------------------
// WISHBONE WRITE TASK
//--------------------------------------------------

void wb_write(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp,
    uint8_t addr,
    uint8_t data)
{
    top->wb_adr_i = addr;
    top->wb_dat_i = data;

    top->wb_we_i  = 1;
    top->wb_stb_i = 1;
    top->wb_cyc_i = 1;

    //--------------------------------------------------
    // WAIT FOR WB ACK
    //--------------------------------------------------

    do
    {
        tick(top, tfp);

    } while(!top->wb_ack_o);

    tick(top, tfp);

    //--------------------------------------------------
    // REMOVE WB SIGNALS
    //--------------------------------------------------

    top->wb_we_i  = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    tick(top, tfp);

    //--------------------------------------------------
    // DISPLAY WRITE
    //--------------------------------------------------

    std::cout << "[WB WRITE] Addr: 0x"
              << std::hex << (int)addr
              << " Data: 0x"
              << (int)data
              << std::dec << "\n";

    //--------------------------------------------------
    // COVERAGE
    //--------------------------------------------------

    if(addr == 0x0)
        cov_prer_low_written = true;

    if(addr == 0x1)
        cov_prer_high_written = true;

    if(addr == 0x2 && data == 0x80)
        cov_ctr_enable = true;

    //--------------------------------------------------
    // TXR WRITE
    //--------------------------------------------------

    if(addr == 0x3)
    {
        cov_txr_written = true;

        //--------------------------------------------------
        // ADDRESS CHECK
        //--------------------------------------------------

        uint8_t received_address = (data >> 1);

        if(received_address == slave_address)
        {
            ack_enable = true;

            cov_address_match = true;

            std::cout << "[SLAVE] ADDRESS MATCH -> ACK\n";
        }
        else
        {
            ack_enable = false;

            std::cout << "[SLAVE] ADDRESS MISMATCH -> NACK\n";
        }
    }

    //--------------------------------------------------
    // START COMMAND
    //--------------------------------------------------

    if(addr == 0x4 && (data & 0x80))
        cov_start_cmd = true;

    //--------------------------------------------------
    // WRITE COMMAND
    //--------------------------------------------------

    if(addr == 0x4 && (data & 0x10))
        cov_write_cmd = true;

    //--------------------------------------------------
    // STOP COMMAND
    //--------------------------------------------------

    if(addr == 0x4 && (data & 0x40))
        cov_stop_cmd = true;
}

//--------------------------------------------------
// WISHBONE READ TASK
//--------------------------------------------------

uint8_t wb_read(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp,
    uint8_t addr)
{
    top->wb_adr_i = addr;

    top->wb_we_i  = 0;
    top->wb_stb_i = 1;
    top->wb_cyc_i = 1;

    //--------------------------------------------------
    // WAIT FOR WB ACK
    //--------------------------------------------------

    do
    {
        tick(top, tfp);

    } while(!top->wb_ack_o);

    //--------------------------------------------------
    // READ DATA
    //--------------------------------------------------

    uint8_t data = top->wb_dat_o;

    //--------------------------------------------------
    // STATUS REGISTER COVERAGE
    //--------------------------------------------------

    if(addr == 0x4)
    {
        cov_status_read = true;

        //--------------------------------------------------
        // TIP BIT
        //--------------------------------------------------

        if(data & 0x02)
            cov_tip_detected = true;

        //--------------------------------------------------
        // RXACK BIT
        //--------------------------------------------------

        if((data & 0x80) == 0)
        {
            cov_ack_received = true;

            std::cout << "[INFO] SLAVE ACK RECEIVED\n";
        }
        else
        {
            cov_nack_detected = true;

            std::cout << "[INFO] SLAVE NACK RECEIVED\n";
        }
    }

    tick(top, tfp);

    //--------------------------------------------------
    // REMOVE WB SIGNALS
    //--------------------------------------------------

    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    tick(top, tfp);

    //--------------------------------------------------
    // DISPLAY READ
    //--------------------------------------------------

    std::cout << "[WB READ ] Addr: 0x"
              << std::hex << (int)addr
              << " Data: 0x"
              << (int)data
              << std::dec << "\n";

    return data;
}

//--------------------------------------------------
// RESET TASK
//--------------------------------------------------

void reset_dut(Vi2c_master_top* top, VerilatedVcdC* tfp)
{
    top->arst_i   = 0;
    top->wb_rst_i = 1;

    top->wb_we_i  = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    //--------------------------------------------------
    // I2C BUS IDLE
    //--------------------------------------------------

    top->scl_pad_i = 1;
    top->sda_pad_i = 1;

    //--------------------------------------------------
    // APPLY RESET
    //--------------------------------------------------

    for(int i=0; i<5; i++)
        tick(top, tfp);

    //--------------------------------------------------
    // RELEASE RESET
    //--------------------------------------------------

    top->arst_i   = 1;
    top->wb_rst_i = 0;

    for(int i=0; i<5; i++)
        tick(top, tfp);

    cov_reset_done = true;

    std::cout << "[INFO] Reset completed\n";
}

//--------------------------------------------------
// COMMON INITIALIZATION
//--------------------------------------------------

void initialize_i2c_master(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    //--------------------------------------------------
    // PROGRAM PRESCALER
    //--------------------------------------------------

    wb_write(top, tfp, 0x0, 0x32);

    wb_write(top, tfp, 0x1, 0x00);

    //--------------------------------------------------
    // ENABLE CORE
    //--------------------------------------------------

    wb_write(top, tfp, 0x2, 0x80);

    //--------------------------------------------------
    // READ BACK CONTROL REGISTER
    //--------------------------------------------------

    uint8_t ctr = wb_read(top, tfp, 0x2);

    if(ctr != 0x80)
    {
        std::cout << "[FAIL] Control register mismatch\n";

        exit(1);
    }
}

//--------------------------------------------------
// TESTCASE 1
// ADDRESS MATCH -> ACK
//--------------------------------------------------

void tc_address_match_ack(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout << "\n=================================\n";
    std::cout << " TESTCASE 1 : ADDRESS MATCH ACK\n";
    std::cout << "=================================\n";

    //--------------------------------------------------
    // SLAVE ADDRESS = 0x50
    // WRITE BIT = 0
    // TX BYTE = 0xA0
    //--------------------------------------------------

    wb_write(top, tfp, 0x3, 0xA0);

    //--------------------------------------------------
    // START + WRITE
    //--------------------------------------------------

    wb_write(top, tfp, 0x4, 0x90);

    //--------------------------------------------------
    // WAIT
    //--------------------------------------------------

    for(int i=0; i<200; i++)
        tick(top, tfp);

    //--------------------------------------------------
    // READ STATUS
    //--------------------------------------------------

    uint8_t sr = wb_read(top, tfp, 0x4);

    std::cout << "\nSTATUS REGISTER = 0x"
              << std::hex << (int)sr
              << std::dec << "\n";

    //--------------------------------------------------
    // TIP CHECK
    //--------------------------------------------------

    if(sr & 0x02)
        std::cout << "[INFO] Transfer in progress\n";
    else
        std::cout << "[INFO] Transfer completed\n";

    //--------------------------------------------------
    // STOP
    //--------------------------------------------------

    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<100; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// FINAL SIGNAL DISPLAY
//--------------------------------------------------

void display_final_signals(
    Vi2c_master_top* top)
{
    std::cout << "\nFINAL SIGNALS\n";

    std::cout << "scl_pad_o      : "
              << (int)top->scl_pad_o << "\n";

    std::cout << "scl_padoen_o   : "
              << (int)top->scl_padoen_o << "\n";

    std::cout << "sda_pad_o      : "
              << (int)top->sda_pad_o << "\n";

    std::cout << "sda_padoen_o   : "
              << (int)top->sda_padoen_o << "\n";

    std::cout << "wb_inta_o      : "
              << (int)top->wb_inta_o << "\n";
}

//--------------------------------------------------
// COVERAGE REPORT
//--------------------------------------------------

void print_coverage_report()
{
    int total_cov_points = 13;

    int covered_points =
          cov_reset_done
        + cov_prer_low_written
        + cov_prer_high_written
        + cov_ctr_enable
        + cov_txr_written
        + cov_start_cmd
        + cov_write_cmd
        + cov_stop_cmd
        + cov_status_read
        + cov_tip_detected
        + cov_ack_received
        + cov_address_match
        + cov_nack_detected;

    double coverage =
        (double)covered_points /
        total_cov_points * 100.0;

    std::cout << "\n=================================\n";
    std::cout << " FUNCTIONAL COVERAGE REPORT\n";
    std::cout << "=================================\n";

    std::cout << "Reset Covered              : "
              << cov_reset_done << "\n";

    std::cout << "PRER Low Write Covered     : "
              << cov_prer_low_written << "\n";

    std::cout << "PRER High Write Covered    : "
              << cov_prer_high_written << "\n";

    std::cout << "CTR Enable Covered         : "
              << cov_ctr_enable << "\n";

    std::cout << "TXR Write Covered          : "
              << cov_txr_written << "\n";

    std::cout << "START Command Covered      : "
              << cov_start_cmd << "\n";

    std::cout << "WRITE Command Covered      : "
              << cov_write_cmd << "\n";

    std::cout << "STOP Command Covered       : "
              << cov_stop_cmd << "\n";

    std::cout << "STATUS Read Covered        : "
              << cov_status_read << "\n";

    std::cout << "TIP Bit Covered            : "
              << cov_tip_detected << "\n";

    std::cout << "ACK Received Covered       : "
              << cov_ack_received << "\n";

    std::cout << "ADDRESS MATCH Covered      : "
              << cov_address_match << "\n";

    std::cout << "NACK Covered               : "
              << cov_nack_detected << "\n";

    std::cout << "---------------------------------\n";

    std::cout << "Covered Points             : "
              << covered_points
              << "/"
              << total_cov_points << "\n";

    std::cout << "FUNCTIONAL COVERAGE        : "
              << coverage << " %\n";

    std::cout << "=================================\n";
}

//--------------------------------------------------
// MAIN
//--------------------------------------------------

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);

    //--------------------------------------------------
    // ENABLE TRACE
    //--------------------------------------------------

    Verilated::traceEverOn(true);

    //--------------------------------------------------
    // DUT
    //--------------------------------------------------

    Vi2c_master_top* top = new Vi2c_master_top;

    //--------------------------------------------------
    // VCD
    //--------------------------------------------------

    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);

    tfp->open("i2c_wave.vcd");

    //--------------------------------------------------
    // RESET
    //--------------------------------------------------

    reset_dut(top, tfp);

    //--------------------------------------------------
    // INITIALIZATION
    //--------------------------------------------------

    initialize_i2c_master(top, tfp);

    //--------------------------------------------------
    // TESTCASES
    //--------------------------------------------------

    tc_address_match_ack(top, tfp);

    //--------------------------------------------------
    // FINAL SIGNALS
    //--------------------------------------------------

    display_final_signals(top);

    //--------------------------------------------------
    // COVERAGE
    //--------------------------------------------------

    print_coverage_report();

    //--------------------------------------------------
    // SAVE VERILATOR COVERAGE
    //--------------------------------------------------

    VerilatedCov::write("vlt_coverage.dat");

    //--------------------------------------------------
    // CLOSE FILES
    //--------------------------------------------------

    tfp->close();

    delete tfp;
    delete top;

    std::cout << "\nAll tests completed successfully!\n";

    return 0;
}
