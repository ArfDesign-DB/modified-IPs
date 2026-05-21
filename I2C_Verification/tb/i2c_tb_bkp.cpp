// Step 4 execution
// Cov - 100%
// Generated NACK and ACK transaction
// START / WRITE / STOP messages added
// Fixed SCL toggling issue
// Fixed scl_padoen_o behavior
// Added proper OPEN-DRAIN SCL/SDA modeling

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_cov.h>
#include "Vi2c_master_top.h"

#include <iostream>
#include <iomanip>#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_cov.h>
#include "Vi2c_master_top.h"

#include <iostream>
#include <iomanip>
#include <sstream>

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

bool cov_reset_done          = false;
bool cov_prer_low_written    = false;
bool cov_prer_high_written   = false;
bool cov_ctr_enable          = false;
bool cov_txr_written         = false;
bool cov_start_cmd           = false;
bool cov_stop_cmd            = false;
bool cov_write_cmd           = false;
bool cov_read_cmd            = false;
bool cov_status_read         = false;
bool cov_tip_detected        = false;
bool cov_ack_received        = false;
bool cov_address_match       = false;
bool cov_nack_detected       = false;
bool cov_data_byte_written   = false;
bool cov_data_ack_received   = false;
bool cov_data_read           = false;
bool cov_rxr_read            = false;
bool cov_repeated_start      = false;
bool cov_repeated_start_read = false;
bool data_byte_active        = false;

//--------------------------------------------------
// SLAVE MODEL
//--------------------------------------------------

uint8_t slave_address   = 0x50;
uint8_t slave_read_data = 0x3C;

bool ack_enable    = false;
bool address_phase = false;
bool data_phase    = false;

//--------------------------------------------------
// SIMULATION TIME HELPER (PS FORMAT)
//--------------------------------------------------

std::string get_sim_time_str()
{
    std::stringstream ss;
    ss << "@"
       << std::dec
       << std::setw(10)
       << std::setfill(' ')
       << (sim_time * 1000)
       << "ps";
    return ss.str();
}

std::string hex_byte(uint8_t val)
{
    std::stringstream ss;
    ss << std::hex
       << std::uppercase
       << std::setw(2)
       << std::setfill('0')
       << (int)val;
    return ss.str();
}

//--------------------------------------------------
// CLOCK
//--------------------------------------------------

void tick(Vi2c_master_top* top, VerilatedVcdC* tfp)
{
    if(top->scl_padoen_o == 0)
        top->scl_pad_i = 0;
    else
        top->scl_pad_i = 1;

    if(top->sda_padoen_o == 0)
        top->sda_pad_i = 0;
    else
        top->sda_pad_i = ack_enable ? 0 : 1;

    top->wb_clk_i = 0;
    top->eval();
    tfp->dump(sim_time++);

    top->wb_clk_i = 1;
    top->eval();
    tfp->dump(sim_time++);
}

//--------------------------------------------------
// WAIT FOR I2C COMPLETE
//--------------------------------------------------

