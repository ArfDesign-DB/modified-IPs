// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vobi2wb.h for the primary calling header

#include "Vobi2wb__pch.h"
#include "Vobi2wb___024root.h"

void Vobi2wb___024root___ico_sequent__TOP__0(Vobi2wb___024root* vlSelf);

void Vobi2wb___024root___eval_ico(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vobi2wb___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vobi2wb___024root___ico_sequent__TOP__0(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->obi_rdata_o = vlSelf->wb_dat_i;
    vlSelf->obi_gnt_o = 0U;
    vlSelf->obi_rvalid_o = 0U;
    vlSelf->wb_cyc_o = 0U;
    vlSelf->wb_stb_o = 0U;
    vlSelf->wb_we_o = vlSelf->obi2wb__DOT__we_q;
    vlSelf->wb_adr_o = vlSelf->obi2wb__DOT__addr_q;
    vlSelf->wb_dat_o = vlSelf->obi2wb__DOT__wdata_q;
    vlSelf->wb_sel_o = vlSelf->obi2wb__DOT__be_q;
    if (vlSelf->obi2wb__DOT__state_q) {
        if (vlSelf->obi2wb__DOT__state_q) {
            if (VL_UNLIKELY(vlSelf->wb_ack_i)) {
                vlSelf->obi_rvalid_o = 1U;
                VL_WRITEF_NX("================= from DUT obi_rvalid_o=%0#, time =%0t\n",0,
                             1,vlSelf->obi_rvalid_o,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
            vlSelf->wb_cyc_o = 1U;
            vlSelf->wb_stb_o = 0U;
        } else {
            vlSelf->wb_cyc_o = 0U;
            vlSelf->wb_stb_o = 0U;
        }
    } else if (VL_UNLIKELY(((IData)(vlSelf->obi_req_i) 
                            & (~ (IData)(vlSelf->obi2wb__DOT__req_sent_q))))) {
        vlSelf->wb_cyc_o = 1U;
        vlSelf->wb_stb_o = 1U;
        vlSelf->wb_we_o = vlSelf->obi_we_i;
        vlSelf->wb_adr_o = vlSelf->obi_addr_i;
        vlSelf->wb_dat_o = vlSelf->obi_wdata_i;
        vlSelf->wb_sel_o = vlSelf->obi_be_i;
        VL_WRITEF_NX("from the DUT wb_cyc_o=%0#, wb_stb_o =%0#,time =%0t\n",0,
                     1,vlSelf->wb_cyc_o,1,(IData)(vlSelf->wb_stb_o),
                     64,VL_TIME_UNITED_Q(1),-12);
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->wb_stall_i))))) {
            vlSelf->obi_gnt_o = 1U;
            VL_WRITEF_NX("obi_gnt_o=%0# time =%0t\n",0,
                         1,vlSelf->obi_gnt_o,64,VL_TIME_UNITED_Q(1),
                         -12);
        }
    }
}

void Vobi2wb___024root___eval_triggers__ico(Vobi2wb___024root* vlSelf);

