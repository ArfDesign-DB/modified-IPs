// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VGPIO__SYMS_H_
#define VERILATED_VGPIO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vgpio.h"

// INCLUDE MODULE CLASSES
#include "Vgpio___024root.h"
#include "Vgpio___024unit.h"
#include "Vgpio_debounce.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vgpio__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vgpio* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vgpio___024root                TOP;
    Vgpio_debounce                 TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc;
    Vgpio_debounce                 TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc;
    Vgpio_debounce                 TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc;
    Vgpio_debounce                 TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc;
    Vgpio_debounce                 TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc;
    Vgpio_debounce                 TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc;
    Vgpio_debounce                 TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc;
    Vgpio_debounce                 TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc;

    // COVERAGE
    uint32_t __Vcoverage[221];

    // CONSTRUCTORS
    Vgpio__Syms(VerilatedContext* contextp, const char* namep, Vgpio* modelp);
    ~Vgpio__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
