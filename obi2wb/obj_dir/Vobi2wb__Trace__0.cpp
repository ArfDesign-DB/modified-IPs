// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vobi2wb__Syms.h"


void Vobi2wb___024root__trace_chg_0_sub_0(Vobi2wb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vobi2wb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root__trace_chg_0\n"); );
    // Init
    Vobi2wb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vobi2wb___024root*>(voidSelf);
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vobi2wb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vobi2wb___024root__trace_chg_0_sub_0(Vobi2wb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->obi2wb__DOT__state_q));
        bufp->chgIData(oldp+1,(vlSelf->obi2wb__DOT__addr_q),32);
        bufp->chgIData(oldp+2,(vlSelf->obi2wb__DOT__wdata_q),32);
        bufp->chgCData(oldp+3,(vlSelf->obi2wb__DOT__be_q),4);
        bufp->chgBit(oldp+4,(vlSelf->obi2wb__DOT__we_q));
        bufp->chgBit(oldp+5,(vlSelf->obi2wb__DOT__req_sent_q));
    }
    bufp->chgBit(oldp+6,(vlSelf->clk_i));
    bufp->chgBit(oldp+7,(vlSelf->rst_ni));
    bufp->chgBit(oldp+8,(vlSelf->obi_req_i));
    bufp->chgBit(oldp+9,(vlSelf->obi_gnt_o));
    bufp->chgIData(oldp+10,(vlSelf->obi_addr_i),32);
    bufp->chgBit(oldp+11,(vlSelf->obi_we_i));
    bufp->chgCData(oldp+12,(vlSelf->obi_be_i),4);
    bufp->chgIData(oldp+13,(vlSelf->obi_wdata_i),32);
    bufp->chgBit(oldp+14,(vlSelf->obi_rvalid_o));
    bufp->chgIData(oldp+15,(vlSelf->obi_rdata_o),32);
    bufp->chgBit(oldp+16,(vlSelf->wb_cyc_o));
    bufp->chgBit(oldp+17,(vlSelf->wb_stb_o));
    bufp->chgBit(oldp+18,(vlSelf->wb_we_o));
    bufp->chgIData(oldp+19,(vlSelf->wb_adr_o),32);
    bufp->chgIData(oldp+20,(vlSelf->wb_dat_o),32);
    bufp->chgCData(oldp+21,(vlSelf->wb_sel_o),4);
    bufp->chgBit(oldp+22,(vlSelf->wb_ack_i));
    bufp->chgIData(oldp+23,(vlSelf->wb_dat_i),32);
    bufp->chgBit(oldp+24,(vlSelf->wb_stall_i));
}

void Vobi2wb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobi2wb___024root__trace_cleanup\n"); );
    // Init
    Vobi2wb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vobi2wb___024root*>(voidSelf);
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
