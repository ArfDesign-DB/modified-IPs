// Step 4 execution
// Cov - 100%
// Generated NACK and then also generated ACK transaction

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_cov.h>
#include "Vi2c_master_top.h"

#include <iostream>
#include <iomanip>

//--------------------------------------------------
// TIME
//--------------------------------------------------

vluint64_t sim_time = 0;

double sc_time_stamp()
{
    return sim_time;
}

//--------------------------------------------------
// COVERAGE FLAGS
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
// SLAVE MODEL
//--------------------------------------------------

uint8_t slave_address = 0x50;

bool ack_enable = false;

//--------------------------------------------------
// CLOCK
//--------------------------------------------------

void tick(Vi2c_master_top* top, VerilatedVcdC* tfp)
{
    //--------------------------------------------------
    // CLOCK LOW
    //--------------------------------------------------

    top->wb_clk_i = 0;

    //--------------------------------------------------
    // SLAVE ACK/NACK RESPONSE
    //--------------------------------------------------

    top->sda_pad_i = ack_enable ? 0 : 1;

    top->eval();

    tfp->dump(sim_time++);

    //--------------------------------------------------
    // CLOCK HIGH
    //--------------------------------------------------

    top->wb_clk_i = 1;

    top->sda_pad_i = ack_enable ? 0 : 1;

    top->eval();

    tfp->dump(sim_time++);
}

//--------------------------------------------------
// WB WRITE
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
    // DISPLAY
    //--------------------------------------------------

    std::cout << "[WB WRITE] Addr: 0x"
              << std::hex << (int)addr
              << " Data: 0x"
              << (int)data
              << std::dec << "\n";

    //--------------------------------------------------
    // ADDRESS CHECK
    //--------------------------------------------------

    if(addr == 0x3)
    {
        uint8_t rx_addr = (data >> 1);

        if(rx_addr == slave_address)
        {
            ack_enable = true;

            cov_address_match = true;

            std::cout << "[SLAVE] ADDRESS MATCH -> ACK\n";
        }
        else
        {
            ack_enable = false;

            cov_nack_detected = true;

            std::cout << "[SLAVE] ADDRESS MISMATCH -> NACK\n";
        }

        cov_txr_written = true;
    }

    //--------------------------------------------------
    // COVERAGE
    //--------------------------------------------------

    if(addr == 0x4 && (data & 0x80))
        cov_start_cmd = true;

    if(addr == 0x4 && (data & 0x10))
        cov_write_cmd = true;

    if(addr == 0x4 && (data & 0x40))
        cov_stop_cmd = true;
}

//--------------------------------------------------
// WB READ
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
    // STATUS REGISTER CHECK
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
        // bit7 = 0 -> ACK
        // bit7 = 1 -> NACK
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
    // DISPLAY
    //--------------------------------------------------

    std::cout << "[WB READ] Addr: 0x"
              << std::hex << (int)addr
              << " Data: 0x"
              << (int)data
              << std::dec << "\n";

    return data;
}

//--------------------------------------------------
// RESET
//--------------------------------------------------

void reset_dut(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    top->arst_i   = 0;
    top->wb_rst_i = 1;

    //--------------------------------------------------
    // DEFAULT WB
    //--------------------------------------------------

    top->wb_we_i  = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    //--------------------------------------------------
    // I2C IDLE
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

    std::cout << "[INFO] Reset done\n";
}

//--------------------------------------------------
// INIT
//--------------------------------------------------

void init_i2c(
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
    // READ CONTROL REGISTER
    //--------------------------------------------------

    uint8_t ctr = wb_read(top, tfp, 0x2);

    if(ctr != 0x80)
    {
        std::cout << "[FAIL] CTRL mismatch\n";

        exit(1);
    }

    cov_ctr_enable = true;
    cov_prer_low_written = true;
    cov_prer_high_written = true;
}

//--------------------------------------------------
// ACK TESTCASE
//--------------------------------------------------

void tc_ack(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout << "\n==== ACK TESTCASE ====\n";

    //--------------------------------------------------
    // ADDRESS = 0x50
    // WRITE BIT = 0
    // TX = 0xA0
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
    // STATUS READ
    //--------------------------------------------------

    wb_read(top, tfp, 0x4);

    //--------------------------------------------------
    // STOP
    //--------------------------------------------------

    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<100; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// NACK TESTCASE
//--------------------------------------------------

void tc_nack(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout << "\n==== NACK TESTCASE ====\n";

    //--------------------------------------------------
    // RESET ACK STATE
    //--------------------------------------------------

    ack_enable = false;

    //--------------------------------------------------
    // WRONG ADDRESS
    // 0x60 << 1 = 0xC0
    //--------------------------------------------------

    wb_write(top, tfp, 0x3, 0xC0);

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
    // STATUS READ
    //--------------------------------------------------

    wb_read(top, tfp, 0x4);

    //--------------------------------------------------
    // STOP
    //--------------------------------------------------

    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<100; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// FUNCTIONAL COVERAGE REPORT
//--------------------------------------------------

void print_cov()
{
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

    //--------------------------------------------------
    // TOTAL
    //--------------------------------------------------

    int total =
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

    int max = 13;

    std::cout << "---------------------------------\n";

    std::cout << "Covered Points             : "
              << total << "/" << max << "\n";

    std::cout << "FUNCTIONAL COVERAGE        : "
              << (total * 100.0 / max)
              << " %\n";

    std::cout << "=================================\n";
}

//--------------------------------------------------
// MAIN
//--------------------------------------------------

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);

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

    tfp->open("wave.vcd");

    //--------------------------------------------------
    // RESET
    //--------------------------------------------------

    reset_dut(top, tfp);

    //--------------------------------------------------
    // INIT
    //--------------------------------------------------

    init_i2c(top, tfp);

    //--------------------------------------------------
    // TESTCASES
    //--------------------------------------------------

    tc_nack(top, tfp);

    tc_ack(top, tfp);

    //--------------------------------------------------
    // COVERAGE
    //--------------------------------------------------

    print_cov();

    //--------------------------------------------------
    // CLOSE
    //--------------------------------------------------

    tfp->close();

    delete top;
    delete tfp;

    //--------------------------------------------------
    // SAVE VERILATOR COVERAGE
    //--------------------------------------------------

    VerilatedCov::write("cov.dat");

    std::cout << "\nDONE\n";

    return 0;
}
