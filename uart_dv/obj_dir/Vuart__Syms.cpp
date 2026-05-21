// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vuart__pch.h"
#include "Vuart.h"
#include "Vuart___024root.h"
#include "Vuart_prim_util_pkg.h"
#include "Vuart_prim_fifo_sync__W8_Pz1_D80.h"

// FUNCTIONS
Vuart__Syms::~Vuart__Syms()
{
}

Vuart__Syms::Vuart__Syms(VerilatedContext* contextp, const char* namep, Vuart* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__uart__DOT__u_rx_fifo{this, Verilated::catName(namep, "uart.u_rx_fifo")}
    , TOP__uart__DOT__u_tx_fifo{this, Verilated::catName(namep, "uart.u_tx_fifo")}
{
        // Check resources
        Verilated::stackCheck(29);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__uart__DOT__u_rx_fifo = &TOP__uart__DOT__u_rx_fifo;
    TOP.__PVT__uart__DOT__u_tx_fifo = &TOP__uart__DOT__u_tx_fifo;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__uart__DOT__u_rx_fifo.__Vconfigure(true);
    TOP__uart__DOT__u_tx_fifo.__Vconfigure(false);
}
