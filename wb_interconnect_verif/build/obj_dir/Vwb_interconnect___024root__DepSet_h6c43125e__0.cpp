// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwb_interconnect.h for the primary calling header

#include "verilated.h"

#include "Vwb_interconnect___024root.h"

VL_INLINE_OPT void Vwb_interconnect___024root___combo__TOP__0(Vwb_interconnect___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root___combo__TOP__0\n"); );
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
}

VL_INLINE_OPT void Vwb_interconnect___024root___sequent__TOP__0(Vwb_interconnect___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst_ni) {
        if ((0x100000U == (0xfffff000U & vlSelf->wb_adr_i))) {
            vlSelf->wb_interconnect__DOT__device_sel_resp = 0U;
        } else if ((0x101000U == (0xfffff000U & vlSelf->wb_adr_i))) {
            vlSelf->wb_interconnect__DOT__device_sel_resp = 1U;
        } else if ((0x20000000U == (0xf0000000U & vlSelf->wb_adr_i))) {
            vlSelf->wb_interconnect__DOT__device_sel_resp = 2U;
        } else if ((0x40000000U == (0xffffff00U & vlSelf->wb_adr_i))) {
            vlSelf->wb_interconnect__DOT__device_sel_resp = 3U;
        } else if ((0x40000100U == (0xffffff00U & vlSelf->wb_adr_i))) {
            vlSelf->wb_interconnect__DOT__device_sel_resp = 4U;
        } else if ((0x40000200U == (0xffffff00U & vlSelf->wb_adr_i))) {
            vlSelf->wb_interconnect__DOT__device_sel_resp = 5U;
        } else if ((0x40000300U == (0xffffff00U & vlSelf->wb_adr_i))) {
            vlSelf->wb_interconnect__DOT__device_sel_resp = 6U;
        } else if ((0x40000400U == (0xffffff00U & vlSelf->wb_adr_i))) {
            vlSelf->wb_interconnect__DOT__device_sel_resp = 7U;
        } else if ((0x40000500U == (0xffffff00U & vlSelf->wb_adr_i))) {
            vlSelf->wb_interconnect__DOT__device_sel_resp = 8U;
        }
        vlSelf->wb_interconnect__DOT__decode_err_resp 
            = (((IData)(vlSelf->wb_cyc_i) & (IData)(vlSelf->wb_stb_i)) 
               & (~ (((((((((0x100000U == (0xfffff000U 
                                           & vlSelf->wb_adr_i)) 
                            | (0x101000U == (0xfffff000U 
                                             & vlSelf->wb_adr_i))) 
                           | (0x20000000U == (0xf0000000U 
                                              & vlSelf->wb_adr_i))) 
                          | (0x40000000U == (0xffffff00U 
                                             & vlSelf->wb_adr_i))) 
                         | (0x40000100U == (0xffffff00U 
                                            & vlSelf->wb_adr_i))) 
                        | (0x40000200U == (0xffffff00U 
                                           & vlSelf->wb_adr_i))) 
                       | (0x40000300U == (0xffffff00U 
                                          & vlSelf->wb_adr_i))) 
                      | (0x40000400U == (0xffffff00U 
                                         & vlSelf->wb_adr_i))) 
                     | (0x40000500U == (0xffffff00U 
                                        & vlSelf->wb_adr_i)))));
    } else {
        vlSelf->wb_interconnect__DOT__device_sel_resp = 0U;
        vlSelf->wb_interconnect__DOT__decode_err_resp = 0U;
    }
}

VL_INLINE_OPT void Vwb_interconnect___024root___combo__TOP__1(Vwb_interconnect___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root___combo__TOP__1\n"); );
    // Body
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

void Vwb_interconnect___024root___eval(Vwb_interconnect___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root___eval\n"); );
    // Body
    Vwb_interconnect___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vwb_interconnect___024root___sequent__TOP__0(vlSelf);
    }
    Vwb_interconnect___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

#ifdef VL_DEBUG
void Vwb_interconnect___024root___eval_debug_assertions(Vwb_interconnect___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->wb_cyc_i & 0xfeU))) {
        Verilated::overWidthError("wb_cyc_i");}
    if (VL_UNLIKELY((vlSelf->wb_stb_i & 0xfeU))) {
        Verilated::overWidthError("wb_stb_i");}
    if (VL_UNLIKELY((vlSelf->wb_we_i & 0xfeU))) {
        Verilated::overWidthError("wb_we_i");}
    if (VL_UNLIKELY((vlSelf->wb_sel_i & 0xf0U))) {
        Verilated::overWidthError("wb_sel_i");}
    if (VL_UNLIKELY((vlSelf->bootrom_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("bootrom_rvalid_i");}
    if (VL_UNLIKELY((vlSelf->sram_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("sram_rvalid_i");}
    if (VL_UNLIKELY((vlSelf->xip_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("xip_rvalid_i");}
    if (VL_UNLIKELY((vlSelf->uart_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("uart_rvalid_i");}
    if (VL_UNLIKELY((vlSelf->gpio_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("gpio_rvalid_i");}
    if (VL_UNLIKELY((vlSelf->timer_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("timer_rvalid_i");}
    if (VL_UNLIKELY((vlSelf->spictrl_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("spictrl_rvalid_i");}
    if (VL_UNLIKELY((vlSelf->i2c_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("i2c_rvalid_i");}
    if (VL_UNLIKELY((vlSelf->spihost_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("spihost_rvalid_i");}
}
#endif  // VL_DEBUG
