// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "Vuart__pch.h"
#include "Vuart__Syms.h"
#include "Vuart_prim_fifo_sync__W8_Pz1_D80.h"

void Vuart_prim_fifo_sync__W8_Pz1_D80___ctor_var_reset(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf);

Vuart_prim_fifo_sync__W8_Pz1_D80::Vuart_prim_fifo_sync__W8_Pz1_D80(Vuart__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vuart_prim_fifo_sync__W8_Pz1_D80___ctor_var_reset(this);
}

void Vuart_prim_fifo_sync__W8_Pz1_D80___configure_coverage(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf, bool first);

void Vuart_prim_fifo_sync__W8_Pz1_D80::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vuart_prim_fifo_sync__W8_Pz1_D80___configure_coverage(this, first);
}

Vuart_prim_fifo_sync__W8_Pz1_D80::~Vuart_prim_fifo_sync__W8_Pz1_D80() {
}

// Coverage
void Vuart_prim_fifo_sync__W8_Pz1_D80::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{VerilatedModule::name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
