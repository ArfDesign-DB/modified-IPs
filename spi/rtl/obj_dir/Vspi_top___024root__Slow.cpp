// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_top.h for the primary calling header

#include "verilated.h"

#include "Vspi_top__Syms.h"
#include "Vspi_top___024root.h"

void Vspi_top___024root___ctor_var_reset(Vspi_top___024root* vlSelf);

Vspi_top___024root::Vspi_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vspi_top___024root___ctor_var_reset(this);
}

void Vspi_top___024root___configure_coverage(Vspi_top___024root* vlSelf, bool first);

void Vspi_top___024root::__Vconfigure(Vspi_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vspi_top___024root___configure_coverage(this, first);
}

Vspi_top___024root::~Vspi_top___024root() {
}

// Coverage
void Vspi_top___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
