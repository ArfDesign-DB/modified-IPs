// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vboot_rom.h for the primary calling header

#ifndef VERILATED_VBOOT_ROM___024ROOT_H_
#define VERILATED_VBOOT_ROM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vboot_rom__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vboot_rom___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    CData/*0:0*/ boot_rom__DOT____Vtogcov__clk_i;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_IN16(addr_i,9,0);
    SData/*9:0*/ boot_rom__DOT____Vtogcov__addr_i;
    VL_OUT(data_o,31,0);
    IData/*31:0*/ boot_rom__DOT____Vtogcov__data_o;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> boot_rom__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vboot_rom__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vboot_rom___024root(Vboot_rom__Syms* symsp, const char* namep);
    ~Vboot_rom___024root();
    VL_UNCOPYABLE(Vboot_rom___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
