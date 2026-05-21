// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "Vuart__pch.h"
#include "Vuart_prim_fifo_sync__W8_Pz1_D80.h"

VL_ATTR_COLD void Vuart_prim_fifo_sync__W8_Pz1_D80___ctor_var_reset(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->clr_i = VL_RAND_RESET_I(1);
    vlSelf->wvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wready_o = VL_RAND_RESET_I(1);
    vlSelf->wdata_i = VL_RAND_RESET_I(8);
    vlSelf->rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->rready_i = VL_RAND_RESET_I(1);
    vlSelf->rdata_o = VL_RAND_RESET_I(8);
    vlSelf->full_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__depth_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__err_o = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__clr_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__wvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__wready_o = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__wdata_i = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rready_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rdata_o = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__full_o = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__depth_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__gen_normal_fifo__DOT__storage);
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i = VL_RAND_RESET_I(1);
    vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i = VL_RAND_RESET_I(1);
    vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o = VL_RAND_RESET_I(7);
    vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o = VL_RAND_RESET_I(7);
    vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o = VL_RAND_RESET_I(1);
    vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
}
