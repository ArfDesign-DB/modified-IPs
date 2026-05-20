// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio.h for the primary calling header

#include "Vgpio__pch.h"
#include "Vgpio__Syms.h"
#include "Vgpio_debounce.h"

void Vgpio_debounce___ctor_var_reset(Vgpio_debounce* vlSelf);

Vgpio_debounce::Vgpio_debounce(Vgpio__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vgpio_debounce___ctor_var_reset(this);
}

void Vgpio_debounce___configure_coverage(Vgpio_debounce* vlSelf, bool first);

void Vgpio_debounce::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vgpio_debounce___configure_coverage(this, first);
}

Vgpio_debounce::~Vgpio_debounce() {
}

// Coverage
void Vgpio_debounce::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{VerilatedModule::name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