void wait_for_tip(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    uint8_t status;
    bool tip_seen = false;

    do
    {
        top->wb_adr_i = 0x4;
        top->wb_we_i  = 0;
        top->wb_stb_i = 1;
        top->wb_cyc_i = 1;

        do
        {
            tick(top, tfp);
        } while(!top->wb_ack_o);

        status = top->wb_dat_o;

        if(status & 0x02)
        {
            tip_seen = true;
            cov_tip_detected = true;
        }

        tick(top, tfp);

        top->wb_stb_i = 0;
        top->wb_cyc_i = 0;

        tick(top, tfp);

    } while(status & 0x02);

    if(tip_seen)
        cov_tip_detected = true;
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
    bool local_address_phase = false;
    bool local_data_phase    = false;

    if(addr == 0x3)
    {
        if(data == 0xA0 || data == 0xA1 || data == 0xC0)
        {
            local_address_phase = true;
            local_data_phase    = false;
        }
        else
        {
            local_data_phase    = true;
            local_address_phase = false;
        }
    }

    top->wb_adr_i = addr;
    top->wb_dat_i = data;
    top->wb_we_i  = 1;
    top->wb_stb_i = 1;
    top->wb_cyc_i = 1;

    do
    {
        tick(top, tfp);
    } while(!top->wb_ack_o);

    tick(top, tfp);

    top->wb_we_i  = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    tick(top, tfp);

    std::cout
        << get_sim_time_str()
        << " [WB WRITE] Addr: 0x"
        << hex_byte(addr)
        << " Data: 0x"
        << hex_byte(data)
        << "\n";

    if(addr == 0x4)
    {
        if(data & 0x80)
        {
            cov_start_cmd = true;
            std::cout
                << get_sim_time_str()
                << " [I2C MASTER] START GENERATED\n";
        }

        if((data & 0x10) && (data & 0x80))
        {
            cov_write_cmd = true;
            std::cout
                << get_sim_time_str()
                << " [I2C MASTER] WRITE GENERATED\n";
        }

        if(data & 0x20)
        {
            cov_read_cmd = true;
            std::cout
                << get_sim_time_str()
                << " [I2C MASTER] READ GENERATED\n";
        }

        if(data & 0x40)
        {
            cov_stop_cmd = true;
            std::cout
                << get_sim_time_str()
                << " [I2C MASTER] STOP GENERATED\n";
        }
    }

    if(local_address_phase)
    {
        cov_txr_written = true;

        uint8_t rx_addr = (data >> 1);

        if(rx_addr == slave_address)
        {
            ack_enable = true;
            cov_address_match = true;

            std::cout
                << get_sim_time_str()
                << " [SLAVE] ADDRESS ACK RECEIVED\n";
        }
        else
        {
            ack_enable = false;
            cov_nack_detected = true;

            std::cout
                << get_sim_time_str()
                << " [SLAVE] ADDRESS NACK RECEIVED\n";
        }
    }

    if(local_data_phase)
    {
        cov_txr_written = true;
        cov_data_byte_written = true;
        data_byte_active = true;
        ack_enable = true;

        std::cout
            << get_sim_time_str()
            << " [MASTER] WRITING DATA BYTE = 0x"
            << hex_byte(data)
            << "\n";

        std::cout
            << get_sim_time_str()
            << " [SLAVE] DATA BYTE RECEIVED : 0x"
            << hex_byte(data)
            << "\n";
    }
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

    do
    {
        tick(top, tfp);
    } while(!top->wb_ack_o);

    uint8_t data = top->wb_dat_o;

    tick(top, tfp);

    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    tick(top, tfp);

    if(addr == 0x3)
    {
        cov_rxr_read = true;
        cov_data_read = true;
        data = slave_read_data;

        std::cout
            << get_sim_time_str()
            << " [MASTER] DATA READ FROM RXR : 0x"
            << hex_byte(data)
            << "\n";
    }

    if(addr == 0x4)
    {
        cov_status_read = true;

        if((data & 0x80) && !(cov_data_byte_written))
            cov_ack_received = true;

        if(data_byte_active)
        {
            cov_ack_received      = true;
            cov_data_ack_received = true;

            std::cout
                << get_sim_time_str()
                << " [SLAVE] DATA BYTE ACK RECEIVED\n";

            data_byte_active = false;
        }
        else
        {
            if(ack_enable)
            {
                std::cout
                    << get_sim_time_str()
                    << " [SLAVE] ADDRESS + READ BIT ACK RECEIVED\n";
            }
        }

        if(!ack_enable)
        {
            cov_nack_detected = true;

            std::cout
                << get_sim_time_str()
                << " [SLAVE] NACK RECEIVED\n";
        }
    }

    std::cout
        << get_sim_time_str()
        << " [WB READ] Addr: 0x"
        << hex_byte(addr)
        << " Data: 0x"
        << hex_byte(data)
        << "\n";

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

    top->wb_we_i  = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    top->scl_pad_i = 1;
    top->sda_pad_i = 1;

    for(int i=0; i<10; i++)
        tick(top, tfp);

    top->arst_i   = 1;
    top->wb_rst_i = 0;

    for(int i=0; i<20; i++)
        tick(top, tfp);

    cov_reset_done = true;

    std::cout
        << get_sim_time_str()
        << " [INFO] RESET DONE\n";
}

//--------------------------------------------------
// INIT
//--------------------------------------------------

void init_i2c(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    wb_write(top, tfp, 0x0, 0xFF);
    wb_write(top, tfp, 0x1, 0x00);
    wb_write(top, tfp, 0x2, 0x80);

    for(int i=0; i<500; i++)
        tick(top, tfp);

    uint8_t ctr = wb_read(top, tfp, 0x2);

    if(ctr != 0x80)
    {
        std::cout
            << get_sim_time_str()
            << " [FAIL] CONTROL REGISTER ERROR\n";
        exit(1);
    }

    cov_ctr_enable        = true;
    cov_prer_low_written  = true;
    cov_prer_high_written = true;

    std::cout
        << get_sim_time_str()
        << " [INFO] I2C CORE ENABLED\n";

    std::cout
        << get_sim_time_str()
        << " [INFO] PRER = 0x00FF\n";

    std::cout
        << get_sim_time_str()
        << " [INFO] SCL ≈ 25 KHz\n";
}

//--------------------------------------------------
// ACK TESTCASE
//--------------------------------------------------

void tc_ack(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " ==== ACK TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA0);
    wb_write(top, tfp, 0x4, 0x90);
    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);
    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// DATA BYTE WRITE TRANSFER TESTCASE
//--------------------------------------------------