bool Vobi2wb___024root___eval_phase__ico(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vobi2wb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vobi2wb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vobi2wb___024root___eval_act(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_act\n"); );
}

void Vobi2wb___024root___nba_sequent__TOP__0(Vobi2wb___024root* vlSelf);

void Vobi2wb___024root___eval_nba(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vobi2wb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vobi2wb___024root___nba_sequent__TOP__0(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__obi2wb__DOT__req_sent_q;
    __Vdly__obi2wb__DOT__req_sent_q = 0;
    // Body
    __Vdly__obi2wb__DOT__req_sent_q = vlSelf->obi2wb__DOT__req_sent_q;
    if (vlSelf->rst_ni) {
        if (vlSelf->obi2wb__DOT__state_q) {
            if (vlSelf->obi2wb__DOT__state_q) {
                if (vlSelf->wb_ack_i) {
                    __Vdly__obi2wb__DOT__req_sent_q = 0U;
                    vlSelf->obi2wb__DOT__state_q = 0U;
                }
            }
        } else if ((((IData)(vlSelf->obi_req_i) & (~ (IData)(vlSelf->wb_stall_i))) 
                    & (~ (IData)(vlSelf->obi2wb__DOT__req_sent_q)))) {
            __Vdly__obi2wb__DOT__req_sent_q = 1U;
            vlSelf->obi2wb__DOT__state_q = 1U;
            vlSelf->obi2wb__DOT__addr_q = vlSelf->obi_addr_i;
            vlSelf->obi2wb__DOT__wdata_q = vlSelf->obi_wdata_i;
            vlSelf->obi2wb__DOT__be_q = vlSelf->obi_be_i;
            vlSelf->obi2wb__DOT__we_q = vlSelf->obi_we_i;
        }
    } else {
        vlSelf->obi2wb__DOT__state_q = 0U;
        __Vdly__obi2wb__DOT__req_sent_q = 0U;
        vlSelf->obi2wb__DOT__addr_q = 0U;
        vlSelf->obi2wb__DOT__wdata_q = 0U;
        vlSelf->obi2wb__DOT__be_q = 0U;
        vlSelf->obi2wb__DOT__we_q = 0U;
    }
    vlSelf->obi2wb__DOT__req_sent_q = __Vdly__obi2wb__DOT__req_sent_q;
    vlSelf->obi_gnt_o = 0U;
    vlSelf->obi_rvalid_o = 0U;
    vlSelf->wb_cyc_o = 0U;
    vlSelf->wb_stb_o = 0U;
    vlSelf->wb_we_o = vlSelf->obi2wb__DOT__we_q;
    vlSelf->wb_adr_o = vlSelf->obi2wb__DOT__addr_q;
    vlSelf->wb_dat_o = vlSelf->obi2wb__DOT__wdata_q;
    vlSelf->wb_sel_o = vlSelf->obi2wb__DOT__be_q;
    if (vlSelf->obi2wb__DOT__state_q) {
        if (vlSelf->obi2wb__DOT__state_q) {
            if (VL_UNLIKELY(vlSelf->wb_ack_i)) {
                vlSelf->obi_rvalid_o = 1U;
                VL_WRITEF_NX("================= from DUT obi_rvalid_o=%0#, time =%0t\n",0,
                             1,vlSelf->obi_rvalid_o,
                             64,VL_TIME_UNITED_Q(1),
                             -12);
            }
            vlSelf->wb_cyc_o = 1U;
            vlSelf->wb_stb_o = 0U;
        } else {
            vlSelf->wb_cyc_o = 0U;
            vlSelf->wb_stb_o = 0U;
        }
    } else if (VL_UNLIKELY(((IData)(vlSelf->obi_req_i) 
                            & (~ (IData)(vlSelf->obi2wb__DOT__req_sent_q))))) {
        vlSelf->wb_cyc_o = 1U;
        vlSelf->wb_stb_o = 1U;
        vlSelf->wb_we_o = vlSelf->obi_we_i;
        vlSelf->wb_adr_o = vlSelf->obi_addr_i;
        vlSelf->wb_dat_o = vlSelf->obi_wdata_i;
        vlSelf->wb_sel_o = vlSelf->obi_be_i;
        VL_WRITEF_NX("from the DUT wb_cyc_o=%0#, wb_stb_o =%0#,time =%0t\n",0,
                     1,vlSelf->wb_cyc_o,1,(IData)(vlSelf->wb_stb_o),
                     64,VL_TIME_UNITED_Q(1),-12);
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->wb_stall_i))))) {
            vlSelf->obi_gnt_o = 1U;
            VL_WRITEF_NX("obi_gnt_o=%0# time =%0t\n",0,
                         1,vlSelf->obi_gnt_o,64,VL_TIME_UNITED_Q(1),
                         -12);
        }
    }
}

void Vobi2wb___024root___eval_triggers__act(Vobi2wb___024root* vlSelf);

bool Vobi2wb___024root___eval_phase__act(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vobi2wb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vobi2wb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vobi2wb___024root___eval_phase__nba(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vobi2wb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vobi2wb___024root___dump_triggers__ico(Vobi2wb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vobi2wb___024root___dump_triggers__nba(Vobi2wb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vobi2wb___024root___dump_triggers__act(Vobi2wb___024root* vlSelf);
#endif  // VL_DEBUG

void Vobi2wb___024root___eval(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vobi2wb___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/obi2wb.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vobi2wb___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vobi2wb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/obi2wb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vobi2wb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/obi2wb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vobi2wb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vobi2wb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vobi2wb___024root___eval_debug_assertions(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->obi_req_i & 0xfeU))) {
        Verilated::overWidthError("obi_req_i");}
    if (VL_UNLIKELY((vlSelf->obi_we_i & 0xfeU))) {
        Verilated::overWidthError("obi_we_i");}
    if (VL_UNLIKELY((vlSelf->obi_be_i & 0xf0U))) {
        Verilated::overWidthError("obi_be_i");}
    if (VL_UNLIKELY((vlSelf->wb_ack_i & 0xfeU))) {
        Verilated::overWidthError("wb_ack_i");}
    if (VL_UNLIKELY((vlSelf->wb_stall_i & 0xfeU))) {
        Verilated::overWidthError("wb_stall_i");}
}
#endif  // VL_DEBUG
