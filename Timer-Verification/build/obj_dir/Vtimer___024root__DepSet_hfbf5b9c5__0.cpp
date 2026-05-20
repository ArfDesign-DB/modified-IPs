// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer.h for the primary calling header

#include "Vtimer__pch.h"
#include "Vtimer__Syms.h"
#include "Vtimer___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer___024root___dump_triggers__ico(Vtimer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtimer___024root___eval_triggers__ico(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtimer___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtimer___024root___ico_sequent__TOP__0(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((0U == (0x3ffU & vlSelf->timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->timer__DOT__rdata_d = (IData)(vlSelf->timer__DOT__mtime_q);
    } else {
        vlSelf->timer__DOT__rdata_d = ((4U == (0x3ffU 
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
                                                : 0U)));
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->timer__DOT____Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->timer__DOT____Vtogcov__clk_i = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_ni) ^ (IData)(vlSelf->timer__DOT____Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->timer__DOT____Vtogcov__rst_ni = vlSelf->rst_ni;
    }
    if (((IData)(vlSelf->timer_req_i) ^ (IData)(vlSelf->timer__DOT____Vtogcov__timer_req_i))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->timer__DOT____Vtogcov__timer_req_i 
            = vlSelf->timer_req_i;
    }
    if (((IData)(vlSelf->timer_we_i) ^ (IData)(vlSelf->timer__DOT____Vtogcov__timer_we_i))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->timer__DOT____Vtogcov__timer_we_i = vlSelf->timer_we_i;
    }
    if (((0U != (vlSelf->timer_addr_i >> 0xaU)) ^ (IData)(vlSelf->timer__DOT____Vtogcov__unused_addr_bits))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->timer__DOT____Vtogcov__unused_addr_bits 
            = (0U != (vlSelf->timer_addr_i >> 0xaU));
    }
    vlSelf->timer__DOT__error_d = 0U;
    if ((0U != (0x3ffU & vlSelf->timer_addr_i))) {
        if ((4U != (0x3ffU & vlSelf->timer_addr_i))) {
            if ((8U == (0x3ffU & vlSelf->timer_addr_i))) {
                ++(vlSymsp->__Vcoverage[642]);
            }
            if ((8U != (0x3ffU & vlSelf->timer_addr_i))) {
                if ((0xcU != (0x3ffU & vlSelf->timer_addr_i))) {
                    ++(vlSymsp->__Vcoverage[644]);
                    vlSelf->timer__DOT__error_d = 1U;
                }
                if ((0xcU == (0x3ffU & vlSelf->timer_addr_i))) {
                    ++(vlSymsp->__Vcoverage[643]);
                }
            }
        }
        if ((4U == (0x3ffU & vlSelf->timer_addr_i))) {
            ++(vlSymsp->__Vcoverage[641]);
        }
    }
    if ((1U & ((IData)(vlSelf->timer_be_i) ^ (IData)(vlSelf->timer__DOT____Vtogcov__timer_be_i)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->timer__DOT____Vtogcov__timer_be_i = 
            ((0xeU & (IData)(vlSelf->timer__DOT____Vtogcov__timer_be_i)) 
             | (1U & (IData)(vlSelf->timer_be_i)));
    }
    if ((2U & ((IData)(vlSelf->timer_be_i) ^ (IData)(vlSelf->timer__DOT____Vtogcov__timer_be_i)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->timer__DOT____Vtogcov__timer_be_i = 
            ((0xdU & (IData)(vlSelf->timer__DOT____Vtogcov__timer_be_i)) 
             | (2U & (IData)(vlSelf->timer_be_i)));
    }
    if ((4U & ((IData)(vlSelf->timer_be_i) ^ (IData)(vlSelf->timer__DOT____Vtogcov__timer_be_i)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->timer__DOT____Vtogcov__timer_be_i = 
            ((0xbU & (IData)(vlSelf->timer__DOT____Vtogcov__timer_be_i)) 
             | (4U & (IData)(vlSelf->timer_be_i)));
    }
    if ((8U & ((IData)(vlSelf->timer_be_i) ^ (IData)(vlSelf->timer__DOT____Vtogcov__timer_be_i)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->timer__DOT____Vtogcov__timer_be_i = 
            ((7U & (IData)(vlSelf->timer__DOT____Vtogcov__timer_be_i)) 
             | (8U & (IData)(vlSelf->timer_be_i)));
    }
    if ((1U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfffffffeU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (1U & vlSelf->timer_addr_i));
    }
    if ((2U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfffffffdU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (2U & vlSelf->timer_addr_i));
    }
    if ((4U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfffffffbU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (4U & vlSelf->timer_addr_i));
    }
    if ((8U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfffffff7U & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (8U & vlSelf->timer_addr_i));
    }
    if ((0x10U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xffffffefU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x10U & vlSelf->timer_addr_i));
    }
    if ((0x20U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xffffffdfU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x20U & vlSelf->timer_addr_i));
    }
    if ((0x40U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xffffffbfU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x40U & vlSelf->timer_addr_i));
    }
    if ((0x80U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xffffff7fU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x80U & vlSelf->timer_addr_i));
    }
    if ((0x100U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfffffeffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x100U & vlSelf->timer_addr_i));
    }
    if ((0x200U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfffffdffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x200U & vlSelf->timer_addr_i));
    }
    if ((0x400U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfffffbffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x400U & vlSelf->timer_addr_i));
    }
    if ((0x800U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfffff7ffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x800U & vlSelf->timer_addr_i));
    }
    if ((0x1000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xffffefffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x1000U & vlSelf->timer_addr_i));
    }
    if ((0x2000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xffffdfffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x2000U & vlSelf->timer_addr_i));
    }
    if ((0x4000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xffffbfffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x4000U & vlSelf->timer_addr_i));
    }
    if ((0x8000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xffff7fffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x8000U & vlSelf->timer_addr_i));
    }
    if ((0x10000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfffeffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x10000U & vlSelf->timer_addr_i));
    }
    if ((0x20000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfffdffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x20000U & vlSelf->timer_addr_i));
    }
    if ((0x40000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfffbffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x40000U & vlSelf->timer_addr_i));
    }
    if ((0x80000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfff7ffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x80000U & vlSelf->timer_addr_i));
    }
    if ((0x100000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xffefffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x100000U & vlSelf->timer_addr_i));
    }
    if ((0x200000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xffdfffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x200000U & vlSelf->timer_addr_i));
    }
    if ((0x400000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xffbfffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x400000U & vlSelf->timer_addr_i));
    }
    if ((0x800000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xff7fffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x800000U & vlSelf->timer_addr_i));
    }
    if ((0x1000000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfeffffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x1000000U & vlSelf->timer_addr_i));
    }
    if ((0x2000000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfdffffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x2000000U & vlSelf->timer_addr_i));
    }
    if ((0x4000000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xfbffffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x4000000U & vlSelf->timer_addr_i));
    }
    if ((0x8000000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xf7ffffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x8000000U & vlSelf->timer_addr_i));
    }
    if ((0x10000000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xefffffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x10000000U & vlSelf->timer_addr_i));
    }
    if ((0x20000000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xdfffffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x20000000U & vlSelf->timer_addr_i));
    }
    if ((0x40000000U & (vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0xbfffffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x40000000U & vlSelf->timer_addr_i));
    }
    if (((vlSelf->timer_addr_i ^ vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->timer__DOT____Vtogcov__timer_addr_i 
            = ((0x7fffffffU & vlSelf->timer__DOT____Vtogcov__timer_addr_i) 
               | (0x80000000U & vlSelf->timer_addr_i));
    }
    if ((1U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfffffffeU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (1U & vlSelf->timer_wdata_i));
    }
    if ((2U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfffffffdU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (2U & vlSelf->timer_wdata_i));
    }
    if ((4U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfffffffbU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (4U & vlSelf->timer_wdata_i));
    }
    if ((8U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfffffff7U & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (8U & vlSelf->timer_wdata_i));
    }
    if ((0x10U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xffffffefU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x10U & vlSelf->timer_wdata_i));
    }
    if ((0x20U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xffffffdfU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x20U & vlSelf->timer_wdata_i));
    }
    if ((0x40U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xffffffbfU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x40U & vlSelf->timer_wdata_i));
    }
    if ((0x80U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xffffff7fU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x80U & vlSelf->timer_wdata_i));
    }
    if ((0x100U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfffffeffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x100U & vlSelf->timer_wdata_i));
    }
    if ((0x200U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfffffdffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x200U & vlSelf->timer_wdata_i));
    }
    if ((0x400U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfffffbffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x400U & vlSelf->timer_wdata_i));
    }
    if ((0x800U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfffff7ffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x800U & vlSelf->timer_wdata_i));
    }
    if ((0x1000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xffffefffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x1000U & vlSelf->timer_wdata_i));
    }
    if ((0x2000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xffffdfffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x2000U & vlSelf->timer_wdata_i));
    }
    if ((0x4000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xffffbfffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x4000U & vlSelf->timer_wdata_i));
    }
    if ((0x8000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xffff7fffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x8000U & vlSelf->timer_wdata_i));
    }
    if ((0x10000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfffeffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x10000U & vlSelf->timer_wdata_i));
    }
    if ((0x20000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfffdffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x20000U & vlSelf->timer_wdata_i));
    }
    if ((0x40000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfffbffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x40000U & vlSelf->timer_wdata_i));
    }
    if ((0x80000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfff7ffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x80000U & vlSelf->timer_wdata_i));
    }
    if ((0x100000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xffefffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x100000U & vlSelf->timer_wdata_i));
    }
    if ((0x200000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xffdfffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x200000U & vlSelf->timer_wdata_i));
    }
    if ((0x400000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xffbfffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x400000U & vlSelf->timer_wdata_i));
    }
    if ((0x800000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xff7fffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x800000U & vlSelf->timer_wdata_i));
    }
    if ((0x1000000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfeffffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x1000000U & vlSelf->timer_wdata_i));
    }
    if ((0x2000000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfdffffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x2000000U & vlSelf->timer_wdata_i));
    }
    if ((0x4000000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xfbffffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x4000000U & vlSelf->timer_wdata_i));
    }
    if ((0x8000000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xf7ffffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x8000000U & vlSelf->timer_wdata_i));
    }
    if ((0x10000000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xefffffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x10000000U & vlSelf->timer_wdata_i));
    }
    if ((0x20000000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xdfffffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x20000000U & vlSelf->timer_wdata_i));
    }
    if ((0x40000000U & (vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0xbfffffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x40000000U & vlSelf->timer_wdata_i));
    }
    if (((vlSelf->timer_wdata_i ^ vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->timer__DOT____Vtogcov__timer_wdata_i 
            = ((0x7fffffffU & vlSelf->timer__DOT____Vtogcov__timer_wdata_i) 
               | (0x80000000U & vlSelf->timer_wdata_i));
    }
    vlSelf->timer__DOT__mtime_wdata = ((((8U & (IData)(vlSelf->timer_be_i))
                                          ? (vlSelf->timer_wdata_i 
                                             >> 0x18U)
                                          : (IData)(
                                                    (vlSelf->timer__DOT__mtime_q 
                                                     >> 0x18U))) 
                                        << 0x18U) | 
                                       ((0xff0000U 
                                         & (((4U & (IData)(vlSelf->timer_be_i))
                                              ? (vlSelf->timer_wdata_i 
                                                 >> 0x10U)
                                              : (IData)(
                                                        (vlSelf->timer__DOT__mtime_q 
                                                         >> 0x10U))) 
                                            << 0x10U)) 
                                        | ((0xff00U 
                                            & (((2U 
                                                 & (IData)(vlSelf->timer_be_i))
                                                 ? 
                                                (vlSelf->timer_wdata_i 
                                                 >> 8U)
                                                 : (IData)(
                                                           (vlSelf->timer__DOT__mtime_q 
                                                            >> 8U))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & ((1U 
                                                  & (IData)(vlSelf->timer_be_i))
                                                  ? vlSelf->timer_wdata_i
                                                  : (IData)(vlSelf->timer__DOT__mtime_q))))));
    vlSelf->timer__DOT__mtimeh_wdata = ((((8U & (IData)(vlSelf->timer_be_i))
                                           ? (vlSelf->timer_wdata_i 
                                              >> 0x18U)
                                           : (IData)(
                                                     (vlSelf->timer__DOT__mtime_q 
                                                      >> 0x38U))) 
                                         << 0x18U) 
                                        | ((0xff0000U 
                                            & (((4U 
                                                 & (IData)(vlSelf->timer_be_i))
                                                 ? 
                                                (vlSelf->timer_wdata_i 
                                                 >> 0x10U)
                                                 : (IData)(
                                                           (vlSelf->timer__DOT__mtime_q 
                                                            >> 0x30U))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & (((2U 
                                                    & (IData)(vlSelf->timer_be_i))
                                                    ? 
                                                   (vlSelf->timer_wdata_i 
                                                    >> 8U)
                                                    : (IData)(
                                                              (vlSelf->timer__DOT__mtime_q 
                                                               >> 0x28U))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((1U 
                                                     & (IData)(vlSelf->timer_be_i))
                                                     ? vlSelf->timer_wdata_i
                                                     : (IData)(
                                                               (vlSelf->timer__DOT__mtime_q 
                                                                >> 0x20U)))))));
    vlSelf->timer__DOT__mtimecmp_wdata = ((((8U & (IData)(vlSelf->timer_be_i))
                                             ? (vlSelf->timer_wdata_i 
                                                >> 0x18U)
                                             : (IData)(
                                                       (vlSelf->timer__DOT__mtimecmp_q 
                                                        >> 0x18U))) 
                                           << 0x18U) 
                                          | ((0xff0000U 
                                              & (((4U 
                                                   & (IData)(vlSelf->timer_be_i))
                                                   ? 
                                                  (vlSelf->timer_wdata_i 
                                                   >> 0x10U)
                                                   : (IData)(
                                                             (vlSelf->timer__DOT__mtimecmp_q 
                                                              >> 0x10U))) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((2U 
                                                      & (IData)(vlSelf->timer_be_i))
                                                      ? 
                                                     (vlSelf->timer_wdata_i 
                                                      >> 8U)
                                                      : (IData)(
                                                                (vlSelf->timer__DOT__mtimecmp_q 
                                                                 >> 8U))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((1U 
                                                       & (IData)(vlSelf->timer_be_i))
                                                       ? vlSelf->timer_wdata_i
                                                       : (IData)(vlSelf->timer__DOT__mtimecmp_q))))));
    vlSelf->timer__DOT__mtimecmph_wdata = ((((8U & (IData)(vlSelf->timer_be_i))
                                              ? (vlSelf->timer_wdata_i 
                                                 >> 0x18U)
                                              : (IData)(
                                                        (vlSelf->timer__DOT__mtimecmp_q 
                                                         >> 0x38U))) 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & (((4U 
                                                    & (IData)(vlSelf->timer_be_i))
                                                    ? 
                                                   (vlSelf->timer_wdata_i 
                                                    >> 0x10U)
                                                    : (IData)(
                                                              (vlSelf->timer__DOT__mtimecmp_q 
                                                               >> 0x30U))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (((2U 
                                                       & (IData)(vlSelf->timer_be_i))
                                                       ? 
                                                      (vlSelf->timer_wdata_i 
                                                       >> 8U)
                                                       : (IData)(
                                                                 (vlSelf->timer__DOT__mtimecmp_q 
                                                                  >> 0x28U))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & ((1U 
                                                        & (IData)(vlSelf->timer_be_i))
                                                        ? vlSelf->timer_wdata_i
                                                        : (IData)(
                                                                  (vlSelf->timer__DOT__mtimecmp_q 
                                                                   >> 0x20U)))))));
    vlSelf->timer__DOT__timer_we = ((IData)(vlSelf->timer_req_i) 
                                    & (IData)(vlSelf->timer_we_i));
    if (((IData)(vlSelf->timer__DOT__error_d) ^ (IData)(vlSelf->timer__DOT____Vtogcov__error_d))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->timer__DOT____Vtogcov__error_d = vlSelf->timer__DOT__error_d;
    }
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
    if ((1U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffffeU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (1U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((2U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffffdU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (2U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((4U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffffbU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (4U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((8U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffff7U & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (8U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x10U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffffefU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x10U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x20U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffffdfU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x20U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x40U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffffbfU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x40U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x80U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffff7fU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x80U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x100U & (vlSelf->timer__DOT__mtime_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffeffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x100U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x200U & (vlSelf->timer__DOT__mtime_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffdffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x200U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x400U & (vlSelf->timer__DOT__mtime_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffbffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x400U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x800U & (vlSelf->timer__DOT__mtime_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffff7ffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x800U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x1000U & (vlSelf->timer__DOT__mtime_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffefffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x1000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x2000U & (vlSelf->timer__DOT__mtime_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffdfffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x2000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x4000U & (vlSelf->timer__DOT__mtime_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffbfffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x4000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x8000U & (vlSelf->timer__DOT__mtime_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffff7fffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x8000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x10000U & (vlSelf->timer__DOT__mtime_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffeffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x10000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x20000U & (vlSelf->timer__DOT__mtime_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffdffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x20000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x40000U & (vlSelf->timer__DOT__mtime_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffbffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x40000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x80000U & (vlSelf->timer__DOT__mtime_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfff7ffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x80000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x100000U & (vlSelf->timer__DOT__mtime_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffefffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x100000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x200000U & (vlSelf->timer__DOT__mtime_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffdfffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x200000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x400000U & (vlSelf->timer__DOT__mtime_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffbfffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x400000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x800000U & (vlSelf->timer__DOT__mtime_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xff7fffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x800000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x1000000U & (vlSelf->timer__DOT__mtime_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfeffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x1000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x2000000U & (vlSelf->timer__DOT__mtime_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfdffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x2000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x4000000U & (vlSelf->timer__DOT__mtime_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfbffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x4000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x8000000U & (vlSelf->timer__DOT__mtime_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xf7ffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x8000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x10000000U & (vlSelf->timer__DOT__mtime_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xefffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x10000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x20000000U & (vlSelf->timer__DOT__mtime_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xdfffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x20000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x40000000U & (vlSelf->timer__DOT__mtime_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xbfffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x40000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if (((vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0x7fffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x80000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((1U & (vlSelf->timer__DOT__mtimeh_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffffeU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (1U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((2U & (vlSelf->timer__DOT__mtimeh_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffffdU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (2U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((4U & (vlSelf->timer__DOT__mtimeh_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffffbU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (4U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((8U & (vlSelf->timer__DOT__mtimeh_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffff7U & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (8U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x10U & (vlSelf->timer__DOT__mtimeh_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffffefU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x10U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x20U & (vlSelf->timer__DOT__mtimeh_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffffdfU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x20U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x40U & (vlSelf->timer__DOT__mtimeh_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffffbfU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x40U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x80U & (vlSelf->timer__DOT__mtimeh_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffff7fU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x80U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x100U & (vlSelf->timer__DOT__mtimeh_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffeffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x100U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x200U & (vlSelf->timer__DOT__mtimeh_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffdffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x200U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x400U & (vlSelf->timer__DOT__mtimeh_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffbffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x400U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x800U & (vlSelf->timer__DOT__mtimeh_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffff7ffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x800U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x1000U & (vlSelf->timer__DOT__mtimeh_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffefffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x1000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x2000U & (vlSelf->timer__DOT__mtimeh_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffdfffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x2000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x4000U & (vlSelf->timer__DOT__mtimeh_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffbfffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x4000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x8000U & (vlSelf->timer__DOT__mtimeh_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffff7fffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x8000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x10000U & (vlSelf->timer__DOT__mtimeh_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffeffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x10000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x20000U & (vlSelf->timer__DOT__mtimeh_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffdffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x20000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x40000U & (vlSelf->timer__DOT__mtimeh_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffbffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x40000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x80000U & (vlSelf->timer__DOT__mtimeh_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfff7ffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x80000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x100000U & (vlSelf->timer__DOT__mtimeh_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffefffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x100000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x200000U & (vlSelf->timer__DOT__mtimeh_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffdfffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x200000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x400000U & (vlSelf->timer__DOT__mtimeh_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffbfffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x400000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x800000U & (vlSelf->timer__DOT__mtimeh_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xff7fffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x800000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x1000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfeffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x1000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x2000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfdffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x2000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x4000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfbffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x4000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x8000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xf7ffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x8000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x10000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xefffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x10000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x20000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xdfffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x20000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x40000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xbfffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x40000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if (((vlSelf->timer__DOT__mtimeh_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0x7fffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x80000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((1U & (vlSelf->timer__DOT__mtimecmp_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffffeU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (1U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((2U & (vlSelf->timer__DOT__mtimecmp_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffffdU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (2U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((4U & (vlSelf->timer__DOT__mtimecmp_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffffbU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (4U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((8U & (vlSelf->timer__DOT__mtimecmp_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffff7U & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (8U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x10U & (vlSelf->timer__DOT__mtimecmp_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffffefU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x10U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x20U & (vlSelf->timer__DOT__mtimecmp_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffffdfU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x20U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x40U & (vlSelf->timer__DOT__mtimecmp_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffffbfU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x40U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x80U & (vlSelf->timer__DOT__mtimecmp_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffff7fU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x80U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x100U & (vlSelf->timer__DOT__mtimecmp_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffeffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x100U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x200U & (vlSelf->timer__DOT__mtimecmp_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffdffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x200U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x400U & (vlSelf->timer__DOT__mtimecmp_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffbffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x400U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x800U & (vlSelf->timer__DOT__mtimecmp_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffff7ffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x800U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x1000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffefffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x1000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x2000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffdfffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x2000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x4000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffbfffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x4000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x8000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffff7fffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x8000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x10000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffeffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x10000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x20000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffdffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x20000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x40000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffbffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x40000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x80000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfff7ffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x80000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x100000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffefffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x100000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x200000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffdfffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x200000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x400000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffbfffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x400000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x800000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xff7fffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x800000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x1000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfeffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x1000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x2000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfdffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x2000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x4000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfbffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x4000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x8000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xf7ffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x8000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x10000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xefffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x10000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x20000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xdfffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x20000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x40000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xbfffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x40000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if (((vlSelf->timer__DOT__mtimecmp_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0x7fffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x80000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((1U & (vlSelf->timer__DOT__mtimecmph_wdata 
               ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffffeU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (1U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((2U & (vlSelf->timer__DOT__mtimecmph_wdata 
               ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffffdU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (2U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((4U & (vlSelf->timer__DOT__mtimecmph_wdata 
               ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffffbU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (4U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((8U & (vlSelf->timer__DOT__mtimecmph_wdata 
               ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffff7U & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (8U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x10U & (vlSelf->timer__DOT__mtimecmph_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffffefU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x10U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x20U & (vlSelf->timer__DOT__mtimecmph_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffffdfU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x20U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x40U & (vlSelf->timer__DOT__mtimecmph_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffffbfU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x40U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x80U & (vlSelf->timer__DOT__mtimecmph_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffff7fU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x80U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x100U & (vlSelf->timer__DOT__mtimecmph_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffeffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x100U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x200U & (vlSelf->timer__DOT__mtimecmph_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffdffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x200U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x400U & (vlSelf->timer__DOT__mtimecmph_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffbffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x400U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x800U & (vlSelf->timer__DOT__mtimecmph_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffff7ffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x800U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x1000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffefffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x1000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x2000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffdfffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x2000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x4000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffbfffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x4000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x8000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffff7fffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x8000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x10000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffeffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x10000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x20000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffdffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x20000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x40000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffbffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x40000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x80000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfff7ffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x80000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x100000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffefffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x100000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x200000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffdfffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x200000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x400000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffbfffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x400000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x800000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xff7fffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x800000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x1000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfeffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x1000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x2000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfdffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x2000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x4000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfbffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x4000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x8000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xf7ffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x8000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x10000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xefffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x10000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x20000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xdfffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x20000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x40000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xbfffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x40000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if (((vlSelf->timer__DOT__mtimecmph_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0x7fffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x80000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if (((IData)(vlSelf->timer__DOT__timer_we) ^ (IData)(vlSelf->timer__DOT____Vtogcov__timer_we))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->timer__DOT____Vtogcov__timer_we = vlSelf->timer__DOT__timer_we;
    }
    vlSelf->timer__DOT__mtimecmp_we = ((IData)(vlSelf->timer__DOT__timer_we) 
                                       & (8U == (0x3ffU 
                                                 & vlSelf->timer_addr_i)));
    vlSelf->timer__DOT__mtimecmph_we = ((IData)(vlSelf->timer__DOT__timer_we) 
                                        & (0xcU == 
                                           (0x3ffU 
                                            & vlSelf->timer_addr_i)));
    vlSelf->timer__DOT__mtime_we = ((IData)(vlSelf->timer__DOT__timer_we) 
                                    & (0U == (0x3ffU 
                                              & vlSelf->timer_addr_i)));
    vlSelf->timer__DOT__mtimeh_we = ((IData)(vlSelf->timer__DOT__timer_we) 
                                     & (4U == (0x3ffU 
                                               & vlSelf->timer_addr_i)));
    if (((IData)(vlSelf->timer__DOT__mtimecmp_we) ^ (IData)(vlSelf->timer__DOT____Vtogcov__mtimecmp_we))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_we 
            = vlSelf->timer__DOT__mtimecmp_we;
    }
    if (((IData)(vlSelf->timer__DOT__mtimecmph_we) 
         ^ (IData)(vlSelf->timer__DOT____Vtogcov__mtimecmph_we))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_we 
            = vlSelf->timer__DOT__mtimecmph_we;
    }
    vlSelf->timer__DOT__mtimecmp_d = (((QData)((IData)(
                                                       ((IData)(vlSelf->timer__DOT__mtimecmph_we)
                                                         ? vlSelf->timer__DOT__mtimecmph_wdata
                                                         : (IData)(
                                                                   (vlSelf->timer__DOT__mtimecmp_q 
                                                                    >> 0x20U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->timer__DOT__mtimecmp_we)
                                                                     ? vlSelf->timer__DOT__mtimecmp_wdata
                                                                     : (IData)(vlSelf->timer__DOT__mtimecmp_q)))));
    if (((IData)(vlSelf->timer__DOT__mtime_we) ^ (IData)(vlSelf->timer__DOT____Vtogcov__mtime_we))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->timer__DOT____Vtogcov__mtime_we = vlSelf->timer__DOT__mtime_we;
    }
    if (((IData)(vlSelf->timer__DOT__mtimeh_we) ^ (IData)(vlSelf->timer__DOT____Vtogcov__mtimeh_we))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_we = vlSelf->timer__DOT__mtimeh_we;
    }
    vlSelf->timer__DOT__mtime_d = (((QData)((IData)(
                                                    ((IData)(vlSelf->timer__DOT__mtimeh_we)
                                                      ? vlSelf->timer__DOT__mtimeh_wdata
                                                      : (IData)(
                                                                ((1ULL 
                                                                  + vlSelf->timer__DOT__mtime_q) 
                                                                 >> 0x20U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelf->timer__DOT__mtime_we)
                                                                  ? vlSelf->timer__DOT__mtime_wdata
                                                                  : 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->timer__DOT__mtime_q))))));
    if ((1U & ((IData)(vlSelf->timer__DOT__mtimecmp_d) 
               ^ (IData)(vlSelf->timer__DOT____Vtogcov__mtimecmp_d)))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffffeULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | (IData)((IData)((1U & (IData)(vlSelf->timer__DOT__mtimecmp_d)))));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 1U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffffdULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 2U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffffbULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 3U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffff7ULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 4U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffffefULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 5U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffffdfULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 6U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffffbfULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 7U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffff7fULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 8U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffeffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 9U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffdffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xaU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffbffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xbU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffff7ffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xcU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffefffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xdU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffdfffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xeU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffbfffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xfU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffff7fffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x10U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffeffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x11U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffdffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x12U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffbffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x13U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffff7ffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x14U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffefffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x15U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffdfffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x16U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffbfffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x17U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffff7fffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x18U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffeffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x19U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffdffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffbffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffff7ffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffefffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffdfffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffbfffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffff7fffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x20U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffeffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x21U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffdffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x22U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffbffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x23U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffff7ffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x24U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffefffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x25U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffdfffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x26U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffbfffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x27U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffff7fffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x28U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffeffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x29U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffdffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffbffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffff7ffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffefffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffdfffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffbfffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffff7fffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x30U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffeffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x31U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffdffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x32U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffbffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x33U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfff7ffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x34U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffefffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x35U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffdfffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x36U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffbfffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x37U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xff7fffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x38U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfeffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x39U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfdffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x3aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfbffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x3bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xf7ffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x3cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xefffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x3dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xdfffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x3eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xbfffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelf->timer__DOT__mtimecmp_d ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0x7fffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->timer__DOT__mtime_d) 
               ^ (IData)(vlSelf->timer__DOT____Vtogcov__mtime_d)))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffffeULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->timer__DOT__mtime_d)))));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 1U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffffdULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 1U))))) 
                                                     << 1U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 2U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffffbULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 2U))))) 
                                                     << 2U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 3U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffff7ULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 3U))))) 
                                                     << 3U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 4U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffffefULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 4U))))) 
                                                     << 4U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 5U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffffdfULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 5U))))) 
                                                     << 5U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 6U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffffbfULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 6U))))) 
                                                     << 6U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 7U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffff7fULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 7U))))) 
                                                     << 7U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 8U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffeffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 8U))))) 
                                                     << 8U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 9U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffdffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 9U))))) 
                                                     << 9U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xaU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffbffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xaU))))) 
                                                     << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xbU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffff7ffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xbU))))) 
                                                     << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xcU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffefffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xcU))))) 
                                                     << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xdU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffdfffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xdU))))) 
                                                     << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xeU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffbfffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xeU))))) 
                                                     << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xfU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffff7fffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xfU))))) 
                                                     << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x10U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffeffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x10U))))) 
                                                     << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x11U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffdffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x11U))))) 
                                                     << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x12U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffbffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x12U))))) 
                                                     << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x13U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffff7ffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x13U))))) 
                                                     << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x14U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffefffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x14U))))) 
                                                     << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x15U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffdfffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x15U))))) 
                                                     << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x16U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffbfffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x16U))))) 
                                                     << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x17U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffff7fffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x17U))))) 
                                                     << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x18U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffeffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x18U))))) 
                                                     << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x19U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffdffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x19U))))) 
                                                     << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffbffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1aU))))) 
                                                     << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffff7ffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1bU))))) 
                                                     << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffefffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1cU))))) 
                                                     << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffdfffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1dU))))) 
                                                     << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffbfffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1eU))))) 
                                                     << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffff7fffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1fU))))) 
                                                     << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x20U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffeffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x21U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffdffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x21U))))) 
                                                     << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x22U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffbffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x22U))))) 
                                                     << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x23U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffff7ffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x23U))))) 
                                                     << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x24U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffefffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x24U))))) 
                                                     << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x25U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffdfffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x25U))))) 
                                                     << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x26U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffbfffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x26U))))) 
                                                     << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x27U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffff7fffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x27U))))) 
                                                     << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x28U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffeffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x28U))))) 
                                                     << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x29U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffdffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x29U))))) 
                                                     << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffbffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2aU))))) 
                                                     << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffff7ffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2bU))))) 
                                                     << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffefffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2cU))))) 
                                                     << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffdfffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2dU))))) 
                                                     << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffbfffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2eU))))) 
                                                     << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffff7fffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2fU))))) 
                                                     << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x30U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffeffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x30U))))) 
                                                     << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x31U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffdffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x31U))))) 
                                                     << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x32U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffbffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x32U))))) 
                                                     << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x33U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfff7ffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x33U))))) 
                                                     << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x34U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffefffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x34U))))) 
                                                     << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x35U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffdfffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x35U))))) 
                                                     << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x36U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffbfffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x36U))))) 
                                                     << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x37U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xff7fffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x37U))))) 
                                                     << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x38U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfeffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x38U))))) 
                                                     << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x39U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfdffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x39U))))) 
                                                     << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x3aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfbffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3aU))))) 
                                                     << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x3bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xf7ffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3bU))))) 
                                                     << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x3cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xefffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3cU))))) 
                                                     << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x3dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xdfffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3dU))))) 
                                                     << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x3eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xbfffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3eU))))) 
                                                     << 0x3eU));
    }
    if ((IData)(((vlSelf->timer__DOT__mtime_d ^ vlSelf->timer__DOT____Vtogcov__mtime_d) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0x7fffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer___024root___dump_triggers__act(Vtimer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtimer___024root___eval_triggers__act(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->rst_ni)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtimer___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtimer___024root___nba_sequent__TOP__0(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___nba_sequent__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[636]);
    ++(vlSymsp->__Vcoverage[639]);
    ++(vlSymsp->__Vcoverage[651]);
    if (vlSelf->rst_ni) {
        ++(vlSymsp->__Vcoverage[631]);
        ++(vlSymsp->__Vcoverage[638]);
        ++(vlSymsp->__Vcoverage[650]);
        if (((IData)(vlSelf->timer__DOT__mtimecmp_we) 
             | (IData)(vlSelf->timer__DOT__mtimecmph_we))) {
            ++(vlSymsp->__Vcoverage[633]);
            vlSelf->timer__DOT__mtimecmp_q = vlSelf->timer__DOT__mtimecmp_d;
        }
        if ((1U & (~ ((IData)(vlSelf->timer__DOT__mtimecmp_we) 
                      | (IData)(vlSelf->timer__DOT__mtimecmph_we))))) {
            ++(vlSymsp->__Vcoverage[634]);
        }
        vlSelf->timer__DOT__mtime_q = vlSelf->timer__DOT__mtime_d;
    } else {
        vlSelf->timer__DOT__mtime_q = 0ULL;
        vlSelf->timer__DOT__mtimecmp_q = 0xffffffffffffffffULL;
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        ++(vlSymsp->__Vcoverage[630]);
        ++(vlSymsp->__Vcoverage[635]);
        ++(vlSymsp->__Vcoverage[637]);
        ++(vlSymsp->__Vcoverage[649]);
    }
    vlSelf->timer__DOT__interrupt_q = ((IData)(vlSelf->rst_ni) 
                                       && (IData)(vlSelf->timer__DOT__interrupt_d));
    vlSelf->timer__DOT__rvalid_q = ((IData)(vlSelf->rst_ni) 
                                    && (IData)(vlSelf->timer_req_i));
    if (((IData)(vlSelf->timer__DOT__interrupt_q) ^ (IData)(vlSelf->timer__DOT____Vtogcov__interrupt_q))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->timer__DOT____Vtogcov__interrupt_q 
            = vlSelf->timer__DOT__interrupt_q;
    }
    vlSelf->timer_intr_o = vlSelf->timer__DOT__interrupt_q;
    if (((IData)(vlSelf->timer__DOT__rvalid_q) ^ (IData)(vlSelf->timer__DOT____Vtogcov__rvalid_q))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->timer__DOT____Vtogcov__rvalid_q = vlSelf->timer__DOT__rvalid_q;
    }
    vlSelf->timer_rvalid_o = vlSelf->timer__DOT__rvalid_q;
    if ((1U & ((IData)(vlSelf->timer__DOT__mtime_q) 
               ^ (IData)(vlSelf->timer__DOT____Vtogcov__mtime_q)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffffffffeULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->timer__DOT__mtime_q)))));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 1U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffffffffdULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 1U))))) 
                                                     << 1U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 2U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffffffffbULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 2U))))) 
                                                     << 2U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 3U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffffffff7ULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 3U))))) 
                                                     << 3U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 4U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffffffffefULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 4U))))) 
                                                     << 4U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 5U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffffffffdfULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 5U))))) 
                                                     << 5U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 6U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffffffffbfULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 6U))))) 
                                                     << 6U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 7U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffffffff7fULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 7U))))) 
                                                     << 7U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 8U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffffffeffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 8U))))) 
                                                     << 8U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 9U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffffffdffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 9U))))) 
                                                     << 9U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0xaU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffffffbffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0xaU))))) 
                                                     << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0xbU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffffff7ffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0xbU))))) 
                                                     << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0xcU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffffffefffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0xcU))))) 
                                                     << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0xdU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffffffdfffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0xdU))))) 
                                                     << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0xeU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffffffbfffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0xeU))))) 
                                                     << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0xfU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffffff7fffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0xfU))))) 
                                                     << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x10U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffffeffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x10U))))) 
                                                     << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x11U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffffdffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x11U))))) 
                                                     << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x12U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffffbffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x12U))))) 
                                                     << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x13U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffff7ffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x13U))))) 
                                                     << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x14U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffffefffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x14U))))) 
                                                     << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x15U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffffdfffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x15U))))) 
                                                     << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x16U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffffbfffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x16U))))) 
                                                     << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x17U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffff7fffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x17U))))) 
                                                     << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x18U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffeffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x18U))))) 
                                                     << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x19U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffdffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x19U))))) 
                                                     << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x1aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffffbffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x1aU))))) 
                                                     << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x1bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffff7ffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x1bU))))) 
                                                     << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x1cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffefffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x1cU))))) 
                                                     << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x1dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffdfffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x1dU))))) 
                                                     << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x1eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffffbfffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x1eU))))) 
                                                     << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x1fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffff7fffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x1fU))))) 
                                                     << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x20U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffeffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x21U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffdffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x21U))))) 
                                                     << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x22U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffffbffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x22U))))) 
                                                     << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x23U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffff7ffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x23U))))) 
                                                     << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x24U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffefffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x24U))))) 
                                                     << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x25U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffdfffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x25U))))) 
                                                     << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x26U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffffbfffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x26U))))) 
                                                     << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x27U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffff7fffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x27U))))) 
                                                     << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x28U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffeffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x28U))))) 
                                                     << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x29U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffdffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x29U))))) 
                                                     << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x2aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffffbffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x2aU))))) 
                                                     << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x2bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffff7ffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x2bU))))) 
                                                     << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x2cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffefffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x2cU))))) 
                                                     << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x2dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffdfffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x2dU))))) 
                                                     << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x2eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffffbfffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x2eU))))) 
                                                     << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x2fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffff7fffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x2fU))))) 
                                                     << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x30U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffeffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x30U))))) 
                                                     << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x31U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffdffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x31U))))) 
                                                     << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x32U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfffbffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x32U))))) 
                                                     << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x33U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfff7ffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x33U))))) 
                                                     << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x34U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffefffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x34U))))) 
                                                     << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x35U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffdfffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x35U))))) 
                                                     << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x36U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xffbfffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x36U))))) 
                                                     << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x37U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xff7fffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x37U))))) 
                                                     << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x38U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfeffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x38U))))) 
                                                     << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x39U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfdffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x39U))))) 
                                                     << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x3aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xfbffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x3aU))))) 
                                                     << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x3bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xf7ffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x3bU))))) 
                                                     << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x3cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xefffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x3cU))))) 
                                                     << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x3dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xdfffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x3dU))))) 
                                                     << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_q 
                        >> 0x3eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_q 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0xbfffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x3eU))))) 
                                                     << 0x3eU));
    }
    if ((IData)(((vlSelf->timer__DOT__mtime_q ^ vlSelf->timer__DOT____Vtogcov__mtime_q) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->timer__DOT____Vtogcov__mtime_q = ((0x7fffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_q) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_q 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->timer__DOT__mtime_q)) 
               ^ (IData)(vlSelf->timer__DOT____Vtogcov__mtime_inc)))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffffffffeULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | (IData)((IData)((1U & ((IData)(1U) + (IData)(vlSelf->timer__DOT__mtime_q))))));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 1U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffffffffdULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 2U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffffffffbULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 3U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffffffff7ULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 4U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffffffffefULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 5U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffffffffdfULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 6U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffffffffbfULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 7U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffffffff7fULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 8U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffffffeffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 9U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffffffdffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0xaU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffffffbffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0xbU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffffff7ffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0xcU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffffffefffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0xdU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffffffdfffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0xeU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffffffbfffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0xfU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffffff7fffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x10U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffffeffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x11U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffffdffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x12U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffffbffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x13U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffff7ffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x14U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffffefffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x15U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffffdfffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x16U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffffbfffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x17U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffff7fffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x18U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffeffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x19U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffdffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x1aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffffbffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x1bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffff7ffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x1cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffefffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x1dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffdfffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x1eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffffbfffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x1fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffff7fffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x20U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffeffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x21U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffdffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x22U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffffbffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x23U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffff7ffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x24U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffefffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x25U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffdfffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x26U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffffbfffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x27U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffff7fffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x28U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffeffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x29U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffdffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x2aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffffbffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x2bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffff7ffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x2cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffefffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x2dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffdfffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x2eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffffbfffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x2fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffff7fffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x30U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffeffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x31U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffdffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x32U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfffbffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x33U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfff7ffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x34U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffefffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x35U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffdfffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x36U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xffbfffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x37U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xff7fffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x38U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfeffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x39U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfdffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x3aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xfbffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x3bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xf7ffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x3cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xefffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x3dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xdfffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x3eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0xbfffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)(((1ULL + vlSelf->timer__DOT__mtime_q) 
                        >> 0x3fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_inc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->timer__DOT____Vtogcov__mtime_inc = 
            ((0x7fffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtime_inc) 
             | ((QData)((IData)((1U & (IData)(((1ULL 
                                                + vlSelf->timer__DOT__mtime_q) 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    vlSelf->timer__DOT__mtime_wdata = ((((8U & (IData)(vlSelf->timer_be_i))
                                          ? (vlSelf->timer_wdata_i 
                                             >> 0x18U)
                                          : (IData)(
                                                    (vlSelf->timer__DOT__mtime_q 
                                                     >> 0x18U))) 
                                        << 0x18U) | 
                                       ((0xff0000U 
                                         & (((4U & (IData)(vlSelf->timer_be_i))
                                              ? (vlSelf->timer_wdata_i 
                                                 >> 0x10U)
                                              : (IData)(
                                                        (vlSelf->timer__DOT__mtime_q 
                                                         >> 0x10U))) 
                                            << 0x10U)) 
                                        | ((0xff00U 
                                            & (((2U 
                                                 & (IData)(vlSelf->timer_be_i))
                                                 ? 
                                                (vlSelf->timer_wdata_i 
                                                 >> 8U)
                                                 : (IData)(
                                                           (vlSelf->timer__DOT__mtime_q 
                                                            >> 8U))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & ((1U 
                                                  & (IData)(vlSelf->timer_be_i))
                                                  ? vlSelf->timer_wdata_i
                                                  : (IData)(vlSelf->timer__DOT__mtime_q))))));
    vlSelf->timer__DOT__mtimeh_wdata = ((((8U & (IData)(vlSelf->timer_be_i))
                                           ? (vlSelf->timer_wdata_i 
                                              >> 0x18U)
                                           : (IData)(
                                                     (vlSelf->timer__DOT__mtime_q 
                                                      >> 0x38U))) 
                                         << 0x18U) 
                                        | ((0xff0000U 
                                            & (((4U 
                                                 & (IData)(vlSelf->timer_be_i))
                                                 ? 
                                                (vlSelf->timer_wdata_i 
                                                 >> 0x10U)
                                                 : (IData)(
                                                           (vlSelf->timer__DOT__mtime_q 
                                                            >> 0x30U))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & (((2U 
                                                    & (IData)(vlSelf->timer_be_i))
                                                    ? 
                                                   (vlSelf->timer_wdata_i 
                                                    >> 8U)
                                                    : (IData)(
                                                              (vlSelf->timer__DOT__mtime_q 
                                                               >> 0x28U))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((1U 
                                                     & (IData)(vlSelf->timer_be_i))
                                                     ? vlSelf->timer_wdata_i
                                                     : (IData)(
                                                               (vlSelf->timer__DOT__mtime_q 
                                                                >> 0x20U)))))));
    vlSelf->timer__DOT__interrupt_d = (vlSelf->timer__DOT__mtime_q 
                                       >= vlSelf->timer__DOT__mtimecmp_q);
    if ((1U & ((IData)(vlSelf->timer__DOT__mtimecmp_q) 
               ^ (IData)(vlSelf->timer__DOT____Vtogcov__mtimecmp_q)))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffffffffeULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | (IData)((IData)((1U & (IData)(vlSelf->timer__DOT__mtimecmp_q)))));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 1U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffffffffdULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 2U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffffffffbULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 3U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffffffff7ULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 4U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffffffffefULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 5U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffffffffdfULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 6U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffffffffbfULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 7U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffffffff7fULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 8U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffffffeffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 9U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffffffdffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0xaU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffffffbffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0xbU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffffff7ffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0xcU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffffffefffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0xdU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffffffdfffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0xeU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffffffbfffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0xfU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffffff7fffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x10U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffffeffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x11U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffffdffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x12U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffffbffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x13U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffff7ffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x14U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffffefffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x15U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffffdfffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x16U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffffbfffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x17U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffff7fffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x18U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffeffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x19U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffdffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x1aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffffbffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x1bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffff7ffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x1cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffefffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x1dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffdfffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x1eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffffbfffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x1fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffff7fffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x20U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffeffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x21U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffdffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x22U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffffbffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x23U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffff7ffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x24U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffefffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x25U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffdfffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x26U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffffbfffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x27U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffff7fffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x28U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffeffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x29U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffdffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x2aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffffbffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x2bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffff7ffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x2cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffefffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x2dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffdfffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x2eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffffbfffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x2fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffff7fffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x30U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffeffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x31U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffdffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x32U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfffbffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x33U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfff7ffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x34U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffefffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x35U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffdfffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x36U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xffbfffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x37U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xff7fffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x38U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfeffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x39U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfdffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x3aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xfbffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x3bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xf7ffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x3cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xefffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x3dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xdfffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_q 
                        >> 0x3eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_q 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0xbfffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelf->timer__DOT__mtimecmp_q ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_q = 
            ((0x7fffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_q) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_q 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    vlSelf->timer__DOT__mtimecmp_wdata = ((((8U & (IData)(vlSelf->timer_be_i))
                                             ? (vlSelf->timer_wdata_i 
                                                >> 0x18U)
                                             : (IData)(
                                                       (vlSelf->timer__DOT__mtimecmp_q 
                                                        >> 0x18U))) 
                                           << 0x18U) 
                                          | ((0xff0000U 
                                              & (((4U 
                                                   & (IData)(vlSelf->timer_be_i))
                                                   ? 
                                                  (vlSelf->timer_wdata_i 
                                                   >> 0x10U)
                                                   : (IData)(
                                                             (vlSelf->timer__DOT__mtimecmp_q 
                                                              >> 0x10U))) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((2U 
                                                      & (IData)(vlSelf->timer_be_i))
                                                      ? 
                                                     (vlSelf->timer_wdata_i 
                                                      >> 8U)
                                                      : (IData)(
                                                                (vlSelf->timer__DOT__mtimecmp_q 
                                                                 >> 8U))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((1U 
                                                       & (IData)(vlSelf->timer_be_i))
                                                       ? vlSelf->timer_wdata_i
                                                       : (IData)(vlSelf->timer__DOT__mtimecmp_q))))));
    vlSelf->timer__DOT__mtimecmph_wdata = ((((8U & (IData)(vlSelf->timer_be_i))
                                              ? (vlSelf->timer_wdata_i 
                                                 >> 0x18U)
                                              : (IData)(
                                                        (vlSelf->timer__DOT__mtimecmp_q 
                                                         >> 0x38U))) 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & (((4U 
                                                    & (IData)(vlSelf->timer_be_i))
                                                    ? 
                                                   (vlSelf->timer_wdata_i 
                                                    >> 0x10U)
                                                    : (IData)(
                                                              (vlSelf->timer__DOT__mtimecmp_q 
                                                               >> 0x30U))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (((2U 
                                                       & (IData)(vlSelf->timer_be_i))
                                                       ? 
                                                      (vlSelf->timer_wdata_i 
                                                       >> 8U)
                                                       : (IData)(
                                                                 (vlSelf->timer__DOT__mtimecmp_q 
                                                                  >> 0x28U))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & ((1U 
                                                        & (IData)(vlSelf->timer_be_i))
                                                        ? vlSelf->timer_wdata_i
                                                        : (IData)(
                                                                  (vlSelf->timer__DOT__mtimecmp_q 
                                                                   >> 0x20U)))))));
    if (((IData)(vlSelf->timer_intr_o) ^ (IData)(vlSelf->timer__DOT____Vtogcov__timer_intr_o))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->timer__DOT____Vtogcov__timer_intr_o 
            = vlSelf->timer_intr_o;
    }
    if (((IData)(vlSelf->timer_rvalid_o) ^ (IData)(vlSelf->timer__DOT____Vtogcov__timer_rvalid_o))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->timer__DOT____Vtogcov__timer_rvalid_o 
            = vlSelf->timer_rvalid_o;
    }
    if ((1U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffffeU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (1U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((2U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffffdU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (2U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((4U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffffbU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (4U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((8U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffff7U & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (8U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x10U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffffefU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x10U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x20U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffffdfU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x20U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x40U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffffbfU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x40U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x80U & (vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffff7fU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x80U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x100U & (vlSelf->timer__DOT__mtime_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffeffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x100U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x200U & (vlSelf->timer__DOT__mtime_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffdffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x200U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x400U & (vlSelf->timer__DOT__mtime_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffffbffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x400U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x800U & (vlSelf->timer__DOT__mtime_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffff7ffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x800U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x1000U & (vlSelf->timer__DOT__mtime_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffefffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x1000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x2000U & (vlSelf->timer__DOT__mtime_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffdfffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x2000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x4000U & (vlSelf->timer__DOT__mtime_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffffbfffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x4000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x8000U & (vlSelf->timer__DOT__mtime_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffff7fffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x8000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x10000U & (vlSelf->timer__DOT__mtime_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffeffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x10000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x20000U & (vlSelf->timer__DOT__mtime_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffdffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x20000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x40000U & (vlSelf->timer__DOT__mtime_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfffbffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x40000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x80000U & (vlSelf->timer__DOT__mtime_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfff7ffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x80000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x100000U & (vlSelf->timer__DOT__mtime_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffefffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x100000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x200000U & (vlSelf->timer__DOT__mtime_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffdfffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x200000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x400000U & (vlSelf->timer__DOT__mtime_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xffbfffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x400000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x800000U & (vlSelf->timer__DOT__mtime_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xff7fffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x800000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x1000000U & (vlSelf->timer__DOT__mtime_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfeffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x1000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x2000000U & (vlSelf->timer__DOT__mtime_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfdffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x2000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x4000000U & (vlSelf->timer__DOT__mtime_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xfbffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x4000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x8000000U & (vlSelf->timer__DOT__mtime_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xf7ffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x8000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x10000000U & (vlSelf->timer__DOT__mtime_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xefffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x10000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x20000000U & (vlSelf->timer__DOT__mtime_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xdfffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x20000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((0x40000000U & (vlSelf->timer__DOT__mtime_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0xbfffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x40000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if (((vlSelf->timer__DOT__mtime_wdata ^ vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->timer__DOT____Vtogcov__mtime_wdata 
            = ((0x7fffffffU & vlSelf->timer__DOT____Vtogcov__mtime_wdata) 
               | (0x80000000U & vlSelf->timer__DOT__mtime_wdata));
    }
    if ((1U & (vlSelf->timer__DOT__mtimeh_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffffeU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (1U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((2U & (vlSelf->timer__DOT__mtimeh_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffffdU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (2U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((4U & (vlSelf->timer__DOT__mtimeh_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffffbU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (4U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((8U & (vlSelf->timer__DOT__mtimeh_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffff7U & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (8U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x10U & (vlSelf->timer__DOT__mtimeh_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffffefU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x10U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x20U & (vlSelf->timer__DOT__mtimeh_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffffdfU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x20U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x40U & (vlSelf->timer__DOT__mtimeh_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffffbfU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x40U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x80U & (vlSelf->timer__DOT__mtimeh_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffff7fU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x80U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x100U & (vlSelf->timer__DOT__mtimeh_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffeffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x100U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x200U & (vlSelf->timer__DOT__mtimeh_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffdffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x200U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x400U & (vlSelf->timer__DOT__mtimeh_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffffbffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x400U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x800U & (vlSelf->timer__DOT__mtimeh_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffff7ffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x800U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x1000U & (vlSelf->timer__DOT__mtimeh_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffefffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x1000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x2000U & (vlSelf->timer__DOT__mtimeh_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffdfffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x2000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x4000U & (vlSelf->timer__DOT__mtimeh_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffffbfffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x4000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x8000U & (vlSelf->timer__DOT__mtimeh_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffff7fffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x8000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x10000U & (vlSelf->timer__DOT__mtimeh_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffeffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x10000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x20000U & (vlSelf->timer__DOT__mtimeh_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffdffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x20000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x40000U & (vlSelf->timer__DOT__mtimeh_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfffbffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x40000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x80000U & (vlSelf->timer__DOT__mtimeh_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfff7ffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x80000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x100000U & (vlSelf->timer__DOT__mtimeh_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffefffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x100000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x200000U & (vlSelf->timer__DOT__mtimeh_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffdfffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x200000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x400000U & (vlSelf->timer__DOT__mtimeh_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xffbfffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x400000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x800000U & (vlSelf->timer__DOT__mtimeh_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xff7fffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x800000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x1000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfeffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x1000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x2000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfdffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x2000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x4000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xfbffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x4000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x8000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xf7ffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x8000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x10000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xefffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x10000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x20000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xdfffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x20000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if ((0x40000000U & (vlSelf->timer__DOT__mtimeh_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0xbfffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x40000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    if (((vlSelf->timer__DOT__mtimeh_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->timer__DOT____Vtogcov__mtimeh_wdata 
            = ((0x7fffffffU & vlSelf->timer__DOT____Vtogcov__mtimeh_wdata) 
               | (0x80000000U & vlSelf->timer__DOT__mtimeh_wdata));
    }
    vlSelf->timer__DOT__mtime_d = (((QData)((IData)(
                                                    ((IData)(vlSelf->timer__DOT__mtimeh_we)
                                                      ? vlSelf->timer__DOT__mtimeh_wdata
                                                      : (IData)(
                                                                ((1ULL 
                                                                  + vlSelf->timer__DOT__mtime_q) 
                                                                 >> 0x20U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelf->timer__DOT__mtime_we)
                                                                  ? vlSelf->timer__DOT__mtime_wdata
                                                                  : 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->timer__DOT__mtime_q))))));
    if (((IData)(vlSelf->timer__DOT__interrupt_d) ^ (IData)(vlSelf->timer__DOT____Vtogcov__interrupt_d))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->timer__DOT____Vtogcov__interrupt_d 
            = vlSelf->timer__DOT__interrupt_d;
    }
    if ((1U & (vlSelf->timer__DOT__mtimecmp_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffffeU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (1U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((2U & (vlSelf->timer__DOT__mtimecmp_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffffdU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (2U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((4U & (vlSelf->timer__DOT__mtimecmp_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffffbU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (4U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((8U & (vlSelf->timer__DOT__mtimecmp_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffff7U & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (8U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x10U & (vlSelf->timer__DOT__mtimecmp_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffffefU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x10U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x20U & (vlSelf->timer__DOT__mtimecmp_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffffdfU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x20U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x40U & (vlSelf->timer__DOT__mtimecmp_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffffbfU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x40U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x80U & (vlSelf->timer__DOT__mtimecmp_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffff7fU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x80U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x100U & (vlSelf->timer__DOT__mtimecmp_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffeffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x100U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x200U & (vlSelf->timer__DOT__mtimecmp_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffdffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x200U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x400U & (vlSelf->timer__DOT__mtimecmp_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffffbffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x400U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x800U & (vlSelf->timer__DOT__mtimecmp_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffff7ffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x800U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x1000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffefffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x1000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x2000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffdfffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x2000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x4000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffffbfffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x4000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x8000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffff7fffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x8000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x10000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffeffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x10000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x20000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffdffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x20000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x40000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfffbffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x40000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x80000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfff7ffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x80000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x100000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffefffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x100000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x200000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffdfffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x200000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x400000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xffbfffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x400000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x800000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xff7fffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x800000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x1000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfeffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x1000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x2000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfdffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x2000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x4000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xfbffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x4000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x8000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xf7ffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x8000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x10000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xefffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x10000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x20000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xdfffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x20000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((0x40000000U & (vlSelf->timer__DOT__mtimecmp_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0xbfffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x40000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if (((vlSelf->timer__DOT__mtimecmp_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata 
            = ((0x7fffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata) 
               | (0x80000000U & vlSelf->timer__DOT__mtimecmp_wdata));
    }
    if ((1U & (vlSelf->timer__DOT__mtimecmph_wdata 
               ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffffeU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (1U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((2U & (vlSelf->timer__DOT__mtimecmph_wdata 
               ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffffdU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (2U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((4U & (vlSelf->timer__DOT__mtimecmph_wdata 
               ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffffbU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (4U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((8U & (vlSelf->timer__DOT__mtimecmph_wdata 
               ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffff7U & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (8U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x10U & (vlSelf->timer__DOT__mtimecmph_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffffefU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x10U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x20U & (vlSelf->timer__DOT__mtimecmph_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffffdfU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x20U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x40U & (vlSelf->timer__DOT__mtimecmph_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffffbfU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x40U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x80U & (vlSelf->timer__DOT__mtimecmph_wdata 
                  ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffff7fU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x80U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x100U & (vlSelf->timer__DOT__mtimecmph_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffeffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x100U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x200U & (vlSelf->timer__DOT__mtimecmph_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffdffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x200U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x400U & (vlSelf->timer__DOT__mtimecmph_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffffbffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x400U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x800U & (vlSelf->timer__DOT__mtimecmph_wdata 
                   ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffff7ffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x800U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x1000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffefffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x1000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x2000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffdfffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x2000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x4000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffffbfffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x4000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x8000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                    ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffff7fffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x8000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x10000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffeffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x10000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x20000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffdffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x20000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x40000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfffbffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x40000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x80000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                     ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfff7ffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x80000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x100000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffefffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x100000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x200000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffdfffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x200000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x400000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xffbfffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x400000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x800000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                      ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xff7fffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x800000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x1000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfeffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x1000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x2000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfdffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x2000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x4000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xfbffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x4000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x8000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                       ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xf7ffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x8000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x10000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xefffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x10000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x20000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xdfffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x20000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if ((0x40000000U & (vlSelf->timer__DOT__mtimecmph_wdata 
                        ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0xbfffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x40000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    if (((vlSelf->timer__DOT__mtimecmph_wdata ^ vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata 
            = ((0x7fffffffU & vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata) 
               | (0x80000000U & vlSelf->timer__DOT__mtimecmph_wdata));
    }
    vlSelf->timer__DOT__mtimecmp_d = (((QData)((IData)(
                                                       ((IData)(vlSelf->timer__DOT__mtimecmph_we)
                                                         ? vlSelf->timer__DOT__mtimecmph_wdata
                                                         : (IData)(
                                                                   (vlSelf->timer__DOT__mtimecmp_q 
                                                                    >> 0x20U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->timer__DOT__mtimecmp_we)
                                                                     ? vlSelf->timer__DOT__mtimecmp_wdata
                                                                     : (IData)(vlSelf->timer__DOT__mtimecmp_q)))));
    if ((1U & ((IData)(vlSelf->timer__DOT__mtime_d) 
               ^ (IData)(vlSelf->timer__DOT____Vtogcov__mtime_d)))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffffeULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->timer__DOT__mtime_d)))));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 1U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffffdULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 1U))))) 
                                                     << 1U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 2U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffffbULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 2U))))) 
                                                     << 2U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 3U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffff7ULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 3U))))) 
                                                     << 3U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 4U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffffefULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 4U))))) 
                                                     << 4U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 5U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffffdfULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 5U))))) 
                                                     << 5U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 6U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffffbfULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 6U))))) 
                                                     << 6U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 7U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffff7fULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 7U))))) 
                                                     << 7U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 8U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffeffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 8U))))) 
                                                     << 8U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 9U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffdffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 9U))))) 
                                                     << 9U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xaU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffffbffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xaU))))) 
                                                     << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xbU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffff7ffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xbU))))) 
                                                     << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xcU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffefffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xcU))))) 
                                                     << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xdU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffdfffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xdU))))) 
                                                     << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xeU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffffbfffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xeU))))) 
                                                     << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0xfU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffff7fffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0xfU))))) 
                                                     << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x10U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffeffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x10U))))) 
                                                     << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x11U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffdffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x11U))))) 
                                                     << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x12U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffffbffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x12U))))) 
                                                     << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x13U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffff7ffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x13U))))) 
                                                     << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x14U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffefffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x14U))))) 
                                                     << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x15U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffdfffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x15U))))) 
                                                     << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x16U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffffbfffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x16U))))) 
                                                     << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x17U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffff7fffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x17U))))) 
                                                     << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x18U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffeffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x18U))))) 
                                                     << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x19U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffdffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x19U))))) 
                                                     << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffffbffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1aU))))) 
                                                     << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffff7ffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1bU))))) 
                                                     << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffefffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1cU))))) 
                                                     << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffdfffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1dU))))) 
                                                     << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffffbfffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1eU))))) 
                                                     << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x1fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffff7fffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x1fU))))) 
                                                     << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x20U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffeffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x21U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffdffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x21U))))) 
                                                     << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x22U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffffbffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x22U))))) 
                                                     << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x23U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffff7ffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x23U))))) 
                                                     << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x24U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffefffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x24U))))) 
                                                     << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x25U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffdfffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x25U))))) 
                                                     << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x26U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffffbfffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x26U))))) 
                                                     << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x27U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffff7fffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x27U))))) 
                                                     << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x28U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffeffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x28U))))) 
                                                     << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x29U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffdffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x29U))))) 
                                                     << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffffbffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2aU))))) 
                                                     << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffff7ffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2bU))))) 
                                                     << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffefffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2cU))))) 
                                                     << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffdfffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2dU))))) 
                                                     << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffffbfffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2eU))))) 
                                                     << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x2fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffff7fffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x2fU))))) 
                                                     << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x30U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffeffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x30U))))) 
                                                     << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x31U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffdffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x31U))))) 
                                                     << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x32U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfffbffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x32U))))) 
                                                     << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x33U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfff7ffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x33U))))) 
                                                     << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x34U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffefffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x34U))))) 
                                                     << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x35U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffdfffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x35U))))) 
                                                     << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x36U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xffbfffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x36U))))) 
                                                     << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x37U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xff7fffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x37U))))) 
                                                     << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x38U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfeffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x38U))))) 
                                                     << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x39U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfdffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x39U))))) 
                                                     << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x3aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xfbffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3aU))))) 
                                                     << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x3bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xf7ffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3bU))))) 
                                                     << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x3cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xefffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3cU))))) 
                                                     << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x3dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xdfffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3dU))))) 
                                                     << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtime_d 
                        >> 0x3eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtime_d 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0xbfffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3eU))))) 
                                                     << 0x3eU));
    }
    if ((IData)(((vlSelf->timer__DOT__mtime_d ^ vlSelf->timer__DOT____Vtogcov__mtime_d) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->timer__DOT____Vtogcov__mtime_d = ((0x7fffffffffffffffULL 
                                                   & vlSelf->timer__DOT____Vtogcov__mtime_d) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->timer__DOT__mtime_d 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->timer__DOT__mtimecmp_d) 
               ^ (IData)(vlSelf->timer__DOT____Vtogcov__mtimecmp_d)))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffffeULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | (IData)((IData)((1U & (IData)(vlSelf->timer__DOT__mtimecmp_d)))));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 1U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffffdULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 2U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffffbULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 3U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffff7ULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 4U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffffefULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 5U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffffdfULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 6U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffffbfULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 7U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffff7fULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 8U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffeffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 9U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffdffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xaU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffffbffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xbU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffff7ffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xcU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffefffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xdU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffdfffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xeU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffffbfffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0xfU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffff7fffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x10U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffeffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x11U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffdffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x12U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffffbffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x13U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffff7ffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x14U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffefffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x15U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffdfffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x16U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffffbfffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x17U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffff7fffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x18U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffeffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x19U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffdffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffffbffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffff7ffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffefffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffdfffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffffbfffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x1fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffff7fffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x20U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffeffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x21U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffdffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x22U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffffbffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x23U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffff7ffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x24U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffefffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x25U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffdfffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x26U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffffbfffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x27U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffff7fffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x28U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffeffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x29U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffdffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffffbffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffff7ffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffefffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffdfffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffffbfffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x2fU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffff7fffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x30U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffeffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x31U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffdffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x32U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfffbffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x33U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfff7ffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x34U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffefffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x35U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffdfffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x36U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xffbfffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x37U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xff7fffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x38U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfeffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x39U)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfdffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x3aU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xfbffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x3bU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xf7ffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x3cU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xefffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x3dU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xdfffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->timer__DOT__mtimecmp_d 
                        >> 0x3eU)) ^ (IData)((vlSelf->timer__DOT____Vtogcov__mtimecmp_d 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0xbfffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelf->timer__DOT__mtimecmp_d ^ vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->timer__DOT____Vtogcov__mtimecmp_d = 
            ((0x7fffffffffffffffULL & vlSelf->timer__DOT____Vtogcov__mtimecmp_d) 
             | ((QData)((IData)((1U & (IData)((vlSelf->timer__DOT__mtimecmp_d 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
}

VL_INLINE_OPT void Vtimer___024root___nba_sequent__TOP__1(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___nba_sequent__TOP__1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[648]);
    if (vlSelf->timer_req_i) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->timer__DOT__error_q = vlSelf->timer__DOT__error_d;
        vlSelf->timer__DOT__rdata_q = vlSelf->timer__DOT__rdata_d;
    }
    if ((1U & (~ (IData)(vlSelf->timer_req_i)))) {
        ++(vlSymsp->__Vcoverage[647]);
    }
    if (((IData)(vlSelf->timer__DOT__error_q) ^ (IData)(vlSelf->timer__DOT____Vtogcov__error_q))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->timer__DOT____Vtogcov__error_q = vlSelf->timer__DOT__error_q;
    }
    vlSelf->timer_err_o = vlSelf->timer__DOT__error_q;
    if ((1U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfffffffeU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (1U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((2U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfffffffdU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (2U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((4U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfffffffbU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (4U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((8U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfffffff7U 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (8U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x10U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xffffffefU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x10U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x20U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xffffffdfU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x20U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x40U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xffffffbfU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x40U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x80U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xffffff7fU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x80U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x100U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfffffeffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x100U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x200U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfffffdffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x200U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x400U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfffffbffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x400U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x800U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfffff7ffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x800U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x1000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xffffefffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x1000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x2000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xffffdfffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x2000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x4000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xffffbfffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x4000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x8000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xffff7fffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x8000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x10000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfffeffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x10000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x20000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfffdffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x20000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x40000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfffbffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x40000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x80000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfff7ffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x80000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x100000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xffefffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x100000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x200000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xffdfffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x200000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x400000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xffbfffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x400000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x800000U & (vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xff7fffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x800000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x1000000U & (vlSelf->timer__DOT__rdata_q 
                       ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfeffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x1000000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x2000000U & (vlSelf->timer__DOT__rdata_q 
                       ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfdffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x2000000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x4000000U & (vlSelf->timer__DOT__rdata_q 
                       ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xfbffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x4000000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x8000000U & (vlSelf->timer__DOT__rdata_q 
                       ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xf7ffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x8000000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x10000000U & (vlSelf->timer__DOT__rdata_q 
                        ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xefffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x10000000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x20000000U & (vlSelf->timer__DOT__rdata_q 
                        ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xdfffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x20000000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if ((0x40000000U & (vlSelf->timer__DOT__rdata_q 
                        ^ vlSelf->timer__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0xbfffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x40000000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    if (((vlSelf->timer__DOT__rdata_q ^ vlSelf->timer__DOT____Vtogcov__rdata_q) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->timer__DOT____Vtogcov__rdata_q = ((0x7fffffffU 
                                                   & vlSelf->timer__DOT____Vtogcov__rdata_q) 
                                                  | (0x80000000U 
                                                     & vlSelf->timer__DOT__rdata_q));
    }
    vlSelf->timer_rdata_o = vlSelf->timer__DOT__rdata_q;
    if (((IData)(vlSelf->timer_err_o) ^ (IData)(vlSelf->timer__DOT____Vtogcov__timer_err_o))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->timer__DOT____Vtogcov__timer_err_o 
            = vlSelf->timer_err_o;
    }
    if ((1U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfffffffeU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (1U & vlSelf->timer_rdata_o));
    }
    if ((2U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfffffffdU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (2U & vlSelf->timer_rdata_o));
    }
    if ((4U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfffffffbU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (4U & vlSelf->timer_rdata_o));
    }
    if ((8U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfffffff7U & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (8U & vlSelf->timer_rdata_o));
    }
    if ((0x10U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xffffffefU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x10U & vlSelf->timer_rdata_o));
    }
    if ((0x20U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xffffffdfU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x20U & vlSelf->timer_rdata_o));
    }
    if ((0x40U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xffffffbfU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x40U & vlSelf->timer_rdata_o));
    }
    if ((0x80U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xffffff7fU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x80U & vlSelf->timer_rdata_o));
    }
    if ((0x100U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfffffeffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x100U & vlSelf->timer_rdata_o));
    }
    if ((0x200U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfffffdffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x200U & vlSelf->timer_rdata_o));
    }
    if ((0x400U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfffffbffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x400U & vlSelf->timer_rdata_o));
    }
    if ((0x800U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfffff7ffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x800U & vlSelf->timer_rdata_o));
    }
    if ((0x1000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xffffefffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x1000U & vlSelf->timer_rdata_o));
    }
    if ((0x2000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xffffdfffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x2000U & vlSelf->timer_rdata_o));
    }
    if ((0x4000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xffffbfffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x4000U & vlSelf->timer_rdata_o));
    }
    if ((0x8000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xffff7fffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x8000U & vlSelf->timer_rdata_o));
    }
    if ((0x10000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfffeffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x10000U & vlSelf->timer_rdata_o));
    }
    if ((0x20000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfffdffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x20000U & vlSelf->timer_rdata_o));
    }
    if ((0x40000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfffbffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x40000U & vlSelf->timer_rdata_o));
    }
    if ((0x80000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfff7ffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x80000U & vlSelf->timer_rdata_o));
    }
    if ((0x100000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xffefffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x100000U & vlSelf->timer_rdata_o));
    }
    if ((0x200000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xffdfffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x200000U & vlSelf->timer_rdata_o));
    }
    if ((0x400000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xffbfffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x400000U & vlSelf->timer_rdata_o));
    }
    if ((0x800000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xff7fffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x800000U & vlSelf->timer_rdata_o));
    }
    if ((0x1000000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfeffffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x1000000U & vlSelf->timer_rdata_o));
    }
    if ((0x2000000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfdffffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x2000000U & vlSelf->timer_rdata_o));
    }
    if ((0x4000000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xfbffffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x4000000U & vlSelf->timer_rdata_o));
    }
    if ((0x8000000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xf7ffffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x8000000U & vlSelf->timer_rdata_o));
    }
    if ((0x10000000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xefffffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x10000000U & vlSelf->timer_rdata_o));
    }
    if ((0x20000000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xdfffffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x20000000U & vlSelf->timer_rdata_o));
    }
    if ((0x40000000U & (vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0xbfffffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x40000000U & vlSelf->timer_rdata_o));
    }
    if (((vlSelf->timer_rdata_o ^ vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->timer__DOT____Vtogcov__timer_rdata_o 
            = ((0x7fffffffU & vlSelf->timer__DOT____Vtogcov__timer_rdata_o) 
               | (0x80000000U & vlSelf->timer_rdata_o));
    }
}
