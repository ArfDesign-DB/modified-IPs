// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_top__Syms.h"


VL_ATTR_COLD void Vspi_top___024root__trace_init_sub__TOP__0(Vspi_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+69,"clk_i", false,-1);
    tracep->declBit(c+70,"rst_ni", false,-1);
    tracep->declBit(c+71,"device_req_i", false,-1);
    tracep->declBus(c+72,"device_addr_i", false,-1, 31,0);
    tracep->declBit(c+73,"device_we_i", false,-1);
    tracep->declBus(c+74,"device_be_i", false,-1, 3,0);
    tracep->declBus(c+75,"device_wdata_i", false,-1, 31,0);
    tracep->declBit(c+76,"device_rvalid_o", false,-1);
    tracep->declBus(c+77,"device_rdata_o", false,-1, 31,0);
    tracep->declBit(c+78,"spi_rx_i", false,-1);
    tracep->declBit(c+79,"spi_tx_o", false,-1);
    tracep->declBit(c+80,"sck_o", false,-1);
    tracep->declBus(c+81,"byte_data_o", false,-1, 7,0);
    tracep->pushNamePrefix("spi_top ");
    tracep->declBus(c+86,"ClockFrequency", false,-1, 31,0);
    tracep->declBus(c+87,"BaudRate", false,-1, 31,0);
    tracep->declBit(c+88,"CPOL", false,-1);
    tracep->declBit(c+88,"CPHA", false,-1);
    tracep->declBus(c+89,"AddrWidth", false,-1, 31,0);
    tracep->declBus(c+89,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+90,"RegAddr", false,-1, 31,0);
    tracep->declBit(c+69,"clk_i", false,-1);
    tracep->declBit(c+70,"rst_ni", false,-1);
    tracep->declBit(c+71,"device_req_i", false,-1);
    tracep->declBus(c+72,"device_addr_i", false,-1, 31,0);
    tracep->declBit(c+73,"device_we_i", false,-1);
    tracep->declBus(c+74,"device_be_i", false,-1, 3,0);
    tracep->declBus(c+75,"device_wdata_i", false,-1, 31,0);
    tracep->declBit(c+76,"device_rvalid_o", false,-1);
    tracep->declBus(c+77,"device_rdata_o", false,-1, 31,0);
    tracep->declBit(c+78,"spi_rx_i", false,-1);
    tracep->declBit(c+79,"spi_tx_o", false,-1);
    tracep->declBit(c+80,"sck_o", false,-1);
    tracep->declBus(c+81,"byte_data_o", false,-1, 7,0);
    tracep->declBus(c+91,"SpiTxReg", false,-1, 11,0);
    tracep->declBus(c+92,"SpiStatusReg", false,-1, 11,0);
    tracep->declBus(c+82,"reg_addr", false,-1, 11,0);
    tracep->declBit(c+5,"read_status_q", false,-1);
    tracep->declBit(c+1,"read_status_d", false,-1);
    tracep->declBit(c+6,"next_tx_byte_d", false,-1);
    tracep->declBit(c+7,"next_tx_byte_q", false,-1);
    tracep->declBit(c+2,"tx_fifo_wvalid", false,-1);
    tracep->declBit(c+56,"tx_fifo_rvalid", false,-1);
    tracep->declBit(c+8,"tx_fifo_rready", false,-1);
    tracep->declBus(c+57,"tx_fifo_rdata", false,-1, 7,0);
    tracep->declBit(c+58,"tx_fifo_full", false,-1);
    tracep->declBit(c+59,"tx_fifo_empty", false,-1);
    tracep->declBus(c+60,"tx_fifo_depth", false,-1, 6,0);
    tracep->declBus(c+83,"unused_device_be", false,-1, 3,1);
    tracep->pushNamePrefix("u_spi_host ");
    tracep->declBus(c+86,"ClockFrequency", false,-1, 31,0);
    tracep->declBus(c+87,"BaudRate", false,-1, 31,0);
    tracep->declBit(c+88,"CPOL", false,-1);
    tracep->declBit(c+88,"CPHA", false,-1);
    tracep->declBit(c+69,"clk_i", false,-1);
    tracep->declBit(c+70,"rst_ni", false,-1);
    tracep->declBit(c+78,"spi_rx_i", false,-1);
    tracep->declBit(c+79,"spi_tx_o", false,-1);
    tracep->declBit(c+80,"sck_o", false,-1);
    tracep->declBit(c+56,"start_i", false,-1);
    tracep->declBus(c+57,"byte_data_i", false,-1, 7,0);
    tracep->declBus(c+81,"byte_data_o", false,-1, 7,0);
    tracep->declBit(c+6,"next_tx_byte_o", false,-1);
    tracep->declBus(c+93,"ClocksPerBaud", false,-1, 31,0);
    tracep->declBus(c+94,"ToggleCount", false,-1, 31,0);
    tracep->declBus(c+95,"CountWidth", false,-1, 31,0);
    tracep->declBus(c+9,"count", false,-1, 0,0);
    tracep->declBus(c+96,"limit", false,-1, 0,0);
    tracep->declBit(c+10,"sck", false,-1);
    tracep->declBit(c+11,"count_at_limit", false,-1);
    tracep->declBit(c+12,"sck_pos", false,-1);
    tracep->declBit(c+13,"sck_neg", false,-1);
    tracep->declBus(c+14,"state_q", false,-1, 1,0);
    tracep->declBus(c+15,"bit_counter_q", false,-1, 2,0);
    tracep->declBus(c+16,"current_byte_q", false,-1, 7,0);
    tracep->declBus(c+17,"recieved_byte_q", false,-1, 7,0);
    tracep->declBit(c+18,"sck_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_tx_fifo ");
    tracep->declBus(c+97,"Width", false,-1, 31,0);
    tracep->declBit(c+88,"Pass", false,-1);
    tracep->declBus(c+98,"Depth", false,-1, 31,0);
    tracep->declBit(c+99,"OutputZeroIfEmpty", false,-1);
    tracep->declBit(c+88,"Secure", false,-1);
    tracep->declBus(c+100,"DepthW", false,-1, 31,0);
    tracep->declBit(c+69,"clk_i", false,-1);
    tracep->declBit(c+70,"rst_ni", false,-1);
    tracep->declBit(c+101,"clr_i", false,-1);
    tracep->declBit(c+2,"wvalid_i", false,-1);
    tracep->declBit(c+61,"wready_o", false,-1);
    tracep->declBus(c+84,"wdata_i", false,-1, 7,0);
    tracep->declBit(c+56,"rvalid_o", false,-1);
    tracep->declBit(c+8,"rready_i", false,-1);
    tracep->declBus(c+57,"rdata_o", false,-1, 7,0);
    tracep->declBit(c+58,"full_o", false,-1);
    tracep->declBus(c+60,"depth_o", false,-1, 6,0);
    tracep->declBit(c+101,"err_o", false,-1);
    tracep->pushNamePrefix("gen_normal_fifo ");
    tracep->declBus(c+102,"PtrW", false,-1, 31,0);
    tracep->declBus(c+62,"fifo_wptr", false,-1, 6,0);
    tracep->declBus(c+19,"fifo_rptr", false,-1, 6,0);
    tracep->declBit(c+3,"fifo_incr_wptr", false,-1);
    tracep->declBit(c+63,"fifo_incr_rptr", false,-1);
    tracep->declBit(c+64,"fifo_empty", false,-1);
    tracep->declBit(c+20,"under_rst", false,-1);
    tracep->declBit(c+64,"empty", false,-1);
    tracep->declArray(c+24,"storage", false,-1, 1015,0);
    tracep->declBus(c+85,"storage_rdata", false,-1, 7,0);
    tracep->declBus(c+85,"rdata_int", false,-1, 7,0);
    tracep->pushNamePrefix("u_fifo_cnt ");
    tracep->declBus(c+98,"Depth", false,-1, 31,0);
    tracep->declBit(c+88,"Secure", false,-1);
    tracep->declBus(c+102,"PtrW", false,-1, 31,0);
    tracep->declBus(c+102,"DepthW", false,-1, 31,0);
    tracep->declBit(c+69,"clk_i", false,-1);
    tracep->declBit(c+70,"rst_ni", false,-1);
    tracep->declBit(c+101,"clr_i", false,-1);
    tracep->declBit(c+3,"incr_wptr_i", false,-1);
    tracep->declBit(c+63,"incr_rptr_i", false,-1);
    tracep->declBus(c+62,"wptr_o", false,-1, 6,0);
    tracep->declBus(c+19,"rptr_o", false,-1, 6,0);
    tracep->declBit(c+58,"full_o", false,-1);
    tracep->declBit(c+64,"empty_o", false,-1);
    tracep->declBus(c+60,"depth_o", false,-1, 6,0);
    tracep->declBit(c+101,"err_o", false,-1);
    tracep->declBus(c+97,"WrapPtrW", false,-1, 31,0);
    tracep->declBus(c+65,"wptr_wrap_cnt_q", false,-1, 7,0);
    tracep->declBus(c+66,"wptr_wrap_set_cnt", false,-1, 7,0);
    tracep->declBus(c+21,"rptr_wrap_cnt_q", false,-1, 7,0);
    tracep->declBus(c+22,"rptr_wrap_set_cnt", false,-1, 7,0);
    tracep->declBit(c+67,"wptr_wrap_msb", false,-1);
    tracep->declBit(c+23,"rptr_wrap_msb", false,-1);
    tracep->declBit(c+4,"wptr_wrap_set", false,-1);
    tracep->declBit(c+68,"rptr_wrap_set", false,-1);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vspi_top___024root__trace_init_top(Vspi_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root__trace_init_top\n"); );
    // Body
    Vspi_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vspi_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vspi_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vspi_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vspi_top___024root__trace_register(Vspi_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vspi_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vspi_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vspi_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vspi_top___024root__trace_full_sub_0(Vspi_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vspi_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root__trace_full_top_0\n"); );
    // Init
    Vspi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_top___024root*>(voidSelf);
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_top___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vspi_top___024root__trace_full_sub_0(Vspi_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_top___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->spi_top__DOT__read_status_d));
    tracep->fullBit(oldp+2,(vlSelf->spi_top__DOT__tx_fifo_wvalid));
    tracep->fullBit(oldp+3,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
    tracep->fullBit(oldp+4,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set));
    tracep->fullBit(oldp+5,(vlSelf->spi_top__DOT__read_status_q));
    tracep->fullBit(oldp+6,((3U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))));
    tracep->fullBit(oldp+7,(vlSelf->spi_top__DOT__next_tx_byte_q));
    tracep->fullBit(oldp+8,(vlSelf->spi_top__DOT__tx_fifo_rready));
    tracep->fullBit(oldp+9,(vlSelf->spi_top__DOT__u_spi_host__DOT__count));
    tracep->fullBit(oldp+10,(vlSelf->spi_top__DOT__u_spi_host__DOT__sck));
    tracep->fullBit(oldp+11,((1U <= (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__count))));
    tracep->fullBit(oldp+12,(vlSelf->spi_top__DOT__u_spi_host__DOT__sck_pos));
    tracep->fullBit(oldp+13,(vlSelf->spi_top__DOT__u_spi_host__DOT__sck_neg));
    tracep->fullCData(oldp+14,(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q),2);
    tracep->fullCData(oldp+15,(vlSelf->spi_top__DOT__u_spi_host__DOT__bit_counter_q),3);
    tracep->fullCData(oldp+16,(vlSelf->spi_top__DOT__u_spi_host__DOT__current_byte_q),8);
    tracep->fullCData(oldp+17,(vlSelf->spi_top__DOT__u_spi_host__DOT__recieved_byte_q),8);
    tracep->fullBit(oldp+18,((2U == (IData)(vlSelf->spi_top__DOT__u_spi_host__DOT__state_q))));
    tracep->fullCData(oldp+19,((0x7fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),7);
    tracep->fullBit(oldp+20,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
    tracep->fullCData(oldp+21,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),8);
    tracep->fullCData(oldp+22,((0x80U & ((~ ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                             >> 7U)) 
                                         << 7U))),8);
    tracep->fullBit(oldp+23,((1U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                    >> 7U))));
    tracep->fullWData(oldp+24,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage),1016);
    tracep->fullBit(oldp+56,(vlSelf->spi_top__DOT__tx_fifo_rvalid));
    tracep->fullCData(oldp+57,(vlSelf->spi_top__DOT__tx_fifo_rdata),8);
    tracep->fullBit(oldp+58,(vlSelf->spi_top__DOT__tx_fifo_full));
    tracep->fullBit(oldp+59,((0U == (IData)(vlSelf->spi_top__DOT__tx_fifo_depth))));
    tracep->fullCData(oldp+60,(vlSelf->spi_top__DOT__tx_fifo_depth),7);
    tracep->fullBit(oldp+61,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__wready_o));
    tracep->fullCData(oldp+62,((0x7fU & (IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),7);
    tracep->fullBit(oldp+63,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
    tracep->fullBit(oldp+64,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    tracep->fullCData(oldp+65,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),8);
    tracep->fullCData(oldp+66,((0x80U & ((~ ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                             >> 7U)) 
                                         << 7U))),8);
    tracep->fullBit(oldp+67,((1U & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                    >> 7U))));
    tracep->fullBit(oldp+68,(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set));
    tracep->fullBit(oldp+69,(vlSelf->clk_i));
    tracep->fullBit(oldp+70,(vlSelf->rst_ni));
    tracep->fullBit(oldp+71,(vlSelf->device_req_i));
    tracep->fullIData(oldp+72,(vlSelf->device_addr_i),32);
    tracep->fullBit(oldp+73,(vlSelf->device_we_i));
    tracep->fullCData(oldp+74,(vlSelf->device_be_i),4);
    tracep->fullIData(oldp+75,(vlSelf->device_wdata_i),32);
    tracep->fullBit(oldp+76,(vlSelf->device_rvalid_o));
    tracep->fullIData(oldp+77,(vlSelf->device_rdata_o),32);
    tracep->fullBit(oldp+78,(vlSelf->spi_rx_i));
    tracep->fullBit(oldp+79,(vlSelf->spi_tx_o));
    tracep->fullBit(oldp+80,(vlSelf->sck_o));
    tracep->fullCData(oldp+81,(vlSelf->byte_data_o),8);
    tracep->fullSData(oldp+82,((0xfffU & vlSelf->device_addr_i)),12);
    tracep->fullCData(oldp+83,((7U & ((IData)(vlSelf->device_be_i) 
                                      >> 1U))),3);
    tracep->fullCData(oldp+84,((0xffU & vlSelf->device_wdata_i)),8);
    tracep->fullCData(oldp+85,(((0x3f7U >= (0x3f8U 
                                            & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               << 3U)))
                                 ? (0xffU & (((0U == 
                                               (0x18U 
                                                & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                   << 3U)))
                                               ? 0U
                                               : (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x3f8U 
                                                     & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        << 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                       << 3U))))) 
                                             | (vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                (0x1fU 
                                                 & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    >> 2U))] 
                                                >> 
                                                (0x18U 
                                                 & ((IData)(vlSelf->spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                    << 3U)))))
                                 : 0U)),8);
    tracep->fullIData(oldp+86,(0x2faf080U),32);
    tracep->fullIData(oldp+87,(0xbebc20U),32);
    tracep->fullBit(oldp+88,(0U));
    tracep->fullIData(oldp+89,(0x20U),32);
    tracep->fullIData(oldp+90,(0xcU),32);
    tracep->fullSData(oldp+91,(0U),12);
    tracep->fullSData(oldp+92,(4U),12);
    tracep->fullIData(oldp+93,(4U),32);
    tracep->fullIData(oldp+94,(2U),32);
    tracep->fullIData(oldp+95,(1U),32);
    tracep->fullBit(oldp+96,(1U));
    tracep->fullIData(oldp+97,(8U),32);
    tracep->fullIData(oldp+98,(0x7fU),32);
    tracep->fullBit(oldp+99,(1U));
    tracep->fullIData(oldp+100,(7U),32);
    tracep->fullBit(oldp+101,(0U));
    tracep->fullIData(oldp+102,(7U),32);
}
