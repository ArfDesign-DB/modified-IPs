// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio.h for the primary calling header

#include "Vgpio__pch.h"
#include "Vgpio__Syms.h"
#include "Vgpio_debounce.h"

VL_ATTR_COLD void Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
    }
    if ((1U & ((vlSymsp->TOP.gpio__DOT__gp_i_q >> 0x10U) 
               ^ (IData)(vlSelf->__Vtogcov__btn_i)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__btn_i = (1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                          >> 0x10U));
    }
    if (((IData)(vlSelf->__PVT__btn_q) ^ (IData)(vlSelf->__Vtogcov__btn_o))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__btn_o = vlSelf->__PVT__btn_q;
    }
    vlSelf->__PVT__btn_d = (1U & ((0x1f4U <= (IData)(vlSelf->__PVT__cnt_q))
                                   ? (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                      >> 0x10U) : (IData)(vlSelf->__PVT__btn_q)));
    if ((1U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__cnt_q = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__cnt_q = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__cnt_q = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__cnt_q = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->__Vtogcov__cnt_q = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->__Vtogcov__cnt_q = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->__Vtogcov__cnt_q = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    vlSelf->__PVT__cnt_d = ((((1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                     >> 0x10U)) == (IData)(vlSelf->__PVT__btn_q)) 
                             | (0x1f4U <= (IData)(vlSelf->__PVT__cnt_q)))
                             ? 0U : (0x1ffU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__cnt_q))));
    if (((IData)(vlSelf->__PVT__btn_d) ^ (IData)(vlSelf->__Vtogcov__btn_d))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->__Vtogcov__btn_d = vlSelf->__PVT__btn_d;
    }
    if ((1U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__cnt_d = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__cnt_d = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__cnt_d = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__cnt_d = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__cnt_d = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__cnt_d = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__cnt_d = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_d)));
    }
}

VL_ATTR_COLD void Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
    }
    if ((1U & ((vlSymsp->TOP.gpio__DOT__gp_i_q >> 0x11U) 
               ^ (IData)(vlSelf->__Vtogcov__btn_i)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__btn_i = (1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                          >> 0x11U));
    }
    if (((IData)(vlSelf->__PVT__btn_q) ^ (IData)(vlSelf->__Vtogcov__btn_o))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__btn_o = vlSelf->__PVT__btn_q;
    }
    vlSelf->__PVT__btn_d = (1U & ((0x1f4U <= (IData)(vlSelf->__PVT__cnt_q))
                                   ? (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                      >> 0x11U) : (IData)(vlSelf->__PVT__btn_q)));
    if ((1U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__cnt_q = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__cnt_q = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__cnt_q = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__cnt_q = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->__Vtogcov__cnt_q = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->__Vtogcov__cnt_q = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->__Vtogcov__cnt_q = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    vlSelf->__PVT__cnt_d = ((((1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                     >> 0x11U)) == (IData)(vlSelf->__PVT__btn_q)) 
                             | (0x1f4U <= (IData)(vlSelf->__PVT__cnt_q)))
                             ? 0U : (0x1ffU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__cnt_q))));
    if (((IData)(vlSelf->__PVT__btn_d) ^ (IData)(vlSelf->__Vtogcov__btn_d))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->__Vtogcov__btn_d = vlSelf->__PVT__btn_d;
    }
    if ((1U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__cnt_d = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__cnt_d = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__cnt_d = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__cnt_d = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__cnt_d = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__cnt_d = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__cnt_d = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_d)));
    }
}

