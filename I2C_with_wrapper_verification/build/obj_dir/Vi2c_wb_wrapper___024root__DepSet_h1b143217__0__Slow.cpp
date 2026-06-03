// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_wb_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vi2c_wb_wrapper___024root.h"

VL_ATTR_COLD void Vi2c_wb_wrapper___024root___initial__TOP__0(Vi2c_wb_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vi2c_wb_wrapper___024root___eval_initial(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___eval_initial\n"); );
    // Body
    Vi2c_wb_wrapper___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i 
        = vlSelf->__VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i;
}

VL_ATTR_COLD void Vi2c_wb_wrapper___024root___settle__TOP__0(Vi2c_wb_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vi2c_wb_wrapper___024root___settle__TOP__1(Vi2c_wb_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vi2c_wb_wrapper___024root___eval_settle(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___eval_settle\n"); );
    // Body
    Vi2c_wb_wrapper___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vi2c_wb_wrapper___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vi2c_wb_wrapper___024root___final(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___final\n"); );
}

VL_ATTR_COLD void Vi2c_wb_wrapper___024root___ctor_var_reset(Vi2c_wb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->i2c_req_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_we_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_addr_o = VL_RAND_RESET_I(32);
    vlSelf->i2c_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->i2c_be_o = VL_RAND_RESET_I(4);
    vlSelf->i2c_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->i2c_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->scl_pad_i = VL_RAND_RESET_I(1);
    vlSelf->scl_pad_o = VL_RAND_RESET_I(1);
    vlSelf->scl_padoen_o = VL_RAND_RESET_I(1);
    vlSelf->sda_pad_i = VL_RAND_RESET_I(1);
    vlSelf->sda_pad_o = VL_RAND_RESET_I(1);
    vlSelf->sda_padoen_o = VL_RAND_RESET_I(1);
    vlSelf->wb_inta_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__wb_dat_o = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT__wb_ack_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__rst_i = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_req_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_we_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o = VL_RAND_RESET_I(32);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o = VL_RAND_RESET_I(4);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_pad_i = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_pad_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__scl_padoen_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__sda_pad_i = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__sda_pad_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__sda_padoen_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_inta_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__wb_ack_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT____Vtogcov__arst_i = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer = VL_RAND_RESET_I(16);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer = VL_RAND_RESET_I(16);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__done = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__core_en = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ien = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irxack = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxack = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__tip = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irq_flag = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__i2c_busy = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__i2c_al = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__al = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rst_i = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__wb_wacc = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sta = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sto = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rd = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__wr = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ack = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__iack = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd = VL_RAND_RESET_I(4);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_rxd = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr = VL_RAND_RESET_I(8);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt = VL_RAND_RESET_I(3);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state = VL_RAND_RESET_I(5);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd = VL_RAND_RESET_I(4);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_txd = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_ack = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_rxd = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__shift = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__ld = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__go = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__dcnt = VL_RAND_RESET_I(3);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__cnt_done = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state = VL_RAND_RESET_I(5);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt = VL_RAND_RESET_I(16);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state = VL_RAND_RESET_I(17);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__scl_o = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSCL = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSDA = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dscl_oen = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sda_chk = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__clk_en = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__slave_wait = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt = VL_RAND_RESET_I(16);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSCL = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSDA = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sta_condition = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sto_condition = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cmd_stop = VL_RAND_RESET_I(1);
    vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state = VL_RAND_RESET_I(17);
    vlSelf->__VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
