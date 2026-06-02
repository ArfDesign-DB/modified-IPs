// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vobi2wb.h for the primary calling header

#ifndef VERILATED_VOBI2WB___024ROOT_H_
#define VERILATED_VOBI2WB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vobi2wb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vobi2wb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(obi_req_i,0,0);
        VL_OUT8(obi_gnt_o,0,0);
        VL_IN8(obi_we_i,0,0);
        VL_IN8(obi_be_i,3,0);
        VL_OUT8(obi_rvalid_o,0,0);
        VL_OUT8(wb_cyc_o,0,0);
        VL_OUT8(wb_stb_o,0,0);
        VL_OUT8(wb_we_o,0,0);
        VL_OUT8(wb_sel_o,3,0);
        VL_IN8(wb_ack_i,0,0);
        VL_IN8(wb_stall_i,0,0);
        CData/*0:0*/ obi2wb__DOT__state_q;
        CData/*0:0*/ obi2wb__DOT__state_d;
        CData/*3:0*/ obi2wb__DOT__be_q;
        CData/*0:0*/ obi2wb__DOT__we_q;
        CData/*0:0*/ obi2wb__DOT__req_sent_q;
        CData/*0:0*/ obi2wb__DOT__obi_rvalid_q;
        CData/*0:0*/ obi2wb__DOT__immediate_ack;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__clk_i;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__rst_ni;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__obi_req_i;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__obi_gnt_o;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__obi_we_i;
        CData/*3:0*/ obi2wb__DOT____Vtogcov__obi_be_i;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__obi_rvalid_o;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__wb_cyc_o;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__wb_stb_o;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__wb_we_o;
        CData/*3:0*/ obi2wb__DOT____Vtogcov__wb_sel_o;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__wb_ack_i;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__wb_stall_i;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__state_q;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__state_d;
        CData/*3:0*/ obi2wb__DOT____Vtogcov__be_q;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__we_q;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__req_sent_q;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__obi_rvalid_q;
        CData/*0:0*/ obi2wb__DOT____Vtogcov__immediate_ack;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(obi_addr_i,31,0);
        VL_IN(obi_wdata_i,31,0);
        VL_OUT(obi_rdata_o,31,0);
        VL_OUT(wb_adr_o,31,0);
        VL_OUT(wb_dat_o,31,0);
        VL_IN(wb_dat_i,31,0);
        IData/*31:0*/ obi2wb__DOT__addr_q;
        IData/*31:0*/ obi2wb__DOT__wdata_q;
        IData/*31:0*/ obi2wb__DOT__rdata_q;
        IData/*31:0*/ obi2wb__DOT____Vtogcov__obi_addr_i;
        IData/*31:0*/ obi2wb__DOT____Vtogcov__obi_wdata_i;
        IData/*31:0*/ obi2wb__DOT____Vtogcov__obi_rdata_o;
        IData/*31:0*/ obi2wb__DOT____Vtogcov__wb_adr_o;
        IData/*31:0*/ obi2wb__DOT____Vtogcov__wb_dat_o;
        IData/*31:0*/ obi2wb__DOT____Vtogcov__wb_dat_i;
        IData/*31:0*/ obi2wb__DOT____Vtogcov__addr_q;
        IData/*31:0*/ obi2wb__DOT____Vtogcov__wdata_q;
        IData/*31:0*/ obi2wb__DOT____Vtogcov__rdata_q;
        IData/*31:0*/ __VactIterCount;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vobi2wb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vobi2wb___024root(Vobi2wb__Syms* symsp, const char* v__name);
    ~Vobi2wb___024root();
    VL_UNCOPYABLE(Vobi2wb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
