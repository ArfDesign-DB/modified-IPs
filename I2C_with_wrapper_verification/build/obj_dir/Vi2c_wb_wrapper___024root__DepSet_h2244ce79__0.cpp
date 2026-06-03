// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_wb_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vi2c_wb_wrapper__Syms.h"
#include "Vi2c_wb_wrapper___024root.h"

VL_INLINE_OPT void Vi2c_wb_wrapper___024root___combo__TOP__0(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___combo__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rst_i))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rst_i 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i;
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__clk_i 
            = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_i) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__rst_i))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__rst_i 
            = vlSelf->rst_i;
    }
    if (((IData)(vlSelf->i2c_req_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_req_o))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_req_o 
            = vlSelf->i2c_req_o;
    }
    if (((IData)(vlSelf->i2c_we_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_we_o))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_we_o 
            = vlSelf->i2c_we_o;
    }
    if (((IData)(vlSelf->scl_pad_i) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_pad_i))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_pad_i 
            = vlSelf->scl_pad_i;
    }
    if (((IData)(vlSelf->sda_pad_i) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__sda_pad_i))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__sda_pad_i 
            = vlSelf->sda_pad_i;
    }
    if ((1U ^ ((IData)(vlSelf->rst_i) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__arst_i)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__arst_i 
            = (1U & (~ (IData)(vlSelf->rst_i)));
    }
    if ((1U & ((IData)(vlSelf->i2c_be_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o 
            = ((0xeU & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o)) 
               | (1U & (IData)(vlSelf->i2c_be_o)));
    }
    if ((2U & ((IData)(vlSelf->i2c_be_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o 
            = ((0xdU & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o)) 
               | (2U & (IData)(vlSelf->i2c_be_o)));
    }
    if ((4U & ((IData)(vlSelf->i2c_be_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o 
            = ((0xbU & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o)) 
               | (4U & (IData)(vlSelf->i2c_be_o)));
    }
    if ((8U & ((IData)(vlSelf->i2c_be_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o 
            = ((7U & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o)) 
               | (8U & (IData)(vlSelf->i2c_be_o)));
    }
    if ((1U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfffffffeU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (1U & vlSelf->i2c_addr_o));
    }
    if ((2U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfffffffdU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (2U & vlSelf->i2c_addr_o));
    }
    if ((4U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfffffffbU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (4U & vlSelf->i2c_addr_o));
    }
    if ((8U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfffffff7U & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (8U & vlSelf->i2c_addr_o));
    }
    if ((0x10U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xffffffefU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x10U & vlSelf->i2c_addr_o));
    }
    if ((0x20U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xffffffdfU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x20U & vlSelf->i2c_addr_o));
    }
    if ((0x40U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xffffffbfU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x40U & vlSelf->i2c_addr_o));
    }
    if ((0x80U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xffffff7fU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x80U & vlSelf->i2c_addr_o));
    }
    if ((0x100U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfffffeffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x100U & vlSelf->i2c_addr_o));
    }
    if ((0x200U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfffffdffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x200U & vlSelf->i2c_addr_o));
    }
    if ((0x400U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfffffbffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x400U & vlSelf->i2c_addr_o));
    }
    if ((0x800U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfffff7ffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x800U & vlSelf->i2c_addr_o));
    }
    if ((0x1000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xffffefffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x1000U & vlSelf->i2c_addr_o));
    }
    if ((0x2000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xffffdfffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x2000U & vlSelf->i2c_addr_o));
    }
    if ((0x4000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xffffbfffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x4000U & vlSelf->i2c_addr_o));
    }
    if ((0x8000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xffff7fffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x8000U & vlSelf->i2c_addr_o));
    }
    if ((0x10000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfffeffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x10000U & vlSelf->i2c_addr_o));
    }
    if ((0x20000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfffdffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x20000U & vlSelf->i2c_addr_o));
    }
    if ((0x40000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfffbffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x40000U & vlSelf->i2c_addr_o));
    }
    if ((0x80000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfff7ffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x80000U & vlSelf->i2c_addr_o));
    }
    if ((0x100000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xffefffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x100000U & vlSelf->i2c_addr_o));
    }
    if ((0x200000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xffdfffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x200000U & vlSelf->i2c_addr_o));
    }
    if ((0x400000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xffbfffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x400000U & vlSelf->i2c_addr_o));
    }
    if ((0x800000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xff7fffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x800000U & vlSelf->i2c_addr_o));
    }
    if ((0x1000000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfeffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x1000000U & vlSelf->i2c_addr_o));
    }
    if ((0x2000000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfdffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x2000000U & vlSelf->i2c_addr_o));
    }
    if ((0x4000000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xfbffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x4000000U & vlSelf->i2c_addr_o));
    }
    if ((0x8000000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xf7ffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x8000000U & vlSelf->i2c_addr_o));
    }
    if ((0x10000000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xefffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x10000000U & vlSelf->i2c_addr_o));
    }
    if ((0x20000000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xdfffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x20000000U & vlSelf->i2c_addr_o));
    }
    if ((0x40000000U & (vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0xbfffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x40000000U & vlSelf->i2c_addr_o));
    }
    if (((vlSelf->i2c_addr_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o 
            = ((0x7fffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o) 
               | (0x80000000U & vlSelf->i2c_addr_o));
    }
    if ((1U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfffffffeU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (1U & vlSelf->i2c_wdata_o));
    }
    if ((2U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfffffffdU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (2U & vlSelf->i2c_wdata_o));
    }
    if ((4U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfffffffbU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (4U & vlSelf->i2c_wdata_o));
    }
    if ((8U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfffffff7U & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (8U & vlSelf->i2c_wdata_o));
    }
    if ((0x10U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xffffffefU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x10U & vlSelf->i2c_wdata_o));
    }
    if ((0x20U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xffffffdfU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x20U & vlSelf->i2c_wdata_o));
    }
    if ((0x40U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xffffffbfU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x40U & vlSelf->i2c_wdata_o));
    }
    if ((0x80U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xffffff7fU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x80U & vlSelf->i2c_wdata_o));
    }
    if ((0x100U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfffffeffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x100U & vlSelf->i2c_wdata_o));
    }
    if ((0x200U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfffffdffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x200U & vlSelf->i2c_wdata_o));
    }
    if ((0x400U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfffffbffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x400U & vlSelf->i2c_wdata_o));
    }
    if ((0x800U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfffff7ffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x800U & vlSelf->i2c_wdata_o));
    }
    if ((0x1000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xffffefffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x1000U & vlSelf->i2c_wdata_o));
    }
    if ((0x2000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xffffdfffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x2000U & vlSelf->i2c_wdata_o));
    }
    if ((0x4000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xffffbfffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x4000U & vlSelf->i2c_wdata_o));
    }
    if ((0x8000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xffff7fffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x8000U & vlSelf->i2c_wdata_o));
    }
    if ((0x10000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfffeffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x10000U & vlSelf->i2c_wdata_o));
    }
    if ((0x20000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfffdffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x20000U & vlSelf->i2c_wdata_o));
    }
    if ((0x40000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfffbffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x40000U & vlSelf->i2c_wdata_o));
    }
    if ((0x80000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfff7ffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x80000U & vlSelf->i2c_wdata_o));
    }
    if ((0x100000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xffefffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x100000U & vlSelf->i2c_wdata_o));
    }
    if ((0x200000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xffdfffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x200000U & vlSelf->i2c_wdata_o));
    }
    if ((0x400000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xffbfffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x400000U & vlSelf->i2c_wdata_o));
    }
    if ((0x800000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xff7fffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x800000U & vlSelf->i2c_wdata_o));
    }
    if ((0x1000000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfeffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x1000000U & vlSelf->i2c_wdata_o));
    }
    if ((0x2000000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfdffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x2000000U & vlSelf->i2c_wdata_o));
    }
    if ((0x4000000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xfbffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x4000000U & vlSelf->i2c_wdata_o));
    }
    if ((0x8000000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xf7ffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x8000000U & vlSelf->i2c_wdata_o));
    }
    if ((0x10000000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xefffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x10000000U & vlSelf->i2c_wdata_o));
    }
    if ((0x20000000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xdfffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x20000000U & vlSelf->i2c_wdata_o));
    }
    if ((0x40000000U & (vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0xbfffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x40000000U & vlSelf->i2c_wdata_o));
    }
    if (((vlSelf->i2c_wdata_o ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o 
            = ((0x7fffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o) 
               | (0x80000000U & vlSelf->i2c_wdata_o));
    }
}

VL_INLINE_OPT void Vi2c_wb_wrapper___024root___sequent__TOP__0(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___sequent__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[190]);
    ++(vlSymsp->__Vcoverage[197]);
    ++(vlSymsp->__Vcoverage[319]);
    ++(vlSymsp->__Vcoverage[355]);
    if ((1U & (~ (vlSelf->i2c_addr_o >> 2U)))) {
        if ((1U & (~ (vlSelf->i2c_addr_o >> 1U)))) {
            if ((1U & vlSelf->i2c_addr_o)) {
                ++(vlSymsp->__Vcoverage[192]);
            }
        }
        if ((2U & vlSelf->i2c_addr_o)) {
            if ((1U & vlSelf->i2c_addr_o)) {
                ++(vlSymsp->__Vcoverage[194]);
            }
        }
    }
    if ((4U & vlSelf->i2c_addr_o)) {
        if ((1U & (~ (vlSelf->i2c_addr_o >> 1U)))) {
            if ((1U & (~ vlSelf->i2c_addr_o))) {
                ++(vlSymsp->__Vcoverage[195]);
            }
            if ((1U & vlSelf->i2c_addr_o)) {
                ++(vlSymsp->__Vcoverage[196]);
            }
        }
    }
    if ((1U & (~ (vlSelf->i2c_addr_o >> 2U)))) {
        if ((2U & vlSelf->i2c_addr_o)) {
            if ((1U & (~ vlSelf->i2c_addr_o))) {
                ++(vlSymsp->__Vcoverage[193]);
            }
        }
    }
    if ((4U & vlSelf->i2c_addr_o)) {
        if ((2U & vlSelf->i2c_addr_o)) {
            ++(vlSymsp->__Vcoverage[196]);
        }
    }
    if ((1U & (~ (vlSelf->i2c_addr_o >> 2U)))) {
        if ((1U & (~ (vlSelf->i2c_addr_o >> 1U)))) {
            if ((1U & (~ vlSelf->i2c_addr_o))) {
                ++(vlSymsp->__Vcoverage[191]);
            }
        }
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL) 
         & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL)))) {
        ++(vlSymsp->__Vcoverage[353]);
    }
    if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL) 
                  & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL)))))) {
        ++(vlSymsp->__Vcoverage[354]);
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen 
        = vlSelf->scl_padoen_o;
    vlSelf->i2c_wb_wrapper__DOT__wb_ack_o = ((IData)(vlSelf->i2c_req_o) 
                                             & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__wb_ack_o)));
    vlSelf->i2c_wb_wrapper__DOT__wb_dat_o = (0xffU 
                                             & ((4U 
                                                 & vlSelf->i2c_addr_o)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->i2c_addr_o)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & vlSelf->i2c_addr_o)
                                                   ? 0U
                                                   : (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr)))
                                                 : 
                                                ((2U 
                                                  & vlSelf->i2c_addr_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->i2c_addr_o)
                                                   ? (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr)
                                                   : (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->i2c_addr_o)
                                                   ? 
                                                  ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                                                   >> 8U)
                                                   : (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)))));
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dscl_oen))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dscl_oen 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__wb_ack_o) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_ack_o))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_ack_o 
            = vlSelf->i2c_wb_wrapper__DOT__wb_ack_o;
    }
    vlSelf->i2c_rvalid_i = vlSelf->i2c_wb_wrapper__DOT__wb_ack_o;
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o 
            = ((0xfeU & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)) 
               | (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o)));
    }
    if ((2U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o 
            = ((0xfdU & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)) 
               | (2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o)));
    }
    if ((4U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o 
            = ((0xfbU & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)) 
               | (4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o)));
    }
    if ((8U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o 
            = ((0xf7U & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)) 
               | (8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o)));
    }
    if ((0x10U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o 
            = ((0xefU & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)) 
               | (0x10U & (IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o)));
    }
    if ((0x20U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o 
            = ((0xdfU & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)) 
               | (0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o)));
    }
    if ((0x40U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o 
            = ((0xbfU & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)) 
               | (0x40U & (IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o)));
    }
    if ((0x80U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o 
            = ((0x7fU & (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o)) 
               | (0x80U & (IData)(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o)));
    }
    vlSelf->i2c_rdata_i = vlSelf->i2c_wb_wrapper__DOT__wb_dat_o;
    if (((IData)(vlSelf->i2c_rvalid_i) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rvalid_i))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rvalid_i 
            = vlSelf->i2c_rvalid_i;
    }
    if ((1U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfffffffeU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (1U & vlSelf->i2c_rdata_i));
    }
    if ((2U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfffffffdU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (2U & vlSelf->i2c_rdata_i));
    }
    if ((4U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfffffffbU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (4U & vlSelf->i2c_rdata_i));
    }
    if ((8U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfffffff7U & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (8U & vlSelf->i2c_rdata_i));
    }
    if ((0x10U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xffffffefU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x10U & vlSelf->i2c_rdata_i));
    }
    if ((0x20U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xffffffdfU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x20U & vlSelf->i2c_rdata_i));
    }
    if ((0x40U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xffffffbfU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x40U & vlSelf->i2c_rdata_i));
    }
    if ((0x80U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xffffff7fU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x80U & vlSelf->i2c_rdata_i));
    }
    if ((0x100U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfffffeffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x100U & vlSelf->i2c_rdata_i));
    }
    if ((0x200U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfffffdffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x200U & vlSelf->i2c_rdata_i));
    }
    if ((0x400U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfffffbffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x400U & vlSelf->i2c_rdata_i));
    }
    if ((0x800U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfffff7ffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x800U & vlSelf->i2c_rdata_i));
    }
    if ((0x1000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xffffefffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x1000U & vlSelf->i2c_rdata_i));
    }
    if ((0x2000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xffffdfffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x2000U & vlSelf->i2c_rdata_i));
    }
    if ((0x4000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xffffbfffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x4000U & vlSelf->i2c_rdata_i));
    }
    if ((0x8000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xffff7fffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x8000U & vlSelf->i2c_rdata_i));
    }
    if ((0x10000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfffeffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x10000U & vlSelf->i2c_rdata_i));
    }
    if ((0x20000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfffdffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x20000U & vlSelf->i2c_rdata_i));
    }
    if ((0x40000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfffbffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x40000U & vlSelf->i2c_rdata_i));
    }
    if ((0x80000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfff7ffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x80000U & vlSelf->i2c_rdata_i));
    }
    if ((0x100000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xffefffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x100000U & vlSelf->i2c_rdata_i));
    }
    if ((0x200000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xffdfffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x200000U & vlSelf->i2c_rdata_i));
    }
    if ((0x400000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xffbfffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x400000U & vlSelf->i2c_rdata_i));
    }
    if ((0x800000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xff7fffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x800000U & vlSelf->i2c_rdata_i));
    }
    if ((0x1000000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfeffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x1000000U & vlSelf->i2c_rdata_i));
    }
    if ((0x2000000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfdffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x2000000U & vlSelf->i2c_rdata_i));
    }
    if ((0x4000000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xfbffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x4000000U & vlSelf->i2c_rdata_i));
    }
    if ((0x8000000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xf7ffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x8000000U & vlSelf->i2c_rdata_i));
    }
    if ((0x10000000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xefffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x10000000U & vlSelf->i2c_rdata_i));
    }
    if ((0x20000000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xdfffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x20000000U & vlSelf->i2c_rdata_i));
    }
    if ((0x40000000U & (vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0xbfffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x40000000U & vlSelf->i2c_rdata_i));
    }
    if (((vlSelf->i2c_rdata_i ^ vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i 
            = ((0x7fffffffU & vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i) 
               | (0x80000000U & vlSelf->i2c_rdata_i));
    }
}

VL_INLINE_OPT void Vi2c_wb_wrapper___024root___sequent__TOP__1(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr;
    CData/*7:0*/ __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr;
    CData/*2:0*/ __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt;
    CData/*3:0*/ __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd;
    CData/*0:0*/ __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd;
    CData/*4:0*/ __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state;
    SData/*15:0*/ __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
    IData/*16:0*/ __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state;
    CData/*0:0*/ __Vdly__scl_padoen_o;
    CData/*0:0*/ __Vdly__sda_padoen_o;
    CData/*0:0*/ __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    // Body
    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk 
        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    __Vdly__sda_padoen_o = vlSelf->sda_padoen_o;
    __Vdly__scl_padoen_o = vlSelf->scl_padoen_o;
    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state;
    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd 
        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd;
    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd 
        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd;
    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state 
        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state;
    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr 
        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr;
    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt 
        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt;
    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr 
        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr;
    ++(vlSymsp->__Vcoverage[207]);
    ++(vlSymsp->__Vcoverage[216]);
    ++(vlSymsp->__Vcoverage[226]);
    ++(vlSymsp->__Vcoverage[230]);
    ++(vlSymsp->__Vcoverage[250]);
    ++(vlSymsp->__Vcoverage[256]);
    ++(vlSymsp->__Vcoverage[295]);
    ++(vlSymsp->__Vcoverage[326]);
    ++(vlSymsp->__Vcoverage[334]);
    ++(vlSymsp->__Vcoverage[338]);
    ++(vlSymsp->__Vcoverage[342]);
    ++(vlSymsp->__Vcoverage[348]);
    ++(vlSymsp->__Vcoverage[352]);
    ++(vlSymsp->__Vcoverage[401]);
    if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i)))) {
        ++(vlSymsp->__Vcoverage[206]);
        ++(vlSymsp->__Vcoverage[215]);
        ++(vlSymsp->__Vcoverage[225]);
        ++(vlSymsp->__Vcoverage[229]);
        ++(vlSymsp->__Vcoverage[249]);
        ++(vlSymsp->__Vcoverage[255]);
        ++(vlSymsp->__Vcoverage[294]);
        ++(vlSymsp->__Vcoverage[325]);
        ++(vlSymsp->__Vcoverage[333]);
        ++(vlSymsp->__Vcoverage[337]);
        ++(vlSymsp->__Vcoverage[341]);
        ++(vlSymsp->__Vcoverage[347]);
        ++(vlSymsp->__Vcoverage[351]);
        ++(vlSymsp->__Vcoverage[400]);
    }
    if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i) {
        if (vlSelf->rst_i) {
            ++(vlSymsp->__Vcoverage[205]);
            ++(vlSymsp->__Vcoverage[214]);
        }
        if ((1U & (~ (IData)(vlSelf->rst_i)))) {
            ++(vlSymsp->__Vcoverage[224]);
        }
        if (vlSelf->rst_i) {
            ++(vlSymsp->__Vcoverage[223]);
            ++(vlSymsp->__Vcoverage[227]);
        }
        if ((1U & (~ (IData)(vlSelf->rst_i)))) {
            ++(vlSymsp->__Vcoverage[228]);
        }
        if (vlSelf->rst_i) {
            ++(vlSymsp->__Vcoverage[248]);
            ++(vlSymsp->__Vcoverage[254]);
            ++(vlSymsp->__Vcoverage[324]);
            ++(vlSymsp->__Vcoverage[331]);
        }
        if ((1U & (~ (IData)(vlSelf->rst_i)))) {
            ++(vlSymsp->__Vcoverage[332]);
        }
        if (vlSelf->rst_i) {
            ++(vlSymsp->__Vcoverage[335]);
        }
        if ((1U & (~ (IData)(vlSelf->rst_i)))) {
            ++(vlSymsp->__Vcoverage[336]);
        }
        if (vlSelf->rst_i) {
            ++(vlSymsp->__Vcoverage[339]);
        }
        if ((1U & (~ (IData)(vlSelf->rst_i)))) {
            ++(vlSymsp->__Vcoverage[340]);
        }
        if (vlSelf->rst_i) {
            ++(vlSymsp->__Vcoverage[346]);
            ++(vlSymsp->__Vcoverage[349]);
        }
        if ((1U & (~ (IData)(vlSelf->rst_i)))) {
            ++(vlSymsp->__Vcoverage[350]);
            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc) {
                ++(vlSymsp->__Vcoverage[203]);
            }
            if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc)))) {
                ++(vlSymsp->__Vcoverage[204]);
                ++(vlSymsp->__Vcoverage[213]);
            }
            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc) {
                ++(vlSymsp->__Vcoverage[212]);
                if ((1U & (~ (vlSelf->i2c_addr_o >> 2U)))) {
                    if ((2U & vlSelf->i2c_addr_o)) {
                        if ((1U & (~ vlSelf->i2c_addr_o))) {
                            ++(vlSymsp->__Vcoverage[200]);
                        }
                    }
                }
                if ((4U & vlSelf->i2c_addr_o)) {
                    ++(vlSymsp->__Vcoverage[202]);
                }
                if ((1U & (~ (vlSelf->i2c_addr_o >> 2U)))) {
                    if ((2U & vlSelf->i2c_addr_o)) {
                        if ((1U & vlSelf->i2c_addr_o)) {
                            ++(vlSymsp->__Vcoverage[201]);
                        }
                    }
                    if ((1U & (~ (vlSelf->i2c_addr_o 
                                  >> 1U)))) {
                        if ((1U & vlSelf->i2c_addr_o)) {
                            ++(vlSymsp->__Vcoverage[199]);
                        }
                        if ((1U & (~ vlSelf->i2c_addr_o))) {
                            ++(vlSymsp->__Vcoverage[198]);
                        }
                    }
                }
                if ((1U & (~ (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                               >> 7U) & (4U == (7U 
                                                & vlSelf->i2c_addr_o)))))) {
                    ++(vlSymsp->__Vcoverage[209]);
                }
                if ((((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                      >> 7U) & (4U == (7U & vlSelf->i2c_addr_o)))) {
                    ++(vlSymsp->__Vcoverage[208]);
                }
            }
            if ((1U & ((~ (IData)((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)))) 
                       | (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                             >> 7U))))) {
                ++(vlSymsp->__Vcoverage[322]);
            }
            if ((1U & (~ ((~ (IData)((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)))) 
                          | (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                                >> 7U)))))) {
                ++(vlSymsp->__Vcoverage[323]);
            }
            if ((1U & ((~ (IData)((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)))) 
                       | (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                             >> 7U))))) {
                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait) {
                    ++(vlSymsp->__Vcoverage[321]);
                }
                if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait)))) {
                    ++(vlSymsp->__Vcoverage[320]);
                }
            }
            if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en)))) {
                ++(vlSymsp->__Vcoverage[345]);
            }
            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en) {
                ++(vlSymsp->__Vcoverage[344]);
            }
        }
        if (((IData)(vlSelf->rst_i) | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al))) {
            ++(vlSymsp->__Vcoverage[292]);
        }
        if ((1U & (~ ((IData)(vlSelf->rst_i) | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al))))) {
            ++(vlSymsp->__Vcoverage[293]);
            ++(vlSymsp->__Vcoverage[399]);
        }
        if (((IData)(vlSelf->rst_i) | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al))) {
            ++(vlSymsp->__Vcoverage[398]);
        }
        if ((1U & (~ ((IData)(vlSelf->rst_i) | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al))))) {
            if ((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if ((1U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                    ++(vlSymsp->__Vcoverage[273]);
                }
                if ((1U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                    if ((4U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                        if ((2U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                            if ((8U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                                if ((0x10U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                                    ++(vlSymsp->__Vcoverage[291]);
                                }
                            }
                            if ((8U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                                ++(vlSymsp->__Vcoverage[288]);
                            }
                        }
                    }
                }
            }
            if ((0U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                ++(vlSymsp->__Vcoverage[268]);
            }
            if ((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if ((1U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                    if ((4U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                        ++(vlSymsp->__Vcoverage[278]);
                    }
                    if ((4U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                        if ((2U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                            ++(vlSymsp->__Vcoverage[283]);
                        }
                    }
                }
            }
            if ((0U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go)))) {
                    ++(vlSymsp->__Vcoverage[267]);
                }
                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go) {
                    ++(vlSymsp->__Vcoverage[266]);
                    if ((0x80U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))) {
                        ++(vlSymsp->__Vcoverage[265]);
                    }
                    if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                  >> 7U)))) {
                        if ((0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))) {
                            ++(vlSymsp->__Vcoverage[264]);
                        }
                        if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                          >> 4U)))) {
                                ++(vlSymsp->__Vcoverage[263]);
                            }
                            if ((0x10U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))) {
                                ++(vlSymsp->__Vcoverage[262]);
                            }
                        }
                    }
                }
            }
            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en) {
                ++(vlSymsp->__Vcoverage[396]);
            }
            if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en)))) {
                ++(vlSymsp->__Vcoverage[397]);
            }
            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en) {
                if (((((((((0U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                           | (1U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                          | (2U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                         | (4U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                        | (8U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                       | (0x10U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                      | (0x20U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                     | (0x40U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                    if ((0U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        if ((1U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            if ((2U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                ++(vlSymsp->__Vcoverage[380]);
                            }
                            if ((2U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                if ((4U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                    if ((8U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                        if ((0x10U 
                                             != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                            if ((0x20U 
                                                 != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                                ++(vlSymsp->__Vcoverage[385]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((((((((0U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                                    | (1U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                   | (2U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                  | (4U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                 | (8U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                | (0x10U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                               | (0x20U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                              | (0x40U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))))) {
                    if ((1U & (~ ((((((((0x80U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                                        | (0x100U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                       | (0x200U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                      | (0x400U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                     | (0x800U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                    | (0x1000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                   | (0x2000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                  | (0x4000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))))) {
                        if ((0x8000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            ++(vlSymsp->__Vcoverage[394]);
                        }
                    }
                }
                if (((((((((0U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                           | (1U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                          | (2U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                         | (4U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                        | (8U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                       | (0x10U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                      | (0x20U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                     | (0x40U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                    if ((0U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        if ((1U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            if ((2U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                if ((4U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                    if ((8U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                        if ((0x10U 
                                             != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                            if ((0x20U 
                                                 == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                                ++(vlSymsp->__Vcoverage[384]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            ++(vlSymsp->__Vcoverage[379]);
                        }
                    }
                }
                if ((1U & (~ ((((((((0U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                                    | (1U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                   | (2U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                  | (4U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                 | (8U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                | (0x10U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                               | (0x20U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                              | (0x40U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))))) {
                    if (((((((((0x80U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                               | (0x100U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                              | (0x200U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                             | (0x400U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                            | (0x800U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                           | (0x1000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                          | (0x2000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                         | (0x4000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                        if ((0x80U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            if ((0x100U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                ++(vlSymsp->__Vcoverage[387]);
                            }
                        }
                    }
                }
                if (((((((((0U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                           | (1U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                          | (2U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                         | (4U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                        | (8U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                       | (0x10U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                      | (0x20U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                     | (0x40U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                    if ((0U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        ++(vlSymsp->__Vcoverage[378]);
                    }
                    if ((0U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        if ((1U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            if ((2U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                if ((4U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                    if ((8U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                        if ((0x10U 
                                             == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                            ++(vlSymsp->__Vcoverage[383]);
                                        }
                                    }
                                }
                                if ((4U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                    ++(vlSymsp->__Vcoverage[381]);
                                }
                                if ((4U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                    if ((8U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                        ++(vlSymsp->__Vcoverage[382]);
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((((((((0U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                                    | (1U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                   | (2U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                  | (4U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                 | (8U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                | (0x10U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                               | (0x20U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                              | (0x40U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))))) {
                    if (((((((((0x80U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                               | (0x100U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                              | (0x200U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                             | (0x400U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                            | (0x800U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                           | (0x1000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                          | (0x2000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                         | (0x4000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                        if ((0x80U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            ++(vlSymsp->__Vcoverage[386]);
                        }
                        if ((0x80U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            if ((0x100U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                if ((0x200U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                    ++(vlSymsp->__Vcoverage[388]);
                                }
                                if ((0x200U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                    if ((0x400U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                        ++(vlSymsp->__Vcoverage[389]);
                                    }
                                    if ((0x400U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                        if ((0x800U 
                                             == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                            ++(vlSymsp->__Vcoverage[390]);
                                        }
                                        if ((0x800U 
                                             != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                            if ((0x1000U 
                                                 == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                                ++(vlSymsp->__Vcoverage[391]);
                                            }
                                            if ((0x1000U 
                                                 != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                                if (
                                                    (0x2000U 
                                                     == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                                    ++(vlSymsp->__Vcoverage[392]);
                                                }
                                                if (
                                                    (0x2000U 
                                                     != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                                    ++(vlSymsp->__Vcoverage[393]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((((((((0x80U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                                        | (0x100U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                       | (0x200U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                      | (0x400U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                     | (0x800U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                    | (0x1000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                   | (0x2000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                  | (0x4000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))))) {
                        if ((0x8000U != vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                            if ((0x10000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                                ++(vlSymsp->__Vcoverage[395]);
                            }
                        }
                    }
                }
                if (((((((((0U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                           | (1U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                          | (2U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                         | (4U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                        | (8U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                       | (0x10U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                      | (0x20U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                     | (0x40U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                    if ((0U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                                        ++(vlSymsp->__Vcoverage[373]);
                                    }
                                }
                                if ((2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                                    if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd)))) {
                                        ++(vlSymsp->__Vcoverage[374]);
                                    }
                                }
                            }
                            if ((4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                                if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd)))) {
                                        ++(vlSymsp->__Vcoverage[375]);
                                    }
                                    if ((1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                                        ++(vlSymsp->__Vcoverage[377]);
                                    }
                                }
                                if ((2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                                    ++(vlSymsp->__Vcoverage[377]);
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd)))) {
                                        ++(vlSymsp->__Vcoverage[377]);
                                    }
                                }
                            }
                        }
                        if ((8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                            if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                                    ++(vlSymsp->__Vcoverage[377]);
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                                    if ((1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                                        ++(vlSymsp->__Vcoverage[377]);
                                    }
                                }
                            }
                        }
                        if ((8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                            if ((4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                                ++(vlSymsp->__Vcoverage[377]);
                            }
                            if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))) {
                                        ++(vlSymsp->__Vcoverage[377]);
                                    }
                                    if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd)))) {
                                        ++(vlSymsp->__Vcoverage[376]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if ((1U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                    if ((4U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                        if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                            ++(vlSymsp->__Vcoverage[276]);
                        }
                    }
                }
                if ((1U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                    if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack)))) {
                        ++(vlSymsp->__Vcoverage[272]);
                    }
                }
                if ((1U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                    if ((4U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                        if ((2U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                            if ((8U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                                    ++(vlSymsp->__Vcoverage[286]);
                                }
                            }
                        }
                        if ((2U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                                ++(vlSymsp->__Vcoverage[281]);
                            }
                        }
                    }
                }
                if ((1U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                    if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                        ++(vlSymsp->__Vcoverage[271]);
                    }
                }
                if ((1U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                    if ((4U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                        if ((2U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                            if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack)))) {
                                ++(vlSymsp->__Vcoverage[282]);
                            }
                        }
                    }
                    if ((4U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                        if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack)))) {
                            ++(vlSymsp->__Vcoverage[277]);
                        }
                    }
                    if ((4U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                        if ((2U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                            if ((8U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                                if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack)))) {
                                    ++(vlSymsp->__Vcoverage[287]);
                                }
                            }
                            if ((8U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                                if ((0x10U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                                    if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                                        ++(vlSymsp->__Vcoverage[289]);
                                    }
                                    if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack)))) {
                                        ++(vlSymsp->__Vcoverage[290]);
                                    }
                                }
                            }
                        }
                        if ((2U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                                if ((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt))) {
                                    ++(vlSymsp->__Vcoverage[280]);
                                }
                            }
                        }
                    }
                    if ((4U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                        if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                            if ((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt))) {
                                ++(vlSymsp->__Vcoverage[275]);
                            }
                            if ((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt)))))) {
                                ++(vlSymsp->__Vcoverage[274]);
                            }
                        }
                    }
                    if ((4U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                        if ((2U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                                if ((1U & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt)))))) {
                                    ++(vlSymsp->__Vcoverage[279]);
                                }
                            }
                        }
                    }
                }
                if ((1U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                    if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                        if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                      >> 5U)))) {
                            ++(vlSymsp->__Vcoverage[270]);
                        }
                        if ((0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))) {
                            ++(vlSymsp->__Vcoverage[269]);
                        }
                    }
                }
                if ((1U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                    if ((4U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                        if ((2U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                            if ((8U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                                    if ((0x40U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))) {
                                        ++(vlSymsp->__Vcoverage[284]);
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                                  >> 6U)))) {
                                        ++(vlSymsp->__Vcoverage[285]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->rst_i)))) {
            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld) {
                ++(vlSymsp->__Vcoverage[247]);
                ++(vlSymsp->__Vcoverage[253]);
            }
            if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc)))) {
                if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done) 
                     | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al))) {
                    ++(vlSymsp->__Vcoverage[210]);
                }
                if ((1U & (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done) 
                              | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al))))) {
                    ++(vlSymsp->__Vcoverage[211]);
                }
            }
            if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld)))) {
                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift) {
                    ++(vlSymsp->__Vcoverage[245]);
                }
                if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift)))) {
                    ++(vlSymsp->__Vcoverage[246]);
                }
                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift) {
                    ++(vlSymsp->__Vcoverage[251]);
                }
                if ((1U & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift)))) {
                    ++(vlSymsp->__Vcoverage[252]);
                }
            }
        }
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip 
            = ((~ (IData)(vlSelf->rst_i)) & (IData)(
                                                    (0U 
                                                     != 
                                                     (0x30U 
                                                      & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr)))));
        vlSelf->wb_inta_o = ((~ (IData)(vlSelf->rst_i)) 
                             & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag) 
                                & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                                   >> 6U)));
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy 
            = ((~ (IData)(vlSelf->rst_i)) & (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition) 
                                              | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy)) 
                                             & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition))));
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al 
            = ((~ (IData)(vlSelf->rst_i)) & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al) 
                                             | ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al) 
                                                & (~ 
                                                   ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                                    >> 7U)))));
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack 
            = ((~ (IData)(vlSelf->rst_i)) & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack));
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag 
            = ((~ (IData)(vlSelf->rst_i)) & ((((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done) 
                                               | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al)) 
                                              | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag)) 
                                             & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))));
        if (vlSelf->rst_i) {
            __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr = 0U;
            __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt = 0U;
            __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr = 0U;
        } else {
            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc) {
                if ((((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                      >> 7U) & (4U == (7U & vlSelf->i2c_addr_o)))) {
                    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr 
                        = (0xffU & vlSelf->i2c_wdata_o);
                }
            } else {
                if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done) 
                     | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al))) {
                    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr 
                        = (0xfU & (IData)(__Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr));
                }
                __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr 
                    = (0xf8U & (IData)(__Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr));
            }
            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld) {
                __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt = 7U;
                __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr 
                    = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr;
            } else if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift) {
                __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt 
                    = (7U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt) 
                             - (IData)(1U)));
                __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr 
                    = ((0xfeU & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr) 
                                 << 1U)) | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_rxd));
            }
        }
    } else {
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip = 0U;
        vlSelf->wb_inta_o = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag = 0U;
        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr = 0U;
        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt = 0U;
        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr = 0U;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__tip))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__tip 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip;
    }
    if (((IData)(vlSelf->wb_inta_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_inta_o))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_inta_o 
            = vlSelf->wb_inta_o;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__i2c_busy))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__i2c_busy 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy;
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition 
        = ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i) 
           & ((~ (IData)(vlSelf->rst_i)) & (((~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA)) 
                                             & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA)) 
                                            & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL))));
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__al))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__al 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxack))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxack 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irq_flag))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irq_flag 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag;
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr 
        = ((((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack) 
             << 7U) | (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy) 
                        << 6U) | ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al) 
                                  << 5U))) | (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip) 
                                               << 1U) 
                                              | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag)));
    if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i) {
        if (vlSelf->rst_i) {
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr = 0U;
        } else if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc) {
            if ((1U & (~ (vlSelf->i2c_addr_o >> 2U)))) {
                if ((2U & vlSelf->i2c_addr_o)) {
                    if ((1U & vlSelf->i2c_addr_o)) {
                        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr 
                            = (0xffU & vlSelf->i2c_wdata_o);
                    }
                }
            }
        }
        if (((IData)(vlSelf->rst_i) | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al))) {
            __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 0U;
            __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd = 0U;
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift = 0U;
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld = 0U;
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done = 0U;
            __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 0U;
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack = 0U;
        } else {
            __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd 
                = (1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr) 
                         >> 7U));
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift = 0U;
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld = 0U;
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done = 0U;
            if ((0U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go) {
                    if ((0x80U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 1U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 1U;
                    } else if ((0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 2U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 8U;
                    } else if ((0x10U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 4U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 4U;
                    } else {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 0x10U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 2U;
                        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done = 1U;
                    }
                    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld = 1U;
                }
            } else if ((1U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                    if ((0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 2U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 8U;
                    } else {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 4U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 4U;
                    }
                    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld = 1U;
                }
            } else if ((4U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                    if ((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt))) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 4U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 4U;
                        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift = 1U;
                    } else {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 8U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 8U;
                    }
                }
            } else if ((2U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                    if ((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt))) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 2U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 8U;
                    } else {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 8U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 4U;
                    }
                    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift = 1U;
                    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd 
                        = (1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                 >> 3U));
                }
            } else if ((8U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                    if ((0x40U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 0x10U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 2U;
                    } else {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 0U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 0U;
                        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done = 1U;
                    }
                    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack 
                        = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_rxd;
                    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd = 1U;
                } else {
                    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd 
                        = (1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                 >> 3U));
                }
            } else if ((0x10U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state))) {
                if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) {
                    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 0U;
                    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 0U;
                    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done = 1U;
                }
            }
        }
    } else {
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr = 0U;
        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = 0U;
        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done = 0U;
        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack = 0U;
    }
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr 
            = ((0xfeU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)) 
               | (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr)));
    }
    if ((2U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr 
            = ((0xfdU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)) 
               | (2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr)));
    }
    if ((4U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr 
            = ((0xfbU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)) 
               | (4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr)));
    }
    if ((8U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr 
            = ((0xf7U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)) 
               | (8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr)));
    }
    if ((0x10U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr 
            = ((0xefU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)) 
               | (0x10U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr)));
    }
    if ((0x20U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr 
            = ((0xdfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)) 
               | (0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr)));
    }
    if ((0x40U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr 
            = ((0xbfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)) 
               | (0x40U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr)));
    }
    if ((0x80U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr 
            = ((0x7fU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr)) 
               | (0x80U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr)));
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt 
        = __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt;
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state 
        = __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state;
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr 
        = __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr;
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr 
        = __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr;
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sta_condition))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sta_condition 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition;
    }
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr 
            = ((0xfeU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)) 
               | (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr)));
    }
    if ((2U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr 
            = ((0xfdU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)) 
               | (2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr)));
    }
    if ((4U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr 
            = ((0xfbU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)) 
               | (4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr)));
    }
    if ((8U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr 
            = ((0xf7U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)) 
               | (8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr)));
    }
    if ((0x10U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr 
            = ((0xefU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)) 
               | (0x10U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr)));
    }
    if ((0x20U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr 
            = ((0xdfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)) 
               | (0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr)));
    }
    if ((0x40U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr 
            = ((0xbfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)) 
               | (0x40U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr)));
    }
    if ((0x80U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr 
            = ((0x7fU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr)) 
               | (0x80U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr)));
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__shift))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__shift 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__ld 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irxack))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irxack 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__done))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__done 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done;
    }
    if ((1U & ((~ (IData)((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt)))) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__cnt_done)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__cnt_done 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt)))));
    }
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__dcnt)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__dcnt 
            = ((6U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__dcnt)) 
               | (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt)));
    }
    if ((2U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__dcnt)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__dcnt 
            = ((5U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__dcnt)) 
               | (2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt)));
    }
    if ((4U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__dcnt)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__dcnt 
            = ((3U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__dcnt)) 
               | (4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt)));
    }
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state 
            = ((0x1eU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state)) 
               | (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state)));
    }
    if ((2U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state 
            = ((0x1dU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state)) 
               | (2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state)));
    }
    if ((4U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state 
            = ((0x1bU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state)) 
               | (4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state)));
    }
    if ((8U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state 
            = ((0x17U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state)) 
               | (8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state)));
    }
    if ((0x10U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state 
            = ((0xfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state)) 
               | (0x10U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state)));
    }
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr 
            = ((0xfeU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)) 
               | (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr)));
    }
    if ((2U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr 
            = ((0xfdU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)) 
               | (2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr)));
    }
    if ((4U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr 
            = ((0xfbU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)) 
               | (4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr)));
    }
    if ((8U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr 
            = ((0xf7U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)) 
               | (8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr)));
    }
    if ((0x10U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr 
            = ((0xefU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)) 
               | (0x10U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr)));
    }
    if ((0x20U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr 
            = ((0xdfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)) 
               | (0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr)));
    }
    if ((0x40U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr 
            = ((0xbfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)) 
               | (0x40U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr)));
    }
    if ((0x80U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr 
            = ((0x7fU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr)) 
               | (0x80U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr)));
    }
    if ((IData)((((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                  >> 7U) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sta)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sta 
            = (1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                     >> 7U));
    }
    if ((1U & (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                >> 6U) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sto)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sto 
            = (1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                     >> 6U));
    }
    if ((1U & (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                >> 5U) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rd)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rd 
            = (1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                     >> 5U));
    }
    if ((1U & (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                >> 4U) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__wr)))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__wr 
            = (1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                     >> 4U));
    }
    if ((1U & (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                >> 3U) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ack)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ack 
            = (1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                     >> 3U));
    }
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__iack)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__iack 
            = (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr));
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go 
        = ((~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done)) 
           & (0U != (0x70U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))));
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr 
            = ((0xfeU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)) 
               | (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr)));
    }
    if ((2U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr 
            = ((0xfdU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)) 
               | (2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr)));
    }
    if ((4U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr 
            = ((0xfbU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)) 
               | (4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr)));
    }
    if ((8U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr 
            = ((0xf7U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)) 
               | (8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr)));
    }
    if ((0x10U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr 
            = ((0xefU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)) 
               | (0x10U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr)));
    }
    if ((0x20U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr 
            = ((0xdfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)) 
               | (0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr)));
    }
    if ((0x40U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr 
            = ((0xbfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)) 
               | (0x40U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr)));
    }
    if ((0x80U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr 
            = ((0x7fU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr)) 
               | (0x80U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr)));
    }
    if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i) {
        if (((IData)(vlSelf->rst_i) | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al))) {
            __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack = 0U;
            __Vdly__scl_padoen_o = 1U;
            __Vdly__sda_padoen_o = 1U;
            __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
        } else {
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack = 0U;
            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en) {
                if (((((((((0U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                           | (1U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                          | (2U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                         | (4U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                        | (8U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                       | (0x10U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                      | (0x20U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                     | (0x40U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                    if ((0U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__scl_padoen_o = vlSelf->scl_padoen_o;
                        __Vdly__sda_padoen_o = vlSelf->sda_padoen_o;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                            = ((8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                ? ((4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                    ? 0U : ((2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                              ? 0U : 0x200U)))
                                : ((4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                    ? ((2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                                 ? 0U
                                                 : 0x2000U))
                                    : ((2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                        ? ((1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                            ? 0U : 0x20U)
                                        : ((1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd))
                                            ? 1U : 0U))));
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((1U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__scl_padoen_o = vlSelf->scl_padoen_o;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 2U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((2U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 4U;
                        __Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((4U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 8U;
                        __Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((8U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x10U;
                        __Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x10U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack = 1U;
                        __Vdly__scl_padoen_o = 0U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x20U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x40U;
                        __Vdly__scl_padoen_o = 0U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x80U;
                        __Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    }
                } else if (((((((((0x80U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state) 
                                  | (0x100U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                 | (0x200U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                                | (0x400U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                               | (0x800U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                              | (0x1000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                             | (0x2000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) 
                            | (0x4000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state))) {
                    if ((0x80U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x100U;
                        __Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 0U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x100U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack = 1U;
                        __Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x200U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x400U;
                        __Vdly__scl_padoen_o = 0U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x400U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x800U;
                        __Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x800U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x1000U;
                        __Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x1000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack = 1U;
                        __Vdly__scl_padoen_o = 0U;
                        __Vdly__sda_padoen_o = 1U;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else if ((0x2000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x4000U;
                        __Vdly__scl_padoen_o = 0U;
                        __Vdly__sda_padoen_o = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                    } else {
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x8000U;
                        __Vdly__scl_padoen_o = 1U;
                        __Vdly__sda_padoen_o = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd;
                        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 1U;
                    }
                } else if ((0x8000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0x10000U;
                    __Vdly__scl_padoen_o = 1U;
                    __Vdly__sda_padoen_o = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd;
                    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 1U;
                } else if ((0x10000U == vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state)) {
                    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
                    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack = 1U;
                    __Vdly__scl_padoen_o = 0U;
                    __Vdly__sda_padoen_o = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd;
                    __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
                }
            }
        }
    } else {
        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack = 0U;
        __Vdly__scl_padoen_o = 1U;
        __Vdly__sda_padoen_o = 1U;
        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = 0U;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__go))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__go 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go;
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd 
        = __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd;
    vlSelf->scl_padoen_o = __Vdly__scl_padoen_o;
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
        = __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state;
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_txd))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_txd 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_ack))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_ack 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack;
    }
    if (((IData)(vlSelf->scl_padoen_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_padoen_o))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_padoen_o 
            = vlSelf->scl_padoen_o;
    }
    if ((1U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
               ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1fffeU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (1U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((2U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
               ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1fffdU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (2U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((4U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
               ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1fffbU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (4U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((8U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
               ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1fff7U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (8U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x10U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                  ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1ffefU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x10U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x20U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                  ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1ffdfU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x20U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x40U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                  ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1ffbfU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x40U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x80U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                  ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1ff7fU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x80U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x100U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                   ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1feffU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x100U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x200U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                   ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1fdffU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x200U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x400U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                   ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1fbffU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x400U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x800U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                   ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1f7ffU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x800U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x1000U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                    ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1efffU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x1000U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x2000U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                    ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1dfffU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x2000U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x4000U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                    ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x1bfffU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x4000U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x8000U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                    ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0x17fffU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x8000U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    if ((0x10000U & (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state 
                     ^ vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state 
            = ((0xffffU & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state) 
               | (0x10000U & vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state));
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al 
        = ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i) 
           & ((~ (IData)(vlSelf->rst_i)) & ((((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk) 
                                              & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA))) 
                                             & (IData)(vlSelf->sda_padoen_o)) 
                                            | ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition) 
                                               & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop))))));
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk 
        = __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    vlSelf->sda_padoen_o = __Vdly__sda_padoen_o;
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sda_chk))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sda_chk 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    }
    if (((IData)(vlSelf->sda_padoen_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__sda_padoen_o))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__sda_padoen_o 
            = vlSelf->sda_padoen_o;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__i2c_al))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__i2c_al 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al;
    }
    if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i) {
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition 
            = ((~ (IData)(vlSelf->rst_i)) & (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA) 
                                              & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA))) 
                                             & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL)));
        if (vlSelf->rst_i) {
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop = 0U;
        } else if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en) {
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop 
                = (2U == (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd));
        }
    } else {
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop = 0U;
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd 
        = __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd;
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sto_condition))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sto_condition 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition;
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA 
        = (1U & ((~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i)) 
                 | ((IData)(vlSelf->rst_i) | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA))));
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cmd_stop))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cmd_stop 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop;
    }
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd)))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd 
            = ((0xeU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd)) 
               | (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd)));
    }
    if ((2U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd)))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd 
            = ((0xdU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd)) 
               | (2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd)));
    }
    if ((4U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd)))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd 
            = ((0xbU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd)) 
               | (4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd)));
    }
    if ((8U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd)))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd 
            = ((7U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd)) 
               | (8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd)));
    }
    if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i) {
        if (vlSelf->rst_i) {
            __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt = 0U;
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 1U;
        } else if ((1U & ((~ (IData)((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)))) 
                          | (~ ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                                >> 7U))))) {
            if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait) {
                __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
                    = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
                vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 0U;
            } else {
                __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
                    = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer;
                vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 1U;
            }
        } else {
            __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
                = (0xffffU & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                              - (IData)(1U)));
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 0U;
        }
    } else {
        __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = 1U;
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt 
        = __Vdly__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSDA))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSDA 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__clk_en))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__clk_en 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en;
    }
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xfffeU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((2U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xfffdU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((4U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xfffbU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((8U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xfff7U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xffefU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x10U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xffdfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xffbfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x40U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x80U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xff7fU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x80U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x100U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                   ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xfeffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x100U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x200U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                   ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xfdffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x200U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x400U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                   ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xfbffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x400U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x800U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                   ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xf7ffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x800U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x1000U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                    ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xefffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x1000U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x2000U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                    ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xdfffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x2000U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x4000U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                    ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0xbfffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x4000U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if ((0x8000U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt) 
                    ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt 
            = ((0x7fffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt)) 
               | (0x8000U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt)));
    }
    if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i) {
        if (vlSelf->rst_i) {
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr = 0U;
            vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer = 0xffffU;
        } else if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc) {
            if ((1U & (~ (vlSelf->i2c_addr_o >> 2U)))) {
                if ((2U & vlSelf->i2c_addr_o)) {
                    if ((1U & (~ vlSelf->i2c_addr_o))) {
                        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr 
                            = (0xffU & vlSelf->i2c_wdata_o);
                    }
                }
                if ((1U & (~ (vlSelf->i2c_addr_o >> 1U)))) {
                    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer 
                        = ((1U & vlSelf->i2c_addr_o)
                            ? ((0xffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)) 
                               | (0xff00U & (vlSelf->i2c_wdata_o 
                                             << 8U)))
                            : ((0xff00U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)) 
                               | (0xffU & vlSelf->i2c_wdata_o)));
                }
            }
        }
    } else {
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr = 0U;
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer = 0xffffU;
    }
    if ((IData)((((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                  >> 7U) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__core_en)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__core_en 
            = (1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                     >> 7U));
    }
    if ((1U & (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                >> 6U) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ien)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ien 
            = (1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                     >> 6U));
    }
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr 
            = ((0xfeU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)) 
               | (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr)));
    }
    if ((2U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr 
            = ((0xfdU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)) 
               | (2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr)));
    }
    if ((4U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr 
            = ((0xfbU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)) 
               | (4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr)));
    }
    if ((8U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr 
            = ((0xf7U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)) 
               | (8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr)));
    }
    if ((0x10U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr 
            = ((0xefU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)) 
               | (0x10U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr)));
    }
    if ((0x20U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr 
            = ((0xdfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)) 
               | (0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr)));
    }
    if ((0x40U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr 
            = ((0xbfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)) 
               | (0x40U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr)));
    }
    if ((0x80U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr 
            = ((0x7fU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr)) 
               | (0x80U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr)));
    }
    if ((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xfffeU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((2U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xfffdU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (2U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((4U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xfffbU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (4U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((8U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xfff7U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (8U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x10U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xffefU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x10U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x20U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xffdfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x20U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x40U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xffbfU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x40U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x80U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                  ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xff7fU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x80U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x100U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                   ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xfeffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x100U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x200U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                   ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xfdffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x200U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x400U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                   ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xfbffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x400U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x800U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                   ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xf7ffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x800U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x1000U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                    ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xefffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x1000U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x2000U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                    ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xdfffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x2000U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x4000U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                    ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0xbfffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x4000U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
    if ((0x8000U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer) 
                    ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer 
            = ((0x7fffU & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer)) 
               | (0x8000U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer)));
    }
}

VL_INLINE_OPT void Vi2c_wb_wrapper___024root___sequent__TOP__2(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___sequent__TOP__2\n"); );
    // Body
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL) 
         & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL)))) {
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_rxd 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_rxd) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_rxd))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_rxd 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_rxd;
    }
}

VL_INLINE_OPT void Vi2c_wb_wrapper___024root___combo__TOP__1(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc 
        = ((IData)(vlSelf->i2c_we_o) & (IData)(vlSelf->i2c_wb_wrapper__DOT__wb_ack_o));
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__wb_wacc))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__wb_wacc 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc;
    }
}

VL_INLINE_OPT void Vi2c_wb_wrapper___024root___sequent__TOP__3(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL 
        = (1U & ((~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i)) 
                 | ((IData)(vlSelf->rst_i) | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL))));
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA 
        = (1U & ((~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i)) 
                 | ((IData)(vlSelf->rst_i) | (IData)(vlSelf->sda_pad_i))));
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSCL))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSCL 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL;
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL 
        = (1U & ((~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i)) 
                 | ((IData)(vlSelf->rst_i) | (IData)(vlSelf->scl_pad_i))));
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSDA))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSDA 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSCL))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSCL 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL;
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait 
        = ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen) 
           & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL)));
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__slave_wait))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__slave_wait 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait;
    }
}
