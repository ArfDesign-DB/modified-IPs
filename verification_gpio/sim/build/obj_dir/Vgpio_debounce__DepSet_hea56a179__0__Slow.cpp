// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio.h for the primary calling header

#include "Vgpio__pch.h"
#include "Vgpio_debounce.h"

VL_ATTR_COLD void Vgpio_debounce___ctor_var_reset(Vgpio_debounce* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vgpio_debounce___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->btn_i = VL_RAND_RESET_I(1);
    vlSelf->btn_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->__PVT__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->__PVT__btn_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__btn_q = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__btn_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__btn_o = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__cnt_d = VL_RAND_RESET_I(9);
    vlSelf->__Vtogcov__cnt_q = VL_RAND_RESET_I(9);
    vlSelf->__Vtogcov__btn_d = VL_RAND_RESET_I(1);
}
