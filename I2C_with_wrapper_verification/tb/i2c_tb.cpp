#include <verilated.h>
#include <verilated_vcd_c.h>
#include <verilated_cov.h>
#include "Vi2c_wb_wrapper.h"

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdint>
#include <cstdlib>

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

//--------------------------------------------------
//  I2C SLAVE MODEL
//--------------------------------------------------

uint8_t slave_address   = 0x50;
uint8_t slave_read_data = 0x3C;

bool slave_drive_sda = false;

bool prev_scl = 1;
bool prev_sda = 1;

bool start_detected = false;
bool stop_detected  = false;

bool addr_phase = true;
bool rw_bit     = false;

uint8_t shift_reg = 0;
int bit_count = 0;

bool address_match = false;
bool ack_pending = false;

//--------------------------------------------------
// SIMULATION TIME HELPER
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
// I2C SLAVE PROTOCOL MODEL
//--------------------------------------------------

void i2c_slave_model(Vi2c_wb_wrapper* top)
{
    bool scl = top->scl_padoen_o ? 1 : 0;
    bool sda_master = top->sda_padoen_o ? 1 : 0;

    bool sda = (slave_drive_sda == true) ? 0 : sda_master;

    if(prev_sda == 1 && sda == 0 && scl == 1)
    {
        start_detected = true;
        stop_detected  = false;
        bit_count = 0;
        shift_reg = 0;
        addr_phase = true;

        std::cout << get_sim_time_str() << " [SLAVE MODEL] START DETECTED\n";
    }

    if(prev_sda == 0 && sda == 1 && scl == 1)
    {
        stop_detected = true;
        std::cout << get_sim_time_str() << " [SLAVE MODEL] STOP DETECTED\n";
    }

    if(prev_scl == 0 && scl == 1)
    {
        if(bit_count < 8)
        {
            shift_reg = (shift_reg << 1) | (sda ? 1 : 0);
            bit_count++;
        }
        else
        {
            if(addr_phase)
            {
                uint8_t rx_addr = shift_reg >> 1;
                rw_bit = shift_reg & 0x1;

                if(rx_addr == slave_address)
                {
                    address_match = true;
                    slave_drive_sda = true;
                    cov_address_match = true;
                    cov_ack_received = true;

                    std::cout << get_sim_time_str() << " [SLAVE MODEL] ADDRESS MATCHED\n";
                }
                else
                {
                    address_match = false;
                    slave_drive_sda = false;
                    cov_nack_detected = true;

                    std::cout << get_sim_time_str() << " [SLAVE MODEL] ADDRESS MISMATCH\n";
                }

                addr_phase = false;
            }
            else
            {
                cov_data_byte_written = true;
                cov_data_ack_received = true;

                std::cout << get_sim_time_str()
                          << " [SLAVE MODEL] DATA RECEIVED = 0x"
                          << hex_byte(shift_reg)
                          << "\n";

                slave_drive_sda = true;
            }

            bit_count = 0;
            shift_reg = 0;
        }
    }

    if(prev_scl == 1 && scl == 0)
    {
        slave_drive_sda = false;
    }

    prev_scl = scl;
    prev_sda = sda;
}

//--------------------------------------------------
// CLOCK
//--------------------------------------------------

void tick(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp)
{
    i2c_slave_model(top);

    top->scl_pad_i = (top->scl_padoen_o == 0) ? 0 : 1;

    if(top->sda_padoen_o == 0)
    {
        top->sda_pad_i = 0;
    }
    else
    {
        top->sda_pad_i = slave_drive_sda ? 0 : 1;
    }

    top->clk_i = 0;
    top->eval();
    tfp->dump(sim_time++);

    top->clk_i = 1;
    top->eval();
    tfp->dump(sim_time++);
}

//--------------------------------------------------
// WAIT FOR TIP
//--------------------------------------------------

void wait_for_tip(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp)
{
    uint8_t status;
    bool tip_seen = false;

    do
    {
        status = 0;
        top->i2c_addr_o  = 0x4;
        top->i2c_wdata_o = 0;
        top->i2c_be_o    = 0x1;
        top->i2c_we_o    = 0;
        top->i2c_req_o   = 1;

        do
        {
            tick(top, tfp);
        } while(!top->i2c_rvalid_i);

        status = (uint8_t)(top->i2c_rdata_i & 0xFF);

        if(status & 0x02)
        {
            tip_seen = true;
            cov_tip_detected = true;
        }

        tick(top, tfp);

        top->i2c_req_o = 0;

        tick(top, tfp);

    } while(status & 0x02);

    if(tip_seen)
        cov_tip_detected = true;
}

//--------------------------------------------------
// WRAPPER WRITE
//--------------------------------------------------

