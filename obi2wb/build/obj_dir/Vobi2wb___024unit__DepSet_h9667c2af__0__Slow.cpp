// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vobi2wb.h for the primary calling header

#include "Vobi2wb__pch.h"
#include "Vobi2wb___024unit.h"

VL_ATTR_COLD void Vobi2wb___024unit___ctor_var_reset(Vobi2wb___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vobi2wb___024unit___ctor_var_reset\n"); );
    // Body
    for (int __Vi = 0; __Vi < 2; ++__Vi) {
        vlSelf->__Venumtab_enum_name0[__Vi] = std::string{""};
    }
    vlSelf->__Venumtab_enum_name0[0] = std::string{"IDLE"};
    vlSelf->__Venumtab_enum_name0[1] = std::string{"WAIT_ACK"};
}

VL_ATTR_COLD void Vobi2wb___024unit___configure_coverage(Vobi2wb___024unit* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vobi2wb___024unit___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
}
