// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vobi2wb.h for the primary calling header

#ifndef VERILATED_VOBI2WB___024UNIT_H_
#define VERILATED_VOBI2WB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vobi2wb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vobi2wb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<std::string, 2> __Venumtab_enum_name0;

    // INTERNAL VARIABLES
    Vobi2wb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vobi2wb___024unit(Vobi2wb__Syms* symsp, const char* v__name);
    ~Vobi2wb___024unit();
    VL_UNCOPYABLE(Vobi2wb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
