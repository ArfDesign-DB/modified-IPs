// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_top.h for the primary calling header

#include "verilated.h"

#include "Vspi_top___024root.h"

VL_ATTR_COLD void Vspi_top___024root___eval_initial(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vspi_top___024root___settle__TOP__0(Vspi_top___024root* vlSelf);

VL_ATTR_COLD void Vspi_top___024root___eval_settle(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___eval_settle\n"); );
    // Body
    Vspi_top___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vspi_top___024root___final(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___final\n"); );
}

VL_ATTR_COLD void Vspi_top___024root___ctor_var_reset(Vspi_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root___ctor_var_reset\n"); );
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
    vlSelf->spi_rx_i = VL_RAND_RESET_I(1);
    vlSelf->spi_tx_o = VL_RAND_RESET_I(1);
    vlSelf->sck_o = VL_RAND_RESET_I(1);
    vlSelf->byte_data_o = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__read_status_q = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__read_status_d = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__next_tx_byte_q = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__tx_fifo_wvalid = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__tx_fifo_rvalid = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__tx_fifo_rready = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__tx_fifo_rdata = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__tx_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__tx_fifo_depth = VL_RAND_RESET_I(7);
    vlSelf->spi_top__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__device_req_i = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__device_addr_i = VL_RAND_RESET_I(32);
    vlSelf->spi_top__DOT____Vtogcov__device_we_i = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__device_be_i = VL_RAND_RESET_I(4);
    vlSelf->spi_top__DOT____Vtogcov__device_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->spi_top__DOT____Vtogcov__device_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__device_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->spi_top__DOT____Vtogcov__spi_rx_i = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__spi_tx_o = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__sck_o = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__byte_data_o = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT____Vtogcov__read_status_q = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__read_status_d = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__next_tx_byte_d = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__next_tx_byte_q = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__tx_fifo_wvalid = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rvalid = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rready = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__tx_fifo_rdata = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT____Vtogcov__tx_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__tx_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT____Vtogcov__tx_fifo_depth = VL_RAND_RESET_I(7);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__wready_o = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT____Vtogcov__clr_i = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT____Vtogcov__wready_o = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1016, vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT____Vlvbound_h177f33a5__0 = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o = VL_RAND_RESET_I(7);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o = VL_RAND_RESET_I(7);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_msb = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_msb = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT__count = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT__sck = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT__count_at_limit = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__count = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__limit = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__count_at_limit = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_pos = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_neg = VL_RAND_RESET_I(1);
    vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__state_q = VL_RAND_RESET_I(2);
    vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__bit_counter_q = VL_RAND_RESET_I(3);
    vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q = VL_RAND_RESET_I(8);
    vlSelf->spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_en = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
