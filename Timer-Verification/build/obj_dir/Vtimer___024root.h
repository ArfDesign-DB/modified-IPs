// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtimer.h for the primary calling header

#ifndef VERILATED_VTIMER___024ROOT_H_
#define VERILATED_VTIMER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtimer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtimer___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(timer_req_i,0,0);
        VL_IN8(timer_we_i,0,0);
        VL_IN8(timer_be_i,3,0);
        VL_OUT8(timer_rvalid_o,0,0);
        VL_OUT8(timer_err_o,0,0);
        VL_OUT8(timer_intr_o,0,0);
        CData/*0:0*/ timer__DOT__timer_we;
        CData/*0:0*/ timer__DOT__mtime_we;
        CData/*0:0*/ timer__DOT__mtimeh_we;
        CData/*0:0*/ timer__DOT__mtimecmp_we;
        CData/*0:0*/ timer__DOT__mtimecmph_we;
        CData/*0:0*/ timer__DOT__interrupt_q;
        CData/*0:0*/ timer__DOT__interrupt_d;
        CData/*0:0*/ timer__DOT__error_q;
        CData/*0:0*/ timer__DOT__error_d;
        CData/*0:0*/ timer__DOT__rvalid_q;
        CData/*0:0*/ timer__DOT____Vtogcov__clk_i;
        CData/*0:0*/ timer__DOT____Vtogcov__rst_ni;
        CData/*0:0*/ timer__DOT____Vtogcov__timer_req_i;
        CData/*0:0*/ timer__DOT____Vtogcov__timer_we_i;
        CData/*3:0*/ timer__DOT____Vtogcov__timer_be_i;
        CData/*0:0*/ timer__DOT____Vtogcov__timer_rvalid_o;
        CData/*0:0*/ timer__DOT____Vtogcov__timer_err_o;
        CData/*0:0*/ timer__DOT____Vtogcov__timer_intr_o;
        CData/*0:0*/ timer__DOT____Vtogcov__timer_we;
        CData/*0:0*/ timer__DOT____Vtogcov__mtime_we;
        CData/*0:0*/ timer__DOT____Vtogcov__mtimeh_we;
        CData/*0:0*/ timer__DOT____Vtogcov__mtimecmp_we;
        CData/*0:0*/ timer__DOT____Vtogcov__mtimecmph_we;
        CData/*0:0*/ timer__DOT____Vtogcov__interrupt_q;
        CData/*0:0*/ timer__DOT____Vtogcov__interrupt_d;
        CData/*0:0*/ timer__DOT____Vtogcov__error_q;
        CData/*0:0*/ timer__DOT____Vtogcov__error_d;
        CData/*0:0*/ timer__DOT____Vtogcov__rvalid_q;
        CData/*0:0*/ timer__DOT____Vtogcov__unused_addr_bits;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(timer_addr_i,31,0);
        VL_IN(timer_wdata_i,31,0);
        VL_OUT(timer_rdata_o,31,0);
        IData/*31:0*/ timer__DOT__mtime_wdata;
        IData/*31:0*/ timer__DOT__mtimeh_wdata;
        IData/*31:0*/ timer__DOT__mtimecmp_wdata;
        IData/*31:0*/ timer__DOT__mtimecmph_wdata;
        IData/*31:0*/ timer__DOT__rdata_q;
        IData/*31:0*/ timer__DOT__rdata_d;
        IData/*31:0*/ timer__DOT____Vtogcov__timer_addr_i;
        IData/*31:0*/ timer__DOT____Vtogcov__timer_wdata_i;
        IData/*31:0*/ timer__DOT____Vtogcov__timer_rdata_o;
        IData/*31:0*/ timer__DOT____Vtogcov__mtime_wdata;
        IData/*31:0*/ timer__DOT____Vtogcov__mtimeh_wdata;
        IData/*31:0*/ timer__DOT____Vtogcov__mtimecmp_wdata;
        IData/*31:0*/ timer__DOT____Vtogcov__mtimecmph_wdata;
        IData/*31:0*/ timer__DOT____Vtogcov__rdata_q;
        IData/*31:0*/ timer__DOT____Vtogcov__rdata_d;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ timer__DOT__mtime_q;
        QData/*63:0*/ timer__DOT__mtime_d;
        QData/*63:0*/ timer__DOT__mtimecmp_q;
    };
    struct {
        QData/*63:0*/ timer__DOT__mtimecmp_d;
        QData/*63:0*/ timer__DOT____Vtogcov__mtime_q;
        QData/*63:0*/ timer__DOT____Vtogcov__mtime_d;
        QData/*63:0*/ timer__DOT____Vtogcov__mtime_inc;
        QData/*63:0*/ timer__DOT____Vtogcov__mtimecmp_q;
        QData/*63:0*/ timer__DOT____Vtogcov__mtimecmp_d;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtimer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtimer___024root(Vtimer__Syms* symsp, const char* v__name);
    ~Vtimer___024root();
    VL_UNCOPYABLE(Vtimer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
