#include "Vi2c_master_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include <iostream>
#include <iomanip>

vluint64_t sim_time = 0;

double sc_time_stamp()
{
    return sim_time;
}

//--------------------------------------------------
// Functional Coverage Variables
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

//--------------------------------------------------
// Clock Tick + Simple I2C Slave ACK Model
//--------------------------------------------------

void tick(Vi2c_master_top* top, VerilatedVcdC* tfp)
{
    //--------------------------------------------------
    // CLOCK LOW
    //--------------------------------------------------

    top->wb_clk_i = 0;

    // Simple slave ACK generation
    // Pull SDA low during ACK phase

    if(top->scl_pad_o == 1)
        top->sda_pad_i = 0;   // ACK
    else
        top->sda_pad_i = 1;   // release line

    top->eval();

    tfp->dump(sim_time++);

    //--------------------------------------------------
    // CLOCK HIGH
    //--------------------------------------------------

    top->wb_clk_i = 1;

    // Simple slave ACK generation

    if(top->scl_pad_o == 1)
        top->sda_pad_i = 0;
    else
        top->sda_pad_i = 1;

    top->eval();

    tfp->dump(sim_time++);
}

//--------------------------------------------------
// Wishbone Write Task
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
    // Wait for ACK
    //--------------------------------------------------

    do
    {
        tick(top, tfp);

    } while (!top->wb_ack_o);

    tick(top, tfp);

    //--------------------------------------------------
    // Remove WB Signals
    //--------------------------------------------------

    top->wb_we_i  = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    tick(top, tfp);

    //--------------------------------------------------
    // Display Transaction
    //--------------------------------------------------

    std::cout << "[WB WRITE] Addr: 0x"
              << std::hex << (int)addr
              << " Data: 0x"
              << (int)data
              << std::dec << "\n";

    //--------------------------------------------------
    // Coverage Collection
    //--------------------------------------------------

    if(addr == 0x0)
        cov_prer_low_written = true;

    if(addr == 0x1)
        cov_prer_high_written = true;

    if(addr == 0x2 && data == 0x80)
        cov_ctr_enable = true;

    if(addr == 0x3)
        cov_txr_written = true;

    //--------------------------------------------------
    // START Command Coverage
    //--------------------------------------------------

    if(addr == 0x4 && (data & 0x80))
        cov_start_cmd = true;

    //--------------------------------------------------
    // WRITE Command Coverage
    //--------------------------------------------------

    if(addr == 0x4 && (data & 0x10))
        cov_write_cmd = true;

    //--------------------------------------------------
    // STOP Command Coverage
    //--------------------------------------------------

    if(addr == 0x4 && (data & 0x40))
        cov_stop_cmd = true;
}

//--------------------------------------------------
// Wishbone Read Task
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
    // Wait for ACK
    //--------------------------------------------------

    do
    {
        tick(top, tfp);

    } while (!top->wb_ack_o);

    //--------------------------------------------------
    // Read Data
    //--------------------------------------------------

    uint8_t data = top->wb_dat_o;

    //--------------------------------------------------
    // Coverage Collection
    //--------------------------------------------------

    if(addr == 0x4)
    {
        cov_status_read = true;

        //--------------------------------------------------
        // TIP bit = bit1
        //--------------------------------------------------

        if(data & 0x02)
            cov_tip_detected = true;

        //--------------------------------------------------
        // RXACK bit = bit7
        // 0 = ACK received
        //--------------------------------------------------

        if((data & 0x80) == 0)
            cov_ack_received = true;
    }

    tick(top, tfp);

    //--------------------------------------------------
    // Remove WB Signals
    //--------------------------------------------------

    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    tick(top, tfp);

    //--------------------------------------------------
    // Display Read Transaction
    //--------------------------------------------------

    std::cout << "[WB READ ] Addr: 0x"
              << std::hex << (int)addr
              << " Data: 0x"
              << (int)data
              << std::dec << "\n";

    return data;
}

//--------------------------------------------------
// Reset Task
//--------------------------------------------------

void reset_dut(Vi2c_master_top* top, VerilatedVcdC* tfp)
{
    top->arst_i   = 0;
    top->wb_rst_i = 1;

    top->wb_we_i  = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    //--------------------------------------------------
    // I2C Bus Idle State
    //--------------------------------------------------

    top->scl_pad_i = 1;
    top->sda_pad_i = 1;

    //--------------------------------------------------
    // Apply Reset
    //--------------------------------------------------

    for(int i=0; i<5; i++)
        tick(top, tfp);

    //--------------------------------------------------
    // Release Reset
    //--------------------------------------------------

    top->arst_i   = 1;
    top->wb_rst_i = 0;

    for(int i=0; i<5; i++)
        tick(top, tfp);

    cov_reset_done = true;

    std::cout << "[INFO] Reset completed\n";
}

//--------------------------------------------------
// Main
//--------------------------------------------------

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);

    //--------------------------------------------------
    // Enable Waveform Tracing
    //--------------------------------------------------

    Verilated::traceEverOn(true);

    //--------------------------------------------------
    // DUT Instance
    //--------------------------------------------------

    Vi2c_master_top* top = new Vi2c_master_top;

    //--------------------------------------------------
    // VCD File
    //--------------------------------------------------

    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);

    tfp->open("i2c_wave.vcd");

    //--------------------------------------------------
    // RESET
    //--------------------------------------------------

    reset_dut(top, tfp);

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

    if (ctr != 0x80)
    {
        std::cout << "[FAIL] Control register mismatch\n";

        return 1;
    }

    //--------------------------------------------------
    // LOAD TRANSMIT DATA
    //--------------------------------------------------

    wb_write(top, tfp, 0x3, 0xA5);

    //--------------------------------------------------
    // SEND START + WRITE COMMAND
    //
    // bit7 = START
    // bit4 = WRITE
    //--------------------------------------------------

    wb_write(top, tfp, 0x4, 0x90);

    //--------------------------------------------------
    // Wait for Transfer
    //--------------------------------------------------

    for(int i=0; i<200; i++)
        tick(top, tfp);

    //--------------------------------------------------
    // READ STATUS REGISTER
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
    // STOP COMMAND
    //--------------------------------------------------

    wb_write(top, tfp, 0x4, 0x40);

    //--------------------------------------------------
    // Wait
    //--------------------------------------------------

    for(int i=0; i<100; i++)
        tick(top, tfp);

    //--------------------------------------------------
    // Display Final Outputs
    //--------------------------------------------------

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

    //--------------------------------------------------
    // FUNCTIONAL COVERAGE REPORT
    //--------------------------------------------------

    int total_cov_points = 11;

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
        + cov_ack_received;

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

    std::cout << "---------------------------------\n";

    std::cout << "Covered Points             : "
              << covered_points
              << "/"
              << total_cov_points << "\n";

    std::cout << "FUNCTIONAL COVERAGE        : "
              << coverage << " %\n";

    std::cout << "=================================\n";

    //--------------------------------------------------
    // CLOSE FILES
    //--------------------------------------------------

    tfp->close();

    delete tfp;
    delete top;

    std::cout << "\nAll tests completed successfully!\n";

    return 0;
}
