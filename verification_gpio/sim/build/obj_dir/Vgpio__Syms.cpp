// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vgpio__pch.h"
#include "Vgpio.h"
#include "Vgpio___024root.h"
#include "Vgpio___024unit.h"
#include "Vgpio_debounce.h"

// FUNCTIONS
Vgpio__Syms::~Vgpio__Syms()
{
}

Vgpio__Syms::Vgpio__Syms(VerilatedContext* contextp, const char* namep, Vgpio* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc{this, Verilated::catName(namep, "gpio.gen_debounce[0].dbnc")}
    , TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc{this, Verilated::catName(namep, "gpio.gen_debounce[1].dbnc")}
    , TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc{this, Verilated::catName(namep, "gpio.gen_debounce[2].dbnc")}
    , TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc{this, Verilated::catName(namep, "gpio.gen_debounce[3].dbnc")}
    , TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc{this, Verilated::catName(namep, "gpio.gen_debounce[4].dbnc")}
    , TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc{this, Verilated::catName(namep, "gpio.gen_debounce[5].dbnc")}
    , TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc{this, Verilated::catName(namep, "gpio.gen_debounce[6].dbnc")}
    , TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc{this, Verilated::catName(namep, "gpio.gen_debounce[7].dbnc")}
{
        // Check resources
        Verilated::stackCheck(29);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc = &TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc;
    TOP.__PVT__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc = &TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc;
    TOP.__PVT__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc = &TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc;
    TOP.__PVT__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc = &TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc;
    TOP.__PVT__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc = &TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc;
    TOP.__PVT__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc = &TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc;
    TOP.__PVT__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc = &TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc;
    TOP.__PVT__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc = &TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc.__Vconfigure(true);
    TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc.__Vconfigure(false);
    TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc.__Vconfigure(false);
    TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc.__Vconfigure(false);
    TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc.__Vconfigure(false);
    TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc.__Vconfigure(false);
    TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc.__Vconfigure(false);
    TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc.__Vconfigure(false);
}
