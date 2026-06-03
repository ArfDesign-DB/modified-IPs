// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vobi2wb.h for the primary calling header

#include "Vobi2wb__pch.h"
#include "Vobi2wb__Syms.h"
#include "Vobi2wb___024root.h"

VL_ATTR_COLD void Vobi2wb___024root___eval_initial__TOP(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_initial__TOP\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[334]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vobi2wb___024root___dump_triggers__stl(Vobi2wb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vobi2wb___024root___eval_triggers__stl(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vobi2wb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vobi2wb___024root___stl_sequent__TOP__0(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->obi2wb__DOT__state_q)))) {
        ++(vlSymsp->__Vcoverage[330]);
        if ((1U & (~ ((IData)(vlSelf->obi_req_i) & 
                      (~ (IData)(vlSelf->obi2wb__DOT__req_sent_q)))))) {
            ++(vlSymsp->__Vcoverage[329]);
        }
        if (((IData)(vlSelf->obi_req_i) & (~ (IData)(vlSelf->obi2wb__DOT__req_sent_q)))) {
            ++(vlSymsp->__Vcoverage[328]);
        }
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->obi2wb__DOT____Vtogcov__clk_i = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_ni) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->obi2wb__DOT____Vtogcov__rst_ni = vlSelf->rst_ni;
    }
    if (((IData)(vlSelf->obi_req_i) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_req_i))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_req_i = vlSelf->obi_req_i;
    }
    if (((IData)(vlSelf->obi_we_i) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_we_i))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_we_i = vlSelf->obi_we_i;
    }
    if (((IData)(vlSelf->wb_ack_i) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_ack_i))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_ack_i = vlSelf->wb_ack_i;
    }
    if (((IData)(vlSelf->wb_stall_i) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_stall_i))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_stall_i 
            = vlSelf->wb_stall_i;
    }
    if (((IData)(vlSelf->obi2wb__DOT__state_q) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__state_q))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->obi2wb__DOT____Vtogcov__state_q = vlSelf->obi2wb__DOT__state_q;
    }
    if (((IData)(vlSelf->obi2wb__DOT__we_q) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__we_q))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->obi2wb__DOT____Vtogcov__we_q = vlSelf->obi2wb__DOT__we_q;
    }
    if (((IData)(vlSelf->obi2wb__DOT__req_sent_q) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__req_sent_q))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->obi2wb__DOT____Vtogcov__req_sent_q 
            = vlSelf->obi2wb__DOT__req_sent_q;
    }
    if (((IData)(vlSelf->obi2wb__DOT__wb_active_q) 
         ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_active_q))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_active_q 
            = vlSelf->obi2wb__DOT__wb_active_q;
    }
    if (((IData)(vlSelf->obi2wb__DOT__obi_gnt_q) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_gnt_q))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_gnt_q = vlSelf->obi2wb__DOT__obi_gnt_q;
    }
    if (((IData)(vlSelf->obi2wb__DOT__obi_rvalid_q) 
         ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_rvalid_q))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rvalid_q 
            = vlSelf->obi2wb__DOT__obi_rvalid_q;
    }
    if ((1U & ((IData)(vlSelf->obi_be_i) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_be_i)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_be_i = 
            ((0xeU & (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_be_i)) 
             | (1U & (IData)(vlSelf->obi_be_i)));
    }
    if ((2U & ((IData)(vlSelf->obi_be_i) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_be_i)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_be_i = 
            ((0xdU & (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_be_i)) 
             | (2U & (IData)(vlSelf->obi_be_i)));
    }
    if ((4U & ((IData)(vlSelf->obi_be_i) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_be_i)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_be_i = 
            ((0xbU & (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_be_i)) 
             | (4U & (IData)(vlSelf->obi_be_i)));
    }
    if ((8U & ((IData)(vlSelf->obi_be_i) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_be_i)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_be_i = 
            ((7U & (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_be_i)) 
             | (8U & (IData)(vlSelf->obi_be_i)));
    }
    if ((1U & ((IData)(vlSelf->obi2wb__DOT__be_q) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__be_q)))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->obi2wb__DOT____Vtogcov__be_q = ((0xeU 
                                                 & (IData)(vlSelf->obi2wb__DOT____Vtogcov__be_q)) 
                                                | (1U 
                                                   & (IData)(vlSelf->obi2wb__DOT__be_q)));
    }
    if ((2U & ((IData)(vlSelf->obi2wb__DOT__be_q) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__be_q)))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->obi2wb__DOT____Vtogcov__be_q = ((0xdU 
                                                 & (IData)(vlSelf->obi2wb__DOT____Vtogcov__be_q)) 
                                                | (2U 
                                                   & (IData)(vlSelf->obi2wb__DOT__be_q)));
    }
    if ((4U & ((IData)(vlSelf->obi2wb__DOT__be_q) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__be_q)))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->obi2wb__DOT____Vtogcov__be_q = ((0xbU 
                                                 & (IData)(vlSelf->obi2wb__DOT____Vtogcov__be_q)) 
                                                | (4U 
                                                   & (IData)(vlSelf->obi2wb__DOT__be_q)));
    }
    if ((8U & ((IData)(vlSelf->obi2wb__DOT__be_q) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__be_q)))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->obi2wb__DOT____Vtogcov__be_q = ((7U 
                                                 & (IData)(vlSelf->obi2wb__DOT____Vtogcov__be_q)) 
                                                | (8U 
                                                   & (IData)(vlSelf->obi2wb__DOT__be_q)));
    }
    vlSelf->obi_gnt_o = vlSelf->obi2wb__DOT__obi_gnt_q;
    vlSelf->obi_rvalid_o = vlSelf->obi2wb__DOT__obi_rvalid_q;
    vlSelf->wb_cyc_o = vlSelf->obi2wb__DOT__wb_active_q;
    vlSelf->wb_stb_o = vlSelf->obi2wb__DOT__wb_active_q;
    vlSelf->wb_we_o = vlSelf->obi2wb__DOT__we_q;
    if (vlSelf->obi2wb__DOT__state_q) {
        vlSelf->obi2wb__DOT__state_d = 1U;
        if (vlSelf->obi2wb__DOT__state_q) {
            ++(vlSymsp->__Vcoverage[333]);
            if (vlSelf->wb_ack_i) {
                ++(vlSymsp->__Vcoverage[331]);
                vlSelf->obi2wb__DOT__state_d = 0U;
            }
            if ((1U & (~ (IData)(vlSelf->wb_ack_i)))) {
                ++(vlSymsp->__Vcoverage[332]);
            }
        }
    } else {
        vlSelf->obi2wb__DOT__state_d = 0U;
        if (((IData)(vlSelf->obi_req_i) & (~ (IData)(vlSelf->obi2wb__DOT__req_sent_q)))) {
            vlSelf->obi2wb__DOT__state_d = 1U;
        }
    }
    vlSelf->wb_sel_o = vlSelf->obi2wb__DOT__be_q;
    if ((1U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfffffffeU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (1U & vlSelf->obi_addr_i));
    }
    if ((2U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfffffffdU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (2U & vlSelf->obi_addr_i));
    }
    if ((4U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfffffffbU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (4U & vlSelf->obi_addr_i));
    }
    if ((8U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfffffff7U & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (8U & vlSelf->obi_addr_i));
    }
    if ((0x10U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xffffffefU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x10U & vlSelf->obi_addr_i));
    }
    if ((0x20U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xffffffdfU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x20U & vlSelf->obi_addr_i));
    }
    if ((0x40U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xffffffbfU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x40U & vlSelf->obi_addr_i));
    }
    if ((0x80U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xffffff7fU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x80U & vlSelf->obi_addr_i));
    }
    if ((0x100U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfffffeffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x100U & vlSelf->obi_addr_i));
    }
    if ((0x200U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfffffdffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x200U & vlSelf->obi_addr_i));
    }
    if ((0x400U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfffffbffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x400U & vlSelf->obi_addr_i));
    }
    if ((0x800U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfffff7ffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x800U & vlSelf->obi_addr_i));
    }
    if ((0x1000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xffffefffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x1000U & vlSelf->obi_addr_i));
    }
    if ((0x2000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xffffdfffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x2000U & vlSelf->obi_addr_i));
    }
    if ((0x4000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xffffbfffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x4000U & vlSelf->obi_addr_i));
    }
    if ((0x8000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xffff7fffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x8000U & vlSelf->obi_addr_i));
    }
    if ((0x10000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfffeffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x10000U & vlSelf->obi_addr_i));
    }
    if ((0x20000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfffdffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x20000U & vlSelf->obi_addr_i));
    }
    if ((0x40000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfffbffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x40000U & vlSelf->obi_addr_i));
    }
    if ((0x80000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfff7ffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x80000U & vlSelf->obi_addr_i));
    }
    if ((0x100000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xffefffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x100000U & vlSelf->obi_addr_i));
    }
    if ((0x200000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xffdfffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x200000U & vlSelf->obi_addr_i));
    }
    if ((0x400000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xffbfffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x400000U & vlSelf->obi_addr_i));
    }
    if ((0x800000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xff7fffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x800000U & vlSelf->obi_addr_i));
    }
    if ((0x1000000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfeffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x1000000U & vlSelf->obi_addr_i));
    }
    if ((0x2000000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfdffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x2000000U & vlSelf->obi_addr_i));
    }
    if ((0x4000000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xfbffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x4000000U & vlSelf->obi_addr_i));
    }
    if ((0x8000000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xf7ffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x8000000U & vlSelf->obi_addr_i));
    }
    if ((0x10000000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xefffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x10000000U & vlSelf->obi_addr_i));
    }
    if ((0x20000000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xdfffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x20000000U & vlSelf->obi_addr_i));
    }
    if ((0x40000000U & (vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0xbfffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x40000000U & vlSelf->obi_addr_i));
    }
    if (((vlSelf->obi_addr_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i 
            = ((0x7fffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i) 
               | (0x80000000U & vlSelf->obi_addr_i));
    }
    if ((1U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfffffffeU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (1U & vlSelf->obi_wdata_i));
    }
    if ((2U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfffffffdU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (2U & vlSelf->obi_wdata_i));
    }
    if ((4U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfffffffbU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (4U & vlSelf->obi_wdata_i));
    }
    if ((8U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfffffff7U & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (8U & vlSelf->obi_wdata_i));
    }
    if ((0x10U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xffffffefU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x10U & vlSelf->obi_wdata_i));
    }
    if ((0x20U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xffffffdfU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x20U & vlSelf->obi_wdata_i));
    }
    if ((0x40U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xffffffbfU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x40U & vlSelf->obi_wdata_i));
    }
    if ((0x80U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xffffff7fU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x80U & vlSelf->obi_wdata_i));
    }
    if ((0x100U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfffffeffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x100U & vlSelf->obi_wdata_i));
    }
    if ((0x200U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfffffdffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x200U & vlSelf->obi_wdata_i));
    }
    if ((0x400U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfffffbffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x400U & vlSelf->obi_wdata_i));
    }
    if ((0x800U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfffff7ffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x800U & vlSelf->obi_wdata_i));
    }
    if ((0x1000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xffffefffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x1000U & vlSelf->obi_wdata_i));
    }
    if ((0x2000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xffffdfffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x2000U & vlSelf->obi_wdata_i));
    }
    if ((0x4000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xffffbfffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x4000U & vlSelf->obi_wdata_i));
    }
    if ((0x8000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xffff7fffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x8000U & vlSelf->obi_wdata_i));
    }
    if ((0x10000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfffeffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x10000U & vlSelf->obi_wdata_i));
    }
    if ((0x20000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfffdffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x20000U & vlSelf->obi_wdata_i));
    }
    if ((0x40000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfffbffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x40000U & vlSelf->obi_wdata_i));
    }
    if ((0x80000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfff7ffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x80000U & vlSelf->obi_wdata_i));
    }
    if ((0x100000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xffefffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x100000U & vlSelf->obi_wdata_i));
    }
    if ((0x200000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xffdfffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x200000U & vlSelf->obi_wdata_i));
    }
    if ((0x400000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xffbfffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x400000U & vlSelf->obi_wdata_i));
    }
    if ((0x800000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xff7fffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x800000U & vlSelf->obi_wdata_i));
    }
    if ((0x1000000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfeffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x1000000U & vlSelf->obi_wdata_i));
    }
    if ((0x2000000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfdffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x2000000U & vlSelf->obi_wdata_i));
    }
    if ((0x4000000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xfbffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x4000000U & vlSelf->obi_wdata_i));
    }
    if ((0x8000000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xf7ffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x8000000U & vlSelf->obi_wdata_i));
    }
    if ((0x10000000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xefffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x10000000U & vlSelf->obi_wdata_i));
    }
    if ((0x20000000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xdfffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x20000000U & vlSelf->obi_wdata_i));
    }
    if ((0x40000000U & (vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0xbfffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x40000000U & vlSelf->obi_wdata_i));
    }
    if (((vlSelf->obi_wdata_i ^ vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i 
            = ((0x7fffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i) 
               | (0x80000000U & vlSelf->obi_wdata_i));
    }
    if ((1U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfffffffeU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (1U & vlSelf->wb_dat_i));
    }
    if ((2U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfffffffdU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (2U & vlSelf->wb_dat_i));
    }
    if ((4U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfffffffbU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (4U & vlSelf->wb_dat_i));
    }
    if ((8U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfffffff7U & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (8U & vlSelf->wb_dat_i));
    }
    if ((0x10U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xffffffefU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x10U & vlSelf->wb_dat_i));
    }
    if ((0x20U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xffffffdfU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x20U & vlSelf->wb_dat_i));
    }
    if ((0x40U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xffffffbfU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x40U & vlSelf->wb_dat_i));
    }
    if ((0x80U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xffffff7fU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x80U & vlSelf->wb_dat_i));
    }
    if ((0x100U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfffffeffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x100U & vlSelf->wb_dat_i));
    }
    if ((0x200U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfffffdffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x200U & vlSelf->wb_dat_i));
    }
    if ((0x400U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfffffbffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x400U & vlSelf->wb_dat_i));
    }
    if ((0x800U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfffff7ffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x800U & vlSelf->wb_dat_i));
    }
    if ((0x1000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xffffefffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x1000U & vlSelf->wb_dat_i));
    }
    if ((0x2000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xffffdfffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x2000U & vlSelf->wb_dat_i));
    }
    if ((0x4000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xffffbfffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x4000U & vlSelf->wb_dat_i));
    }
    if ((0x8000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xffff7fffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x8000U & vlSelf->wb_dat_i));
    }
    if ((0x10000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfffeffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x10000U & vlSelf->wb_dat_i));
    }
    if ((0x20000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfffdffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x20000U & vlSelf->wb_dat_i));
    }
    if ((0x40000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfffbffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x40000U & vlSelf->wb_dat_i));
    }
    if ((0x80000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfff7ffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x80000U & vlSelf->wb_dat_i));
    }
    if ((0x100000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xffefffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x100000U & vlSelf->wb_dat_i));
    }
    if ((0x200000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xffdfffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x200000U & vlSelf->wb_dat_i));
    }
    if ((0x400000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xffbfffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x400000U & vlSelf->wb_dat_i));
    }
    if ((0x800000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xff7fffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x800000U & vlSelf->wb_dat_i));
    }
    if ((0x1000000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfeffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x1000000U & vlSelf->wb_dat_i));
    }
    if ((0x2000000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfdffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x2000000U & vlSelf->wb_dat_i));
    }
    if ((0x4000000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xfbffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x4000000U & vlSelf->wb_dat_i));
    }
    if ((0x8000000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xf7ffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x8000000U & vlSelf->wb_dat_i));
    }
    if ((0x10000000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xefffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x10000000U & vlSelf->wb_dat_i));
    }
    if ((0x20000000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xdfffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x20000000U & vlSelf->wb_dat_i));
    }
    if ((0x40000000U & (vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0xbfffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x40000000U & vlSelf->wb_dat_i));
    }
    if (((vlSelf->wb_dat_i ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = 
            ((0x7fffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i) 
             | (0x80000000U & vlSelf->wb_dat_i));
    }
    if ((1U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfffffffeU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (1U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((2U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfffffffdU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (2U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((4U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfffffffbU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (4U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((8U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfffffff7U 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (8U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x10U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xffffffefU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x10U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x20U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xffffffdfU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x20U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x40U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xffffffbfU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x40U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x80U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xffffff7fU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x80U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x100U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfffffeffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x100U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x200U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfffffdffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x200U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x400U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfffffbffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x400U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x800U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfffff7ffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x800U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x1000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xffffefffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x1000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x2000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xffffdfffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x2000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x4000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xffffbfffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x4000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x8000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xffff7fffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x8000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x10000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfffeffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x10000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x20000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfffdffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x20000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x40000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfffbffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x40000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x80000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfff7ffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x80000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x100000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xffefffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x100000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x200000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xffdfffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x200000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x400000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xffbfffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x400000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x800000U & (vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xff7fffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x800000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x1000000U & (vlSelf->obi2wb__DOT__addr_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfeffffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x1000000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x2000000U & (vlSelf->obi2wb__DOT__addr_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfdffffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x2000000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x4000000U & (vlSelf->obi2wb__DOT__addr_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xfbffffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x4000000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x8000000U & (vlSelf->obi2wb__DOT__addr_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xf7ffffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x8000000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x10000000U & (vlSelf->obi2wb__DOT__addr_q 
                        ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xefffffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x10000000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x20000000U & (vlSelf->obi2wb__DOT__addr_q 
                        ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xdfffffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x20000000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((0x40000000U & (vlSelf->obi2wb__DOT__addr_q 
                        ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0xbfffffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x40000000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if (((vlSelf->obi2wb__DOT__addr_q ^ vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->obi2wb__DOT____Vtogcov__addr_q = ((0x7fffffffU 
                                                   & vlSelf->obi2wb__DOT____Vtogcov__addr_q) 
                                                  | (0x80000000U 
                                                     & vlSelf->obi2wb__DOT__addr_q));
    }
    if ((1U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfffffffeU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (1U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((2U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfffffffdU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (2U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((4U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfffffffbU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (4U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((8U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfffffff7U 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (8U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x10U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xffffffefU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x10U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x20U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xffffffdfU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x20U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x40U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xffffffbfU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x40U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x80U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xffffff7fU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x80U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x100U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfffffeffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x100U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x200U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfffffdffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x200U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x400U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfffffbffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x400U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x800U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfffff7ffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x800U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x1000U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xffffefffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x1000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x2000U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xffffdfffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x2000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x4000U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xffffbfffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x4000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x8000U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xffff7fffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x8000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x10000U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfffeffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x10000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x20000U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfffdffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x20000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x40000U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfffbffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x40000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x80000U & (vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfff7ffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x80000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x100000U & (vlSelf->obi2wb__DOT__wdata_q 
                      ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xffefffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x100000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x200000U & (vlSelf->obi2wb__DOT__wdata_q 
                      ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xffdfffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x200000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x400000U & (vlSelf->obi2wb__DOT__wdata_q 
                      ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xffbfffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x400000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x800000U & (vlSelf->obi2wb__DOT__wdata_q 
                      ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xff7fffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x800000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x1000000U & (vlSelf->obi2wb__DOT__wdata_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfeffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x1000000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x2000000U & (vlSelf->obi2wb__DOT__wdata_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfdffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x2000000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x4000000U & (vlSelf->obi2wb__DOT__wdata_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xfbffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x4000000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x8000000U & (vlSelf->obi2wb__DOT__wdata_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xf7ffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x8000000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x10000000U & (vlSelf->obi2wb__DOT__wdata_q 
                        ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xefffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x10000000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x20000000U & (vlSelf->obi2wb__DOT__wdata_q 
                        ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xdfffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x20000000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((0x40000000U & (vlSelf->obi2wb__DOT__wdata_q 
                        ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0xbfffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x40000000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if (((vlSelf->obi2wb__DOT__wdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->obi2wb__DOT____Vtogcov__wdata_q = (
                                                   (0x7fffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__wdata_q) 
                                                   | (0x80000000U 
                                                      & vlSelf->obi2wb__DOT__wdata_q));
    }
    if ((1U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfffffffeU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (1U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((2U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfffffffdU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (2U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((4U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfffffffbU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (4U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((8U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfffffff7U 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (8U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x10U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xffffffefU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x10U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x20U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xffffffdfU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x20U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x40U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xffffffbfU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x40U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x80U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xffffff7fU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x80U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x100U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfffffeffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x100U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x200U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfffffdffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x200U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x400U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfffffbffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x400U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x800U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfffff7ffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x800U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x1000U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xffffefffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x1000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x2000U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xffffdfffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x2000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x4000U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xffffbfffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x4000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x8000U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xffff7fffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x8000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x10000U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfffeffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x10000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x20000U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfffdffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x20000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x40000U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfffbffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x40000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x80000U & (vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfff7ffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x80000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x100000U & (vlSelf->obi2wb__DOT__rdata_q 
                      ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xffefffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x100000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x200000U & (vlSelf->obi2wb__DOT__rdata_q 
                      ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xffdfffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x200000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x400000U & (vlSelf->obi2wb__DOT__rdata_q 
                      ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xffbfffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x400000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x800000U & (vlSelf->obi2wb__DOT__rdata_q 
                      ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xff7fffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x800000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x1000000U & (vlSelf->obi2wb__DOT__rdata_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfeffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x1000000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x2000000U & (vlSelf->obi2wb__DOT__rdata_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfdffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x2000000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x4000000U & (vlSelf->obi2wb__DOT__rdata_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xfbffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x4000000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x8000000U & (vlSelf->obi2wb__DOT__rdata_q 
                       ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xf7ffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x8000000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x10000000U & (vlSelf->obi2wb__DOT__rdata_q 
                        ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xefffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x10000000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x20000000U & (vlSelf->obi2wb__DOT__rdata_q 
                        ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xdfffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x20000000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if ((0x40000000U & (vlSelf->obi2wb__DOT__rdata_q 
                        ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0xbfffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x40000000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    if (((vlSelf->obi2wb__DOT__rdata_q ^ vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->obi2wb__DOT____Vtogcov__rdata_q = (
                                                   (0x7fffffffU 
                                                    & vlSelf->obi2wb__DOT____Vtogcov__rdata_q) 
                                                   | (0x80000000U 
                                                      & vlSelf->obi2wb__DOT__rdata_q));
    }
    vlSelf->obi_rdata_o = vlSelf->obi2wb__DOT__rdata_q;
    vlSelf->wb_adr_o = vlSelf->obi2wb__DOT__addr_q;
    vlSelf->wb_dat_o = vlSelf->obi2wb__DOT__wdata_q;
    if (((IData)(vlSelf->obi_gnt_o) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_gnt_o))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_gnt_o = vlSelf->obi_gnt_o;
    }
    if (((IData)(vlSelf->obi_rvalid_o) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__obi_rvalid_o))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rvalid_o 
            = vlSelf->obi_rvalid_o;
    }
    if (((IData)(vlSelf->wb_cyc_o) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_cyc_o))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_cyc_o = vlSelf->wb_cyc_o;
    }
    if (((IData)(vlSelf->wb_stb_o) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_stb_o))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_stb_o = vlSelf->wb_stb_o;
    }
    if (((IData)(vlSelf->wb_we_o) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_we_o))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_we_o = vlSelf->wb_we_o;
    }
    if (((IData)(vlSelf->obi2wb__DOT__state_d) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__state_d))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->obi2wb__DOT____Vtogcov__state_d = vlSelf->obi2wb__DOT__state_d;
    }
    if ((1U & ((IData)(vlSelf->wb_sel_o) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o = 
            ((0xeU & (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o)) 
             | (1U & (IData)(vlSelf->wb_sel_o)));
    }
    if ((2U & ((IData)(vlSelf->wb_sel_o) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o = 
            ((0xdU & (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o)) 
             | (2U & (IData)(vlSelf->wb_sel_o)));
    }
    if ((4U & ((IData)(vlSelf->wb_sel_o) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o = 
            ((0xbU & (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o)) 
             | (4U & (IData)(vlSelf->wb_sel_o)));
    }
    if ((8U & ((IData)(vlSelf->wb_sel_o) ^ (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o = 
            ((7U & (IData)(vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o)) 
             | (8U & (IData)(vlSelf->wb_sel_o)));
    }
    if ((1U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfffffffeU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (1U & vlSelf->obi_rdata_o));
    }
    if ((2U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfffffffdU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (2U & vlSelf->obi_rdata_o));
    }
    if ((4U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfffffffbU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (4U & vlSelf->obi_rdata_o));
    }
    if ((8U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfffffff7U & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (8U & vlSelf->obi_rdata_o));
    }
    if ((0x10U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xffffffefU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x10U & vlSelf->obi_rdata_o));
    }
    if ((0x20U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xffffffdfU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x20U & vlSelf->obi_rdata_o));
    }
    if ((0x40U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xffffffbfU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x40U & vlSelf->obi_rdata_o));
    }
    if ((0x80U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xffffff7fU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x80U & vlSelf->obi_rdata_o));
    }
    if ((0x100U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfffffeffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x100U & vlSelf->obi_rdata_o));
    }
    if ((0x200U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfffffdffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x200U & vlSelf->obi_rdata_o));
    }
    if ((0x400U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfffffbffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x400U & vlSelf->obi_rdata_o));
    }
    if ((0x800U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfffff7ffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x800U & vlSelf->obi_rdata_o));
    }
    if ((0x1000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xffffefffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x1000U & vlSelf->obi_rdata_o));
    }
    if ((0x2000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xffffdfffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x2000U & vlSelf->obi_rdata_o));
    }
    if ((0x4000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xffffbfffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x4000U & vlSelf->obi_rdata_o));
    }
    if ((0x8000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xffff7fffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x8000U & vlSelf->obi_rdata_o));
    }
    if ((0x10000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfffeffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x10000U & vlSelf->obi_rdata_o));
    }
    if ((0x20000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfffdffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x20000U & vlSelf->obi_rdata_o));
    }
    if ((0x40000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfffbffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x40000U & vlSelf->obi_rdata_o));
    }
    if ((0x80000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfff7ffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x80000U & vlSelf->obi_rdata_o));
    }
    if ((0x100000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xffefffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x100000U & vlSelf->obi_rdata_o));
    }
    if ((0x200000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xffdfffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x200000U & vlSelf->obi_rdata_o));
    }
    if ((0x400000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xffbfffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x400000U & vlSelf->obi_rdata_o));
    }
    if ((0x800000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xff7fffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x800000U & vlSelf->obi_rdata_o));
    }
    if ((0x1000000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfeffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x1000000U & vlSelf->obi_rdata_o));
    }
    if ((0x2000000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfdffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x2000000U & vlSelf->obi_rdata_o));
    }
    if ((0x4000000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xfbffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x4000000U & vlSelf->obi_rdata_o));
    }
    if ((0x8000000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xf7ffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x8000000U & vlSelf->obi_rdata_o));
    }
    if ((0x10000000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xefffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x10000000U & vlSelf->obi_rdata_o));
    }
    if ((0x20000000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xdfffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x20000000U & vlSelf->obi_rdata_o));
    }
    if ((0x40000000U & (vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0xbfffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x40000000U & vlSelf->obi_rdata_o));
    }
    if (((vlSelf->obi_rdata_o ^ vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o 
            = ((0x7fffffffU & vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o) 
               | (0x80000000U & vlSelf->obi_rdata_o));
    }
    if ((1U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfffffffeU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (1U & vlSelf->wb_adr_o));
    }
    if ((2U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfffffffdU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (2U & vlSelf->wb_adr_o));
    }
    if ((4U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfffffffbU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (4U & vlSelf->wb_adr_o));
    }
    if ((8U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfffffff7U & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (8U & vlSelf->wb_adr_o));
    }
    if ((0x10U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xffffffefU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x10U & vlSelf->wb_adr_o));
    }
    if ((0x20U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xffffffdfU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x20U & vlSelf->wb_adr_o));
    }
    if ((0x40U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xffffffbfU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x40U & vlSelf->wb_adr_o));
    }
    if ((0x80U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xffffff7fU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x80U & vlSelf->wb_adr_o));
    }
    if ((0x100U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfffffeffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x100U & vlSelf->wb_adr_o));
    }
    if ((0x200U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfffffdffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x200U & vlSelf->wb_adr_o));
    }
    if ((0x400U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfffffbffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x400U & vlSelf->wb_adr_o));
    }
    if ((0x800U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfffff7ffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x800U & vlSelf->wb_adr_o));
    }
    if ((0x1000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xffffefffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x1000U & vlSelf->wb_adr_o));
    }
    if ((0x2000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xffffdfffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x2000U & vlSelf->wb_adr_o));
    }
    if ((0x4000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xffffbfffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x4000U & vlSelf->wb_adr_o));
    }
    if ((0x8000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xffff7fffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x8000U & vlSelf->wb_adr_o));
    }
    if ((0x10000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfffeffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x10000U & vlSelf->wb_adr_o));
    }
    if ((0x20000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfffdffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x20000U & vlSelf->wb_adr_o));
    }
    if ((0x40000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfffbffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x40000U & vlSelf->wb_adr_o));
    }
    if ((0x80000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfff7ffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x80000U & vlSelf->wb_adr_o));
    }
    if ((0x100000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xffefffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x100000U & vlSelf->wb_adr_o));
    }
    if ((0x200000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xffdfffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x200000U & vlSelf->wb_adr_o));
    }
    if ((0x400000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xffbfffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x400000U & vlSelf->wb_adr_o));
    }
    if ((0x800000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xff7fffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x800000U & vlSelf->wb_adr_o));
    }
    if ((0x1000000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfeffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x1000000U & vlSelf->wb_adr_o));
    }
    if ((0x2000000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfdffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x2000000U & vlSelf->wb_adr_o));
    }
    if ((0x4000000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xfbffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x4000000U & vlSelf->wb_adr_o));
    }
    if ((0x8000000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xf7ffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x8000000U & vlSelf->wb_adr_o));
    }
    if ((0x10000000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xefffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x10000000U & vlSelf->wb_adr_o));
    }
    if ((0x20000000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xdfffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x20000000U & vlSelf->wb_adr_o));
    }
    if ((0x40000000U & (vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0xbfffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x40000000U & vlSelf->wb_adr_o));
    }
    if (((vlSelf->wb_adr_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = 
            ((0x7fffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o) 
             | (0x80000000U & vlSelf->wb_adr_o));
    }
    if ((1U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfffffffeU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (1U & vlSelf->wb_dat_o));
    }
    if ((2U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfffffffdU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (2U & vlSelf->wb_dat_o));
    }
    if ((4U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfffffffbU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (4U & vlSelf->wb_dat_o));
    }
    if ((8U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfffffff7U & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (8U & vlSelf->wb_dat_o));
    }
    if ((0x10U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xffffffefU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x10U & vlSelf->wb_dat_o));
    }
    if ((0x20U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xffffffdfU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x20U & vlSelf->wb_dat_o));
    }
    if ((0x40U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xffffffbfU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x40U & vlSelf->wb_dat_o));
    }
    if ((0x80U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xffffff7fU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x80U & vlSelf->wb_dat_o));
    }
    if ((0x100U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfffffeffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x100U & vlSelf->wb_dat_o));
    }
    if ((0x200U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfffffdffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x200U & vlSelf->wb_dat_o));
    }
    if ((0x400U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfffffbffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x400U & vlSelf->wb_dat_o));
    }
    if ((0x800U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfffff7ffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x800U & vlSelf->wb_dat_o));
    }
    if ((0x1000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xffffefffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x1000U & vlSelf->wb_dat_o));
    }
    if ((0x2000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xffffdfffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x2000U & vlSelf->wb_dat_o));
    }
    if ((0x4000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xffffbfffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x4000U & vlSelf->wb_dat_o));
    }
    if ((0x8000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xffff7fffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x8000U & vlSelf->wb_dat_o));
    }
    if ((0x10000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfffeffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x10000U & vlSelf->wb_dat_o));
    }
    if ((0x20000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfffdffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x20000U & vlSelf->wb_dat_o));
    }
    if ((0x40000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfffbffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x40000U & vlSelf->wb_dat_o));
    }
    if ((0x80000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfff7ffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x80000U & vlSelf->wb_dat_o));
    }
    if ((0x100000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xffefffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x100000U & vlSelf->wb_dat_o));
    }
    if ((0x200000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xffdfffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x200000U & vlSelf->wb_dat_o));
    }
    if ((0x400000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xffbfffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x400000U & vlSelf->wb_dat_o));
    }
    if ((0x800000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xff7fffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x800000U & vlSelf->wb_dat_o));
    }
    if ((0x1000000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfeffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x1000000U & vlSelf->wb_dat_o));
    }
    if ((0x2000000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfdffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x2000000U & vlSelf->wb_dat_o));
    }
    if ((0x4000000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xfbffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x4000000U & vlSelf->wb_dat_o));
    }
    if ((0x8000000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xf7ffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x8000000U & vlSelf->wb_dat_o));
    }
    if ((0x10000000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xefffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x10000000U & vlSelf->wb_dat_o));
    }
    if ((0x20000000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xdfffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x20000000U & vlSelf->wb_dat_o));
    }
    if ((0x40000000U & (vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0xbfffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x40000000U & vlSelf->wb_dat_o));
    }
    if (((vlSelf->wb_dat_o ^ vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = 
            ((0x7fffffffU & vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o) 
             | (0x80000000U & vlSelf->wb_dat_o));
    }
}

VL_ATTR_COLD void Vobi2wb___024root___configure_coverage(Vobi2wb___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 5, 28, ".obi2wb", "v_toggle/obi2wb", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 6, 28, ".obi2wb", "v_toggle/obi2wb", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 9, 28, ".obi2wb", "v_toggle/obi2wb", "obi_req_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 10, 28, ".obi2wb", "v_toggle/obi2wb", "obi_gnt_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 11, 28, ".obi2wb", "v_toggle/obi2wb", "obi_addr_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 12, 28, ".obi2wb", "v_toggle/obi2wb", "obi_we_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 13, 28, ".obi2wb", "v_toggle/obi2wb", "obi_be_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 13, 28, ".obi2wb", "v_toggle/obi2wb", "obi_be_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 13, 28, ".obi2wb", "v_toggle/obi2wb", "obi_be_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 13, 28, ".obi2wb", "v_toggle/obi2wb", "obi_be_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 14, 28, ".obi2wb", "v_toggle/obi2wb", "obi_wdata_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 16, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rvalid_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 17, 28, ".obi2wb", "v_toggle/obi2wb", "obi_rdata_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 20, 28, ".obi2wb", "v_toggle/obi2wb", "wb_cyc_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 21, 28, ".obi2wb", "v_toggle/obi2wb", "wb_stb_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 22, 28, ".obi2wb", "v_toggle/obi2wb", "wb_we_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 23, 28, ".obi2wb", "v_toggle/obi2wb", "wb_adr_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 24, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 25, 28, ".obi2wb", "v_toggle/obi2wb", "wb_sel_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 25, 28, ".obi2wb", "v_toggle/obi2wb", "wb_sel_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 25, 28, ".obi2wb", "v_toggle/obi2wb", "wb_sel_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 25, 28, ".obi2wb", "v_toggle/obi2wb", "wb_sel_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 27, 28, ".obi2wb", "v_toggle/obi2wb", "wb_ack_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 28, 28, ".obi2wb", "v_toggle/obi2wb", "wb_dat_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 29, 28, ".obi2wb", "v_toggle/obi2wb", "wb_stall_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 33, 11, ".obi2wb", "v_toggle/obi2wb", "state_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 33, 20, ".obi2wb", "v_toggle/obi2wb", "state_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 35, 20, ".obi2wb", "v_toggle/obi2wb", "addr_q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 36, 20, ".obi2wb", "v_toggle/obi2wb", "wdata_q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 37, 20, ".obi2wb", "v_toggle/obi2wb", "be_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 37, 20, ".obi2wb", "v_toggle/obi2wb", "be_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 37, 20, ".obi2wb", "v_toggle/obi2wb", "be_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 37, 20, ".obi2wb", "v_toggle/obi2wb", "be_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 38, 20, ".obi2wb", "v_toggle/obi2wb", "we_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 40, 20, ".obi2wb", "v_toggle/obi2wb", "rdata_q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 42, 9, ".obi2wb", "v_toggle/obi2wb", "req_sent_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 43, 9, ".obi2wb", "v_toggle/obi2wb", "wb_active_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 45, 9, ".obi2wb", "v_toggle/obi2wb", "obi_gnt_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 46, 9, ".obi2wb", "v_toggle/obi2wb", "obi_rvalid_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 71, 7, ".obi2wb", "v_branch/obi2wb", "if", "71-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 71, 8, ".obi2wb", "v_branch/obi2wb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 83, 12, ".obi2wb", "v_branch/obi2wb", "if", "83-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 83, 13, ".obi2wb", "v_branch/obi2wb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 81, 7, ".obi2wb", "v_line/obi2wb", "elsif", "81-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 87, 7, ".obi2wb", "v_branch/obi2wb", "if", "87-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 87, 8, ".obi2wb", "v_branch/obi2wb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 52, 5, ".obi2wb", "v_branch/obi2wb", "if", "52-62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 52, 6, ".obi2wb", "v_branch/obi2wb", "else", "63,65,67-68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 51, 3, ".obi2wb", "v_line/obi2wb", "block", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 105, 9, ".obi2wb", "v_branch/obi2wb", "if", "105-106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 105, 10, ".obi2wb", "v_branch/obi2wb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 104, 11, ".obi2wb", "v_line/obi2wb", "case", "104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 110, 9, ".obi2wb", "v_branch/obi2wb", "if", "110-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 110, 10, ".obi2wb", "v_branch/obi2wb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 109, 15, ".obi2wb", "v_line/obi2wb", "case", "109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "/home/arjun/obi2wb/rtl/obi2wb.sv", 99, 3, ".obi2wb", "v_line/obi2wb", "block", "99-100,102");
}
