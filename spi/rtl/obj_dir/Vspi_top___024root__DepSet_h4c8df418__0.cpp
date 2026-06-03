// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_top.h for the primary calling header

#include "verilated.h"

#include "Vspi_top__Syms.h"
#include "Vspi_top___024root.h"

VL_INLINE_OPT void Vspi_top___024root___combo__TOP__0(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___combo__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->spi_top__DOT____Vtogcov__clk_i = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_ni) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->spi_top__DOT____Vtogcov__rst_ni = vlSelf->rst_ni;
    }
    if (((IData)(vlSelf->device_req_i) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__device_req_i))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->spi_top__DOT____Vtogcov__device_req_i 
            = vlSelf->device_req_i;
    }
    if (((IData)(vlSelf->device_we_i) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__device_we_i))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->spi_top__DOT____Vtogcov__device_we_i 
            = vlSelf->device_we_i;
    }
    if (((IData)(vlSelf->spi_rx_i) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__spi_rx_i))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->spi_top__DOT____Vtogcov__spi_rx_i = vlSelf->spi_rx_i;
    }
    if ((1U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->spi_top__DOT____Vtogcov__device_be_i 
            = ((0xeU & (IData)(vlSelf->spi_top__DOT____Vtogcov__device_be_i)) 
               | (1U & (IData)(vlSelf->device_be_i)));
    }
    if ((2U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->spi_top__DOT____Vtogcov__device_be_i 
            = ((0xdU & (IData)(vlSelf->spi_top__DOT____Vtogcov__device_be_i)) 
               | (2U & (IData)(vlSelf->device_be_i)));
    }
    if ((4U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->spi_top__DOT____Vtogcov__device_be_i 
            = ((0xbU & (IData)(vlSelf->spi_top__DOT____Vtogcov__device_be_i)) 
               | (4U & (IData)(vlSelf->device_be_i)));
    }
    if ((8U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->spi_top__DOT____Vtogcov__device_be_i 
            = ((7U & (IData)(vlSelf->spi_top__DOT____Vtogcov__device_be_i)) 
               | (8U & (IData)(vlSelf->device_be_i)));
    }
    if ((1U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfffffffeU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (1U & vlSelf->device_addr_i));
    }
    if ((2U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfffffffdU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (2U & vlSelf->device_addr_i));
    }
    if ((4U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfffffffbU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (4U & vlSelf->device_addr_i));
    }
    if ((8U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfffffff7U & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (8U & vlSelf->device_addr_i));
    }
    if ((0x10U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xffffffefU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x10U & vlSelf->device_addr_i));
    }
    if ((0x20U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xffffffdfU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x20U & vlSelf->device_addr_i));
    }
    if ((0x40U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xffffffbfU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x40U & vlSelf->device_addr_i));
    }
    if ((0x80U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xffffff7fU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x80U & vlSelf->device_addr_i));
    }
    if ((0x100U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfffffeffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x100U & vlSelf->device_addr_i));
    }
    if ((0x200U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfffffdffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x200U & vlSelf->device_addr_i));
    }
    if ((0x400U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfffffbffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x400U & vlSelf->device_addr_i));
    }
    if ((0x800U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfffff7ffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x800U & vlSelf->device_addr_i));
    }
    if ((0x1000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xffffefffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x1000U & vlSelf->device_addr_i));
    }
    if ((0x2000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xffffdfffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x2000U & vlSelf->device_addr_i));
    }
    if ((0x4000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xffffbfffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x4000U & vlSelf->device_addr_i));
    }
    if ((0x8000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xffff7fffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x8000U & vlSelf->device_addr_i));
    }
    if ((0x10000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfffeffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x10000U & vlSelf->device_addr_i));
    }
    if ((0x20000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfffdffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x20000U & vlSelf->device_addr_i));
    }
    if ((0x40000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfffbffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x40000U & vlSelf->device_addr_i));
    }
    if ((0x80000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfff7ffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x80000U & vlSelf->device_addr_i));
    }
    if ((0x100000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xffefffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x100000U & vlSelf->device_addr_i));
    }
    if ((0x200000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xffdfffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x200000U & vlSelf->device_addr_i));
    }
    if ((0x400000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xffbfffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x400000U & vlSelf->device_addr_i));
    }
    if ((0x800000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xff7fffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x800000U & vlSelf->device_addr_i));
    }
    if ((0x1000000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfeffffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x1000000U & vlSelf->device_addr_i));
    }
    if ((0x2000000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfdffffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x2000000U & vlSelf->device_addr_i));
    }
    if ((0x4000000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xfbffffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x4000000U & vlSelf->device_addr_i));
    }
    if ((0x8000000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xf7ffffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x8000000U & vlSelf->device_addr_i));
    }
    if ((0x10000000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xefffffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x10000000U & vlSelf->device_addr_i));
    }
    if ((0x20000000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xdfffffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x20000000U & vlSelf->device_addr_i));
    }
    if ((0x40000000U & (vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0xbfffffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x40000000U & vlSelf->device_addr_i));
    }
    if (((vlSelf->device_addr_i ^ vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->spi_top__DOT____Vtogcov__device_addr_i 
            = ((0x7fffffffU & vlSelf->spi_top__DOT____Vtogcov__device_addr_i) 
               | (0x80000000U & vlSelf->device_addr_i));
    }
    if ((1U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffffeU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (1U & vlSelf->device_wdata_i));
    }
    if ((2U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffffdU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (2U & vlSelf->device_wdata_i));
    }
    if ((4U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffffbU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (4U & vlSelf->device_wdata_i));
    }
    if ((8U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffff7U & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (8U & vlSelf->device_wdata_i));
    }
    if ((0x10U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xffffffefU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x10U & vlSelf->device_wdata_i));
    }
    if ((0x20U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xffffffdfU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x20U & vlSelf->device_wdata_i));
    }
    if ((0x40U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xffffffbfU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x40U & vlSelf->device_wdata_i));
    }
    if ((0x80U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xffffff7fU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x80U & vlSelf->device_wdata_i));
    }
    if ((0x100U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffeffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x100U & vlSelf->device_wdata_i));
    }
    if ((0x200U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffdffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x200U & vlSelf->device_wdata_i));
    }
    if ((0x400U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffbffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x400U & vlSelf->device_wdata_i));
    }
    if ((0x800U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfffff7ffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x800U & vlSelf->device_wdata_i));
    }
    if ((0x1000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xffffefffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x1000U & vlSelf->device_wdata_i));
    }
    if ((0x2000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xffffdfffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x2000U & vlSelf->device_wdata_i));
    }
    if ((0x4000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xffffbfffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x4000U & vlSelf->device_wdata_i));
    }
    if ((0x8000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xffff7fffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x8000U & vlSelf->device_wdata_i));
    }
    if ((0x10000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfffeffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x10000U & vlSelf->device_wdata_i));
    }
    if ((0x20000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfffdffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x20000U & vlSelf->device_wdata_i));
    }
    if ((0x40000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfffbffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x40000U & vlSelf->device_wdata_i));
    }
    if ((0x80000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfff7ffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x80000U & vlSelf->device_wdata_i));
    }
    if ((0x100000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xffefffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x100000U & vlSelf->device_wdata_i));
    }
    if ((0x200000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xffdfffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x200000U & vlSelf->device_wdata_i));
    }
    if ((0x400000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xffbfffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x400000U & vlSelf->device_wdata_i));
    }
    if ((0x800000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xff7fffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x800000U & vlSelf->device_wdata_i));
    }
    if ((0x1000000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfeffffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x1000000U & vlSelf->device_wdata_i));
    }
    if ((0x2000000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfdffffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x2000000U & vlSelf->device_wdata_i));
    }
    if ((0x4000000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xfbffffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x4000000U & vlSelf->device_wdata_i));
    }
    if ((0x8000000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xf7ffffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x8000000U & vlSelf->device_wdata_i));
    }
    if ((0x10000000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xefffffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x10000000U & vlSelf->device_wdata_i));
    }
    if ((0x20000000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xdfffffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x20000000U & vlSelf->device_wdata_i));
    }
    if ((0x40000000U & (vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0xbfffffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x40000000U & vlSelf->device_wdata_i));
    }
    if (((vlSelf->device_wdata_i ^ vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->spi_top__DOT____Vtogcov__device_wdata_i 
            = ((0x7fffffffU & vlSelf->spi_top__DOT____Vtogcov__device_wdata_i) 
               | (0x80000000U & vlSelf->device_wdata_i));
    }
    vlSelf->spi_top__DOT__tx_fifo_wvalid = ((((IData)(vlSelf->device_req_i) 
                                              & (0U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->device_addr_i))) 
                                             & (IData)(vlSelf->device_we_i)) 
                                            & (IData)(vlSelf->device_be_i));
    if (((IData)(vlSelf->spi_top__DOT__tx_fifo_wvalid) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_wvalid))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_wvalid 
            = vlSelf->spi_top__DOT__tx_fifo_wvalid;
    }
}

