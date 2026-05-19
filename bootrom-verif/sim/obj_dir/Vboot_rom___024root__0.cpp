// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboot_rom.h for the primary calling header

#include "Vboot_rom__pch.h"

void Vboot_rom___024root___eval_triggers_vec__ico(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_triggers_vec__ico\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vboot_rom___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___trigger_anySet__ico\n"); );
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

void Vboot_rom___024root___ico_sequent__TOP__0(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___ico_sequent__TOP__0\n"); );
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
}

void Vboot_rom___024root___eval_ico(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_ico\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vboot_rom___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboot_rom___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vboot_rom___024root___eval_phase__ico(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_phase__ico\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vboot_rom___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vboot_rom___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vboot_rom___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vboot_rom___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vboot_rom___024root___eval_triggers_vec__act(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_triggers_vec__act\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk_i) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
}

bool Vboot_rom___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___trigger_anySet__act\n"); );
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

void Vboot_rom___024root___nba_sequent__TOP__0(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___nba_sequent__TOP__0\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    ++(vlSymsp->__Vcoverage[87]);
    vlSelfRef.data_o = vlSelfRef.boot_rom__DOT__mem
        [vlSelfRef.addr_i];
    if ((vlSelfRef.data_o ^ vlSelfRef.boot_rom__DOT____Vtogcov__data_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22, vlSelfRef.data_o, vlSelfRef.boot_rom__DOT____Vtogcov__data_o);
        vlSelfRef.boot_rom__DOT____Vtogcov__data_o 
            = vlSelfRef.data_o;
    }
}

void Vboot_rom___024root___eval_nba(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_nba\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vboot_rom___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vboot_rom___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboot_rom___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vboot_rom___024root___eval_phase__act(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_phase__act\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vboot_rom___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vboot_rom___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vboot_rom___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vboot_rom___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vboot_rom___024root___eval_phase__nba(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_phase__nba\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vboot_rom___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vboot_rom___024root___eval_nba(vlSelf);
        Vboot_rom___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vboot_rom___024root___eval(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vboot_rom___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../rtl/boot_rom.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vboot_rom___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vboot_rom___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../rtl/boot_rom.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vboot_rom___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../rtl/boot_rom.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vboot_rom___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vboot_rom___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vboot_rom___024root___eval_debug_assertions(Vboot_rom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_rom___024root___eval_debug_assertions\n"); );
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.addr_i & 0xfc00U)))) {
        Verilated::overWidthError("addr_i");
    }
}
#endif  // VL_DEBUG
