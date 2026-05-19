// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBOOT_ROM__SYMS_H_
#define VERILATED_VBOOT_ROM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vboot_rom.h"

// INCLUDE MODULE CLASSES
#include "Vboot_rom___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vboot_rom__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vboot_rom* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vboot_rom___024root            TOP;

    // COVERAGE
    uint32_t __Vcoverage[88];

    // CONSTRUCTORS
    Vboot_rom__Syms(VerilatedContext* contextp, const char* namep, Vboot_rom* modelp);
    ~Vboot_rom__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
