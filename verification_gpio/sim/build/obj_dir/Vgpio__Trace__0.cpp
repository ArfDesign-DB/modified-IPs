// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgpio__Syms.h"


void Vgpio___024root__trace_chg_0_sub_0(Vgpio___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vgpio___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_chg_0\n"); );
    // Init
    Vgpio___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgpio___024root*>(voidSelf);
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vgpio___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vgpio___024root__trace_chg_0_sub_0(Vgpio___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->gpio__DOT__gp_o_wr_en));
        bufp->chgBit(oldp+1,(vlSelf->gpio__DOT__gp_i_rd_en_d));
        bufp->chgBit(oldp+2,(vlSelf->gpio__DOT__gp_i_dbnc_rd_en_d));
        bufp->chgBit(oldp+3,(vlSelf->gpio__DOT__invalid_address_signal));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+4,(vlSelf->gpio__DOT__gp_i_q),24);
        bufp->chgCData(oldp+5,(vlSelf->gpio__DOT__gp_i_dbnc),8);
        bufp->chgBit(oldp+6,(vlSelf->gpio__DOT__gp_i_rd_en_q));
        bufp->chgBit(oldp+7,(vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q));
        bufp->chgBit(oldp+8,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                    >> 0x10U))));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc.__PVT__btn_q));
        bufp->chgSData(oldp+10,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc.__PVT__cnt_d),9);
        bufp->chgSData(oldp+11,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc.__PVT__cnt_q),9);
        bufp->chgBit(oldp+12,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc.__PVT__btn_d));
        bufp->chgBit(oldp+13,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                     >> 0x11U))));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc.__PVT__btn_q));
        bufp->chgSData(oldp+15,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc.__PVT__cnt_d),9);
        bufp->chgSData(oldp+16,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc.__PVT__cnt_q),9);
        bufp->chgBit(oldp+17,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc.__PVT__btn_d));
        bufp->chgBit(oldp+18,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                     >> 0x12U))));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc.__PVT__btn_q));
        bufp->chgSData(oldp+20,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc.__PVT__cnt_d),9);
        bufp->chgSData(oldp+21,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc.__PVT__cnt_q),9);
        bufp->chgBit(oldp+22,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc.__PVT__btn_d));
        bufp->chgBit(oldp+23,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                     >> 0x13U))));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc.__PVT__btn_q));
        bufp->chgSData(oldp+25,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc.__PVT__cnt_d),9);
        bufp->chgSData(oldp+26,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc.__PVT__cnt_q),9);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc.__PVT__btn_d));
        bufp->chgBit(oldp+28,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                     >> 0x14U))));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc.__PVT__btn_q));
        bufp->chgSData(oldp+30,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc.__PVT__cnt_d),9);
        bufp->chgSData(oldp+31,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc.__PVT__cnt_q),9);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc.__PVT__btn_d));
        bufp->chgBit(oldp+33,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                     >> 0x15U))));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc.__PVT__btn_q));
        bufp->chgSData(oldp+35,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc.__PVT__cnt_d),9);
        bufp->chgSData(oldp+36,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc.__PVT__cnt_q),9);
        bufp->chgBit(oldp+37,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc.__PVT__btn_d));
        bufp->chgBit(oldp+38,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                     >> 0x16U))));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc.__PVT__btn_q));
        bufp->chgSData(oldp+40,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc.__PVT__cnt_d),9);
        bufp->chgSData(oldp+41,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc.__PVT__cnt_q),9);
        bufp->chgBit(oldp+42,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc.__PVT__btn_d));
        bufp->chgBit(oldp+43,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                     >> 0x17U))));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc.__PVT__btn_q));
        bufp->chgSData(oldp+45,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc.__PVT__cnt_d),9);
        bufp->chgSData(oldp+46,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc.__PVT__cnt_q),9);
        bufp->chgBit(oldp+47,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc.__PVT__btn_d));
    }
    bufp->chgBit(oldp+48,(vlSelf->clk_i));
    bufp->chgBit(oldp+49,(vlSelf->rst_ni));
    bufp->chgBit(oldp+50,(vlSelf->device_req_i));
    bufp->chgIData(oldp+51,(vlSelf->device_addr_i),32);
    bufp->chgBit(oldp+52,(vlSelf->device_we_i));
    bufp->chgCData(oldp+53,(vlSelf->device_be_i),4);
    bufp->chgIData(oldp+54,(vlSelf->device_wdata_i),32);
    bufp->chgBit(oldp+55,(vlSelf->device_rvalid_o));
    bufp->chgIData(oldp+56,(vlSelf->device_rdata_o),32);
    bufp->chgCData(oldp+57,(vlSelf->gp_i),8);
    bufp->chgSData(oldp+58,(vlSelf->gp_o),16);
    bufp->chgSData(oldp+59,((0xfffU & vlSelf->device_addr_i)),12);
    bufp->chgSData(oldp+60,(vlSelf->gpio__DOT__gp_o_d),16);
    bufp->chgCData(oldp+61,((0xcU & (IData)(vlSelf->device_be_i))),4);
    bufp->chgIData(oldp+62,((vlSelf->device_addr_i 
                             >> 0xcU)),20);
    bufp->chgSData(oldp+63,((vlSelf->device_wdata_i 
                             >> 0x10U)),16);
}

void Vgpio___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_cleanup\n"); );
    // Init
    Vgpio___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgpio___024root*>(voidSelf);
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
