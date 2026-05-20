// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgpio.h for the primary calling header

#ifndef VERILATED_VGPIO___024UNIT_H_
#define VERILATED_VGPIO___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vgpio__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgpio___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vgpio__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgpio___024unit(Vgpio__Syms* symsp, const char* v__name);
    ~Vgpio___024unit();
    VL_UNCOPYABLE(Vgpio___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