VL_ATTR_COLD void Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
    }
    if ((1U & ((vlSymsp->TOP.gpio__DOT__gp_i_q >> 0x12U) 
               ^ (IData)(vlSelf->__Vtogcov__btn_i)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__btn_i = (1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                          >> 0x12U));
    }
    if (((IData)(vlSelf->__PVT__btn_q) ^ (IData)(vlSelf->__Vtogcov__btn_o))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__btn_o = vlSelf->__PVT__btn_q;
    }
    vlSelf->__PVT__btn_d = (1U & ((0x1f4U <= (IData)(vlSelf->__PVT__cnt_q))
                                   ? (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                      >> 0x12U) : (IData)(vlSelf->__PVT__btn_q)));
    if ((1U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__cnt_q = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__cnt_q = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__cnt_q = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__cnt_q = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->__Vtogcov__cnt_q = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->__Vtogcov__cnt_q = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->__Vtogcov__cnt_q = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    vlSelf->__PVT__cnt_d = ((((1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                     >> 0x12U)) == (IData)(vlSelf->__PVT__btn_q)) 
                             | (0x1f4U <= (IData)(vlSelf->__PVT__cnt_q)))
                             ? 0U : (0x1ffU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__cnt_q))));
    if (((IData)(vlSelf->__PVT__btn_d) ^ (IData)(vlSelf->__Vtogcov__btn_d))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->__Vtogcov__btn_d = vlSelf->__PVT__btn_d;
    }
    if ((1U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__cnt_d = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__cnt_d = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__cnt_d = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__cnt_d = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__cnt_d = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__cnt_d = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__cnt_d = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_d)));
    }
}

VL_ATTR_COLD void Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
    }
    if ((1U & ((vlSymsp->TOP.gpio__DOT__gp_i_q >> 0x13U) 
               ^ (IData)(vlSelf->__Vtogcov__btn_i)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__btn_i = (1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                          >> 0x13U));
    }
    if (((IData)(vlSelf->__PVT__btn_q) ^ (IData)(vlSelf->__Vtogcov__btn_o))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__btn_o = vlSelf->__PVT__btn_q;
    }
    vlSelf->__PVT__btn_d = (1U & ((0x1f4U <= (IData)(vlSelf->__PVT__cnt_q))
                                   ? (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                      >> 0x13U) : (IData)(vlSelf->__PVT__btn_q)));
    if ((1U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__cnt_q = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__cnt_q = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__cnt_q = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__cnt_q = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->__Vtogcov__cnt_q = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->__Vtogcov__cnt_q = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->__Vtogcov__cnt_q = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    vlSelf->__PVT__cnt_d = ((((1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                     >> 0x13U)) == (IData)(vlSelf->__PVT__btn_q)) 
                             | (0x1f4U <= (IData)(vlSelf->__PVT__cnt_q)))
                             ? 0U : (0x1ffU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__cnt_q))));
    if (((IData)(vlSelf->__PVT__btn_d) ^ (IData)(vlSelf->__Vtogcov__btn_d))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->__Vtogcov__btn_d = vlSelf->__PVT__btn_d;
    }
    if ((1U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__cnt_d = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__cnt_d = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__cnt_d = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__cnt_d = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__cnt_d = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__cnt_d = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__cnt_d = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_d)));
    }
}

VL_ATTR_COLD void Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
    }
    if ((1U & ((vlSymsp->TOP.gpio__DOT__gp_i_q >> 0x14U) 
               ^ (IData)(vlSelf->__Vtogcov__btn_i)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__btn_i = (1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                          >> 0x14U));
    }
    if (((IData)(vlSelf->__PVT__btn_q) ^ (IData)(vlSelf->__Vtogcov__btn_o))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__btn_o = vlSelf->__PVT__btn_q;
    }
    vlSelf->__PVT__btn_d = (1U & ((0x1f4U <= (IData)(vlSelf->__PVT__cnt_q))
                                   ? (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                      >> 0x14U) : (IData)(vlSelf->__PVT__btn_q)));
    if ((1U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__cnt_q = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__cnt_q = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__cnt_q = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__cnt_q = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->__Vtogcov__cnt_q = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->__Vtogcov__cnt_q = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->__Vtogcov__cnt_q = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    vlSelf->__PVT__cnt_d = ((((1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                     >> 0x14U)) == (IData)(vlSelf->__PVT__btn_q)) 
                             | (0x1f4U <= (IData)(vlSelf->__PVT__cnt_q)))
                             ? 0U : (0x1ffU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__cnt_q))));
    if (((IData)(vlSelf->__PVT__btn_d) ^ (IData)(vlSelf->__Vtogcov__btn_d))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->__Vtogcov__btn_d = vlSelf->__PVT__btn_d;
    }
    if ((1U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__cnt_d = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__cnt_d = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__cnt_d = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__cnt_d = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__cnt_d = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__cnt_d = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__cnt_d = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_d)));
    }
}