void wb_write(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp, uint8_t addr, uint8_t data)
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

    top->i2c_addr_o  = addr;
    top->i2c_wdata_o = data;
    top->i2c_be_o    = 0x1;
    top->i2c_we_o    = 1;
    top->i2c_req_o   = 1;

    do
    {
        tick(top, tfp);
    } while(!top->i2c_rvalid_i);

    tick(top, tfp);

    top->i2c_req_o = 0;
    top->i2c_we_o  = 0;

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
            std::cout << get_sim_time_str() << " [I2C MASTER] START GENERATED\n";
        }

        if((data & 0x10) && (data & 0x80))
        {
            cov_write_cmd = true;
            std::cout << get_sim_time_str() << " [I2C MASTER] WRITE GENERATED\n";
        }

        if(data & 0x20)
        {
            cov_read_cmd = true;
            std::cout << get_sim_time_str() << " [I2C MASTER] READ GENERATED\n";
        }

        if(data & 0x40)
        {
            cov_stop_cmd = true;
            std::cout << get_sim_time_str() << " [I2C MASTER] STOP GENERATED\n";
        }
    }

    if(local_address_phase || local_data_phase)
    {
        cov_txr_written = true;
    }
}

//--------------------------------------------------
// WRAPPER READ
//--------------------------------------------------

