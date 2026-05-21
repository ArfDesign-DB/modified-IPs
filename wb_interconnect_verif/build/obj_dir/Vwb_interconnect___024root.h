// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vwb_interconnect.h for the primary calling header

#ifndef VERILATED_VWB_INTERCONNECT___024ROOT_H_
#define VERILATED_VWB_INTERCONNECT___024ROOT_H_  // guard

#include "verilated.h"

class Vwb_interconnect__Syms;

class Vwb_interconnect___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(wb_cyc_i,0,0);
        VL_IN8(wb_stb_i,0,0);
        VL_IN8(wb_we_i,0,0);
        VL_IN8(wb_sel_i,3,0);
        VL_OUT8(wb_ack_o,0,0);
        VL_OUT8(wb_stall_o,0,0);
        VL_OUT8(bootrom_req_o,0,0);
        VL_OUT8(bootrom_we_o,0,0);
        VL_OUT8(bootrom_be_o,3,0);
        VL_IN8(bootrom_rvalid_i,0,0);
        VL_OUT8(sram_req_o,0,0);
        VL_OUT8(sram_we_o,0,0);
        VL_OUT8(sram_be_o,3,0);
        VL_IN8(sram_rvalid_i,0,0);
        VL_OUT8(xip_req_o,0,0);
        VL_OUT8(xip_we_o,0,0);
        VL_OUT8(xip_be_o,3,0);
        VL_IN8(xip_rvalid_i,0,0);
        VL_OUT8(uart_req_o,0,0);
        VL_OUT8(uart_we_o,0,0);
        VL_OUT8(uart_be_o,3,0);
        VL_IN8(uart_rvalid_i,0,0);
        VL_OUT8(gpio_req_o,0,0);
        VL_OUT8(gpio_we_o,0,0);
        VL_OUT8(gpio_be_o,3,0);
        VL_IN8(gpio_rvalid_i,0,0);
        VL_OUT8(timer_req_o,0,0);
        VL_OUT8(timer_we_o,0,0);
        VL_OUT8(timer_be_o,3,0);
        VL_IN8(timer_rvalid_i,0,0);
        VL_OUT8(spictrl_req_o,0,0);
        VL_OUT8(spictrl_we_o,0,0);
        VL_OUT8(spictrl_be_o,3,0);
        VL_IN8(spictrl_rvalid_i,0,0);
        VL_OUT8(i2c_req_o,0,0);
        VL_OUT8(i2c_we_o,0,0);
        VL_OUT8(i2c_be_o,3,0);
        VL_IN8(i2c_rvalid_i,0,0);
        VL_OUT8(spihost_req_o,0,0);
        VL_OUT8(spihost_we_o,0,0);
        VL_OUT8(spihost_be_o,3,0);
        VL_IN8(spihost_rvalid_i,0,0);
        CData/*3:0*/ wb_interconnect__DOT__device_sel_resp;
        CData/*0:0*/ wb_interconnect__DOT__decode_err_resp;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        VL_IN(wb_adr_i,31,0);
        VL_IN(wb_dat_i,31,0);
        VL_OUT(wb_dat_o,31,0);
        VL_OUT(bootrom_addr_o,31,0);
        VL_OUT(bootrom_wdata_o,31,0);
        VL_IN(bootrom_rdata_i,31,0);
        VL_OUT(sram_addr_o,31,0);
        VL_OUT(sram_wdata_o,31,0);
        VL_IN(sram_rdata_i,31,0);
        VL_OUT(xip_addr_o,31,0);
        VL_OUT(xip_wdata_o,31,0);
        VL_IN(xip_rdata_i,31,0);
        VL_OUT(uart_addr_o,31,0);
        VL_OUT(uart_wdata_o,31,0);
        VL_IN(uart_rdata_i,31,0);
        VL_OUT(gpio_addr_o,31,0);
    };
    struct {
        VL_OUT(gpio_wdata_o,31,0);
        VL_IN(gpio_rdata_i,31,0);
        VL_OUT(timer_addr_o,31,0);
        VL_OUT(timer_wdata_o,31,0);
        VL_IN(timer_rdata_i,31,0);
        VL_OUT(spictrl_addr_o,31,0);
        VL_OUT(spictrl_wdata_o,31,0);
        VL_IN(spictrl_rdata_i,31,0);
        VL_OUT(i2c_addr_o,31,0);
        VL_OUT(i2c_wdata_o,31,0);
        VL_IN(i2c_rdata_i,31,0);
        VL_OUT(spihost_addr_o,31,0);
        VL_OUT(spihost_wdata_o,31,0);
        VL_IN(spihost_rdata_i,31,0);
    };

    // INTERNAL VARIABLES
    Vwb_interconnect__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vwb_interconnect___024root(Vwb_interconnect__Syms* symsp, const char* name);
    ~Vwb_interconnect___024root();
    VL_UNCOPYABLE(Vwb_interconnect___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
