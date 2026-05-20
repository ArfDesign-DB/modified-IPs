// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer.h for the primary calling header

#include "Vtimer__pch.h"
#include "Vtimer__Syms.h"
#include "Vtimer___024root.h"

VL_INLINE_OPT void Vtimer___024root___nba_sequent__TOP__2(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->timer__DOT__rdata_d = ((0U == (0x3ffU & vlSelf->timer_addr_i))
                                    ? (IData)(vlSelf->timer__DOT__mtime_q)
                                    : ((4U == (0x3ffU 
                                               & vlSelf->timer_addr_i))
                                        ? (IData)((vlSelf->timer__DOT__mtime_q 
                                                   >> 0x20U))
                                        : ((8U == (0x3ffU 
                                                   & vlSelf->timer_addr_i))
                                            ? (IData)(vlSelf->timer__DOT__mtimecmp_q)
                                            : ((0xcU 
                                                == 
                                                (0x3ffU 
                                                 & vlSelf->timer_addr_i))
                                                ? (IData)(
                                                          (vlSelf->timer__DOT__mtimecmp_q 
                                                           >> 0x20U))
                                                : 0U))));
    if ((1U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfffffffeU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (1U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((2U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfffffffdU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (2U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((4U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfffffffbU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (4U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((8U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfffffff7U 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (8U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x10U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xffffffefU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x10U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x20U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xffffffdfU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x20U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x40U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xffffffbfU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x40U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x80U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xffffff7fU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x80U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x100U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfffffeffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x100U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x200U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfffffdffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x200U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x400U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfffffbffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x400U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x800U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfffff7ffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x800U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x1000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xffffefffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x1000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x2000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xffffdfffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x2000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x4000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xffffbfffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x4000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x8000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xffff7fffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x8000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x10000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfffeffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x10000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x20000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfffdffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x20000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x40000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfffbffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x40000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x80000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfff7ffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x80000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x100000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xffefffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x100000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x200000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xffdfffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x200000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x400000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xffbfffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x400000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x800000U & (vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xff7fffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x800000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x1000000U & (vlSelf->timer__DOT__rdata_d 
                       ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfeffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x1000000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x2000000U & (vlSelf->timer__DOT__rdata_d 
                       ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfdffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x2000000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x4000000U & (vlSelf->timer__DOT__rdata_d 
                       ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xfbffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x4000000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x8000000U & (vlSelf->timer__DOT__rdata_d 
                       ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xf7ffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x8000000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x10000000U & (vlSelf->timer__DOT__rdata_d 
                        ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xefffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x10000000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x20000000U & (vlSelf->timer__DOT__rdata_d 
                        ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xdfffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x20000000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if ((0x40000000U & (vlSelf->timer__DOT__rdata_d 
                        ^ vlSelf->timer__DOT____Vtogcov__rdata_d))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0xbfffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x40000000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
    if (((vlSelf->timer__DOT__rdata_d ^ vlSelf->timer__DOT____Vtogcov__rdata_d) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->timer__DOT____Vtogcov__rdata_d = ((0x7fffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_d) 
                                                  | (0x80000000U 
                                                     & vlSelf->timer__DOT__rdata_d));
    }
}
