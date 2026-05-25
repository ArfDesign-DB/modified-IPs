// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VOBI2WB__SYMS_H_
#define VERILATED_VOBI2WB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vobi2wb.h"

// INCLUDE MODULE CLASSES
#include "Vobi2wb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vobi2wb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vobi2wb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vobi2wb___024root              TOP;

    // CONSTRUCTORS
    Vobi2wb__Syms(VerilatedContext* contextp, const char* namep, Vobi2wb* modelp);
    ~Vobi2wb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
