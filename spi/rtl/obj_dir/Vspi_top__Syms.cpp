// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vspi_top__Syms.h"
#include "Vspi_top.h"
#include "Vspi_top___024root.h"
#include "Vspi_top_prim_util_pkg.h"

// FUNCTIONS
Vspi_top__Syms::~Vspi_top__Syms()
{
}

Vspi_top__Syms::Vspi_top__Syms(VerilatedContext* contextp, const char* namep,Vspi_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