VL_ATTR_COLD void Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
    }
    if ((1U & ((vlSymsp->TOP.gpio__DOT__gp_i_q >> 0x15U) 
               ^ (IData)(vlSelf->__Vtogcov__btn_i)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__btn_i = (1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                          >> 0x15U));
    }
    if (((IData)(vlSelf->__PVT__btn_q) ^ (IData)(vlSelf->__Vtogcov__btn_o))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__btn_o = vlSelf->__PVT__btn_q;
    }
    vlSelf->__PVT__btn_d = (1U & ((0x1f4U <= (IData)(vlSelf->__PVT__cnt_q))
                                   ? (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                      >> 0x15U) : (IData)(vlSelf->__PVT__btn_q)));
    if ((1U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__cnt_q = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__cnt_q = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__cnt_q = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__cnt_q = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->__Vtogcov__cnt_q = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->__Vtogcov__cnt_q = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->__Vtogcov__cnt_q = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    vlSelf->__PVT__cnt_d = ((((1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                     >> 0x15U)) == (IData)(vlSelf->__PVT__btn_q)) 
                             | (0x1f4U <= (IData)(vlSelf->__PVT__cnt_q)))
                             ? 0U : (0x1ffU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__cnt_q))));
    if (((IData)(vlSelf->__PVT__btn_d) ^ (IData)(vlSelf->__Vtogcov__btn_d))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->__Vtogcov__btn_d = vlSelf->__PVT__btn_d;
    }
    if ((1U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__cnt_d = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__cnt_d = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__cnt_d = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__cnt_d = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__cnt_d = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__cnt_d = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__cnt_d = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_d)));
    }
}

VL_ATTR_COLD void Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
    }
    if ((1U & ((vlSymsp->TOP.gpio__DOT__gp_i_q >> 0x16U) 
               ^ (IData)(vlSelf->__Vtogcov__btn_i)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__btn_i = (1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                          >> 0x16U));
    }
    if (((IData)(vlSelf->__PVT__btn_q) ^ (IData)(vlSelf->__Vtogcov__btn_o))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__btn_o = vlSelf->__PVT__btn_q;
    }
    vlSelf->__PVT__btn_d = (1U & ((0x1f4U <= (IData)(vlSelf->__PVT__cnt_q))
                                   ? (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                      >> 0x16U) : (IData)(vlSelf->__PVT__btn_q)));
    if ((1U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__cnt_q = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__cnt_q = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__cnt_q = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__cnt_q = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->__Vtogcov__cnt_q = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->__Vtogcov__cnt_q = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->__Vtogcov__cnt_q = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    vlSelf->__PVT__cnt_d = ((((1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                     >> 0x16U)) == (IData)(vlSelf->__PVT__btn_q)) 
                             | (0x1f4U <= (IData)(vlSelf->__PVT__cnt_q)))
                             ? 0U : (0x1ffU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__cnt_q))));
    if (((IData)(vlSelf->__PVT__btn_d) ^ (IData)(vlSelf->__Vtogcov__btn_d))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->__Vtogcov__btn_d = vlSelf->__PVT__btn_d;
    }
    if ((1U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__cnt_d = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__cnt_d = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__cnt_d = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__cnt_d = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__cnt_d = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__cnt_d = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__cnt_d = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_d)));
    }
}

