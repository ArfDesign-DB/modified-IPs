// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vboot_rom__Syms.h"


VL_ATTR_COLD void Vboot_rom___024root__trace_init_sub__TOP__0(Vboot_rom___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root__trace_init_sub__TOP__0\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "boot_rom", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+4,0,"INIT_FILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vboot_rom___024root__trace_init_top(Vboot_rom___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root__trace_init_top\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboot_rom___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vboot_rom___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vboot_rom___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vboot_rom___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vboot_rom___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vboot_rom___024root__trace_register(Vboot_rom___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root__trace_register\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vboot_rom___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vboot_rom___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vboot_rom___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vboot_rom___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vboot_rom___024root__trace_const_0_sub_0(Vboot_rom___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vboot_rom___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root__trace_const_0\n"); );
    // Body
    Vboot_rom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vboot_rom___024root*>(voidSelf);
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vboot_rom___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vboot_rom___024root__trace_const_0_sub_0(Vboot_rom___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root__trace_const_0_sub_0\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+3,(0x0000000aU),32);
    bufp->fullQData(oldp+4,(0x626f6f742e6d656dULL),64);
}

VL_ATTR_COLD void Vboot_rom___024root__trace_full_0_sub_0(Vboot_rom___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vboot_rom___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root__trace_full_0\n"); );
    // Body
    Vboot_rom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vboot_rom___024root*>(voidSelf);
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vboot_rom___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vboot_rom___024root__trace_full_0_sub_0(Vboot_rom___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root__trace_full_0_sub_0\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.clk_i));
    bufp->fullSData(oldp+1,(vlSelfRef.addr_i),10);
    bufp->fullIData(oldp+2,(vlSelfRef.data_o),32);
}
