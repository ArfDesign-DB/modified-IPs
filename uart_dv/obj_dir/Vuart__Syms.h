// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUART__SYMS_H_
#define VERILATED_VUART__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vuart.h"

// INCLUDE MODULE CLASSES
#include "Vuart___024root.h"
#include "Vuart_prim_util_pkg.h"
#include "Vuart_prim_fifo_sync__W8_Pz1_D80.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vuart__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vuart* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vuart___024root                TOP;
    Vuart_prim_fifo_sync__W8_Pz1_D80 TOP__uart__DOT__u_rx_fifo;
    Vuart_prim_fifo_sync__W8_Pz1_D80 TOP__uart__DOT__u_tx_fifo;

    // COVERAGE
    uint32_t __Vcoverage[425];

    // CONSTRUCTORS
    Vuart__Syms(VerilatedContext* contextp, const char* namep, Vuart* modelp);
    ~Vuart__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
