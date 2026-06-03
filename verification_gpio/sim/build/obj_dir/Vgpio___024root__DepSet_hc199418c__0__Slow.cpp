// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio.h for the primary calling header

#include "Vgpio__pch.h"
#include "Vgpio___024root.h"

VL_ATTR_COLD void Vgpio___024root___eval_static(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vgpio___024root___eval_initial__TOP(Vgpio___024root* vlSelf);

VL_ATTR_COLD void Vgpio___024root___eval_initial(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___eval_initial\n"); );
    // Body
    Vgpio___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vgpio___024root___eval_final(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio___024root___dump_triggers__stl(Vgpio___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vgpio___024root___eval_phase__stl(Vgpio___024root* vlSelf);

VL_ATTR_COLD void Vgpio___024root___eval_settle(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___eval_settle\n"); );
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
            Vgpio___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/arjun/modified-IPs/verification_gpio/sim/../rtl/gpio.sv", 38, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vgpio___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio___024root___dump_triggers__stl(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vgpio___024root___eval_triggers__stl(Vgpio___024root* vlSelf);
VL_ATTR_COLD void Vgpio___024root___eval_stl(Vgpio___024root* vlSelf);

VL_ATTR_COLD bool Vgpio___024root___eval_phase__stl(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vgpio___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vgpio___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio___024root___dump_triggers__ico(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vgpio___024root___dump_triggers__act(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vgpio___024root___dump_triggers__nba(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vgpio___024root___ctor_var_reset(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->device_req_i = VL_RAND_RESET_I(1);
    vlSelf->device_addr_i = VL_RAND_RESET_I(32);
    vlSelf->device_we_i = VL_RAND_RESET_I(1);
    vlSelf->device_be_i = VL_RAND_RESET_I(4);
    vlSelf->device_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->device_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->device_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->gp_i = VL_RAND_RESET_I(8);
    vlSelf->gp_o = VL_RAND_RESET_I(16);
    vlSelf->gpio__DOT__gp_i_q = VL_RAND_RESET_I(24);
    vlSelf->gpio__DOT__gp_i_dbnc = VL_RAND_RESET_I(8);
    vlSelf->gpio__DOT__gp_o_d = VL_RAND_RESET_I(16);
    vlSelf->gpio__DOT__gp_o_wr_en = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT__gp_i_rd_en_d = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT__gp_i_rd_en_q = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT__gp_i_dbnc_rd_en_d = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT__invalid_address_signal = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__device_req_i = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__device_addr_i = VL_RAND_RESET_I(32);
    vlSelf->gpio__DOT____Vtogcov__device_we_i = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__device_be_i = VL_RAND_RESET_I(4);
    vlSelf->gpio__DOT____Vtogcov__device_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->gpio__DOT____Vtogcov__device_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__device_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->gpio__DOT____Vtogcov__gp_i = VL_RAND_RESET_I(8);
    vlSelf->gpio__DOT____Vtogcov__gp_o = VL_RAND_RESET_I(16);
    vlSelf->gpio__DOT____Vtogcov__gp_i_q = VL_RAND_RESET_I(24);
    vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc = VL_RAND_RESET_I(8);
    vlSelf->gpio__DOT____Vtogcov__gp_o_d = VL_RAND_RESET_I(16);
    vlSelf->gpio__DOT____Vtogcov__gp_o_wr_en = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__gp_i_rd_en_d = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__gp_i_rd_en_q = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc_rd_en_d = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc_rd_en_q = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__invalid_address_signal = VL_RAND_RESET_I(1);
    vlSelf->gpio__DOT____Vtogcov__unused_device_be = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
