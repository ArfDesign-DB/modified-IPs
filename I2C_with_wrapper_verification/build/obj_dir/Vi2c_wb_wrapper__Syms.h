// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VI2C_WB_WRAPPER__SYMS_H_
#define VERILATED_VI2C_WB_WRAPPER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vi2c_wb_wrapper.h"

// INCLUDE MODULE CLASSES
#include "Vi2c_wb_wrapper___024root.h"

// SYMS CLASS (contains all model state)
class Vi2c_wb_wrapper__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vi2c_wb_wrapper* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vi2c_wb_wrapper___024root      TOP;

    // COVERAGE
    uint32_t __Vcoverage[402];

    // CONSTRUCTORS
    Vi2c_wb_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vi2c_wb_wrapper* modelp);
    ~Vi2c_wb_wrapper__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
