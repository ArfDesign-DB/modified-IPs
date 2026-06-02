// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vobi2wb.h for the primary calling header

#include "Vobi2wb__pch.h"
#include "Vobi2wb___024root.h"

VL_ATTR_COLD void Vobi2wb___024root___eval_static(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vobi2wb___024root___eval_initial__TOP(Vobi2wb___024root* vlSelf);

VL_ATTR_COLD void Vobi2wb___024root___eval_initial(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_initial\n"); );
    // Body
    Vobi2wb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vobi2wb___024root___eval_final(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vobi2wb___024root___dump_triggers__stl(Vobi2wb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vobi2wb___024root___eval_phase__stl(Vobi2wb___024root* vlSelf);

VL_ATTR_COLD void Vobi2wb___024root___eval_settle(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vobi2wb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/arjun/obi2wb/rtl/obi2wb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vobi2wb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vobi2wb___024root___dump_triggers__stl(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vobi2wb___024root___stl_sequent__TOP__0(Vobi2wb___024root* vlSelf);

VL_ATTR_COLD void Vobi2wb___024root___eval_stl(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vobi2wb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vobi2wb___024root___eval_triggers__stl(Vobi2wb___024root* vlSelf);

VL_ATTR_COLD bool Vobi2wb___024root___eval_phase__stl(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vobi2wb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vobi2wb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vobi2wb___024root___dump_triggers__ico(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vobi2wb___024root___dump_triggers__act(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vobi2wb___024root___dump_triggers__nba(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vobi2wb___024root___ctor_var_reset(Vobi2wb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->obi_req_i = VL_RAND_RESET_I(1);
    vlSelf->obi_gnt_o = VL_RAND_RESET_I(1);
    vlSelf->obi_addr_i = VL_RAND_RESET_I(32);
    vlSelf->obi_we_i = VL_RAND_RESET_I(1);
    vlSelf->obi_be_i = VL_RAND_RESET_I(4);
    vlSelf->obi_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->obi_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->obi_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->wb_cyc_o = VL_RAND_RESET_I(1);
    vlSelf->wb_stb_o = VL_RAND_RESET_I(1);
    vlSelf->wb_we_o = VL_RAND_RESET_I(1);
    vlSelf->wb_adr_o = VL_RAND_RESET_I(32);
    vlSelf->wb_dat_o = VL_RAND_RESET_I(32);
    vlSelf->wb_sel_o = VL_RAND_RESET_I(4);
    vlSelf->wb_ack_i = VL_RAND_RESET_I(1);
    vlSelf->wb_dat_i = VL_RAND_RESET_I(32);
    vlSelf->wb_stall_i = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT__state_d = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT__addr_q = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT__wdata_q = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT__be_q = VL_RAND_RESET_I(4);
    vlSelf->obi2wb__DOT__we_q = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT__req_sent_q = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT__obi_rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT__immediate_ack = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__obi_req_i = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__obi_gnt_o = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__obi_addr_i = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT____Vtogcov__obi_we_i = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__obi_be_i = VL_RAND_RESET_I(4);
    vlSelf->obi2wb__DOT____Vtogcov__obi_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT____Vtogcov__obi_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__obi_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT____Vtogcov__wb_cyc_o = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__wb_stb_o = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__wb_we_o = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__wb_adr_o = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT____Vtogcov__wb_dat_o = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT____Vtogcov__wb_sel_o = VL_RAND_RESET_I(4);
    vlSelf->obi2wb__DOT____Vtogcov__wb_ack_i = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__wb_dat_i = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT____Vtogcov__wb_stall_i = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__state_q = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__state_d = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__addr_q = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT____Vtogcov__wdata_q = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT____Vtogcov__be_q = VL_RAND_RESET_I(4);
    vlSelf->obi2wb__DOT____Vtogcov__we_q = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->obi2wb__DOT____Vtogcov__req_sent_q = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__obi_rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->obi2wb__DOT____Vtogcov__immediate_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
