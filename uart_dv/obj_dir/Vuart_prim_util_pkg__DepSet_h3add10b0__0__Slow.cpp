// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "Vuart__pch.h"
#include "Vuart__Syms.h"
#include "Vuart_prim_util_pkg.h"

VL_ATTR_COLD void Vuart_prim_util_pkg___configure_coverage(Vuart_prim_util_pkg* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_util_pkg___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_util_pkg.sv", 34, 5, "", "v_line/prim_util_pkg", "block", "34-35");
}
