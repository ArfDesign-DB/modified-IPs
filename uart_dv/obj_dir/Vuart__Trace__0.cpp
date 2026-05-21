// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart__Syms.h"


void Vuart___024root__trace_chg_0_sub_0(Vuart___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuart___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root__trace_chg_0\n"); );
    // Init
    Vuart___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart___024root*>(voidSelf);
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vuart___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart___024root__trace_chg_0_sub_0(Vuart___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->uart__DOT__device_rvalid_d));
        bufp->chgBit(oldp+1,(vlSelf->uart__DOT__rx_fifo_rready));
        bufp->chgBit(oldp+2,(vlSelf->uart__DOT__write_req));
        bufp->chgBit(oldp+3,(vlSelf->uart__DOT__tx_fifo_wvalid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+4,(vlSelf->uart__DOT__device_rdata_q),32);
        bufp->chgBit(oldp+5,(vlSelf->uart__DOT__device_rvalid_q));
        bufp->chgCData(oldp+6,(vlSelf->uart__DOT__rx_state_q),2);
        bufp->chgCData(oldp+7,(vlSelf->uart__DOT__rx_bit_counter_q),3);
        bufp->chgCData(oldp+8,(vlSelf->uart__DOT__rx_bit_counter_d),3);
        bufp->chgCData(oldp+9,(vlSelf->uart__DOT__rx_q),3);
        bufp->chgBit(oldp+10,(vlSelf->uart__DOT__rx_valid));
        bufp->chgSData(oldp+11,(vlSelf->uart__DOT__tx_baud_counter_q),9);
        bufp->chgSData(oldp+12,(vlSelf->uart__DOT__tx_baud_counter_d),9);
        bufp->chgBit(oldp+13,((0x1b1U == (IData)(vlSelf->uart__DOT__tx_baud_counter_q))));
        bufp->chgCData(oldp+14,(vlSelf->uart__DOT__tx_state_q),2);
        bufp->chgCData(oldp+15,(vlSelf->uart__DOT__tx_bit_counter_q),3);
        bufp->chgCData(oldp+16,(vlSelf->uart__DOT__tx_bit_counter_d),3);
        bufp->chgCData(oldp+17,(vlSelf->uart__DOT__tx_current_byte_q),8);
        bufp->chgBit(oldp+18,(vlSelf->uart__DOT__tx_next_byte));
        bufp->chgBit(oldp+19,(vlSelf->uart__DOT__tx_fifo_rready));
        bufp->chgCData(oldp+20,((0x7fU & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+21,(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+22,(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+23,((0x80U & ((~ ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                              >> 7U)) 
                                          << 7U))),8);
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                     >> 7U))));
        bufp->chgCData(oldp+25,((0x7fU & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+26,(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+27,(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+28,((0x80U & ((~ ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                              >> 7U)) 
                                          << 7U))),8);
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                     >> 7U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+30,(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__storage),1024);
        bufp->chgWData(oldp+62,(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__storage),1024);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+94,(vlSelf->uart__DOT__rx_baud_counter_q),9);
        bufp->chgSData(oldp+95,(vlSelf->uart__DOT__rx_baud_counter_d),9);
        bufp->chgBit(oldp+96,((0x1b1U == (IData)(vlSelf->uart__DOT__rx_baud_counter_q))));
        bufp->chgCData(oldp+97,(vlSelf->uart__DOT__rx_state_d),2);
        bufp->chgCData(oldp+98,(vlSelf->uart__DOT__rx_current_byte_q),8);
        bufp->chgCData(oldp+99,(vlSelf->uart__DOT__rx_current_byte_d),8);
        bufp->chgBit(oldp+100,(vlSelf->uart__DOT__rx_start));
        bufp->chgBit(oldp+101,(vlSelf->uart__DOT__rx_fifo_wvalid));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__uart__DOT__u_rx_fifo.rvalid_o));
        bufp->chgBit(oldp+103,((1U & (~ (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rvalid_o)))));
        bufp->chgCData(oldp+104,(vlSelf->uart__DOT__tx_state_d),2);
        bufp->chgBit(oldp+105,(vlSymsp->TOP__uart__DOT__u_tx_fifo.rvalid_o));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__uart__DOT__u_tx_fifo.full_o));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__wready_o));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__uart__DOT__u_rx_fifo.full_o));
        bufp->chgCData(oldp+109,(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__depth_o),8);
        bufp->chgCData(oldp+110,((0x7fU & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+111,(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+113,(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+114,((0x80U & ((~ ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 7U)) 
                                           << 7U))),8);
        bufp->chgBit(oldp+115,((1U & ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                      >> 7U))));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__wready_o));
        bufp->chgCData(oldp+118,(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__depth_o),8);
        bufp->chgCData(oldp+119,((0x7fU & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
        bufp->chgBit(oldp+120,(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+122,(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
        bufp->chgCData(oldp+123,((0x80U & ((~ ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 7U)) 
                                           << 7U))),8);
        bufp->chgBit(oldp+124,((1U & ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                      >> 7U))));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+126,(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o),8);
        bufp->chgCData(oldp+127,(vlSelf->uart__DOT__tx_current_byte_d),8);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o),8);
    }
    bufp->chgBit(oldp+129,(vlSelf->clk_i));
    bufp->chgBit(oldp+130,(vlSelf->rst_ni));
    bufp->chgBit(oldp+131,(vlSelf->device_req_i));
    bufp->chgIData(oldp+132,(vlSelf->device_addr_i),32);
    bufp->chgBit(oldp+133,(vlSelf->device_we_i));
    bufp->chgCData(oldp+134,(vlSelf->device_be_i),4);
    bufp->chgIData(oldp+135,(vlSelf->device_wdata_i),32);
    bufp->chgBit(oldp+136,(vlSelf->device_rvalid_o));
    bufp->chgIData(oldp+137,(vlSelf->device_rdata_o),32);
    bufp->chgBit(oldp+138,(vlSelf->uart_rx_i));
    bufp->chgBit(oldp+139,(vlSelf->uart_irq_o));
    bufp->chgBit(oldp+140,(vlSelf->uart_tx_o));
    bufp->chgIData(oldp+141,(vlSelf->uart__DOT__device_rdata_d),32);
    bufp->chgSData(oldp+142,((0xfffU & vlSelf->device_addr_i)),12);
    bufp->chgIData(oldp+143,((vlSelf->device_addr_i 
                              >> 0xcU)),20);
    bufp->chgCData(oldp+144,((7U & ((IData)(vlSelf->device_be_i) 
                                    >> 1U))),3);
    bufp->chgIData(oldp+145,((vlSelf->device_wdata_i 
                              >> 8U)),24);
    bufp->chgBit(oldp+146,(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__fifo_incr_rptr));
    bufp->chgCData(oldp+147,((0xffU & (((0U == (0x1fU 
                                                & VL_SHIFTL_III(10,10,32, 
                                                                (0x7fU 
                                                                 & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                         ? 0U : (vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__storage[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                       | (vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__storage[
                                          (0x1fU & 
                                           (VL_SHIFTL_III(10,10,32, 
                                                          (0x7fU 
                                                           & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(10,10,32, 
                                                              (0x7fU 
                                                               & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))),8);
    bufp->chgBit(oldp+148,(vlSymsp->TOP__uart__DOT__u_rx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set));
    bufp->chgCData(oldp+149,((0xffU & vlSelf->device_wdata_i)),8);
    bufp->chgBit(oldp+150,(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__fifo_incr_wptr));
    bufp->chgCData(oldp+151,((0xffU & (((0U == (0x1fU 
                                                & VL_SHIFTL_III(10,10,32, 
                                                                (0x7fU 
                                                                 & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                         ? 0U : (vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__storage[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                       | (vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__storage[
                                          (0x1fU & 
                                           (VL_SHIFTL_III(10,10,32, 
                                                          (0x7fU 
                                                           & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(10,10,32, 
                                                              (0x7fU 
                                                               & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))),8);
    bufp->chgBit(oldp+152,(vlSymsp->TOP__uart__DOT__u_tx_fifo.__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set));
}

void Vuart___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root__trace_cleanup\n"); );
    // Init
    Vuart___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart___024root*>(voidSelf);
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