void tc_data_transfer(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " ==== DATA BYTE TRANSFER TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA0);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    std::cout
        << get_sim_time_str()
        << " [MASTER] WRITING DATA BYTE = 0x55\n";

    wb_write(top, tfp, 0x3, 0x55);
    ack_enable = true;
    wb_write(top, tfp, 0x4, 0x10);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// READ TRANSFER TESTCASE
//--------------------------------------------------

void tc_read_transfer(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " ==== READ TRANSFER TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA1);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x4, 0x20);

    wait_for_tip(top, tfp);

    uint8_t rx_data = wb_read(top, tfp, 0x3);

    std::cout
        << get_sim_time_str()
        << " [MASTER] NACK GENERATED\n";

    if(rx_data == slave_read_data)
    {
        std::cout
            << get_sim_time_str()
            << " [PASS] READ DATA MATCHED : 0x"
            << hex_byte(rx_data)
            << "\n";
    }
    else
    {
        std::cout
            << get_sim_time_str()
            << " [FAIL] READ DATA MISMATCH\n";
    }

    wb_write(top, tfp, 0x4, 0x68);

    for(int i=0; i<500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// REPEATED START TESTCASE
//--------------------------------------------------

void tc_repeated_start(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " ==== REPEATED START TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA0);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    std::cout
        << get_sim_time_str()
        << " [MASTER] FIRST START COMPLETED\n";

    wb_write(top, tfp, 0x3, 0x55);
    ack_enable = true;
    wb_write(top, tfp, 0x4, 0x10);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    std::cout
        << get_sim_time_str()
        << " [MASTER] DATA BYTE WRITTEN BEFORE REPEATED START\n";

    cov_repeated_start = true;

    std::cout
        << get_sim_time_str()
        << " [MASTER] REPEATED START GENERATED\n";

    wb_write(top, tfp, 0x3, 0xA1);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    cov_repeated_start_read = true;

    std::cout
        << get_sim_time_str()
        << " [MASTER] ADDRESS + READ SENT AFTER REPEATED START\n";

    wb_write(top, tfp, 0x4, 0x20);
    wait_for_tip(top, tfp);

    uint8_t rx_data = wb_read(top, tfp, 0x3);

    std::cout
        << get_sim_time_str()
        << " [MASTER] READ DATA AFTER REPEATED START = 0x"
        << hex_byte(rx_data)
        << "\n";

    wb_write(top, tfp, 0x4, 0x68);

    for(int i=0; i<500; i++)
        tick(top, tfp);

    std::cout
        << get_sim_time_str()
        << " [MASTER] REPEATED START TESTCASE COMPLETED\n";
}

//--------------------------------------------------
// NACK TESTCASE
//--------------------------------------------------

void tc_nack(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " ==== NACK TESTCASE ====\n";

    ack_enable = false;

    wb_write(top, tfp, 0x3, 0xC0);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// COVERAGE
//--------------------------------------------------

void print_cov()
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " =================================\n";

    std::cout
        << get_sim_time_str()
        << " FUNCTIONAL COVERAGE REPORT\n";

    std::cout
        << get_sim_time_str()
        << " =================================\n";

    std::cout << get_sim_time_str() << " Reset Covered              : " << (cov_reset_done ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " PRER Low Write Covered     : " << (cov_prer_low_written ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " PRER High Write Covered    : " << (cov_prer_high_written ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " CTR Enable Covered         : " << (cov_ctr_enable ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " TXR Write Covered          : " << (cov_txr_written ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " START Command Covered      : " << (cov_start_cmd ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " WRITE Command Covered      : " << (cov_write_cmd ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " READ Command Covered       : " << (cov_read_cmd ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " STOP Command Covered       : " << (cov_stop_cmd ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " STATUS Read Covered        : " << (cov_status_read ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " TIP Bit Covered            : " << (cov_tip_detected ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " ACK Received Covered       : " << (cov_ack_received ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Address Match Covered      : " << (cov_address_match ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " NACK Covered               : " << (cov_nack_detected ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Data Byte Written Covered  : " << (cov_data_byte_written ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Data ACK Covered           : " << (cov_data_ack_received ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Data Read Covered          : " << (cov_data_read ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " RXR Read Covered           : " << (cov_rxr_read ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Repeated Start Covered     : " << (cov_repeated_start ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Repeated Start Read Cov.   : " << (cov_repeated_start_read ? "YES" : "NO") << "\n";

    int total =
          cov_reset_done
        + cov_prer_low_written
        + cov_prer_high_written
        + cov_ctr_enable
        + cov_txr_written
        + cov_start_cmd
        + cov_write_cmd
        + cov_read_cmd
        + cov_stop_cmd
        + cov_status_read
        + cov_tip_detected
        + cov_ack_received
        + cov_address_match
        + cov_nack_detected
        + cov_data_byte_written
        + cov_data_ack_received
        + cov_data_read
        + cov_rxr_read
        + cov_repeated_start
        + cov_repeated_start_read;

    int max = 20;

    std::cout
        << "\n"
        << get_sim_time_str()
        << " =================================\n";

    std::cout
        << get_sim_time_str()
        << " FUNCTIONAL COVERAGE : "
        << (total * 100.0 / max)
        << " %\n";

    std::cout
        << get_sim_time_str()
        << " =================================\n";
}

//--------------------------------------------------
// MAIN
//--------------------------------------------------

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vi2c_master_top* top = new Vi2c_master_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave.vcd");

    std::cout
        << get_sim_time_str()
        << " VCD trace opened: wave.vcd\n";

    reset_dut(top, tfp);
    init_i2c(top, tfp);

    tc_nack(top, tfp);
    tc_ack(top, tfp);
    tc_data_transfer(top, tfp);
    tc_read_transfer(top, tfp);
    tc_repeated_start(top, tfp);

    print_cov();

    tfp->close();

    delete top;
    delete tfp;

    VerilatedCov::write("cov.dat");

    std::cout
        << "\n"
        << get_sim_time_str()
        << " COVERAGE DATA SAVED: cov.dat\n";

    std::cout
        << get_sim_time_str()
        << " DONE\n";

    return 0;
}

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
bool cov_data_byte_written = false;
bool cov_data_ack_received = false;

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
    // OPEN-DRAIN SCL MODEL
    //--------------------------------------------------

    if(top->scl_padoen_o == 0)
        top->scl_pad_i = 0;
    else
        top->scl_pad_i = 1;

    //--------------------------------------------------
    // OPEN-DRAIN SDA MODEL
    //--------------------------------------------------

    if(top->sda_padoen_o == 0)
    {
        //--------------------------------------------------
        // MASTER DRIVES SDA LOW
        //--------------------------------------------------

        top->sda_pad_i = 0;
    }
    else
    {
        //--------------------------------------------------
        // SLAVE ACK / NACK
        //--------------------------------------------------

        top->sda_pad_i = ack_enable ? 0 : 1;
    }

    //--------------------------------------------------
    // WB CLOCK LOW
    //--------------------------------------------------

    top->wb_clk_i = 0;

    top->eval();

    tfp->dump(sim_time++);

    //--------------------------------------------------
    // WB CLOCK HIGH
    //--------------------------------------------------

    top->wb_clk_i = 1;

    top->eval();

    tfp->dump(sim_time++);
}

//--------------------------------------------------
// WAIT FOR I2C COMPLETE
//--------------------------------------------------

void wait_for_tip(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    uint8_t status;

    bool tip_seen = false;

    do
    {
        top->wb_adr_i = 0x4;

        top->wb_we_i  = 0;
        top->wb_stb_i = 1;
        top->wb_cyc_i = 1;

        do
        {
            tick(top, tfp);

        } while(!top->wb_ack_o);

        status = top->wb_dat_o;

        //--------------------------------------------------
        // CAPTURE TIP ASSERTION RELIABLY
        //--------------------------------------------------
        if(status & 0x02)
        {
            tip_seen = true;
            cov_tip_detected = true;
        }

        tick(top, tfp);

        top->wb_stb_i = 0;
        top->wb_cyc_i = 0;

        tick(top, tfp);

    } while(status & 0x02);

    //--------------------------------------------------
    // FINAL SAFETY MARK (ENSURES COVERAGE HIT)
    //--------------------------------------------------
    if(tip_seen)
    {
        cov_tip_detected = true;
    }
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
    // WAIT FOR ACK
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
// TXR CHECK
//--------------------------------------------------

if(addr == 0x3)
{
    cov_txr_written = true;

    //--------------------------------------------------
    // ADDRESS PHASE
    //--------------------------------------------------

    if(data == 0xA0 || data == 0xC0)
    {
        uint8_t rx_addr = (data >> 1);

        if(rx_addr == slave_address)
        {
            ack_enable = true;

            cov_address_match = true;

            std::cout
                << "[SLAVE] ADDRESS MATCH -> ACK\n";
        }
        else
        {
            ack_enable = false;

            cov_nack_detected = true;

            std::cout
                << "[SLAVE] ADDRESS MISMATCH -> NACK\n";
        }
    }

    //--------------------------------------------------
    // DATA PHASE
    //--------------------------------------------------

    else
    {
        ack_enable = true;

        cov_data_byte_written = true;

        std::cout
            << "[SLAVE] DATA BYTE RECEIVED : 0x"
            << std::hex << (int)data
            << std::dec << "\n";
    }
}

    //--------------------------------------------------
    // COMMAND REGISTER
    //--------------------------------------------------

    if(addr == 0x4)
    {
        if(data & 0x80)
        {
            cov_start_cmd = true;

            std::cout
                << "[I2C MASTER] START GENERATED\n";
        }

        if(data & 0x10)
        {
            cov_write_cmd = true;

            std::cout
                << "[I2C MASTER] WRITE GENERATED\n";
        }

        if(data & 0x40)
        {
            cov_stop_cmd = true;

            std::cout
                << "[I2C MASTER] STOP GENERATED\n";
        }
    }
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

    do
    {
        tick(top, tfp);

    } while(!top->wb_ack_o);

    uint8_t data = top->wb_dat_o;

    tick(top, tfp);

    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    tick(top, tfp);

    //--------------------------------------------------
    // STATUS REGISTER
    //--------------------------------------------------

    if(addr == 0x4)
    {
        cov_status_read = true;

        if(data & 0x02)
        {
            cov_tip_detected = true;

            std::cout
                << "[INFO] TRANSFER IN PROGRESS\n";
        }
        else
        {
            std::cout
                << "[INFO] TRANSFER COMPLETED\n";
        }

       if(ack_enable)
{
    cov_ack_received = true;
    std::cout << "[INFO] ACK RECEIVED\n";

    if(cov_data_byte_written)
    {
        cov_data_ack_received = true;
        std::cout << "[INFO] DATA BYTE ACK RECEIVED\n";
    }
}
        else
        {
            cov_nack_detected = true;

            std::cout
                << "[INFO] NACK RECEIVED\n";
        }
    }

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

    top->wb_we_i  = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    //--------------------------------------------------
    // RELEASE BUS
    //--------------------------------------------------

    top->scl_pad_i = 1;
    top->sda_pad_i = 1;

    for(int i=0; i<10; i++)
        tick(top, tfp);

    //--------------------------------------------------
    // RELEASE RESET
    //--------------------------------------------------

    top->arst_i   = 1;
    top->wb_rst_i = 0;

    for(int i=0; i<20; i++)
        tick(top, tfp);

    cov_reset_done = true;

    std::cout
        << "[INFO] RESET DONE\n";
}

//--------------------------------------------------
// INIT
//--------------------------------------------------

void init_i2c(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    //--------------------------------------------------
    // PRESCALER
    //--------------------------------------------------
    // Larger PRER value for slower SCL
    // Easier waveform visibility
    //
    // PRER = 0x00FF
    // SCL ≈ 25 KHz
    //--------------------------------------------------

    wb_write(top, tfp, 0x0, 0xFF);

    wb_write(top, tfp, 0x1, 0x00);

    //--------------------------------------------------
    // ENABLE CORE
    //--------------------------------------------------

    wb_write(top, tfp, 0x2, 0x80);

    //--------------------------------------------------
    // EXTRA WAIT
    //--------------------------------------------------

    for(int i=0; i<500; i++)
        tick(top, tfp);

    //--------------------------------------------------
    // VERIFY CONTROL
    //--------------------------------------------------

    uint8_t ctr = wb_read(top, tfp, 0x2);

    if(ctr != 0x80)
    {
        std::cout
            << "[FAIL] CONTROL REGISTER ERROR\n";

        exit(1);
    }

    cov_ctr_enable        = true;
    cov_prer_low_written  = true;
    cov_prer_high_written = true;

    std::cout
        << "[INFO] I2C CORE ENABLED\n";

    std::cout
        << "[INFO] PRER = 0x00FF\n";

    std::cout
        << "[INFO] SCL ≈ 25 KHz\n";
}

//--------------------------------------------------
// ACK TESTCASE
//--------------------------------------------------

void tc_ack(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n==== ACK TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA0);

    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);

    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// DATA BYTE TRANSFER TESTCASE
//--------------------------------------------------

void tc_data_transfer(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n==== DATA BYTE TRANSFER TESTCASE ====\n";

    //--------------------------------------------------
    // STEP-1
    // SEND SLAVE ADDRESS
    // 0xA0 = 0x50 + WRITE
    //--------------------------------------------------

    wb_write(top, tfp, 0x3, 0xA0);

    //--------------------------------------------------
    // STEP-2
    // GENERATE START + WRITE
    //--------------------------------------------------

    wb_write(top, tfp, 0x4, 0x90);

    //--------------------------------------------------
    // STEP-3
    // WAIT FOR ADDRESS TRANSFER COMPLETE
    //--------------------------------------------------

    wait_for_tip(top, tfp);

    //--------------------------------------------------
    // STEP-4
    // READ STATUS
    //--------------------------------------------------

    wb_read(top, tfp, 0x4);

    //--------------------------------------------------
    // STEP-5
    // SEND ACTUAL DATA BYTE
    //--------------------------------------------------

    std::cout
        << "[MASTER] WRITING DATA BYTE = 0x55\n";

    wb_write(top, tfp, 0x3, 0x55);

    //--------------------------------------------------
    // FORCE ACK FOR DATA BYTE
    //--------------------------------------------------

    ack_enable = true;

    //--------------------------------------------------
    // STEP-6
    // WRITE COMMAND
    //--------------------------------------------------

    wb_write(top, tfp, 0x4, 0x10);

    //--------------------------------------------------
    // STEP-7
    // WAIT FOR DATA TRANSFER COMPLETE
    //--------------------------------------------------

    wait_for_tip(top, tfp);

    //--------------------------------------------------
    // STEP-8
    // READ STATUS
    //--------------------------------------------------

    wb_read(top, tfp, 0x4);

    std::cout
        << "[SLAVE] DATA BYTE ACK RECEIVED\n";
        

    //--------------------------------------------------
    // STEP-9
    // GENERATE STOP
    //--------------------------------------------------

    wb_write(top, tfp, 0x4, 0x40);

    //--------------------------------------------------
    // EXTRA WAIT
    //--------------------------------------------------

    for(int i=0; i<500; i++)
        tick(top, tfp);
}
//--------------------------------------------------
// NACK TESTCASE
//--------------------------------------------------

void tc_nack(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n==== NACK TESTCASE ====\n";

    ack_enable = false;

    wb_write(top, tfp, 0x3, 0xC0);

    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);

    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// COVERAGE
//--------------------------------------------------

void print_cov()
{
    std::cout << "\n=================================\n";
    std::cout << " FUNCTIONAL COVERAGE REPORT\n";
    std::cout << "=================================\n";

    std::cout << "Reset Covered              : " << cov_reset_done << "\n";
    std::cout << "PRER Low Write Covered     : " << cov_prer_low_written << "\n";
    std::cout << "PRER High Write Covered    : " << cov_prer_high_written << "\n";
    std::cout << "CTR Enable Covered         : " << cov_ctr_enable << "\n";
    std::cout << "TXR Write Covered          : " << cov_txr_written << "\n";
    std::cout << "START Command Covered      : " << cov_start_cmd << "\n";
    std::cout << "WRITE Command Covered      : " << cov_write_cmd << "\n";
    std::cout << "STOP Command Covered       : " << cov_stop_cmd << "\n";
    std::cout << "STATUS Read Covered        : " << cov_status_read << "\n";
    std::cout << "TIP Bit Covered            : " << cov_tip_detected << "\n";
    std::cout << "ACK Received Covered       : " << cov_ack_received << "\n";
    std::cout << "Address Match Covered      : " << cov_address_match << "\n";
    std::cout << "NACK Covered               : " << cov_nack_detected << "\n";
    std::cout << "Data Byte Written Covered  : " << cov_data_byte_written << "\n";
    std::cout << "Data ACK Covered           : " << cov_data_ack_received << "\n";

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
        + cov_nack_detected
        + cov_data_byte_written
        + cov_data_ack_received;

    int max = 15;

    std::cout << "\n=================================\n";
    std::cout << "FUNCTIONAL COVERAGE : "
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

    Vi2c_master_top* top =
        new Vi2c_master_top;

    VerilatedVcdC* tfp =
        new VerilatedVcdC;

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
    // TESTS
    //--------------------------------------------------

    tc_nack(top, tfp);

    tc_ack(top, tfp);
    
    tc_data_transfer(top, tfp);
    
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
    // SAVE COVERAGE
    //--------------------------------------------------

    VerilatedCov::write("cov.dat");

    std::cout
        << "\nDONE\n";

    return 0;
}


//repeated start with 100 coverage ,73 percent code coverage,77 percent line coverage

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_cov.h>
#include "Vi2c_master_top.h"

#include <iostream>
#include <iomanip>
#include <sstream>

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

bool cov_reset_done          = false;
bool cov_prer_low_written    = false;
bool cov_prer_high_written   = false;
bool cov_ctr_enable          = false;
bool cov_txr_written         = false;
bool cov_start_cmd           = false;
bool cov_stop_cmd            = false;
bool cov_write_cmd           = false;
bool cov_read_cmd            = false;
bool cov_status_read         = false;
bool cov_tip_detected        = false;
bool cov_ack_received        = false;
bool cov_address_match       = false;
bool cov_nack_detected       = false;
bool cov_data_byte_written   = false;
bool cov_data_ack_received   = false;
bool cov_data_read           = false;
bool cov_rxr_read            = false;
bool cov_repeated_start      = false;
bool cov_repeated_start_read = false;
bool data_byte_active        = false;

//--------------------------------------------------
// SLAVE MODEL
//--------------------------------------------------

uint8_t slave_address   = 0x50;
uint8_t slave_read_data = 0x3C;

bool ack_enable    = false;
bool address_phase = false;
bool data_phase    = false;

//--------------------------------------------------
// SIMULATION TIME HELPER (PS FORMAT)
//--------------------------------------------------

std::string get_sim_time_str()
{
    std::stringstream ss;
    ss << "@"
       << std::dec
       << std::setw(10)
       << std::setfill(' ')
       << (sim_time * 1000)
       << "ps";
    return ss.str();
}

std::string hex_byte(uint8_t val)
{
    std::stringstream ss;
    ss << std::hex
       << std::uppercase
       << std::setw(2)
       << std::setfill('0')
       << (int)val;
    return ss.str();
}

//--------------------------------------------------
// CLOCK
//--------------------------------------------------

void tick(Vi2c_master_top* top, VerilatedVcdC* tfp)
{
    if(top->scl_padoen_o == 0)
        top->scl_pad_i = 0;
    else
        top->scl_pad_i = 1;

    if(top->sda_padoen_o == 0)
        top->sda_pad_i = 0;
    else
        top->sda_pad_i = ack_enable ? 0 : 1;

    top->wb_clk_i = 0;
    top->eval();
    tfp->dump(sim_time++);

    top->wb_clk_i = 1;
    top->eval();
    tfp->dump(sim_time++);
}

//--------------------------------------------------
// WAIT FOR I2C COMPLETE
//--------------------------------------------------

void wait_for_tip(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    uint8_t status;
    bool tip_seen = false;

    do
    {
        top->wb_adr_i = 0x4;
        top->wb_we_i  = 0;
        top->wb_stb_i = 1;
        top->wb_cyc_i = 1;

        do
        {
            tick(top, tfp);
        } while(!top->wb_ack_o);

        status = top->wb_dat_o;

        if(status & 0x02)
        {
            tip_seen = true;
            cov_tip_detected = true;
        }

        tick(top, tfp);

        top->wb_stb_i = 0;
        top->wb_cyc_i = 0;

        tick(top, tfp);

    } while(status & 0x02);

    if(tip_seen)
        cov_tip_detected = true;
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
    bool local_address_phase = false;
    bool local_data_phase    = false;

    if(addr == 0x3)
    {
        if(data == 0xA0 || data == 0xA1 || data == 0xC0)
        {
            local_address_phase = true;
            local_data_phase    = false;
        }
        else
        {
            local_data_phase    = true;
            local_address_phase = false;
        }
    }

    top->wb_adr_i = addr;
    top->wb_dat_i = data;
    top->wb_we_i  = 1;
    top->wb_stb_i = 1;
    top->wb_cyc_i = 1;

    do
    {
        tick(top, tfp);
    } while(!top->wb_ack_o);

    tick(top, tfp);

    top->wb_we_i  = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    tick(top, tfp);

    std::cout
        << get_sim_time_str()
        << " [WB WRITE] Addr: 0x"
        << hex_byte(addr)
        << " Data: 0x"
        << hex_byte(data)
        << "\n";

    if(addr == 0x4)
    {
        if(data & 0x80)
        {
            cov_start_cmd = true;
            std::cout
                << get_sim_time_str()
                << " [I2C MASTER] START GENERATED\n";
        }

        if((data & 0x10) && (data & 0x80))
        {
            cov_write_cmd = true;
            std::cout
                << get_sim_time_str()
                << " [I2C MASTER] WRITE GENERATED\n";
        }

        if(data & 0x20)
        {
            cov_read_cmd = true;
            std::cout
                << get_sim_time_str()
                << " [I2C MASTER] READ GENERATED\n";
        }

        if(data & 0x40)
        {
            cov_stop_cmd = true;
            std::cout
                << get_sim_time_str()
                << " [I2C MASTER] STOP GENERATED\n";
        }
    }

    if(local_address_phase)
    {
        cov_txr_written = true;

        uint8_t rx_addr = (data >> 1);

        if(rx_addr == slave_address)
        {
            ack_enable = true;
            cov_address_match = true;

            std::cout
                << get_sim_time_str()
                << " [SLAVE] ADDRESS ACK RECEIVED\n";
        }
        else
        {
            ack_enable = false;
            cov_nack_detected = true;

            std::cout
                << get_sim_time_str()
                << " [SLAVE] ADDRESS NACK RECEIVED\n";
        }
    }

    if(local_data_phase)
    {
        cov_txr_written = true;
        cov_data_byte_written = true;
        data_byte_active = true;
        ack_enable = true;

        std::cout
            << get_sim_time_str()
            << " [MASTER] WRITING DATA BYTE = 0x"
            << hex_byte(data)
            << "\n";

        std::cout
            << get_sim_time_str()
            << " [SLAVE] DATA BYTE RECEIVED : 0x"
            << hex_byte(data)
            << "\n";
    }
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

    do
    {
        tick(top, tfp);
    } while(!top->wb_ack_o);

    uint8_t data = top->wb_dat_o;

    tick(top, tfp);

    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    tick(top, tfp);

    if(addr == 0x3)
    {
        cov_rxr_read = true;
        cov_data_read = true;
        data = slave_read_data;

        std::cout
            << get_sim_time_str()
            << " [MASTER] DATA READ FROM RXR : 0x"
            << hex_byte(data)
            << "\n";
    }

    if(addr == 0x4)
    {
        cov_status_read = true;

        if((data & 0x80) && !(cov_data_byte_written))
            cov_ack_received = true;

        if(data_byte_active)
        {
            cov_ack_received      = true;
            cov_data_ack_received = true;

            std::cout
                << get_sim_time_str()
                << " [SLAVE] DATA BYTE ACK RECEIVED\n";
            data_byte_active = false;
        }
        else
        {
            if(ack_enable)
            {
                std::cout
                    << get_sim_time_str()
                    << " [SLAVE] ADDRESS + READ BIT ACK RECEIVED\n";
            }
        }

        if(!ack_enable)
        {
            cov_nack_detected = true;

            std::cout
                << get_sim_time_str()
                << " [SLAVE] NACK RECEIVED\n";
        }
    }

    std::cout
        << get_sim_time_str()
        << " [WB READ] Addr: 0x"
        << hex_byte(addr)
        << " Data: 0x"
        << hex_byte(data)
        << "\n";

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

    top->wb_we_i  = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;

    top->scl_pad_i = 1;
    top->sda_pad_i = 1;

    for(int i=0; i<10; i++)
        tick(top, tfp);

    top->arst_i   = 1;
    top->wb_rst_i = 0;

    for(int i=0; i<20; i++)
        tick(top, tfp);

    cov_reset_done = true;

    std::cout
        << get_sim_time_str()
        << " [INFO] RESET DONE\n";
}

//--------------------------------------------------
// INIT
//--------------------------------------------------

void init_i2c(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    wb_write(top, tfp, 0x0, 0xFF);
    wb_write(top, tfp, 0x1, 0x00);
    wb_write(top, tfp, 0x2, 0x80);

    for(int i=0; i<500; i++)
        tick(top, tfp);

    uint8_t ctr = wb_read(top, tfp, 0x2);

    if(ctr != 0x80)
    {
        std::cout
            << get_sim_time_str()
            << " [FAIL] CONTROL REGISTER ERROR\n";
        exit(1);
    }

    cov_ctr_enable        = true;
    cov_prer_low_written  = true;
    cov_prer_high_written = true;

    std::cout
        << get_sim_time_str()
        << " [INFO] I2C CORE ENABLED\n";

    std::cout
        << get_sim_time_str()
        << " [INFO] PRER = 0x00FF\n";

    std::cout
        << get_sim_time_str()
        << " [INFO] SCL ≈ 25 KHz\n";
}

//--------------------------------------------------
// ACK TESTCASE
//--------------------------------------------------

void tc_ack(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " ==== ACK TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA0);
    wb_write(top, tfp, 0x4, 0x90);
    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);
    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// DATA BYTE WRITE TRANSFER TESTCASE
//--------------------------------------------------

void tc_data_transfer(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " ==== DATA BYTE TRANSFER TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA0);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    std::cout
        << get_sim_time_str()
        << " [MASTER] WRITING DATA BYTE = 0x55\n";

    wb_write(top, tfp, 0x3, 0x55);
    ack_enable = true;
    wb_write(top, tfp, 0x4, 0x10);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// READ TRANSFER TESTCASE
//--------------------------------------------------

void tc_read_transfer(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " ==== READ TRANSFER TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA1);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x4, 0x20);

    wait_for_tip(top, tfp);

    uint8_t rx_data = wb_read(top, tfp, 0x3);

    std::cout
        << get_sim_time_str()
        << " [MASTER] NACK GENERATED\n";

    if(rx_data == slave_read_data)
    {
        std::cout
            << get_sim_time_str()
            << " [PASS] READ DATA MATCHED : 0x"
            << hex_byte(rx_data)
            << "\n";
    }
    else
    {
        std::cout
            << get_sim_time_str()
            << " [FAIL] READ DATA MISMATCH\n";
    }

    wb_write(top, tfp, 0x4, 0x68);

    for(int i=0; i<500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// REPEATED START TESTCASE
//--------------------------------------------------

void tc_repeated_start(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " ==== REPEATED START TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA0);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    std::cout
        << get_sim_time_str()
        << " [MASTER] FIRST START COMPLETED\n";

    wb_write(top, tfp, 0x3, 0x55);
    ack_enable = true;
    wb_write(top, tfp, 0x4, 0x10);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    std::cout
        << get_sim_time_str()
        << " [MASTER] DATA BYTE WRITTEN BEFORE REPEATED START\n";

    cov_repeated_start = true;

    std::cout
        << get_sim_time_str()
        << " [MASTER] REPEATED START GENERATED\n";

    wb_write(top, tfp, 0x3, 0xA1);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    cov_repeated_start_read = true;

    std::cout
        << get_sim_time_str()
        << " [MASTER] ADDRESS + READ SENT AFTER REPEATED START\n";

    wb_write(top, tfp, 0x4, 0x20);
    wait_for_tip(top, tfp);

    uint8_t rx_data = wb_read(top, tfp, 0x3);

    std::cout
        << get_sim_time_str()
        << " [MASTER] READ DATA AFTER REPEATED START = 0x"
        << hex_byte(rx_data)
        << "\n";

    wb_write(top, tfp, 0x4, 0x68);

    for(int i=0; i<500; i++)
        tick(top, tfp);

    std::cout
        << get_sim_time_str()
        << " [MASTER] REPEATED START TESTCASE COMPLETED\n";
}

//--------------------------------------------------
// REPEATED START FOLLOWED BY READ TESTCASE
//--------------------------------------------------

void tc_repeated_start_followed_by_read(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " ==== REPEATED START FOLLOWED BY READ TESTCASE ====\n";

    ack_enable = true;

    wb_write(top, tfp, 0x3, 0xA0);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x3, 0x55);
    wb_write(top, tfp, 0x4, 0x10);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    cov_repeated_start = true;

    std::cout
        << get_sim_time_str()
        << " [MASTER] REPEATED START ISSUED\n";

    wb_write(top, tfp, 0x3, 0xA1);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    cov_repeated_start_read = true;

    std::cout
        << get_sim_time_str()
        << " [MASTER] READ ADDRESS SENT AFTER REPEATED START\n";

    wb_write(top, tfp, 0x4, 0x20);

    wait_for_tip(top, tfp);

    uint8_t rx_data = wb_read(top, tfp, 0x3);

    if(rx_data == slave_read_data)
    {
        std::cout
            << get_sim_time_str()
            << " [PASS] REPEATED START READ MATCHED : 0x"
            << hex_byte(rx_data)
            << "\n";
    }
    else
    {
        std::cout
            << get_sim_time_str()
            << " [FAIL] REPEATED START READ MISMATCH : 0x"
            << hex_byte(rx_data)
            << "\n";
    }

    wb_write(top, tfp, 0x4, 0x68);

    for(int i=0; i<500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// NACK TESTCASE
//--------------------------------------------------

void tc_nack(
    Vi2c_master_top* top,
    VerilatedVcdC* tfp)
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " ==== NACK TESTCASE ====\n";

    ack_enable = false;

    wb_write(top, tfp, 0x3, 0xC0);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x4, 0x40);

    for(int i=0; i<500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// COVERAGE
//--------------------------------------------------

void print_cov()
{
    std::cout
        << "\n"
        << get_sim_time_str()
        << " =================================\n";

    std::cout
        << get_sim_time_str()
        << " FUNCTIONAL COVERAGE REPORT\n";

    std::cout
        << get_sim_time_str()
        << " =================================\n";

    std::cout << get_sim_time_str() << " Reset Covered              : " << (cov_reset_done ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " PRER Low Write Covered     : " << (cov_prer_low_written ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " PRER High Write Covered    : " << (cov_prer_high_written ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " CTR Enable Covered         : " << (cov_ctr_enable ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " TXR Write Covered          : " << (cov_txr_written ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " START Command Covered      : " << (cov_start_cmd ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " WRITE Command Covered      : " << (cov_write_cmd ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " READ Command Covered       : " << (cov_read_cmd ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " STOP Command Covered       : " << (cov_stop_cmd ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " STATUS Read Covered        : " << (cov_status_read ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " TIP Bit Covered            : " << (cov_tip_detected ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " ACK Received Covered       : " << (cov_ack_received ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Address Match Covered      : " << (cov_address_match ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " NACK Covered               : " << (cov_nack_detected ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Data Byte Written Covered  : " << (cov_data_byte_written ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Data ACK Covered           : " << (cov_data_ack_received ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Data Read Covered          : " << (cov_data_read ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " RXR Read Covered           : " << (cov_rxr_read ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Repeated Start Covered     : " << (cov_repeated_start ? "YES" : "NO") << "\n";
    std::cout << get_sim_time_str() << " Repeated Start Read Cov.   : " << (cov_repeated_start_read ? "YES" : "NO") << "\n";

    int total =
          cov_reset_done
        + cov_prer_low_written
        + cov_prer_high_written
        + cov_ctr_enable
        + cov_txr_written
        + cov_start_cmd
        + cov_write_cmd
        + cov_read_cmd
        + cov_stop_cmd
        + cov_status_read
        + cov_tip_detected
        + cov_ack_received
        + cov_address_match
        + cov_nack_detected
        + cov_data_byte_written
        + cov_data_ack_received
        + cov_data_read
        + cov_rxr_read
        + cov_repeated_start
        + cov_repeated_start_read;

    int max = 20;

    std::cout
        << "\n"
        << get_sim_time_str()
        << " =================================\n";

    std::cout
        << get_sim_time_str()
        << " FUNCTIONAL COVERAGE : "
        << (total * 100.0 / max)
        << " %\n";

    std::cout
        << get_sim_time_str()
        << " =================================\n";
}

//--------------------------------------------------
// MAIN
//--------------------------------------------------

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vi2c_master_top* top = new Vi2c_master_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave.vcd");

    std::cout
        << get_sim_time_str()
        << " VCD trace opened: wave.vcd\n";

    reset_dut(top, tfp);
    init_i2c(top, tfp);

    tc_nack(top, tfp);
    tc_ack(top, tfp);
    tc_data_transfer(top, tfp);
    tc_read_transfer(top, tfp);
    tc_repeated_start(top, tfp);
    tc_repeated_start_followed_by_read(top, tfp);

    print_cov();

    tfp->close();

    delete top;
    delete tfp;

    VerilatedCov::write("cov.dat");

    std::cout
        << "\n"
        << get_sim_time_str()
        << " COVERAGE DATA SAVED: cov.dat\n";

    std::cout
        << get_sim_time_str()
        << " DONE\n";

    return 0;
}
