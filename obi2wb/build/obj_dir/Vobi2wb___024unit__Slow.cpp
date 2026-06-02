// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vobi2wb.h for the primary calling header

#include "Vobi2wb__pch.h"
#include "Vobi2wb__Syms.h"
#include "Vobi2wb___024unit.h"
VlUnpacked<std::string, 2> Vobi2wb___024unit::__Venumtab_enum_name0;

void Vobi2wb___024unit___ctor_var_reset(Vobi2wb___024unit* vlSelf);

Vobi2wb___024unit::Vobi2wb___024unit(Vobi2wb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vobi2wb___024unit___ctor_var_reset(this);
}

void Vobi2wb___024unit___configure_coverage(Vobi2wb___024unit* vlSelf, bool first);

void Vobi2wb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vobi2wb___024unit___configure_coverage(this, first);
}

Vobi2wb___024unit::~Vobi2wb___024unit() {
}

// Coverage
void Vobi2wb___024unit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{VerilatedModule::name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
