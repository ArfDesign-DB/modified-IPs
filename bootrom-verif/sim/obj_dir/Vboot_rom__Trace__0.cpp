// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vboot_rom__Syms.h"


void Vboot_rom___024root__trace_chg_0_sub_0(Vboot_rom___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vboot_rom___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root__trace_chg_0\n"); );
    // Body
    Vboot_rom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vboot_rom___024root*>(voidSelf);
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vboot_rom___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vboot_rom___024root__trace_chg_0_sub_0(Vboot_rom___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root__trace_chg_0_sub_0\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.clk_i));
    bufp->chgSData(oldp+1,(vlSelfRef.addr_i),10);
    bufp->chgIData(oldp+2,(vlSelfRef.data_o),32);
}

void Vboot_rom___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vboot_rom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vboot_rom___024root*>(voidSelf);
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
