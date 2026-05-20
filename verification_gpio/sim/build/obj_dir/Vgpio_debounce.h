// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgpio.h for the primary calling header

#ifndef VERILATED_VGPIO_DEBOUNCE_H_
#define VERILATED_VGPIO_DEBOUNCE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vgpio__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgpio_debounce final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(btn_i,0,0);
    VL_OUT8(btn_o,0,0);
    CData/*0:0*/ __PVT__btn_d;
    CData/*0:0*/ __PVT__btn_q;
    CData/*0:0*/ __Vtogcov__clk_i;
    CData/*0:0*/ __Vtogcov__rst_ni;
    CData/*0:0*/ __Vtogcov__btn_i;
    CData/*0:0*/ __Vtogcov__btn_o;
    CData/*0:0*/ __Vtogcov__btn_d;
    SData/*8:0*/ __PVT__cnt_d;
    SData/*8:0*/ __PVT__cnt_q;
    SData/*8:0*/ __Vtogcov__cnt_d;
    SData/*8:0*/ __Vtogcov__cnt_q;

    // INTERNAL VARIABLES
    Vgpio__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgpio_debounce(Vgpio__Syms* symsp, const char* v__name);
    ~Vgpio_debounce();
    VL_UNCOPYABLE(Vgpio_debounce);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
