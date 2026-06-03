// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_top.h for the primary calling header

#include "verilated.h"

#include "Vspi_top___024root.h"

void Vspi_top___024root___combo__TOP__0(Vspi_top___024root* vlSelf);
void Vspi_top___024root___sequent__TOP__0(Vspi_top___024root* vlSelf);
void Vspi_top___024root___sequent__TOP__1(Vspi_top___024root* vlSelf);
void Vspi_top___024root___combo__TOP__1(Vspi_top___024root* vlSelf);
void Vspi_top___024root___sequent__TOP__2(Vspi_top___024root* vlSelf);
void Vspi_top___024root___combo__TOP__2(Vspi_top___024root* vlSelf);

void Vspi_top___024root___eval(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___eval\n"); );
    // Body
    Vspi_top___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vspi_top___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vspi_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vspi_top___024root___combo__TOP__1(vlSelf);
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vspi_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    Vspi_top___024root___combo__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

#ifdef VL_DEBUG
void Vspi_top___024root___eval_debug_assertions(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->device_req_i & 0xfeU))) {
        Verilated::overWidthError("device_req_i");}
    if (VL_UNLIKELY((vlSelf->device_we_i & 0xfeU))) {
        Verilated::overWidthError("device_we_i");}
    if (VL_UNLIKELY((vlSelf->device_be_i & 0xf0U))) {
        Verilated::overWidthError("device_be_i");}
    if (VL_UNLIKELY((vlSelf->spi_rx_i & 0xfeU))) {
        Verilated::overWidthError("spi_rx_i");}
}
#endif  // VL_DEBUG