VL_INLINE_OPT void Vspi_top___024root___sequent__TOP__0(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    CData/*0:0*/ __Vdly__spi_top__DOT__u_spi_host__DOT__count;
    CData/*1:0*/ __Vdly__spi_top__DOT__u_spi_host__DOT__state_q;
    // Body
    __Vdly__spi_top__DOT__u_spi_host__DOT__count = vlSelf->spi_top__DOT__u_spi_host__DOT__count;
    __Vdly__spi_top__DOT__u_spi_host__DOT__state_q 
        = vlSelf->spi_top__DOT__u_spi_host__DOT__state_q;
    vlSelf->__Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    ++(vlSymsp->__Vcoverage[142]);
    ++(vlSymsp->__Vcoverage[145]);
    ++(vlSymsp->__Vcoverage[151]);
    ++(vlSymsp->__Vcoverage[185]);
    ++(vlSymsp->__Vcoverage[191]);
    ++(vlSymsp->__Vcoverage[224]);
    ++(vlSymsp->__Vcoverage[239]);
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        ++(vlSymsp->__Vcoverage[140]);
    }
    if (vlSelf->rst_ni) {
        ++(vlSymsp->__Vcoverage[141]);
        ++(vlSymsp->__Vcoverage[144]);
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        ++(vlSymsp->__Vcoverage[143]);
        ++(vlSymsp->__Vcoverage[150]);
        ++(vlSymsp->__Vcoverage[184]);
        ++(vlSymsp->__Vcoverage[190]);
        ++(vlSymsp->__Vcoverage[223]);
        ++(vlSymsp->__Vcoverage[238]);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            ++(vlSymsp->__Vcoverage[182]);
        }
        if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            ++(vlSymsp->__Vcoverage[188]);
        }
        if (vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos) {
            ++(vlSymsp->__Vcoverage[237]);
        }
        if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos)))) {
            if (vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg) {
                ++(vlSymsp->__Vcoverage[235]);
            }
            if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg)))) {
                ++(vlSymsp->__Vcoverage[236]);
            }
        }
        if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set)))) {
            if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr)))) {
                ++(vlSymsp->__Vcoverage[187]);
            }
            if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                ++(vlSymsp->__Vcoverage[186]);
            }
        }
        if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set)))) {
            if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr)))) {
                ++(vlSymsp->__Vcoverage[181]);
            }
            if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                ++(vlSymsp->__Vcoverage[180]);
            }
        }
        if (vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos) {
            if ((2U != (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))) {
                ++(vlSymsp->__Vcoverage[226]);
            }
            if ((2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))) {
                ++(vlSymsp->__Vcoverage[225]);
            }
        }
        if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos)))) {
            if (vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg) {
                if ((2U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))) {
                        ++(vlSymsp->__Vcoverage[234]);
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))) {
                        ++(vlSymsp->__Vcoverage[230]);
                    }
                }
                if ((2U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)))) {
                        ++(vlSymsp->__Vcoverage[233]);
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)))) {
                        ++(vlSymsp->__Vcoverage[229]);
                    }
                }
                if ((2U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)))) {
                        if ((0U != (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q))) {
                            ++(vlSymsp->__Vcoverage[232]);
                        }
                        if ((0U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q))) {
                            ++(vlSymsp->__Vcoverage[231]);
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
                      | (IData)(vlSelf->spi_top__DOT__tx_fifo_rvalid))))) {
            ++(vlSymsp->__Vcoverage[222]);
        }
        if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            ++(vlSymsp->__Vcoverage[148]);
        }
        if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)))) {
            ++(vlSymsp->__Vcoverage[149]);
        }
        if (((2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
             | (IData)(vlSelf->spi_top__DOT__tx_fifo_rvalid))) {
            if ((1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count))) {
                ++(vlSymsp->__Vcoverage[220]);
            }
            if ((1U > (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count))) {
                ++(vlSymsp->__Vcoverage[221]);
            }
        }
        if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos)))) {
            if (vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg) {
                if ((1U & (~ ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)))) {
                        if ((1U & (~ (IData)(vlSelf->spi_top__DOT__tx_fifo_rvalid)))) {
                            ++(vlSymsp->__Vcoverage[228]);
                        }
                        if (vlSelf->spi_top__DOT__tx_fifo_rvalid) {
                            ++(vlSymsp->__Vcoverage[227]);
                        }
                    }
                }
            }
        }
        vlSelf->device_rvalid_o = vlSelf->device_req_i;
        __Vdly__spi_top__DOT__u_spi_host__DOT__count 
            = (((2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
                | (IData)(vlSelf->spi_top__DOT__tx_fifo_rvalid)) 
               & ((~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count_at_limit)) 
                  & ((IData)(1U) + (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count))));
        vlSelf->spi_top__DOT__next_tx_byte_q = (3U 
                                                == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q));
        if (((2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
             | (IData)(vlSelf->spi_top__DOT__tx_fifo_rvalid))) {
            if ((1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count))) {
                vlSelf->spi_top__DOT__u_spi_host__DOT__sck 
                    = (1U & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck)));
            }
        } else {
            vlSelf->spi_top__DOT__u_spi_host__DOT__sck = 0U;
        }
        if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos) {
            if ((2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))) {
                vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q 
                    = ((0xfeU & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q) 
                                 << 1U)) | (IData)(vlSelf->spi_rx_i));
            }
        } else if (vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg) {
            if ((2U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))) {
                    __Vdly__spi_top__DOT__u_spi_host__DOT__state_q = 0U;
                } else {
                    vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q 
                        = (0xfeU & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q) 
                                    << 1U));
                    if ((0U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q))) {
                        __Vdly__spi_top__DOT__u_spi_host__DOT__state_q = 3U;
                    } else {
                        vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q 
                            = (7U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q) 
                                     - (IData)(1U)));
                    }
                }
            } else if ((1U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))) {
                vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q 
                    = vlSelf->spi_top__DOT__tx_fifo_rdata;
                vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q = 7U;
                __Vdly__spi_top__DOT__u_spi_host__DOT__state_q = 2U;
            } else if (vlSelf->spi_top__DOT__tx_fifo_rvalid) {
                __Vdly__spi_top__DOT__u_spi_host__DOT__state_q = 1U;
            }
        }
        vlSelf->spi_top__DOT__read_status_q = vlSelf->spi_top__DOT__read_status_d;
        if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            vlSelf->__Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
        } else if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlSelf->__Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
        if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            __Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
        } else if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
    } else {
        vlSelf->device_rvalid_o = 0U;
        __Vdly__spi_top__DOT__u_spi_host__DOT__count = 0U;
        vlSelf->spi_top__DOT__next_tx_byte_q = 0U;
        vlSelf->spi_top__DOT__u_spi_host__DOT__sck = 0U;
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q = 0U;
        vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q = 0U;
        __Vdly__spi_top__DOT__u_spi_host__DOT__state_q = 0U;
        vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q = 0U;
        vlSelf->spi_top__DOT__read_status_q = 0U;
        vlSelf->__Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
    }
    vlSelf->spi_top__DOT__u_spi_host__DOT__count = __Vdly__spi_top__DOT__u_spi_host__DOT__count;
    vlSelf->spi_top__DOT__u_spi_host__DOT__state_q 
        = __Vdly__spi_top__DOT__u_spi_host__DOT__state_q;
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    if (((IData)(vlSelf->device_rvalid_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__device_rvalid_o))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->spi_top__DOT____Vtogcov__device_rvalid_o 
            = vlSelf->device_rvalid_o;
    }
    if (((IData)(vlSelf->spi_top__DOT__next_tx_byte_q) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__next_tx_byte_q))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->spi_top__DOT____Vtogcov__next_tx_byte_q 
            = vlSelf->spi_top__DOT__next_tx_byte_q;
    }
    vlSelf->spi_top__DOT__u_spi_host__DOT__count_at_limit 
        = (1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count));
    if (((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count) 
         ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__count 
            = vlSelf->spi_top__DOT__u_spi_host__DOT__count;
    }
    if (((1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count)) 
         ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__count_at_limit))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__count_at_limit 
            = (1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count));
    }
    if (((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck) 
         ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck 
            = vlSelf->spi_top__DOT__u_spi_host__DOT__sck;
    }
    vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos 
        = ((1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count)) 
           & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck)));
    vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg 
        = ((1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count)) 
           & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck));
    if ((1U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__bit_counter_q)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__bit_counter_q 
            = ((6U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__bit_counter_q)) 
               | (1U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q)));
    }
    if ((2U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__bit_counter_q)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__bit_counter_q 
            = ((5U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__bit_counter_q)) 
               | (2U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q)));
    }
    if ((4U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__bit_counter_q)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__bit_counter_q 
            = ((3U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__bit_counter_q)) 
               | (4U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q)));
    }
    if (((3U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__next_tx_byte_d))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->spi_top__DOT____Vtogcov__next_tx_byte_d 
            = (3U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q));
    }
    if (((2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
         ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_en))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_en 
            = (2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q));
    }
    if ((1U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__state_q)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__state_q 
            = ((2U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__state_q)) 
               | (1U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)));
    }
    if ((2U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__state_q)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__state_q 
            = ((1U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__state_q)) 
               | (2U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)));
    }
    vlSelf->sck_o = ((2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
                     & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck));
    vlSelf->spi_top__DOT__tx_fifo_rready = ((3U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
                                            & (~ (IData)(vlSelf->spi_top__DOT__next_tx_byte_q)));
    vlSelf->spi_tx_o = (IData)(((2U != (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
                                | ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q) 
                                   >> 7U)));
    if ((1U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q 
            = ((0xfeU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)) 
               | (1U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q)));
    }
    if ((2U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q 
            = ((0xfdU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)) 
               | (2U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q)));
    }
    if ((4U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q 
            = ((0xfbU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)) 
               | (4U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q)));
    }
    if ((8U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q 
            = ((0xf7U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)) 
               | (8U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q)));
    }
    if ((0x10U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q 
            = ((0xefU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)) 
               | (0x10U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q)));
    }
    if ((0x20U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q 
            = ((0xdfU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)) 
               | (0x20U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q)));
    }
    if ((0x40U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q 
            = ((0xbfU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)) 
               | (0x40U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q)));
    }
    if ((0x80U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q 
            = ((0x7fU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q)) 
               | (0x80U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q)));
    }
    if ((1U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q 
            = ((0xfeU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)) 
               | (1U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q)));
    }
    if ((2U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q 
            = ((0xfdU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)) 
               | (2U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q)));
    }
    if ((4U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q 
            = ((0xfbU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)) 
               | (4U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q)));
    }
    if ((8U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q 
            = ((0xf7U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)) 
               | (8U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q)));
    }
    if ((0x10U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q 
            = ((0xefU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)) 
               | (0x10U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q)));
    }
    if ((0x20U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q 
            = ((0xdfU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)) 
               | (0x20U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q)));
    }
    if ((0x40U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q 
            = ((0xbfU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)) 
               | (0x40U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q)));
    }
    if ((0x80U & ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q 
            = ((0x7fU & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q)) 
               | (0x80U & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q)));
    }
    vlSelf->byte_data_o = vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q;
    if (((IData)(vlSelf->spi_top__DOT__read_status_q) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__read_status_q))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->spi_top__DOT____Vtogcov__read_status_q 
            = vlSelf->spi_top__DOT__read_status_q;
    }
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                        >> 7U)) << 7U));
    if ((0x80U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q 
            = ((0x7fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q)) 
               | (0x80U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((1U ^ (((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt)) 
               >> 7U))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt 
            = ((0x7fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt)) 
               | (0x80U & ((~ ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                               >> 7U)) << 7U)));
    }
    if ((IData)((((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  >> 7U) ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_msb)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_msb 
            = (1U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                     >> 7U));
    }
    if ((1U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x7eU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (1U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x7dU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (2U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x7bU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (4U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x77U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (8U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x6fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (0x10U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x5fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (0x20U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x3fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (0x40U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if (((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos) 
         ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_pos))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_pos 
            = vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos;
    }
    if (((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg) 
         ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_neg))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_neg 
            = vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg;
    }
    if (((IData)(vlSelf->sck_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__sck_o))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->spi_top__DOT____Vtogcov__sck_o = vlSelf->sck_o;
    }
    if (((IData)(vlSelf->spi_top__DOT__tx_fifo_rready) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rready))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rready 
            = vlSelf->spi_top__DOT__tx_fifo_rready;
    }
    if (((IData)(vlSelf->spi_tx_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__spi_tx_o))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->spi_top__DOT____Vtogcov__spi_tx_o = vlSelf->spi_tx_o;
    }
    if ((1U & ((IData)(vlSelf->byte_data_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->spi_top__DOT____Vtogcov__byte_data_o 
            = ((0xfeU & (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)) 
               | (1U & (IData)(vlSelf->byte_data_o)));
    }
    if ((2U & ((IData)(vlSelf->byte_data_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->spi_top__DOT____Vtogcov__byte_data_o 
            = ((0xfdU & (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)) 
               | (2U & (IData)(vlSelf->byte_data_o)));
    }
    if ((4U & ((IData)(vlSelf->byte_data_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->spi_top__DOT____Vtogcov__byte_data_o 
            = ((0xfbU & (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)) 
               | (4U & (IData)(vlSelf->byte_data_o)));
    }
    if ((8U & ((IData)(vlSelf->byte_data_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->spi_top__DOT____Vtogcov__byte_data_o 
            = ((0xf7U & (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)) 
               | (8U & (IData)(vlSelf->byte_data_o)));
    }
    if ((0x10U & ((IData)(vlSelf->byte_data_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->spi_top__DOT____Vtogcov__byte_data_o 
            = ((0xefU & (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)) 
               | (0x10U & (IData)(vlSelf->byte_data_o)));
    }
    if ((0x20U & ((IData)(vlSelf->byte_data_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->spi_top__DOT____Vtogcov__byte_data_o 
            = ((0xdfU & (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)) 
               | (0x20U & (IData)(vlSelf->byte_data_o)));
    }
    if ((0x40U & ((IData)(vlSelf->byte_data_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->spi_top__DOT____Vtogcov__byte_data_o 
            = ((0xbfU & (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)) 
               | (0x40U & (IData)(vlSelf->byte_data_o)));
    }
    if ((0x80U & ((IData)(vlSelf->byte_data_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->spi_top__DOT____Vtogcov__byte_data_o 
            = ((0x7fU & (IData)(vlSelf->spi_top__DOT____Vtogcov__byte_data_o)) 
               | (0x80U & (IData)(vlSelf->byte_data_o)));
    }
}

VL_INLINE_OPT void Vspi_top___024root___sequent__TOP__1(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___sequent__TOP__1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[154]);
    if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        ++(vlSymsp->__Vcoverage[152]);
    }
    if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr)))) {
        ++(vlSymsp->__Vcoverage[153]);
    }
    if (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelf->spi_top__DOT__u_tx_fifo__DOT____Vlvbound_h177f33a5__0 
            = (0xffU & vlSelf->device_wdata_i);
        if ((0x3f7U >= (0x3f8U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                  << 3U)))) {
            VL_ASSIGNSEL_WI(1016,8,(0x3f8U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                              << 3U)), vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelf->spi_top__DOT__u_tx_fifo__DOT____Vlvbound_h177f33a5__0);
        }
    }
}

VL_INLINE_OPT void Vspi_top___024root___combo__TOP__1(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->spi_top__DOT__read_status_d = (((IData)(vlSelf->device_req_i) 
                                            & (4U == 
                                               (0xfffU 
                                                & vlSelf->device_addr_i))) 
                                           & (~ (IData)(vlSelf->device_we_i)));
    if (((IData)(vlSelf->spi_top__DOT__read_status_d) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__read_status_d))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->spi_top__DOT____Vtogcov__read_status_d 
            = vlSelf->spi_top__DOT__read_status_d;
    }
}

VL_INLINE_OPT void Vspi_top___024root___sequent__TOP__2(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->__Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 7U)) << 7U));
    if ((0x80U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q 
            = ((0x7fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q)) 
               | (0x80U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((1U ^ (((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt)) 
               >> 7U))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt 
            = ((0x7fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt)) 
               | (0x80U & ((~ ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                               >> 7U)) << 7U)));
    }
    if ((IData)((((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  >> 7U) ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_msb)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_msb 
            = (1U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                     >> 7U));
    }
    if ((1U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x7eU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (1U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x7dU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (2U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x7bU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (4U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x77U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (8U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x6fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (0x10U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x5fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (0x20U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x3fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (0x40U & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelf->spi_top__DOT__tx_fifo_full = ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                          == (0x80U 
                                              ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    if (((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
         ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o 
            = vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty;
    }
    vlSelf->spi_top__DOT__tx_fifo_rvalid = (1U & ((~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                  & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->spi_top__DOT__tx_fifo_rdata = ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                            ? 0U : 
                                           ((0x3f7U 
                                             >= (0x3f8U 
                                                 & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    << 3U)))
                                             ? (0xffU 
                                                & (((0U 
                                                     == 
                                                     (0x18U 
                                                      & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                         << 3U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0x3f8U 
                                                        & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                           << 3U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x18U 
                                                       & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                          << 3U))))) 
                                                   | (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                          >> 2U))] 
                                                      >> 
                                                      (0x18U 
                                                       & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                          << 3U)))))
                                             : 0U));
    if (((IData)(vlSelf->spi_top__DOT__tx_fifo_full) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_full))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_full 
            = vlSelf->spi_top__DOT__tx_fifo_full;
    }
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelf->spi_top__DOT__tx_fifo_full)) 
                 & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->spi_top__DOT__tx_fifo_depth = ((IData)(vlSelf->spi_top__DOT__tx_fifo_full)
                                            ? 0x7fU
                                            : (0x7fU 
                                               & (((1U 
                                                    & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                       >> 7U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                       >> 7U)))
                                                   ? 
                                                  ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                   - (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))
                                                   : 
                                                  (((IData)(0x7fU) 
                                                    - (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)) 
                                                   + (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))));
    if (((IData)(vlSelf->spi_top__DOT__tx_fifo_rvalid) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rvalid))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rvalid 
            = vlSelf->spi_top__DOT__tx_fifo_rvalid;
    }
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = (((IData)(vlSelf->spi_top__DOT__tx_fifo_rvalid) 
            & (IData)(vlSelf->spi_top__DOT__tx_fifo_rready)) 
           & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    if ((1U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_rdata) 
               ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xfeU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)) 
               | (1U & (IData)(vlSelf->spi_top__DOT__tx_fifo_rdata)));
    }
    if ((2U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_rdata) 
               ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xfdU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)) 
               | (2U & (IData)(vlSelf->spi_top__DOT__tx_fifo_rdata)));
    }
    if ((4U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_rdata) 
               ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xfbU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)) 
               | (4U & (IData)(vlSelf->spi_top__DOT__tx_fifo_rdata)));
    }
    if ((8U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_rdata) 
               ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xf7U & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)) 
               | (8U & (IData)(vlSelf->spi_top__DOT__tx_fifo_rdata)));
    }
    if ((0x10U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_rdata) 
                  ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xefU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)) 
               | (0x10U & (IData)(vlSelf->spi_top__DOT__tx_fifo_rdata)));
    }
    if ((0x20U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_rdata) 
                  ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xdfU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)) 
               | (0x20U & (IData)(vlSelf->spi_top__DOT__tx_fifo_rdata)));
    }
    if ((0x40U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_rdata) 
                  ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xbfU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)) 
               | (0x40U & (IData)(vlSelf->spi_top__DOT__tx_fifo_rdata)));
    }
    if ((0x80U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_rdata) 
                  ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata 
            = ((0x7fU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata)) 
               | (0x80U & (IData)(vlSelf->spi_top__DOT__tx_fifo_rdata)));
    }
    if (((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__wready_o) 
         ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT____Vtogcov__wready_o))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT____Vtogcov__wready_o 
            = vlSelf->spi_top__DOT__u_tx_fifo__DOT__wready_o;
    }
    if (((0U == (IData)(vlSelf->spi_top__DOT__tx_fifo_depth)) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_empty))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_empty 
            = (0U == (IData)(vlSelf->spi_top__DOT__tx_fifo_depth));
    }
    if ((1U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_depth) 
               ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth 
            = ((0x7eU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)) 
               | (1U & (IData)(vlSelf->spi_top__DOT__tx_fifo_depth)));
    }
    if ((2U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_depth) 
               ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth 
            = ((0x7dU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)) 
               | (2U & (IData)(vlSelf->spi_top__DOT__tx_fifo_depth)));
    }
    if ((4U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_depth) 
               ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth 
            = ((0x7bU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)) 
               | (4U & (IData)(vlSelf->spi_top__DOT__tx_fifo_depth)));
    }
    if ((8U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_depth) 
               ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth 
            = ((0x77U & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)) 
               | (8U & (IData)(vlSelf->spi_top__DOT__tx_fifo_depth)));
    }
    if ((0x10U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_depth) 
                  ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth 
            = ((0x6fU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)) 
               | (0x10U & (IData)(vlSelf->spi_top__DOT__tx_fifo_depth)));
    }
    if ((0x20U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_depth) 
                  ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth 
            = ((0x5fU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)) 
               | (0x20U & (IData)(vlSelf->spi_top__DOT__tx_fifo_depth)));
    }
    if ((0x40U & ((IData)(vlSelf->spi_top__DOT__tx_fifo_depth) 
                  ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth 
            = ((0x3fU & (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth)) 
               | (0x40U & (IData)(vlSelf->spi_top__DOT__tx_fifo_depth)));
    }
    vlSelf->device_rdata_o = ((IData)(vlSelf->spi_top__DOT__read_status_q)
                               ? (((0U == (IData)(vlSelf->spi_top__DOT__tx_fifo_depth)) 
                                   << 1U) | (IData)(vlSelf->spi_top__DOT__tx_fifo_full))
                               : 0U);
    if (((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
         ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i 
            = vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr;
    }
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7eU == (0x7fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    if ((1U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffeU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (1U & vlSelf->device_rdata_o));
    }
    if ((2U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffdU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (2U & vlSelf->device_rdata_o));
    }
    if ((4U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffbU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (4U & vlSelf->device_rdata_o));
    }
    if ((8U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffff7U & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (8U & vlSelf->device_rdata_o));
    }
    if ((0x10U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffefU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x10U & vlSelf->device_rdata_o));
    }
    if ((0x20U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffdfU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x20U & vlSelf->device_rdata_o));
    }
    if ((0x40U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffbfU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x40U & vlSelf->device_rdata_o));
    }
    if ((0x80U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xffffff7fU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x80U & vlSelf->device_rdata_o));
    }
    if ((0x100U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffeffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x100U & vlSelf->device_rdata_o));
    }
    if ((0x200U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffdffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x200U & vlSelf->device_rdata_o));
    }
    if ((0x400U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffbffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x400U & vlSelf->device_rdata_o));
    }
    if ((0x800U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfffff7ffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x800U & vlSelf->device_rdata_o));
    }
    if ((0x1000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xffffefffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x1000U & vlSelf->device_rdata_o));
    }
    if ((0x2000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xffffdfffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x2000U & vlSelf->device_rdata_o));
    }
    if ((0x4000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xffffbfffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x4000U & vlSelf->device_rdata_o));
    }
    if ((0x8000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xffff7fffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x8000U & vlSelf->device_rdata_o));
    }
    if ((0x10000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfffeffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x10000U & vlSelf->device_rdata_o));
    }
    if ((0x20000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfffdffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x20000U & vlSelf->device_rdata_o));
    }
    if ((0x40000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfffbffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x40000U & vlSelf->device_rdata_o));
    }
    if ((0x80000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfff7ffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x80000U & vlSelf->device_rdata_o));
    }
    if ((0x100000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xffefffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x100000U & vlSelf->device_rdata_o));
    }
    if ((0x200000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xffdfffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x200000U & vlSelf->device_rdata_o));
    }
    if ((0x400000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xffbfffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x400000U & vlSelf->device_rdata_o));
    }
    if ((0x800000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xff7fffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x800000U & vlSelf->device_rdata_o));
    }
    if ((0x1000000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfeffffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x1000000U & vlSelf->device_rdata_o));
    }
    if ((0x2000000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfdffffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x2000000U & vlSelf->device_rdata_o));
    }
    if ((0x4000000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xfbffffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x4000000U & vlSelf->device_rdata_o));
    }
    if ((0x8000000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xf7ffffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x8000000U & vlSelf->device_rdata_o));
    }
    if ((0x10000000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xefffffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x10000000U & vlSelf->device_rdata_o));
    }
    if ((0x20000000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xdfffffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x20000000U & vlSelf->device_rdata_o));
    }
    if ((0x40000000U & (vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0xbfffffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x40000000U & vlSelf->device_rdata_o));
    }
    if (((vlSelf->device_rdata_o ^ vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->spi_top__DOT____Vtogcov__device_rdata_o 
            = ((0x7fffffffU & vlSelf->spi_top__DOT____Vtogcov__device_rdata_o) 
               | (0x80000000U & vlSelf->device_rdata_o));
    }
    if (((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) 
         ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set 
            = vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
    }
}

VL_INLINE_OPT void Vspi_top___024root___combo__TOP__2(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlSelf->spi_top__DOT__tx_fifo_wvalid) 
            & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__wready_o)) 
           & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    if (((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
         ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i 
            = vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
    }
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7eU == (0x7fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    if (((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) 
         ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set 
            = vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
    }
}
