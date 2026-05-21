// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwb_interconnect.h for the primary calling header

#include "verilated.h"

#include "Vwb_interconnect__Syms.h"
#include "Vwb_interconnect___024root.h"

void Vwb_interconnect___024root___ctor_var_reset(Vwb_interconnect___024root* vlSelf);

Vwb_interconnect___024root::Vwb_interconnect___024root(Vwb_interconnect__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vwb_interconnect___024root___ctor_var_reset(this);
}

void Vwb_interconnect___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vwb_interconnect___024root::~Vwb_interconnect___024root() {
}
