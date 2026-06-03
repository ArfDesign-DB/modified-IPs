// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_wb_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vi2c_wb_wrapper__Syms.h"
#include "Vi2c_wb_wrapper___024root.h"

VL_ATTR_COLD void Vi2c_wb_wrapper___024root___settle__TOP__0(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___settle__TOP__0\n"); );
    // Body
    if (vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__scl_o) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__scl_o = 0U;
    }
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
    if (((IData)(vlSelf->wb_inta_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_inta_o))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_inta_o 
            = vlSelf->wb_inta_o;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__wb_ack_o) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_ack_o))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_ack_o 
            = vlSelf->i2c_wb_wrapper__DOT__wb_ack_o;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxack))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxack 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__tip))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__tip 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irq_flag))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irq_flag 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__i2c_busy))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__i2c_busy 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__al))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__al 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dscl_oen))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dscl_oen 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen;
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
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr 
        = ((((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack) 
             << 7U) | (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy) 
                        << 6U) | ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al) 
                                  << 5U))) | (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip) 
                                               << 1U) 
                                              | (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag)));
    vlSelf->i2c_rdata_i = vlSelf->i2c_wb_wrapper__DOT__wb_dat_o;
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__done))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__done 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irxack))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irxack 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack;
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
    if ((1U & ((~ (IData)((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt)))) 
               ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__cnt_done)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__cnt_done 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt)))));
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sta_condition))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sta_condition 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition;
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
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go 
        = ((~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done)) 
           & (0U != (0x70U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))));
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
    if (((IData)(vlSelf->scl_padoen_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_padoen_o))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_padoen_o 
            = vlSelf->scl_padoen_o;
    }
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
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_rxd) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_rxd))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_rxd 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_rxd;
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
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sda_chk))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sda_chk 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSCL))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSCL 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sto_condition))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sto_condition 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition;
    }
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
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSCL))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSCL 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__clk_en))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__clk_en 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSDA))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSDA 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA;
    }
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait 
        = ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen) 
           & (~ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL)));
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
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i 
        = (1U & (~ (IData)(vlSelf->rst_i)));
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc 
        = ((IData)(vlSelf->i2c_we_o) & (IData)(vlSelf->i2c_wb_wrapper__DOT__wb_ack_o));
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
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSDA))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSDA 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA;
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
    if (((IData)(vlSelf->i2c_rvalid_i) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rvalid_i))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rvalid_i 
            = vlSelf->i2c_rvalid_i;
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
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__go))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__go 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__slave_wait))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__slave_wait 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait;
    }
    if (((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc) 
         ^ (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__wb_wacc))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__wb_wacc 
            = vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc;
    }
}

VL_ATTR_COLD void Vi2c_wb_wrapper___024root___initial__TOP__0(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->scl_pad_o = 0U;
    vlSelf->sda_pad_o = 0U;
    if (((IData)(vlSelf->scl_pad_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_pad_o))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_pad_o 
            = vlSelf->scl_pad_o;
    }
    if (((IData)(vlSelf->sda_pad_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__sda_pad_o))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__sda_pad_o 
            = vlSelf->sda_pad_o;
    }
}

VL_ATTR_COLD void Vi2c_wb_wrapper___024root___settle__TOP__1(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___settle__TOP__1\n"); );
    // Body
    if (((IData)(vlSelf->scl_pad_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_pad_o))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_pad_o 
            = vlSelf->scl_pad_o;
    }
    if (((IData)(vlSelf->sda_pad_o) ^ (IData)(vlSelf->i2c_wb_wrapper__DOT____Vtogcov__sda_pad_o))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->i2c_wb_wrapper__DOT____Vtogcov__sda_pad_o 
            = vlSelf->sda_pad_o;
    }
}