VL_ATTR_COLD void Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vgpio_debounce___stl_sequent__TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
    }
    if ((IData)(((vlSymsp->TOP.gpio__DOT__gp_i_q >> 0x17U) 
                 ^ (IData)(vlSelf->__Vtogcov__btn_i)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->__Vtogcov__btn_i = (1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                          >> 0x17U));
    }
    if (((IData)(vlSelf->__PVT__btn_q) ^ (IData)(vlSelf->__Vtogcov__btn_o))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->__Vtogcov__btn_o = vlSelf->__PVT__btn_q;
    }
    vlSelf->__PVT__btn_d = (1U & ((0x1f4U <= (IData)(vlSelf->__PVT__cnt_q))
                                   ? (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                      >> 0x17U) : (IData)(vlSelf->__PVT__btn_q)));
    if ((1U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->__Vtogcov__cnt_q = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->__Vtogcov__cnt_q = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->__Vtogcov__cnt_q = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->__Vtogcov__cnt_q = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->__Vtogcov__cnt_q = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->__Vtogcov__cnt_q = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->__Vtogcov__cnt_q = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_q) ^ (IData)(vlSelf->__Vtogcov__cnt_q)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->__Vtogcov__cnt_q = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_q)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_q)));
    }
    vlSelf->__PVT__cnt_d = ((((1U & (vlSymsp->TOP.gpio__DOT__gp_i_q 
                                     >> 0x17U)) == (IData)(vlSelf->__PVT__btn_q)) 
                             | (0x1f4U <= (IData)(vlSelf->__PVT__cnt_q)))
                             ? 0U : (0x1ffU & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__cnt_q))));
    if (((IData)(vlSelf->__PVT__btn_d) ^ (IData)(vlSelf->__Vtogcov__btn_d))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->__Vtogcov__btn_d = vlSelf->__PVT__btn_d;
    }
    if ((1U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->__Vtogcov__cnt_d = ((0x1feU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (1U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fdU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (2U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->__Vtogcov__cnt_d = ((0x1fbU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (4U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->__Vtogcov__cnt_d = ((0x1f7U & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (8U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->__Vtogcov__cnt_d = ((0x1efU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->__Vtogcov__cnt_d = ((0x1dfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->__Vtogcov__cnt_d = ((0x1bfU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->__Vtogcov__cnt_d = ((0x17fU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__cnt_d)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__cnt_d) ^ (IData)(vlSelf->__Vtogcov__cnt_d)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->__Vtogcov__cnt_d = ((0xffU & (IData)(vlSelf->__Vtogcov__cnt_d)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__cnt_d)));
    }
}

VL_ATTR_COLD void Vgpio_debounce___configure_coverage(Vgpio_debounce* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vgpio_debounce___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../../rtl/debounce.sv", 15, 18, "", "v_toggle/debounce", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../../rtl/debounce.sv", 16, 18, "", "v_toggle/debounce", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../../rtl/debounce.sv", 18, 18, "", "v_toggle/debounce", "btn_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../../rtl/debounce.sv", 19, 18, "", "v_toggle/debounce", "btn_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../../rtl/debounce.sv", 22, 34, "", "v_toggle/debounce", "cnt_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../../rtl/debounce.sv", 22, 34, "", "v_toggle/debounce", "cnt_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../../rtl/debounce.sv", 22, 34, "", "v_toggle/debounce", "cnt_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../../rtl/debounce.sv", 22, 34, "", "v_toggle/debounce", "cnt_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../../rtl/debounce.sv", 22, 34, "", "v_toggle/debounce", "cnt_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../../rtl/debounce.sv", 22, 34, "", "v_toggle/debounce", "cnt_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../../rtl/debounce.sv", 22, 34, "", "v_toggle/debounce", "cnt_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../../rtl/debounce.sv", 22, 34, "", "v_toggle/debounce", "cnt_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../../rtl/debounce.sv", 22, 34, "", "v_toggle/debounce", "cnt_d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../../rtl/debounce.sv", 22, 41, "", "v_toggle/debounce", "cnt_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../../rtl/debounce.sv", 22, 41, "", "v_toggle/debounce", "cnt_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../../rtl/debounce.sv", 22, 41, "", "v_toggle/debounce", "cnt_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../../rtl/debounce.sv", 22, 41, "", "v_toggle/debounce", "cnt_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../../rtl/debounce.sv", 22, 41, "", "v_toggle/debounce", "cnt_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../../rtl/debounce.sv", 22, 41, "", "v_toggle/debounce", "cnt_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../../rtl/debounce.sv", 22, 41, "", "v_toggle/debounce", "cnt_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../../rtl/debounce.sv", 22, 41, "", "v_toggle/debounce", "cnt_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../../rtl/debounce.sv", 22, 41, "", "v_toggle/debounce", "cnt_q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../../rtl/debounce.sv", 23, 9, "", "v_toggle/debounce", "btn_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../../rtl/debounce.sv", 23, 16, "", "v_toggle/debounce", "btn_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../../rtl/debounce.sv", 28, 5, "", "v_branch/debounce", "if", "28-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../../rtl/debounce.sv", 28, 6, "", "v_branch/debounce", "else", "31-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../../rtl/debounce.sv", 27, 3, "", "v_line/debounce", "block", "27");
}
