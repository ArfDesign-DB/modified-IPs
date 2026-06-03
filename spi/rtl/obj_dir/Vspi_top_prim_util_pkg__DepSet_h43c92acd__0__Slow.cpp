// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_top.h for the primary calling header

#include "verilated.h"

#include "Vspi_top__Syms.h"
#include "Vspi_top_prim_util_pkg.h"

VL_ATTR_COLD void Vspi_top_prim_util_pkg___configure_coverage(Vspi_top_prim_util_pkg* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vspi_top_prim_util_pkg___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "../rtl/prim_util_pkg.sv", 34, 5, "", "v_line/prim_util_pkg", "block", "34-35");
}
