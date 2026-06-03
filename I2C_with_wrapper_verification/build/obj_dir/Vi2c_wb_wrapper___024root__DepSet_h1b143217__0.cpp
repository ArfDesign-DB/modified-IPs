// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_wb_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vi2c_wb_wrapper___024root.h"

VL_INLINE_OPT void Vi2c_wb_wrapper___024root___combo__TOP__2(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i 
        = (1U & (~ (IData)(vlSelf->rst_i)));
}

void Vi2c_wb_wrapper___024root___combo__TOP__0(Vi2c_wb_wrapper___024root* vlSelf);
void Vi2c_wb_wrapper___024root___sequent__TOP__0(Vi2c_wb_wrapper___024root* vlSelf);
void Vi2c_wb_wrapper___024root___sequent__TOP__1(Vi2c_wb_wrapper___024root* vlSelf);
void Vi2c_wb_wrapper___024root___sequent__TOP__2(Vi2c_wb_wrapper___024root* vlSelf);
void Vi2c_wb_wrapper___024root___combo__TOP__1(Vi2c_wb_wrapper___024root* vlSelf);
void Vi2c_wb_wrapper___024root___sequent__TOP__3(Vi2c_wb_wrapper___024root* vlSelf);

void Vi2c_wb_wrapper___024root___eval(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___eval\n"); );
    // Body
    Vi2c_wb_wrapper___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vi2c_wb_wrapper___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i)))) {
        Vi2c_wb_wrapper___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vi2c_wb_wrapper___024root___sequent__TOP__2(vlSelf);
    }
    Vi2c_wb_wrapper___024root___combo__TOP__1(vlSelf);
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i)))) {
        Vi2c_wb_wrapper___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vi2c_wb_wrapper___024root___combo__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i 
        = vlSelf->__VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i;
    vlSelf->__VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i 
        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i;
}

QData Vi2c_wb_wrapper___024root___change_request_1(Vi2c_wb_wrapper___024root* vlSelf);

VL_INLINE_OPT QData Vi2c_wb_wrapper___024root___change_request(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___change_request\n"); );
    // Body
    return (Vi2c_wb_wrapper___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vi2c_wb_wrapper___024root___change_request_1(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i ^ vlSelf->__Vchglast__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i));
    VL_DEBUG_IF( if(__req && ((vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i ^ vlSelf->__Vchglast__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i))) VL_DBG_MSGF("        CHANGE: /home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v:152: i2c_wb_wrapper.u_i2c_master_top.rst_i\n"); );
    // Final
    vlSelf->__Vchglast__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i 
        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i;
    return __req;
}

#ifdef VL_DEBUG
void Vi2c_wb_wrapper___024root___eval_debug_assertions(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((vlSelf->i2c_req_o & 0xfeU))) {
        Verilated::overWidthError("i2c_req_o");}
    if (VL_UNLIKELY((vlSelf->i2c_we_o & 0xfeU))) {
        Verilated::overWidthError("i2c_we_o");}
    if (VL_UNLIKELY((vlSelf->i2c_be_o & 0xf0U))) {
        Verilated::overWidthError("i2c_be_o");}
    if (VL_UNLIKELY((vlSelf->scl_pad_i & 0xfeU))) {
        Verilated::overWidthError("scl_pad_i");}
    if (VL_UNLIKELY((vlSelf->sda_pad_i & 0xfeU))) {
        Verilated::overWidthError("sda_pad_i");}
}
#endif  // VL_DEBUG
