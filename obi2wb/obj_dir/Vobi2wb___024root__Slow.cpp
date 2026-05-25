// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vobi2wb.h for the primary calling header

#include "Vobi2wb__pch.h"
#include "Vobi2wb__Syms.h"
#include "Vobi2wb___024root.h"

void Vobi2wb___024root___ctor_var_reset(Vobi2wb___024root* vlSelf);

Vobi2wb___024root::Vobi2wb___024root(Vobi2wb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vobi2wb___024root___ctor_var_reset(this);
}

void Vobi2wb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vobi2wb___024root::~Vobi2wb___024root() {
}
