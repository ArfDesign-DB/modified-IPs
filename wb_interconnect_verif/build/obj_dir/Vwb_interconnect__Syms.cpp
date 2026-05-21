// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vwb_interconnect__Syms.h"
#include "Vwb_interconnect.h"
#include "Vwb_interconnect___024root.h"

// FUNCTIONS
Vwb_interconnect__Syms::~Vwb_interconnect__Syms()
{
}

Vwb_interconnect__Syms::Vwb_interconnect__Syms(VerilatedContext* contextp, const char* namep, Vwb_interconnect* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
