// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart.h for the primary calling header

#ifndef VERILATED_VUART_PRIM_UTIL_PKG_H_
#define VERILATED_VUART_PRIM_UTIL_PKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vuart__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_prim_util_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_prim_util_pkg(Vuart__Syms* symsp, const char* v__name);
    ~Vuart_prim_util_pkg();
    VL_UNCOPYABLE(Vuart_prim_util_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
