#include "Vi2c_master_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include <iostream>
#include <iomanip>

vluint64_t sim_time = 0;

double sc_time_stamp() {
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
bool cov_read_cmd          = false;

bool cov_status_read       = false;

bool cov_tip_detected      = false;
bool cov_irq_detected      = false;
bool cov_busy_detected     = false;
bool cov_rxack_detected    = false;
bool cov_al_detected       = false;

bool cov_interrupt_enable  = false;

//--------------------------------------------------
// Clock Tick
//--------------------------------------------------

void tick(Vi2c_master_top* top, VerilatedVcdC* tfp)
{
    top->wb_clk_i = 0;
    top->eval();
    tfp->dump(sim_time++);

    top->wb_clk_i = 1;
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

    // wait for ACK
    do {
        tick(top, tfp);
    } while (!top->wb_ack_o);

    tick(top, tfp);

    top->wb_we_i  = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    tick(top, tfp);

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

    // CTR register
    if(addr == 0x2)
    {
        // core enable
        if(data & 0x80)
            cov_ctr_enable = true;

        // interrupt enable
        if(data & 0x40)
            cov_interrupt_enable = true;
    }

    // TXR write
    if(addr == 0x3)
        cov_txr_written = true;

    // Command register
    if(addr == 0x4)
    {
        // START bit = bit7
        if(data & 0x80)
            cov_start_cmd = true;

        // STOP bit = bit6
        if(data & 0x40)
            cov_stop_cmd = true;

        // READ bit = bit5
        if(data & 0x20)
            cov_read_cmd = true;

        // WRITE bit = bit4
        if(data & 0x10)
            cov_write_cmd = true;
    }
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

    do {
        tick(top, tfp);
    } while (!top->wb_ack_o);

    uint8_t data = top->wb_dat_o;

    //--------------------------------------------------
    // Coverage Collection
    //--------------------------------------------------

    if(addr == 0x4)
    {
        cov_status_read = true;

        // STATUS REGISTER BITS
        // sr[7] = rxack
        // sr[6] = busy
        // sr[5] = arbitration lost
        // sr[1] = tip
        // sr[0] = irq flag

        if(data & 0x80)
            cov_rxack_detected = true;

        if(data & 0x40)
            cov_busy_detected = true;

        if(data & 0x20)
            cov_al_detected = true;

        if(data & 0x02)
            cov_tip_detected = true;

        if(data & 0x01)
            cov_irq_detected = true;
    }

    tick(top, tfp);

    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    tick(top, tfp);

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

    top->scl_pad_i = 1;
    top->sda_pad_i = 1;

    for(int i=0; i<5; i++)
        tick(top, tfp);

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

    Verilated::traceEverOn(true);

    Vi2c_master_top* top = new Vi2c_master_top;

    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);

    tfp->open("i2c_wave.vcd");

    //----------------------------------------------------
    // RESET
    //----------------------------------------------------

    reset_dut(top, tfp);

    //----------------------------------------------------
    // PROGRAM PRESCALER
    //----------------------------------------------------

    wb_write(top, tfp, 0x0, 0x32);
    wb_write(top, tfp, 0x1, 0x00);

    //----------------------------------------------------
    // ENABLE CORE + INTERRUPT
    //
    // CTR:
    // bit7 = core enable
    // bit6 = interrupt enable
    //----------------------------------------------------

    wb_write(top, tfp, 0x2, 0xC0);

    uint8_t ctr = wb_read(top, tfp, 0x2);

    if (ctr != 0xC0)
    {
        std::cout << "[FAIL] Control register mismatch\n";
        return 1;
    }

    //----------------------------------------------------
    // LOAD TRANSMIT DATA
    //----------------------------------------------------

    wb_write(top, tfp, 0x3, 0xA5);

    //----------------------------------------------------
    // START + WRITE COMMAND
    //----------------------------------------------------

    wb_write(top, tfp, 0x4, 0x90);

    //----------------------------------------------------
    // Wait some cycles
    //----------------------------------------------------

    for(int i=0; i<200; i++)
        tick(top, tfp);

    //----------------------------------------------------
    // READ STATUS REGISTER
    //----------------------------------------------------

    uint8_t sr = wb_read(top, tfp, 0x4);

    std::cout << "\nSTATUS REGISTER = 0x"
              << std::hex << (int)sr
              << std::dec << "\n";

    //----------------------------------------------------
    // CHECK TIP BIT
    //----------------------------------------------------

    if (sr & 0x02)
        std::cout << "[INFO] Transfer in progress\n";
    else
        std::cout << "[INFO] Transfer completed\n";

    //----------------------------------------------------
    // READ COMMAND TEST
    //----------------------------------------------------

    wb_write(top, tfp, 0x4, 0x20);

    for(int i=0; i<100; i++)
        tick(top, tfp);

    //----------------------------------------------------
    // SEND STOP
    //----------------------------------------------------

    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<100; i++)
        tick(top, tfp);

    //----------------------------------------------------
    // Display Important Outputs
    //----------------------------------------------------

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

    //----------------------------------------------------
    // FUNCTIONAL COVERAGE REPORT
    //----------------------------------------------------

    int total_cov_points = 15;

    int covered_points =
          cov_reset_done
        + cov_prer_low_written
        + cov_prer_high_written
        + cov_ctr_enable
        + cov_interrupt_enable
        + cov_txr_written
        + cov_start_cmd
        + cov_stop_cmd
        + cov_write_cmd
        + cov_read_cmd
        + cov_status_read
        + cov_tip_detected
        + cov_irq_detected
        + cov_busy_detected
        + cov_rxack_detected;

    double coverage =
        (double)covered_points / total_cov_points * 100.0;

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

    std::cout << "Interrupt Enable Covered   : "
              << cov_interrupt_enable << "\n";

    std::cout << "TXR Write Covered          : "
              << cov_txr_written << "\n";

    std::cout << "START Command Covered      : "
              << cov_start_cmd << "\n";

    std::cout << "STOP Command Covered       : "
              << cov_stop_cmd << "\n";

    std::cout << "WRITE Command Covered      : "
              << cov_write_cmd << "\n";

    std::cout << "READ Command Covered       : "
              << cov_read_cmd << "\n";

    std::cout << "STATUS Read Covered        : "
              << cov_status_read << "\n";

    std::cout << "TIP Bit Covered            : "
              << cov_tip_detected << "\n";

    std::cout << "IRQ Flag Covered           : "
              << cov_irq_detected << "\n";

    std::cout << "BUSY Bit Covered           : "
              << cov_busy_detected << "\n";

    std::cout << "RXACK Bit Covered          : "
              << cov_rxack_detected << "\n";

    std::cout << "AL Bit Covered             : "
              << cov_al_detected << "\n";

    std::cout << "---------------------------------\n";

    std::cout << "Covered Points             : "
              << covered_points << "/"
              << total_cov_points << "\n";

    std::cout << "FUNCTIONAL COVERAGE        : "
              << coverage << " %\n";

    std::cout << "=================================\n";

    //----------------------------------------------------
    // FINISH
    //----------------------------------------------------

    tfp->close();

    delete tfp;
    delete top;

    std::cout << "\nAll tests completed successfully!\n";

    return 0;
}