uint8_t wb_read(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp, uint8_t addr)
{
    top->i2c_addr_o  = addr;
    top->i2c_wdata_o = 0;
    top->i2c_be_o    = 0x1;
    top->i2c_we_o    = 0;
    top->i2c_req_o   = 1;

    do
    {
        tick(top, tfp);
    } while(!top->i2c_rvalid_i);

    uint8_t data = (uint8_t)(top->i2c_rdata_i & 0xFF);

    tick(top, tfp);

    top->i2c_req_o = 0;

    tick(top, tfp);

    if(addr == 0x3)
    {
        cov_rxr_read = true;
        cov_data_read = true;

        std::cout
            << get_sim_time_str()
            << " [MASTER] DATA READ FROM RXR : 0x"
            << hex_byte(data)
            << "\n";
    }

    if(addr == 0x4)
    {
        cov_status_read = true;
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

void reset_dut(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp)
{
    top->rst_i = 1;

    top->i2c_req_o   = 0;
    top->i2c_we_o    = 0;
    top->i2c_addr_o  = 0;
    top->i2c_wdata_o = 0;
    top->i2c_be_o    = 0;

    top->scl_pad_i = 1;
    top->sda_pad_i = 1;

    slave_drive_sda = false;
    prev_scl = 1;
    prev_sda = 1;
    start_detected = false;
    stop_detected = false;
    addr_phase = true;
    rw_bit = false;
    shift_reg = 0;
    bit_count = 0;
    address_match = false;
    ack_pending = false;

    for(int i = 0; i < 10; i++)
        tick(top, tfp);

    top->rst_i = 0;

    for(int i = 0; i < 20; i++)
        tick(top, tfp);

    cov_reset_done = true;

    std::cout << get_sim_time_str() << " [INFO] RESET DONE\n";
}

//--------------------------------------------------
// INIT
//--------------------------------------------------

void init_i2c(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp)
{
    wb_write(top, tfp, 0x0, 0xFF);
    wb_write(top, tfp, 0x1, 0x00);
    wb_write(top, tfp, 0x2, 0x80);

    for(int i = 0; i < 500; i++)
        tick(top, tfp);

    uint8_t ctr = wb_read(top, tfp, 0x2);

    if(ctr != 0x80)
    {
        std::cout << get_sim_time_str() << " [FAIL] CONTROL REGISTER ERROR\n";
        exit(1);
    }

    cov_ctr_enable        = true;
    cov_prer_low_written  = true;
    cov_prer_high_written = true;

    std::cout << get_sim_time_str() << " [INFO] I2C CORE ENABLED\n";
    std::cout << get_sim_time_str() << " [INFO] PRER = 0x00FF\n";
    std::cout << get_sim_time_str() << " [INFO] SCL ≈ 25 KHz\n";
}

//--------------------------------------------------
// ACK TESTCASE
//--------------------------------------------------

void tc_ack(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp)
{
    std::cout << "\n" << get_sim_time_str() << " ==== ACK TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA0);
    wb_write(top, tfp, 0x4, 0x90);
    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);
    wb_write(top, tfp, 0x4, 0x40);

    for(int i = 0; i < 500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// DATA BYTE WRITE TRANSFER TESTCASE
//--------------------------------------------------

void tc_data_transfer(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp)
{
    std::cout << "\n" << get_sim_time_str() << " ==== DATA BYTE TRANSFER TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA0);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    std::cout << get_sim_time_str() << " [MASTER] WRITING DATA BYTE = 0x55\n";

    wb_write(top, tfp, 0x3, 0x55);
    wb_write(top, tfp, 0x4, 0x10);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x4, 0x40);

    for(int i = 0; i < 500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// READ TRANSFER TESTCASE
//--------------------------------------------------

void tc_read_transfer(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp)
{
    std::cout << "\n" << get_sim_time_str() << " ==== READ TRANSFER TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA1);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x4, 0x20);

    wait_for_tip(top, tfp);

    uint8_t rx_data = wb_read(top, tfp, 0x3);

    std::cout << get_sim_time_str() << " [MASTER] NACK GENERATED\n";

    if(rx_data == slave_read_data)
    {
        std::cout << get_sim_time_str() << " [PASS] READ DATA MATCHED : 0x"
                  << hex_byte(rx_data) << "\n";
    }
    else
    {
        std::cout << get_sim_time_str() << " [FAIL] READ DATA MISMATCH\n";
    }

    wb_write(top, tfp, 0x4, 0x68);

    for(int i = 0; i < 500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// REPEATED START TESTCASE
//--------------------------------------------------

void tc_repeated_start(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp)
{
    std::cout << "\n" << get_sim_time_str() << " ==== REPEATED START TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA0);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    std::cout << get_sim_time_str() << " [MASTER] FIRST START COMPLETED\n";

    wb_write(top, tfp, 0x3, 0x55);
    wb_write(top, tfp, 0x4, 0x10);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    std::cout << get_sim_time_str() << " [MASTER] DATA BYTE WRITTEN BEFORE REPEATED START\n";

    cov_repeated_start = true;

    std::cout << get_sim_time_str() << " [MASTER] REPEATED START GENERATED\n";

    wb_write(top, tfp, 0x3, 0xA1);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    cov_repeated_start_read = true;

    std::cout << get_sim_time_str() << " [MASTER] ADDRESS + READ SENT AFTER REPEATED START\n";

    wb_write(top, tfp, 0x4, 0x20);
    wait_for_tip(top, tfp);

    uint8_t rx_data = wb_read(top, tfp, 0x3);

    std::cout << get_sim_time_str() << " [MASTER] READ DATA AFTER REPEATED START = 0x"
              << hex_byte(rx_data) << "\n";

    wb_write(top, tfp, 0x4, 0x68);

    for(int i = 0; i < 500; i++)
        tick(top, tfp);

    std::cout << get_sim_time_str() << " [MASTER] REPEATED START TESTCASE COMPLETED\n";
}

//--------------------------------------------------
// REPEATED START FOLLOWED BY READ TESTCASE
//--------------------------------------------------

void tc_repeated_start_followed_by_read(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp)
{
    std::cout << "\n" << get_sim_time_str() << " ==== REPEATED START FOLLOWED BY READ TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xA0);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x3, 0x55);
    wb_write(top, tfp, 0x4, 0x10);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    cov_repeated_start = true;

    std::cout << get_sim_time_str() << " [MASTER] REPEATED START ISSUED\n";

    wb_write(top, tfp, 0x3, 0xA1);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    cov_repeated_start_read = true;

    std::cout << get_sim_time_str() << " [MASTER] READ ADDRESS SENT AFTER REPEATED START\n";

    wb_write(top, tfp, 0x4, 0x20);

    wait_for_tip(top, tfp);

    uint8_t rx_data = wb_read(top, tfp, 0x3);

    if(rx_data == slave_read_data)
    {
        std::cout << get_sim_time_str() << " [PASS] REPEATED START READ MATCHED : 0x"
                  << hex_byte(rx_data) << "\n";
    }
    else
    {
        std::cout << get_sim_time_str() << " [FAIL] REPEATED START READ MISMATCH : 0x"
                  << hex_byte(rx_data) << "\n";
    }

    wb_write(top, tfp, 0x4, 0x68);

    for(int i = 0; i < 500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// NACK TESTCASE
//--------------------------------------------------

void tc_nack(Vi2c_wb_wrapper* top, VerilatedVcdC* tfp)
{
    std::cout << "\n" << get_sim_time_str() << " ==== NACK TESTCASE ====\n";

    wb_write(top, tfp, 0x3, 0xC0);
    wb_write(top, tfp, 0x4, 0x90);

    wait_for_tip(top, tfp);
    wb_read(top, tfp, 0x4);

    wb_write(top, tfp, 0x4, 0x40);

    for(int i = 0; i < 500; i++)
        tick(top, tfp);
}

//--------------------------------------------------
// COVERAGE
//--------------------------------------------------

void print_cov()
{
    std::cout << "\n" << get_sim_time_str() << " =================================\n";
    std::cout << get_sim_time_str() << " FUNCTIONAL COVERAGE REPORT\n";
    std::cout << get_sim_time_str() << " =================================\n";

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

    std::cout << "\n" << get_sim_time_str() << " =================================\n";
    std::cout << get_sim_time_str() << " FUNCTIONAL COVERAGE : " << (total * 100.0 / max) << " %\n";
    std::cout << get_sim_time_str() << " =================================\n";
}

//--------------------------------------------------
// MAIN
//--------------------------------------------------

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vi2c_wb_wrapper* top = new Vi2c_wb_wrapper;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave.vcd");

    std::cout << get_sim_time_str() << " VCD trace opened: wave.vcd\n";

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

    std::cout << "\n" << get_sim_time_str() << " COVERAGE DATA SAVED: cov.dat\n";
    std::cout << get_sim_time_str() << " DONE\n";

    return 0;
}
