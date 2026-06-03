// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_top.h for the primary calling header

#include "verilated.h"

#include "Vspi_top__Syms.h"
#include "Vspi_top___024root.h"

VL_ATTR_COLD void Vspi_top___024root___settle__TOP__0(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___settle__TOP__0\n"); );
    // Body
    if (vlSelf->spi_top__DOT__u_tx_fifo__DOT____Vtogcov__clr_i) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT____Vtogcov__clr_i = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__limit)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__limit = 1U;
    }
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
    vlSelf->spi_top__DOT__read_status_d = (((IData)(vlSelf->device_req_i) 
                                            & (4U == 
                                               (0xfffU 
                                                & vlSelf->device_addr_i))) 
                                           & (~ (IData)(vlSelf->device_we_i)));
    if (((IData)(vlSelf->device_rvalid_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__device_rvalid_o))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->spi_top__DOT____Vtogcov__device_rvalid_o 
            = vlSelf->device_rvalid_o;
    }
    if (((IData)(vlSelf->spi_top__DOT__read_status_q) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__read_status_q))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->spi_top__DOT____Vtogcov__read_status_q 
            = vlSelf->spi_top__DOT__read_status_q;
    }
    if (((3U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__next_tx_byte_d))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->spi_top__DOT____Vtogcov__next_tx_byte_d 
            = (3U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q));
    }
    if (((IData)(vlSelf->spi_top__DOT__next_tx_byte_q) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__next_tx_byte_q))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->spi_top__DOT____Vtogcov__next_tx_byte_q 
            = vlSelf->spi_top__DOT__next_tx_byte_q;
    }
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 7U)) << 7U));
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x80U & ((~ ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
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
    if ((IData)((((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  >> 7U) ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_msb)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_msb 
            = (1U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                     >> 7U));
    }
    if ((IData)((((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  >> 7U) ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_msb)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_msb 
            = (1U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                     >> 7U));
    }
    vlSelf->spi_top__DOT__u_spi_host__DOT__count_at_limit 
        = (1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count));
    if (((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count) 
         ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__count))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__count 
            = vlSelf->spi_top__DOT__u_spi_host__DOT__count;
    }
    if (((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck) 
         ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck 
            = vlSelf->spi_top__DOT__u_spi_host__DOT__sck;
    }
    if (((1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count)) 
         ^ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__count_at_limit))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__count_at_limit 
            = (1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count));
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
    vlSelf->sck_o = ((2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
                     & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck));
    vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos 
        = ((1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count)) 
           & (~ (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck)));
    vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg 
        = ((1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count)) 
           & (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__sck));
    vlSelf->spi_tx_o = (IData)(((2U != (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
                                | ((IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q) 
                                   >> 7U)));
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
    vlSelf->spi_top__DOT__tx_fifo_rready = ((3U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q)) 
                                            & (~ (IData)(vlSelf->spi_top__DOT__next_tx_byte_q)));
    vlSelf->byte_data_o = vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q;
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelf->spi_top__DOT__tx_fifo_full = ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                          == (0x80U 
                                              ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    if (((IData)(vlSelf->spi_top__DOT__tx_fifo_wvalid) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_wvalid))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_wvalid 
            = vlSelf->spi_top__DOT__tx_fifo_wvalid;
    }
    if (((IData)(vlSelf->spi_top__DOT__read_status_d) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__read_status_d))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->spi_top__DOT____Vtogcov__read_status_d 
            = vlSelf->spi_top__DOT__read_status_d;
    }
    if (((IData)(vlSelf->sck_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__sck_o))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->spi_top__DOT____Vtogcov__sck_o = vlSelf->sck_o;
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
    if (((IData)(vlSelf->spi_tx_o) ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__spi_tx_o))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->spi_top__DOT____Vtogcov__spi_tx_o = vlSelf->spi_tx_o;
    }
    if (((IData)(vlSelf->spi_top__DOT__tx_fifo_rready) 
         ^ (IData)(vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rready))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rready 
            = vlSelf->spi_top__DOT__tx_fifo_rready;
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
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlSelf->spi_top__DOT__tx_fifo_wvalid) 
            & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__wready_o)) 
           & (~ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
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
    if (((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
         ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i 
            = vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
    }
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7eU == (0x7fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
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
    if (((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) 
         ^ (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set 
            = vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
    }
}

VL_ATTR_COLD void Vspi_top___024root___configure_coverage(Vspi_top___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 14, 18, ".spi_top", "v_toggle/spi_top", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 15, 18, ".spi_top", "v_toggle/spi_top", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 17, 34, ".spi_top", "v_toggle/spi_top", "device_req_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 18, 34, ".spi_top", "v_toggle/spi_top", "device_addr_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 19, 34, ".spi_top", "v_toggle/spi_top", "device_we_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 20, 34, ".spi_top", "v_toggle/spi_top", "device_be_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 20, 34, ".spi_top", "v_toggle/spi_top", "device_be_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 20, 34, ".spi_top", "v_toggle/spi_top", "device_be_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 20, 34, ".spi_top", "v_toggle/spi_top", "device_be_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 21, 34, ".spi_top", "v_toggle/spi_top", "device_wdata_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 22, 34, ".spi_top", "v_toggle/spi_top", "device_rvalid_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 23, 34, ".spi_top", "v_toggle/spi_top", "device_rdata_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 25, 18, ".spi_top", "v_toggle/spi_top", "spi_rx_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 26, 18, ".spi_top", "v_toggle/spi_top", "spi_tx_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 27, 18, ".spi_top", "v_toggle/spi_top", "sck_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 29, 24, ".spi_top", "v_toggle/spi_top", "byte_data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 29, 24, ".spi_top", "v_toggle/spi_top", "byte_data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 29, 24, ".spi_top", "v_toggle/spi_top", "byte_data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 29, 24, ".spi_top", "v_toggle/spi_top", "byte_data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 29, 24, ".spi_top", "v_toggle/spi_top", "byte_data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 29, 24, ".spi_top", "v_toggle/spi_top", "byte_data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 29, 24, ".spi_top", "v_toggle/spi_top", "byte_data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 29, 24, ".spi_top", "v_toggle/spi_top", "byte_data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 35, 23, ".spi_top", "v_toggle/spi_top", "reg_addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 38, 9, ".spi_top", "v_toggle/spi_top", "read_status_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 38, 24, ".spi_top", "v_toggle/spi_top", "read_status_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 41, 9, ".spi_top", "v_toggle/spi_top", "next_tx_byte_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 41, 25, ".spi_top", "v_toggle/spi_top", "next_tx_byte_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 43, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_wvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 44, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_rvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 44, 31, ".spi_top", "v_toggle/spi_top", "tx_fifo_rready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 45, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 45, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 45, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 45, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 45, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 45, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 45, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 45, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 46, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_full", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 46, 29, ".spi_top", "v_toggle/spi_top", "tx_fifo_empty", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 47, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_depth[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 47, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_depth[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 47, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_depth[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 47, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_depth[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 47, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_depth[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 47, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_depth[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 47, 15, ".spi_top", "v_toggle/spi_top", "tx_fifo_depth[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 50, 5, ".spi_top", "v_branch/spi_top", "if", "50-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 50, 6, ".spi_top", "v_branch/spi_top", "else", "53-55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 49, 3, ".spi_top", "v_line/spi_top", "block", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 73, 5, ".spi_top", "v_branch/spi_top", "if", "73-74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 73, 6, ".spi_top", "v_branch/spi_top", "else", "75-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 72, 3, ".spi_top", "v_line/spi_top", "block", "72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 124, 33, ".spi_top", "v_toggle/spi_top", "unused_device_be[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 124, 33, ".spi_top", "v_toggle/spi_top", "unused_device_be[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_top.sv", 124, 33, ".spi_top", "v_toggle/spi_top", "unused_device_be[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 18, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 19, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 21, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "clr_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 23, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "wvalid_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 24, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "wready_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 25, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "wdata_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 25, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "wdata_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 25, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "wdata_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 25, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "wdata_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 25, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "wdata_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 25, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "wdata_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 25, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "wdata_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 25, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "wdata_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 27, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "rvalid_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 28, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "rready_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 29, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "rdata_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 29, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "rdata_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 29, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "rdata_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 29, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "rdata_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 29, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "rdata_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 29, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "rdata_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 29, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "rdata_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 29, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "rdata_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 31, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "full_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 32, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "depth_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 32, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "depth_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 32, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "depth_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 32, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "depth_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 32, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "depth_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 32, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "depth_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 32, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "depth_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 33, 27, ".spi_top.u_tx_fifo", "v_toggle/prim_fifo_sync__W8_Pz1_D7f", "err_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 71, 16, ".spi_top.u_tx_fifo", "v_branch/prim_fifo_sync__W8_Pz1_D7f", "if", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 71, 17, ".spi_top.u_tx_fifo", "v_branch/prim_fifo_sync__W8_Pz1_D7f", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 69, 7, ".spi_top.u_tx_fifo", "v_line/prim_fifo_sync__W8_Pz1_D7f", "elsif", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 68, 5, ".spi_top.u_tx_fifo", "v_line/prim_fifo_sync__W8_Pz1_D7f", "block", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 123, 9, ".spi_top.u_tx_fifo", "v_branch/prim_fifo_sync__W8_Pz1_D7f", "if", "123-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 123, 10, ".spi_top.u_tx_fifo", "v_branch/prim_fifo_sync__W8_Pz1_D7f", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync.sv", 122, 7, ".spi_top.u_tx_fifo", "v_line/prim_fifo_sync__W8_Pz1_D7f", "block", "122");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 19, 9, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 20, 9, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 21, 9, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "clr_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 22, 9, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "incr_wptr_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 23, 9, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "incr_rptr_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 27, 16, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "full_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 28, 16, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "empty_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "depth_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "depth_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "depth_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "depth_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "depth_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "depth_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "depth_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 32, 16, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "err_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_cnt_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_cnt_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_cnt_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_cnt_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_cnt_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_cnt_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_cnt_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_cnt_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_set_cnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_set_cnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_set_cnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_set_cnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_set_cnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_set_cnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_set_cnt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_set_cnt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_cnt_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_cnt_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_cnt_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_cnt_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_cnt_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_cnt_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_cnt_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_cnt_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_set_cnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_set_cnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_set_cnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_set_cnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_set_cnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_set_cnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_set_cnt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_set_cnt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 45, 9, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_msb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 45, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_msb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 50, 9, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "wptr_wrap_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 50, 24, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D7f_Sz2", "rptr_wrap_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 119, 16, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_branch/prim_fifo_sync_cnt__D7f_Sz2", "if", "119-120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 119, 17, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_branch/prim_fifo_sync_cnt__D7f_Sz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 117, 16, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D7f_Sz2", "elsif", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 115, 16, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D7f_Sz2", "elsif", "115-116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 113, 7, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D7f_Sz2", "elsif", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 112, 5, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D7f_Sz2", "block", "112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 131, 16, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_branch/prim_fifo_sync_cnt__D7f_Sz2", "if", "131-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 131, 17, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_branch/prim_fifo_sync_cnt__D7f_Sz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 129, 16, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D7f_Sz2", "elsif", "129-130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 127, 16, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D7f_Sz2", "elsif", "127-128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 125, 7, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D7f_Sz2", "elsif", "125-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/hanumavva/Hanumavva/spi/rtl/prim_fifo_sync_cnt.sv", 124, 5, ".spi_top.u_tx_fifo.gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D7f_Sz2", "block", "124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 19, 18, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 21, 18, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 23, 18, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "spi_rx_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 25, 18, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "spi_tx_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 27, 18, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "sck_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 29, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "start_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 31, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 31, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 31, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 31, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 31, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 31, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 31, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 31, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 33, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 33, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 33, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 33, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 33, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 33, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 33, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 33, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "byte_data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 35, 24, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "next_tx_byte_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 57, 26, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 59, 26, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "limit[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 61, 9, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "sck", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 63, 9, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "count_at_limit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 65, 9, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "sck_pos", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 67, 9, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "sck_neg", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 91, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "state_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 91, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "state_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 99, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "bit_counter_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 99, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "bit_counter_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 99, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "bit_counter_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 101, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "current_byte_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 101, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "current_byte_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 101, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "current_byte_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 101, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "current_byte_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 101, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "current_byte_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 101, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "current_byte_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 101, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "current_byte_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 101, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "current_byte_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 103, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "recieved_byte_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 103, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "recieved_byte_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 103, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "recieved_byte_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 103, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "recieved_byte_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 103, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "recieved_byte_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 103, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "recieved_byte_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 103, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "recieved_byte_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 103, 15, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "recieved_byte_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 111, 9, ".spi_top.u_spi_host", "v_toggle/spi_host__pi1", "sck_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 139, 10, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "if", "139,141,143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 139, 11, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "else", "147,149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 131, 10, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "elsif", "131,133,135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 123, 5, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "elsif", "123,125,127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 121, 3, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "block", "121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 247, 11, ".spi_top.u_spi_host", "v_branch/spi_host__pi1", "if", "247,249,251");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 247, 12, ".spi_top.u_spi_host", "v_branch/spi_host__pi1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 275, 15, ".spi_top.u_spi_host", "v_branch/spi_host__pi1", "if", "275,277");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 275, 16, ".spi_top.u_spi_host", "v_branch/spi_host__pi1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 273, 17, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "case", "273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 287, 18, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "case", "287,289,291,293");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 309, 15, ".spi_top.u_spi_host", "v_branch/spi_host__pi1", "if", "309,311");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 309, 16, ".spi_top.u_spi_host", "v_branch/spi_host__pi1", "else", "315,317");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 303, 17, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "case", "303,305,307");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 327, 17, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "case", "327,329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 263, 14, ".spi_top.u_spi_host", "v_branch/spi_host__pi1", "if", "263,265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 263, 15, ".spi_top.u_spi_host", "v_branch/spi_host__pi1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 245, 14, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "elsif", "245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 227, 9, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "elsif", "227,229,231,233,235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/hanumavva/Hanumavva/spi/rtl/spi_host.sv", 225, 7, ".spi_top.u_spi_host", "v_line/spi_host__pi1", "block", "225");
}
