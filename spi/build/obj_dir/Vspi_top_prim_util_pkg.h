// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_top.h for the primary calling header

#ifndef VERILATED_VSPI_TOP_PRIM_UTIL_PKG_H_
#define VERILATED_VSPI_TOP_PRIM_UTIL_PKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vspi_top__Syms;
VL_MODULE(Vspi_top_prim_util_pkg) {
  public:

    // INTERNAL VARIABLES
    Vspi_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vspi_top_prim_util_pkg(const char* name);
    ~Vspi_top_prim_util_pkg();
    VL_UNCOPYABLE(Vspi_top_prim_util_pkg);

    // INTERNAL METHODS
    void __Vconfigure(Vspi_top__Syms* symsp, bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
