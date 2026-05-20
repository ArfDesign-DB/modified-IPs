// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtimer__Syms.h"


void Vtimer___024root__trace_chg_0_sub_0(Vtimer___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtimer___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root__trace_chg_0\n"); );
    // Init
    Vtimer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtimer___024root*>(voidSelf);
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtimer___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtimer___024root__trace_chg_0_sub_0(Vtimer___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->timer__DOT__timer_we));
        bufp->chgBit(oldp+1,(vlSelf->timer__DOT__mtime_we));
        bufp->chgBit(oldp+2,(vlSelf->timer__DOT__mtimeh_we));
        bufp->chgBit(oldp+3,(vlSelf->timer__DOT__mtimecmp_we));
        bufp->chgBit(oldp+4,(vlSelf->timer__DOT__mtimecmph_we));
        bufp->chgBit(oldp+5,(vlSelf->timer__DOT__error_d));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+6,(vlSelf->timer__DOT__mtime_wdata),32);
        bufp->chgIData(oldp+7,(vlSelf->timer__DOT__mtimeh_wdata),32);
        bufp->chgIData(oldp+8,(vlSelf->timer__DOT__mtimecmp_wdata),32);
        bufp->chgIData(oldp+9,(vlSelf->timer__DOT__mtimecmph_wdata),32);
        bufp->chgQData(oldp+10,(vlSelf->timer__DOT__mtime_d),64);
        bufp->chgQData(oldp+12,(vlSelf->timer__DOT__mtimecmp_d),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+14,(vlSelf->timer__DOT__mtime_q),64);
        bufp->chgQData(oldp+16,((1ULL + vlSelf->timer__DOT__mtime_q)),64);
        bufp->chgQData(oldp+18,(vlSelf->timer__DOT__mtimecmp_q),64);
        bufp->chgBit(oldp+20,(vlSelf->timer__DOT__interrupt_q));
        bufp->chgBit(oldp+21,(vlSelf->timer__DOT__interrupt_d));
        bufp->chgBit(oldp+22,(vlSelf->timer__DOT__rvalid_q));
    }
    bufp->chgBit(oldp+23,(vlSelf->clk_i));
    bufp->chgBit(oldp+24,(vlSelf->rst_ni));
    bufp->chgBit(oldp+25,(vlSelf->timer_req_i));
    bufp->chgIData(oldp+26,(vlSelf->timer_addr_i),32);
    bufp->chgBit(oldp+27,(vlSelf->timer_we_i));
    bufp->chgCData(oldp+28,(vlSelf->timer_be_i),4);
    bufp->chgIData(oldp+29,(vlSelf->timer_wdata_i),32);
    bufp->chgBit(oldp+30,(vlSelf->timer_rvalid_o));
    bufp->chgIData(oldp+31,(vlSelf->timer_rdata_o),32);
    bufp->chgBit(oldp+32,(vlSelf->timer_err_o));
    bufp->chgBit(oldp+33,(vlSelf->timer_intr_o));
    bufp->chgBit(oldp+34,(vlSelf->timer__DOT__error_q));
    bufp->chgIData(oldp+35,(vlSelf->timer__DOT__rdata_q),32);
    bufp->chgIData(oldp+36,(vlSelf->timer__DOT__rdata_d),32);
    bufp->chgBit(oldp+37,((0U != (vlSelf->timer_addr_i 
                                  >> 0xaU))));
}

void Vtimer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root__trace_cleanup\n"); );
    // Init
    Vtimer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtimer___024root*>(voidSelf);
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
