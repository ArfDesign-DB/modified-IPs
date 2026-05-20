// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer.h for the primary calling header

#include "Vtimer__pch.h"
#include "Vtimer__Syms.h"
#include "Vtimer___024root.h"

void Vtimer___024root___ctor_var_reset(Vtimer___024root* vlSelf);

Vtimer___024root::Vtimer___024root(Vtimer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtimer___024root___ctor_var_reset(this);
}

void Vtimer___024root___configure_coverage(Vtimer___024root* vlSelf, bool first);

void Vtimer___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vtimer___024root___configure_coverage(this, first);
}

Vtimer___024root::~Vtimer___024root() {
}

// Coverage
void Vtimer___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{VerilatedModule::name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
