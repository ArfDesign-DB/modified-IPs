// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_top__Syms.h"


void Vspi_top___024root__trace_chg_sub_0(Vspi_top___024root* vlSelf, VerilatedVcd* tracep);

void Vspi_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root__trace_chg_top_0\n"); );
    // Init
    Vspi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_top___024root*>(voidSelf);
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vspi_top___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vspi_top___024root__trace_chg_sub_0(Vspi_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->spi_top__DOT__read_status_d));
        tracep->chgBit(oldp+1,(vlSelf->spi_top__DOT__tx_fifo_wvalid));
        tracep->chgBit(oldp+2,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+3,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+4,(vlSelf->spi_top__DOT__read_status_q));
        tracep->chgBit(oldp+5,((3U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))));
        tracep->chgBit(oldp+6,(vlSelf->spi_top__DOT__next_tx_byte_q));
        tracep->chgBit(oldp+7,(vlSelf->spi_top__DOT__tx_fifo_rready));
        tracep->chgBit(oldp+8,(vlSelf->spi_top__DOT__u_spi_host__DOT__count));
        tracep->chgBit(oldp+9,(vlSelf->spi_top__DOT__u_spi_host__DOT__sck));
        tracep->chgBit(oldp+10,((1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count))));
        tracep->chgBit(oldp+11,(vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos));
        tracep->chgBit(oldp+12,(vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg));
        tracep->chgCData(oldp+13,(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q),2);
        tracep->chgCData(oldp+14,(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q),3);
        tracep->chgCData(oldp+15,(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q),8);
        tracep->chgCData(oldp+16,(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q),8);
        tracep->chgBit(oldp+17,((2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))));
        tracep->chgCData(oldp+18,((0x7fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
        tracep->chgBit(oldp+19,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
        tracep->chgCData(oldp+20,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
        tracep->chgCData(oldp+21,((0x80U & ((~ ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                >> 7U)) 
                                            << 7U))),8);
        tracep->chgBit(oldp+22,((1U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                       >> 7U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgWData(oldp+23,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage),1016);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+55,(vlSelf->spi_top__DOT__tx_fifo_rvalid));
        tracep->chgCData(oldp+56,(vlSelf->spi_top__DOT__tx_fifo_rdata),8);
        tracep->chgBit(oldp+57,(vlSelf->spi_top__DOT__tx_fifo_full));
        tracep->chgBit(oldp+58,((0U == (IData)(vlSelf->spi_top__DOT__tx_fifo_depth))));
        tracep->chgCData(oldp+59,(vlSelf->spi_top__DOT__tx_fifo_depth),7);
        tracep->chgBit(oldp+60,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__wready_o));
        tracep->chgCData(oldp+61,((0x7fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
        tracep->chgBit(oldp+62,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        tracep->chgBit(oldp+63,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->chgCData(oldp+64,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
        tracep->chgCData(oldp+65,((0x80U & ((~ ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                >> 7U)) 
                                            << 7U))),8);
        tracep->chgBit(oldp+66,((1U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                       >> 7U))));
        tracep->chgBit(oldp+67,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set));
    }
    tracep->chgBit(oldp+68,(vlSelf->clk_i));
    tracep->chgBit(oldp+69,(vlSelf->rst_ni));
    tracep->chgBit(oldp+70,(vlSelf->device_req_i));
    tracep->chgIData(oldp+71,(vlSelf->device_addr_i),32);
    tracep->chgBit(oldp+72,(vlSelf->device_we_i));
    tracep->chgCData(oldp+73,(vlSelf->device_be_i),4);
    tracep->chgIData(oldp+74,(vlSelf->device_wdata_i),32);
    tracep->chgBit(oldp+75,(vlSelf->device_rvalid_o));
    tracep->chgIData(oldp+76,(vlSelf->device_rdata_o),32);
    tracep->chgBit(oldp+77,(vlSelf->spi_rx_i));
    tracep->chgBit(oldp+78,(vlSelf->spi_tx_o));
    tracep->chgBit(oldp+79,(vlSelf->sck_o));
    tracep->chgCData(oldp+80,(vlSelf->byte_data_o),8);
    tracep->chgSData(oldp+81,((0xfffU & vlSelf->device_addr_i)),12);
    tracep->chgCData(oldp+82,((7U & ((IData)(vlSelf->device_be_i) 
                                     >> 1U))),3);
    tracep->chgCData(oldp+83,((0xffU & vlSelf->device_wdata_i)),8);
    tracep->chgCData(oldp+84,(((0x3f7U >= (0x3f8U & 
                                           ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                            << 3U)))
                                ? (0xffU & (((0U == 
                                              (0x18U 
                                               & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                  << 3U)))
                                              ? 0U : 
                                             (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                              (((IData)(7U) 
                                                + (0x3f8U 
                                                   & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      << 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x18U 
                                                   & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      << 3U))))) 
                                            | (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                               (0x1fU 
                                                & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                   >> 2U))] 
                                               >> (0x18U 
                                                   & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                      << 3U)))))
                                : 0U)),8);
}

void Vspi_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root__trace_cleanup\n"); );
    // Init
    Vspi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_top___024root*>(voidSelf);
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
