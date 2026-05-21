// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "Vuart__pch.h"
#include "Vuart___024root.h"

VL_ATTR_COLD void Vuart___024root___eval_static(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vuart___024root___eval_final(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart___024root___dump_triggers__stl(Vuart___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vuart___024root___eval_phase__stl(Vuart___024root* vlSelf);

VL_ATTR_COLD void Vuart___024root___eval_settle(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_settle\n"); );
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
            Vuart___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../rtl/system/uart.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vuart___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart___024root___dump_triggers__stl(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart___024root___eval_triggers__stl(Vuart___024root* vlSelf);
VL_ATTR_COLD void Vuart___024root___eval_stl(Vuart___024root* vlSelf);

VL_ATTR_COLD bool Vuart___024root___eval_phase__stl(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vuart___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vuart___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart___024root___dump_triggers__ico(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vuart___024root___dump_triggers__act(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vuart___024root___dump_triggers__nba(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vuart___024root___ctor_var_reset(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___ctor_var_reset\n"); );
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
    vlSelf->uart_rx_i = VL_RAND_RESET_I(1);
    vlSelf->uart_irq_o = VL_RAND_RESET_I(1);
    vlSelf->uart_tx_o = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__device_rdata_d = VL_RAND_RESET_I(32);
    vlSelf->uart__DOT__device_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->uart__DOT__device_rvalid_d = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__device_rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__rx_baud_counter_q = VL_RAND_RESET_I(9);
    vlSelf->uart__DOT__rx_baud_counter_d = VL_RAND_RESET_I(9);
    vlSelf->uart__DOT__rx_state_q = VL_RAND_RESET_I(2);
    vlSelf->uart__DOT__rx_state_d = VL_RAND_RESET_I(2);
    vlSelf->uart__DOT__rx_bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT__rx_bit_counter_d = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT__rx_current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT__rx_current_byte_d = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT__rx_q = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT__rx_start = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__rx_valid = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__rx_fifo_wvalid = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__rx_fifo_rready = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__tx_baud_counter_q = VL_RAND_RESET_I(9);
    vlSelf->uart__DOT__tx_baud_counter_d = VL_RAND_RESET_I(9);
    vlSelf->uart__DOT__write_req = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__tx_state_q = VL_RAND_RESET_I(2);
    vlSelf->uart__DOT__tx_state_d = VL_RAND_RESET_I(2);
    vlSelf->uart__DOT__tx_bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT__tx_bit_counter_d = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT__tx_current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT__tx_current_byte_d = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT__tx_next_byte = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__tx_fifo_wvalid = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT__tx_fifo_rready = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__device_req_i = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__device_addr_i = VL_RAND_RESET_I(32);
    vlSelf->uart__DOT____Vtogcov__device_we_i = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__device_be_i = VL_RAND_RESET_I(4);
    vlSelf->uart__DOT____Vtogcov__device_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->uart__DOT____Vtogcov__device_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__device_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->uart__DOT____Vtogcov__uart_rx_i = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__uart_irq_o = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__uart_tx_o = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__device_rdata_d = VL_RAND_RESET_I(32);
    vlSelf->uart__DOT____Vtogcov__device_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->uart__DOT____Vtogcov__device_rvalid_d = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__device_rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q = VL_RAND_RESET_I(9);
    vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d = VL_RAND_RESET_I(9);
    vlSelf->uart__DOT____Vtogcov__rx_baud_tick = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__rx_state_q = VL_RAND_RESET_I(2);
    vlSelf->uart__DOT____Vtogcov__rx_state_d = VL_RAND_RESET_I(2);
    vlSelf->uart__DOT____Vtogcov__rx_bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT____Vtogcov__rx_bit_counter_d = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT____Vtogcov__rx_current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT____Vtogcov__rx_current_byte_d = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT____Vtogcov__rx_q = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT____Vtogcov__rx_start = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__rx_valid = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__rx_fifo_wvalid = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__rx_fifo_rready = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT____Vtogcov__rx_fifo_rvalid = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__rx_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q = VL_RAND_RESET_I(9);
    vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d = VL_RAND_RESET_I(9);
    vlSelf->uart__DOT____Vtogcov__tx_baud_tick = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__write_req = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__tx_state_q = VL_RAND_RESET_I(2);
    vlSelf->uart__DOT____Vtogcov__tx_state_d = VL_RAND_RESET_I(2);
    vlSelf->uart__DOT____Vtogcov__tx_bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT____Vtogcov__tx_bit_counter_d = VL_RAND_RESET_I(3);
    vlSelf->uart__DOT____Vtogcov__tx_current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT____Vtogcov__tx_current_byte_d = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT____Vtogcov__tx_next_byte = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__tx_fifo_wvalid = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__tx_fifo_rvalid = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__tx_fifo_rready = VL_RAND_RESET_I(1);
    vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata = VL_RAND_RESET_I(8);
    vlSelf->uart__DOT____Vtogcov__tx_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
