// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwb_interconnect.h for the primary calling header

#include "verilated.h"

#include "Vwb_interconnect___024root.h"

VL_ATTR_COLD void Vwb_interconnect___024root___initial__TOP__0(Vwb_interconnect___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->wb_stall_o = 0U;
}

VL_ATTR_COLD void Vwb_interconnect___024root___settle__TOP__0(Vwb_interconnect___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->timer_addr_o = 0U;
    vlSelf->gpio_addr_o = 0U;
    vlSelf->uart_addr_o = 0U;
    vlSelf->bootrom_addr_o = 0U;
    vlSelf->sram_addr_o = 0U;
    vlSelf->xip_addr_o = 0U;
    vlSelf->spictrl_addr_o = 0U;
    vlSelf->i2c_addr_o = 0U;
    vlSelf->spihost_addr_o = 0U;
    vlSelf->timer_wdata_o = 0U;
    vlSelf->timer_we_o = 0U;
    vlSelf->gpio_be_o = 0U;
    vlSelf->gpio_wdata_o = 0U;
    vlSelf->gpio_we_o = 0U;
    vlSelf->uart_be_o = 0U;
    vlSelf->uart_wdata_o = 0U;
    vlSelf->uart_we_o = 0U;
    vlSelf->xip_be_o = 0U;
    vlSelf->xip_wdata_o = 0U;
    vlSelf->bootrom_we_o = 0U;
    vlSelf->bootrom_wdata_o = 0U;
    vlSelf->bootrom_be_o = 0U;
    vlSelf->sram_we_o = 0U;
    vlSelf->sram_wdata_o = 0U;
    vlSelf->sram_be_o = 0U;
    vlSelf->xip_we_o = 0U;
    vlSelf->timer_be_o = 0U;
    vlSelf->spictrl_we_o = 0U;
    vlSelf->spictrl_wdata_o = 0U;
    vlSelf->spictrl_be_o = 0U;
    vlSelf->i2c_we_o = 0U;
    vlSelf->i2c_wdata_o = 0U;
    vlSelf->i2c_be_o = 0U;
    vlSelf->spihost_we_o = 0U;
    vlSelf->spihost_wdata_o = 0U;
    vlSelf->spihost_be_o = 0U;
    vlSelf->timer_req_o = 0U;
    if ((0x40000200U == (0xffffff00U & vlSelf->wb_adr_i))) {
        vlSelf->timer_addr_o = vlSelf->wb_adr_i;
        vlSelf->timer_wdata_o = vlSelf->wb_dat_i;
        vlSelf->timer_we_o = vlSelf->wb_we_i;
        vlSelf->timer_be_o = vlSelf->wb_sel_i;
        vlSelf->timer_req_o = ((IData)(vlSelf->wb_cyc_i) 
                               & (IData)(vlSelf->wb_stb_i));
    }
    vlSelf->gpio_req_o = 0U;
    if ((0x40000100U == (0xffffff00U & vlSelf->wb_adr_i))) {
        vlSelf->gpio_addr_o = vlSelf->wb_adr_i;
        vlSelf->gpio_be_o = vlSelf->wb_sel_i;
        vlSelf->gpio_wdata_o = vlSelf->wb_dat_i;
        vlSelf->gpio_we_o = vlSelf->wb_we_i;
        vlSelf->gpio_req_o = ((IData)(vlSelf->wb_cyc_i) 
                              & (IData)(vlSelf->wb_stb_i));
    }
    vlSelf->uart_req_o = 0U;
    if ((0x40000000U == (0xffffff00U & vlSelf->wb_adr_i))) {
        vlSelf->uart_addr_o = vlSelf->wb_adr_i;
        vlSelf->uart_be_o = vlSelf->wb_sel_i;
        vlSelf->uart_wdata_o = vlSelf->wb_dat_i;
        vlSelf->uart_we_o = vlSelf->wb_we_i;
        vlSelf->uart_req_o = ((IData)(vlSelf->wb_cyc_i) 
                              & (IData)(vlSelf->wb_stb_i));
    }
    vlSelf->bootrom_req_o = 0U;
    if ((0x100000U == (0xfffff000U & vlSelf->wb_adr_i))) {
        vlSelf->bootrom_addr_o = vlSelf->wb_adr_i;
        vlSelf->bootrom_we_o = vlSelf->wb_we_i;
        vlSelf->bootrom_wdata_o = vlSelf->wb_dat_i;
        vlSelf->bootrom_be_o = vlSelf->wb_sel_i;
        vlSelf->bootrom_req_o = ((IData)(vlSelf->wb_cyc_i) 
                                 & (IData)(vlSelf->wb_stb_i));
    }
    vlSelf->sram_req_o = 0U;
    if ((0x101000U == (0xfffff000U & vlSelf->wb_adr_i))) {
        vlSelf->sram_addr_o = vlSelf->wb_adr_i;
        vlSelf->sram_we_o = vlSelf->wb_we_i;
        vlSelf->sram_wdata_o = vlSelf->wb_dat_i;
        vlSelf->sram_be_o = vlSelf->wb_sel_i;
        vlSelf->sram_req_o = ((IData)(vlSelf->wb_cyc_i) 
                              & (IData)(vlSelf->wb_stb_i));
    }
    vlSelf->xip_req_o = 0U;
    if ((0x20000000U == (0xf0000000U & vlSelf->wb_adr_i))) {
        vlSelf->xip_addr_o = vlSelf->wb_adr_i;
        vlSelf->xip_be_o = vlSelf->wb_sel_i;
        vlSelf->xip_wdata_o = vlSelf->wb_dat_i;
        vlSelf->xip_we_o = vlSelf->wb_we_i;
        vlSelf->xip_req_o = ((IData)(vlSelf->wb_cyc_i) 
                             & (IData)(vlSelf->wb_stb_i));
    }
    vlSelf->spictrl_req_o = 0U;
    if ((0x40000300U == (0xffffff00U & vlSelf->wb_adr_i))) {
        vlSelf->spictrl_addr_o = vlSelf->wb_adr_i;
        vlSelf->spictrl_we_o = vlSelf->wb_we_i;
        vlSelf->spictrl_wdata_o = vlSelf->wb_dat_i;
        vlSelf->spictrl_be_o = vlSelf->wb_sel_i;
        vlSelf->spictrl_req_o = ((IData)(vlSelf->wb_cyc_i) 
                                 & (IData)(vlSelf->wb_stb_i));
    }
    vlSelf->i2c_req_o = 0U;
    if ((0x40000400U == (0xffffff00U & vlSelf->wb_adr_i))) {
        vlSelf->i2c_addr_o = vlSelf->wb_adr_i;
        vlSelf->i2c_we_o = vlSelf->wb_we_i;
        vlSelf->i2c_wdata_o = vlSelf->wb_dat_i;
        vlSelf->i2c_be_o = vlSelf->wb_sel_i;
        vlSelf->i2c_req_o = ((IData)(vlSelf->wb_cyc_i) 
                             & (IData)(vlSelf->wb_stb_i));
    }
    vlSelf->spihost_req_o = 0U;
    if ((0x40000500U == (0xffffff00U & vlSelf->wb_adr_i))) {
        vlSelf->spihost_addr_o = vlSelf->wb_adr_i;
        vlSelf->spihost_we_o = vlSelf->wb_we_i;
        vlSelf->spihost_wdata_o = vlSelf->wb_dat_i;
        vlSelf->spihost_be_o = vlSelf->wb_sel_i;
        vlSelf->spihost_req_o = ((IData)(vlSelf->wb_cyc_i) 
                                 & (IData)(vlSelf->wb_stb_i));
    }
    vlSelf->wb_dat_o = 0U;
    vlSelf->wb_dat_o = ((IData)(vlSelf->wb_interconnect__DOT__decode_err_resp)
                         ? 0U : ((8U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                  ? ((4U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                      ? 0U : ((2U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                                   ? 0U
                                                   : vlSelf->spihost_rdata_i)))
                                  : ((4U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                      ? ((2U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                          ? ((1U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                              ? vlSelf->i2c_rdata_i
                                              : vlSelf->spictrl_rdata_i)
                                          : ((1U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                              ? vlSelf->timer_rdata_i
                                              : vlSelf->gpio_rdata_i))
                                      : ((2U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                          ? ((1U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                              ? vlSelf->uart_rdata_i
                                              : vlSelf->xip_rdata_i)
                                          : ((1U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                              ? vlSelf->sram_rdata_i
                                              : vlSelf->bootrom_rdata_i)))));
    vlSelf->wb_ack_o = 0U;
    vlSelf->wb_ack_o = ((IData)(vlSelf->wb_interconnect__DOT__decode_err_resp) 
                        | ((8U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                            ? (IData)(((0U == (7U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))) 
                                       & (IData)(vlSelf->spihost_rvalid_i)))
                            : ((4U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                ? ((2U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                    ? ((1U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                        ? (IData)(vlSelf->i2c_rvalid_i)
                                        : (IData)(vlSelf->spictrl_rvalid_i))
                                    : ((1U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                        ? (IData)(vlSelf->timer_rvalid_i)
                                        : (IData)(vlSelf->gpio_rvalid_i)))
                                : ((2U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                    ? ((1U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                        ? (IData)(vlSelf->uart_rvalid_i)
                                        : (IData)(vlSelf->xip_rvalid_i))
                                    : ((1U & (IData)(vlSelf->wb_interconnect__DOT__device_sel_resp))
                                        ? (IData)(vlSelf->sram_rvalid_i)
                                        : (IData)(vlSelf->bootrom_rvalid_i))))));
}

VL_ATTR_COLD void Vwb_interconnect___024root___eval_initial(Vwb_interconnect___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root___eval_initial\n"); );
    // Body
    Vwb_interconnect___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vwb_interconnect___024root___eval_settle(Vwb_interconnect___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root___eval_settle\n"); );
    // Body
    Vwb_interconnect___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vwb_interconnect___024root___final(Vwb_interconnect___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root___final\n"); );
}

VL_ATTR_COLD void Vwb_interconnect___024root___ctor_var_reset(Vwb_interconnect___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->wb_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->wb_stb_i = VL_RAND_RESET_I(1);
    vlSelf->wb_we_i = VL_RAND_RESET_I(1);
    vlSelf->wb_adr_i = VL_RAND_RESET_I(32);
    vlSelf->wb_dat_i = VL_RAND_RESET_I(32);
    vlSelf->wb_sel_i = VL_RAND_RESET_I(4);
    vlSelf->wb_ack_o = VL_RAND_RESET_I(1);
    vlSelf->wb_dat_o = VL_RAND_RESET_I(32);
    vlSelf->wb_stall_o = VL_RAND_RESET_I(1);
    vlSelf->bootrom_req_o = VL_RAND_RESET_I(1);
    vlSelf->bootrom_we_o = VL_RAND_RESET_I(1);
    vlSelf->bootrom_addr_o = VL_RAND_RESET_I(32);
    vlSelf->bootrom_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->bootrom_be_o = VL_RAND_RESET_I(4);
    vlSelf->bootrom_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->bootrom_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->sram_req_o = VL_RAND_RESET_I(1);
    vlSelf->sram_we_o = VL_RAND_RESET_I(1);
    vlSelf->sram_addr_o = VL_RAND_RESET_I(32);
    vlSelf->sram_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->sram_be_o = VL_RAND_RESET_I(4);
    vlSelf->sram_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->sram_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->xip_req_o = VL_RAND_RESET_I(1);
    vlSelf->xip_we_o = VL_RAND_RESET_I(1);
    vlSelf->xip_addr_o = VL_RAND_RESET_I(32);
    vlSelf->xip_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->xip_be_o = VL_RAND_RESET_I(4);
    vlSelf->xip_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->xip_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->uart_req_o = VL_RAND_RESET_I(1);
    vlSelf->uart_we_o = VL_RAND_RESET_I(1);
    vlSelf->uart_addr_o = VL_RAND_RESET_I(32);
    vlSelf->uart_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->uart_be_o = VL_RAND_RESET_I(4);
    vlSelf->uart_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->uart_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->gpio_req_o = VL_RAND_RESET_I(1);
    vlSelf->gpio_we_o = VL_RAND_RESET_I(1);
    vlSelf->gpio_addr_o = VL_RAND_RESET_I(32);
    vlSelf->gpio_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->gpio_be_o = VL_RAND_RESET_I(4);
    vlSelf->gpio_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->gpio_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->timer_req_o = VL_RAND_RESET_I(1);
    vlSelf->timer_we_o = VL_RAND_RESET_I(1);
    vlSelf->timer_addr_o = VL_RAND_RESET_I(32);
    vlSelf->timer_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->timer_be_o = VL_RAND_RESET_I(4);
    vlSelf->timer_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->timer_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->spictrl_req_o = VL_RAND_RESET_I(1);
    vlSelf->spictrl_we_o = VL_RAND_RESET_I(1);
    vlSelf->spictrl_addr_o = VL_RAND_RESET_I(32);
    vlSelf->spictrl_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->spictrl_be_o = VL_RAND_RESET_I(4);
    vlSelf->spictrl_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->spictrl_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->i2c_req_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_we_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_addr_o = VL_RAND_RESET_I(32);
    vlSelf->i2c_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->i2c_be_o = VL_RAND_RESET_I(4);
    vlSelf->i2c_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->i2c_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->spihost_req_o = VL_RAND_RESET_I(1);
    vlSelf->spihost_we_o = VL_RAND_RESET_I(1);
    vlSelf->spihost_addr_o = VL_RAND_RESET_I(32);
    vlSelf->spihost_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->spihost_be_o = VL_RAND_RESET_I(4);
    vlSelf->spihost_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->spihost_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->wb_interconnect__DOT__device_sel_resp = VL_RAND_RESET_I(4);
    vlSelf->wb_interconnect__DOT__decode_err_resp = VL_RAND_RESET_I(1);
}