VL_ATTR_COLD void Vi2c_wb_wrapper___024root___configure_coverage(Vi2c_wb_wrapper___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 10, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 11, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "rst_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 18, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_req_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 19, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_we_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 20, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_addr_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 21, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_wdata_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 22, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_be_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 22, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_be_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 22, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_be_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 22, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_be_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 24, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rvalid_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 25, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "i2c_rdata_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 31, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "scl_pad_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 32, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "scl_pad_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 33, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "scl_padoen_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 35, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "sda_pad_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 36, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "sda_pad_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 37, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "sda_padoen_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 39, 30, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_inta_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 46, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_adr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 46, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_adr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 46, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_adr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 47, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 47, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 47, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 47, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 47, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 47, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 47, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 47, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 48, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 48, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 48, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 48, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 48, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 48, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 48, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 48, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_dat_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 50, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_we_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 51, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_stb_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 52, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_cyc_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 54, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_ack_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 56, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "wb_rst_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 57, 17, ".i2c_wb_wrapper", "v_toggle/i2c_wb_wrapper", "arst_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 91, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 92, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_rst_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 93, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "arst_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 94, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_adr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 94, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_adr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 94, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_adr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 95, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 95, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 95, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 95, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 95, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 95, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 95, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 95, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 96, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 96, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 96, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 96, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 96, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 96, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 96, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 96, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_dat_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 97, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_we_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 98, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_stb_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 99, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_cyc_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 100, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_ack_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 101, 15, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_inta_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 109, 9, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "scl_pad_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 110, 9, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "scl_pad_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 111, 9, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "scl_padoen_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 114, 9, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sda_pad_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 115, 9, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sda_pad_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 116, 9, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sda_padoen_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 124, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "prer[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 125, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "ctr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 125, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "ctr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 125, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "ctr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 125, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "ctr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 125, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "ctr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 125, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "ctr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 125, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "ctr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 125, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "ctr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 126, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "txr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 126, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "txr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 126, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "txr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 126, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "txr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 126, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "txr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 126, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "txr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 126, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "txr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 126, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "txr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 127, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "rxr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 127, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "rxr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 127, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "rxr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 127, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "rxr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 127, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "rxr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 127, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "rxr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 127, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "rxr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 127, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "rxr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 128, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "cr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 128, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "cr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 128, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "cr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 128, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "cr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 128, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "cr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 128, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "cr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 128, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "cr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 128, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "cr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 129, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 129, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 129, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 129, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 129, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 129, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 129, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 129, 14, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 132, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 135, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "core_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 136, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "ien", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 139, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "irxack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 140, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "rxack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 141, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "tip", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 142, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "irq_flag", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 143, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "i2c_busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 144, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "i2c_al", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 145, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "al", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 152, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "rst_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 155, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wb_wacc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 158, 2, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "block", "158-159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 165, 13, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "case", "165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 166, 13, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "case", "166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 167, 13, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "case", "167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 168, 13, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "case", "168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 169, 13, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "case", "169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 170, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "case", "170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 162, 2, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "block", "162-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 191, 18, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "case", "191");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 192, 18, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "case", "192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 193, 18, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "case", "193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 194, 18, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "case", "194");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 195, 11, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "case", "195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 189, 6, ".i2c_wb_wrapper.u_i2c_master_top", "v_branch/i2c_master_top", "if", "189-190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 189, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_branch/i2c_master_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 182, 9, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "elsif", "182-186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 176, 4, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "elsif", "176-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 175, 2, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "block", "175");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 206, 10, ".i2c_wb_wrapper.u_i2c_master_top", "v_branch/i2c_master_top", "if", "206-207");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 206, 11, ".i2c_wb_wrapper.u_i2c_master_top", "v_branch/i2c_master_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 211, 10, ".i2c_wb_wrapper.u_i2c_master_top", "v_branch/i2c_master_top", "if", "211-212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 211, 11, ".i2c_wb_wrapper.u_i2c_master_top", "v_branch/i2c_master_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 204, 9, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "if", "204-205");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 204, 10, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "else", "210,214-215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 202, 9, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "elsif", "202-203");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 200, 4, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "elsif", "200-201");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 199, 2, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "block", "199");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 220, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sta", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 221, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "sto", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 222, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "rd", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 223, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "wr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 224, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "ack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 225, 7, ".i2c_wb_wrapper.u_i2c_master_top", "v_toggle/i2c_master_top", "iack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 266, 9, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "if", "266-271");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 266, 10, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "else", "274-278");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 259, 4, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "elsif", "259-264");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 258, 2, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "block", "258");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 285, 9, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "if", "285-286");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 285, 10, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "else", "288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 283, 4, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "elsif", "283-284");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_top.v", 282, 2, ".i2c_wb_wrapper.u_i2c_master_top", "v_line/i2c_master_top", "block", "282");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 75, 8, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 76, 8, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 77, 8, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "nReset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 78, 8, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 80, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "clk_cnt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 83, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "start", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 84, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "stop", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 85, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "read", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 86, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "write", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 87, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "ack_in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 88, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "din[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 88, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "din[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 88, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "din[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 88, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "din[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 88, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "din[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 88, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "din[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 88, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "din[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 88, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "din[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 91, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "cmd_ack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 93, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "ack_out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 95, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "i2c_busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 96, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "i2c_al", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 97, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "dout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 97, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "dout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 97, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "dout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 97, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "dout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 97, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "dout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 97, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "dout[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 97, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "dout[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 97, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "dout[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 100, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "scl_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 101, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "scl_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 102, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "scl_oen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 103, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "sda_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 104, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "sda_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 105, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "sda_oen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 121, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "core_cmd[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 121, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "core_cmd[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 121, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "core_cmd[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 121, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "core_cmd[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 122, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "core_txd", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 123, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "core_ack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 123, 23, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "core_rxd", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 126, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "sr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 126, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "sr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 126, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "sr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 126, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "sr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 126, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "sr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 126, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "sr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 126, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "sr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 126, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "sr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 127, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "shift", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 127, 19, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "ld", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 130, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "go", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 131, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "dcnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 131, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "dcnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 131, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "dcnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 132, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "cnt_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 173, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "173-174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 173, 10, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 171, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "elsif", "171-172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 169, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "elsif", "169-170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 167, 4, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "elsif", "167-168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 166, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "block", "166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 184, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "184-185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 184, 10, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 182, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "elsif", "182-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 180, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "elsif", "180-181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 178, 4, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "elsif", "178-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 177, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "block", "177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 192, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "c_state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 192, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "c_state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 192, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "c_state[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 192, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "c_state[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 192, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_toggle/i2c_master_byte_ctrl", "c_state[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 237, 23, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "if", "237-240");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 237, 24, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "else", "243-245,248");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 232, 23, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "elsif", "232-235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 227, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "elsif", "227-230");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 225, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "225-226,251");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 225, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 224, 17, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "case", "224");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 257, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "257-260");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 257, 19, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "263-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 255, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "255-256,268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 255, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 254, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "case", "254");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 273, 14, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "273-276");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 273, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "279-282");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 272, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "272");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 272, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 271, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "case", "271");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 288, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "288-291");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 288, 19, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "294-296");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 286, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "286-287,299-300");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 286, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 285, 17, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "case", "285");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 306, 17, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "306-309");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 306, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "312-314,317");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 304, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "304-305,321,326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 304, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 303, 16, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "case", "303");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 332, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "if", "332-335,338");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 332, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_branch/i2c_master_byte_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 331, 17, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "case", "331");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 205, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "if", "205-213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 205, 10, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "else", "216,218-221,223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 195, 4, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "elsif", "195-203");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_byte_ctrl.v", 194, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller", "v_line/i2c_master_byte_ctrl", "block", "194");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 131, 8, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 132, 8, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 133, 8, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "nReset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 134, 8, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 136, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_cnt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 138, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cmd[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 138, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cmd[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 138, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cmd[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 138, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cmd[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 139, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cmd_ack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 141, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 143, 15, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "al", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 146, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "din", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 147, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "dout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 151, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "scl_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 152, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "scl_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 153, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "scl_oen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 155, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "sda_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 156, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "sda_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 157, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "sda_oen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 165, 6, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "sSCL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 165, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "sSDA", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 166, 6, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "dscl_oen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 167, 6, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "sda_chk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 168, 6, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "clk_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 169, 7, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "slave_wait", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 171, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cnt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 179, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "block", "179-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 198, 6, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_branch/i2c_master_bit_ctrl", "if", "198-201");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 198, 7, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_branch/i2c_master_bit_ctrl", "else", "204-206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 197, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "if", "197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 197, 10, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "else", "209-211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 192, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "elsif", "192-195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 187, 4, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "elsif", "187-190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 186, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "block", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 216, 6, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "dSCL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 216, 12, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "dSDA", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 217, 6, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "sta_condition", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 218, 6, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "sto_condition", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 231, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "if", "231-234,236-237");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 231, 10, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "else", "240-242,244-245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 223, 4, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "elsif", "223-226,228-229");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 222, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "block", "222");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 256, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "if", "256-259");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 256, 10, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "else", "262-264");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 251, 4, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "elsif", "251-254");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 250, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "block", "250");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 271, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "if", "271-272");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 271, 10, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "else", "274");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 269, 4, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "elsif", "269-270");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 268, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "block", "268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 280, 6, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "cmd_stop", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 286, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_branch/i2c_master_bit_ctrl", "if", "286-287");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 286, 10, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_branch/i2c_master_bit_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 284, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "elsif", "284-285");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 282, 4, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "elsif", "282-283");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 281, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "block", "281");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 292, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "if", "292-293");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 292, 10, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "else", "295");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 290, 4, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "elsif", "290-291");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 289, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "block", "289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 300, 4, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_branch/i2c_master_bit_ctrl", "if", "300-301");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 300, 5, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_branch/i2c_master_bit_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 299, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "block", "299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 325, 13, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_toggle/i2c_master_bit_ctrl", "c_state[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 354, 27, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "354-355");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 357, 27, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "357-358");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 360, 27, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "360-361");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 363, 27, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "363-364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 366, 20, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "366-367");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 351, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "351-353,370-372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 376, 21, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "376-381");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 384, 21, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "384-389");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 392, 21, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "392-397");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 400, 21, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "400-405");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 408, 21, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "408-414");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 418, 20, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "418-423");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 426, 20, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "426-431");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 434, 20, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "434-439");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 442, 20, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "442-448");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 452, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "452-457");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 460, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "460-465");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 468, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "468-473");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 476, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "476-482");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 486, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "486-491");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 494, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "494-499");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 502, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "502-507");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 510, 18, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "case", "510-516");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 348, 10, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_branch/i2c_master_bit_ctrl", "if", "348-349");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 348, 11, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_branch/i2c_master_bit_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 336, 9, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "if", "336-342");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 336, 10, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "else", "345-346");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 328, 4, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "elsif", "328-334");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "/home/shrinidhi/IBEX/I2C/rtl/i2c_master_bit_ctrl.v", 327, 2, ".i2c_wb_wrapper.u_i2c_master_top.byte_controller.bit_controller", "v_line/i2c_master_bit_ctrl", "block", "327");
}
