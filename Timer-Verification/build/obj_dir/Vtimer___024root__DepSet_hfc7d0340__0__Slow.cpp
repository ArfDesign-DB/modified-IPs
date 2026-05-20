// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer.h for the primary calling header

#include "Vtimer__pch.h"
#include "Vtimer___024root.h"

VL_ATTR_COLD void Vtimer___024root___eval_static(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtimer___024root___eval_initial__TOP(Vtimer___024root* vlSelf);

VL_ATTR_COLD void Vtimer___024root___eval_initial(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_initial\n"); );
    // Body
    Vtimer___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vtimer___024root___eval_final(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer___024root___dump_triggers__stl(Vtimer___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtimer___024root___eval_phase__stl(Vtimer___024root* vlSelf);

VL_ATTR_COLD void Vtimer___024root___eval_settle(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_settle\n"); );
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
            Vtimer___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/manju_arf/ibex-demo-system/manju/timer-verif/rtl/timer.sv", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtimer___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer___024root___dump_triggers__stl(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtimer___024root___stl_sequent__TOP__0(Vtimer___024root* vlSelf);

VL_ATTR_COLD void Vtimer___024root___eval_stl(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtimer___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtimer___024root___eval_triggers__stl(Vtimer___024root* vlSelf);

VL_ATTR_COLD bool Vtimer___024root___eval_phase__stl(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtimer___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtimer___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer___024root___dump_triggers__ico(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtimer___024root___dump_triggers__act(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer___024root___dump_triggers__nba(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtimer___024root___ctor_var_reset(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->timer_req_i = VL_RAND_RESET_I(1);
    vlSelf->timer_addr_i = VL_RAND_RESET_I(32);
    vlSelf->timer_we_i = VL_RAND_RESET_I(1);
    vlSelf->timer_be_i = VL_RAND_RESET_I(4);
    vlSelf->timer_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->timer_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->timer_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->timer_err_o = VL_RAND_RESET_I(1);
    vlSelf->timer_intr_o = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT__timer_we = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT__mtime_we = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT__mtimeh_we = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT__mtimecmp_we = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT__mtimecmph_we = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT__mtime_wdata = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT__mtimeh_wdata = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT__mtimecmp_wdata = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT__mtimecmph_wdata = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT__mtime_q = VL_RAND_RESET_Q(64);
    vlSelf->timer__DOT__mtime_d = VL_RAND_RESET_Q(64);
    vlSelf->timer__DOT__mtimecmp_q = VL_RAND_RESET_Q(64);
    vlSelf->timer__DOT__mtimecmp_d = VL_RAND_RESET_Q(64);
    vlSelf->timer__DOT__interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT__interrupt_d = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT__error_q = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT__error_d = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT__rdata_d = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__timer_req_i = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__timer_addr_i = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT____Vtogcov__timer_we_i = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__timer_be_i = VL_RAND_RESET_I(4);
    vlSelf->timer__DOT____Vtogcov__timer_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT____Vtogcov__timer_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__timer_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT____Vtogcov__timer_err_o = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__timer_intr_o = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__timer_we = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__mtime_we = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__mtimeh_we = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__mtimecmp_we = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__mtimecmph_we = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__mtime_wdata = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT____Vtogcov__mtimeh_wdata = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT____Vtogcov__mtimecmp_wdata = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT____Vtogcov__mtimecmph_wdata = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT____Vtogcov__mtime_q = VL_RAND_RESET_Q(64);
    vlSelf->timer__DOT____Vtogcov__mtime_d = VL_RAND_RESET_Q(64);
    vlSelf->timer__DOT____Vtogcov__mtime_inc = VL_RAND_RESET_Q(64);
    vlSelf->timer__DOT____Vtogcov__mtimecmp_q = VL_RAND_RESET_Q(64);
    vlSelf->timer__DOT____Vtogcov__mtimecmp_d = VL_RAND_RESET_Q(64);
    vlSelf->timer__DOT____Vtogcov__interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__interrupt_d = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__error_q = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__error_d = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT____Vtogcov__rdata_d = VL_RAND_RESET_I(32);
    vlSelf->timer__DOT____Vtogcov__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->timer__DOT____Vtogcov__unused_addr_bits = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
