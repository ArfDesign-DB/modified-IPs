// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer.h for the primary calling header

#include "Vtimer__pch.h"
#include "Vtimer___024root.h"

void Vtimer___024root___ico_sequent__TOP__0(Vtimer___024root* vlSelf);

void Vtimer___024root___eval_ico(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtimer___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtimer___024root___eval_triggers__ico(Vtimer___024root* vlSelf);

bool Vtimer___024root___eval_phase__ico(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtimer___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtimer___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtimer___024root___eval_act(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_act\n"); );
}

void Vtimer___024root___nba_sequent__TOP__0(Vtimer___024root* vlSelf);
void Vtimer___024root___nba_sequent__TOP__1(Vtimer___024root* vlSelf);
void Vtimer___024root___nba_sequent__TOP__2(Vtimer___024root* vlSelf);

void Vtimer___024root___eval_nba(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtimer___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtimer___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtimer___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vtimer___024root___eval_triggers__act(Vtimer___024root* vlSelf);

bool Vtimer___024root___eval_phase__act(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtimer___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtimer___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtimer___024root___eval_phase__nba(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtimer___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer___024root___dump_triggers__ico(Vtimer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer___024root___dump_triggers__nba(Vtimer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer___024root___dump_triggers__act(Vtimer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtimer___024root___eval(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtimer___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/manju_arf/ibex-demo-system/manju/timer-verif/rtl/timer.sv", 9, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtimer___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtimer___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/manju_arf/ibex-demo-system/manju/timer-verif/rtl/timer.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtimer___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/manju_arf/ibex-demo-system/manju/timer-verif/rtl/timer.sv", 9, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtimer___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtimer___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtimer___024root___eval_debug_assertions(Vtimer___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->timer_req_i & 0xfeU))) {
        Verilated::overWidthError("timer_req_i");}
    if (VL_UNLIKELY((vlSelf->timer_we_i & 0xfeU))) {
        Verilated::overWidthError("timer_we_i");}
    if (VL_UNLIKELY((vlSelf->timer_be_i & 0xf0U))) {
        Verilated::overWidthError("timer_be_i");}
}
#endif  // VL_DEBUG
