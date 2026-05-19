// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboot_rom.h for the primary calling header

#include "Vboot_rom__pch.h"

VL_ATTR_COLD void Vboot_rom___024root___eval_static(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_static\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
}

VL_ATTR_COLD void Vboot_rom___024root___eval_initial__TOP(Vboot_rom___024root* vlSelf);

VL_ATTR_COLD void Vboot_rom___024root___eval_initial(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_initial\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboot_rom___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vboot_rom___024root___eval_initial__TOP(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_initial__TOP\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 1024, 0, "boot.mem"s,  &(vlSelfRef.boot_rom__DOT__mem)
                 , 0, ~0ULL);
    ++(vlSymsp->__Vcoverage[86]);
}

VL_ATTR_COLD void Vboot_rom___024root___eval_final(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_final\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboot_rom___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vboot_rom___024root___eval_phase__stl(Vboot_rom___024root* vlSelf);

VL_ATTR_COLD void Vboot_rom___024root___eval_settle(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_settle\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vboot_rom___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../rtl/boot_rom.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vboot_rom___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vboot_rom___024root___eval_triggers_vec__stl(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_triggers_vec__stl\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vboot_rom___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboot_rom___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vboot_rom___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vboot_rom___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vboot_rom___024root___stl_sequent__TOP__0(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___stl_sequent__TOP__0\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.clk_i) ^ (IData)(vlSelfRef.boot_rom__DOT____Vtogcov__clk_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.clk_i, vlSelfRef.boot_rom__DOT____Vtogcov__clk_i);
        vlSelfRef.boot_rom__DOT____Vtogcov__clk_i = vlSelfRef.clk_i;
    }
    if (((IData)(vlSelfRef.addr_i) ^ (IData)(vlSelfRef.boot_rom__DOT____Vtogcov__addr_i))) {
        VL_COV_TOGGLE_CHG_ST_I(10, vlSymsp->__Vcoverage + 2, vlSelfRef.addr_i, vlSelfRef.boot_rom__DOT____Vtogcov__addr_i);
        vlSelfRef.boot_rom__DOT____Vtogcov__addr_i 
            = vlSelfRef.addr_i;
    }
    if ((vlSelfRef.data_o ^ vlSelfRef.boot_rom__DOT____Vtogcov__data_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22, vlSelfRef.data_o, vlSelfRef.boot_rom__DOT____Vtogcov__data_o);
        vlSelfRef.boot_rom__DOT____Vtogcov__data_o 
            = vlSelfRef.data_o;
    }
}

VL_ATTR_COLD void Vboot_rom___024root___eval_stl(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_stl\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vboot_rom___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vboot_rom___024root___eval_phase__stl(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_phase__stl\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vboot_rom___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vboot_rom___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vboot_rom___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vboot_rom___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vboot_rom___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboot_rom___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vboot_rom___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vboot_rom___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboot_rom___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vboot_rom___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vboot_rom___024root___ctor_var_reset(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___ctor_var_reset\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->addr_i = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5910257723895866083ull);
    vlSelf->data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14180446042470581157ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->boot_rom__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3669577634743156863ull);
    }
    vlSelf->boot_rom__DOT____Vtogcov__clk_i = 0;
    vlSelf->boot_rom__DOT____Vtogcov__addr_i = 0;
    vlSelf->boot_rom__DOT____Vtogcov__data_o = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vboot_rom___024root___configure_coverage(Vboot_rom___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___configure_coverage\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "../rtl/boot_rom.sv", 5, 29, ".boot_rom", "v_toggle/boot_rom", "clk_i");
    vlSelf->__vlCoverToggleInsert(0, 9, 1, &(vlSymsp->__Vcoverage[2]), first, "../rtl/boot_rom.sv", 6, 33, ".boot_rom", "v_toggle/boot_rom", "addr_i");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[22]), first, "../rtl/boot_rom.sv", 7, 29, ".boot_rom", "v_toggle/boot_rom", "data_o");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../rtl/boot_rom.sv", 12, 3, ".boot_rom", "v_line/boot_rom", "block", "12-13", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../rtl/boot_rom.sv", 16, 3, ".boot_rom", "v_line/boot_rom", "block", "16-17", "", "", "", "");
}
