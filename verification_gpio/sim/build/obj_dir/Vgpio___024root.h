// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgpio.h for the primary calling header

#ifndef VERILATED_VGPIO___024ROOT_H_
#define VERILATED_VGPIO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class Vgpio_debounce;


class Vgpio__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgpio___024root final : public VerilatedModule {
  public:
    // CELLS
    Vgpio_debounce* __PVT__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc;
    Vgpio_debounce* __PVT__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc;
    Vgpio_debounce* __PVT__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc;
    Vgpio_debounce* __PVT__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc;
    Vgpio_debounce* __PVT__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc;
    Vgpio_debounce* __PVT__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc;
    Vgpio_debounce* __PVT__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc;
    Vgpio_debounce* __PVT__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(device_req_i,0,0);
    VL_IN8(device_we_i,0,0);
    VL_IN8(device_be_i,3,0);
    VL_OUT8(device_rvalid_o,0,0);
    VL_IN8(gp_i,7,0);
    IData/*23:0*/ gpio__DOT__gp_i_q;
    CData/*7:0*/ gpio__DOT__gp_i_dbnc;
    CData/*0:0*/ gpio__DOT__gp_o_wr_en;
    CData/*0:0*/ gpio__DOT__gp_i_rd_en_d;
    CData/*0:0*/ gpio__DOT__gp_i_rd_en_q;
    CData/*0:0*/ gpio__DOT__gp_i_dbnc_rd_en_d;
    CData/*0:0*/ gpio__DOT__gp_i_dbnc_rd_en_q;
    CData/*0:0*/ gpio__DOT__invalid_address_signal;
    CData/*0:0*/ gpio__DOT____Vtogcov__clk_i;
    CData/*0:0*/ gpio__DOT____Vtogcov__rst_ni;
    CData/*0:0*/ gpio__DOT____Vtogcov__device_req_i;
    CData/*0:0*/ gpio__DOT____Vtogcov__device_we_i;
    CData/*3:0*/ gpio__DOT____Vtogcov__device_be_i;
    CData/*0:0*/ gpio__DOT____Vtogcov__device_rvalid_o;
    CData/*7:0*/ gpio__DOT____Vtogcov__gp_i;
    IData/*23:0*/ gpio__DOT____Vtogcov__gp_i_q;
    CData/*7:0*/ gpio__DOT____Vtogcov__gp_i_dbnc;
    CData/*0:0*/ gpio__DOT____Vtogcov__gp_o_wr_en;
    CData/*0:0*/ gpio__DOT____Vtogcov__gp_i_rd_en_d;
    CData/*0:0*/ gpio__DOT____Vtogcov__gp_i_rd_en_q;
    CData/*0:0*/ gpio__DOT____Vtogcov__gp_i_dbnc_rd_en_d;
    CData/*0:0*/ gpio__DOT____Vtogcov__gp_i_dbnc_rd_en_q;
    CData/*0:0*/ gpio__DOT____Vtogcov__invalid_address_signal;
    CData/*3:0*/ gpio__DOT____Vtogcov__unused_device_be;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(gp_o,15,0);
    SData/*15:0*/ gpio__DOT__gp_o_d;
    SData/*15:0*/ gpio__DOT____Vtogcov__gp_o;
    SData/*15:0*/ gpio__DOT____Vtogcov__gp_o_d;
    VL_IN(device_addr_i,31,0);
    VL_IN(device_wdata_i,31,0);
    VL_OUT(device_rdata_o,31,0);
    IData/*31:0*/ gpio__DOT____Vtogcov__device_addr_i;
    IData/*31:0*/ gpio__DOT____Vtogcov__device_wdata_i;
    IData/*31:0*/ gpio__DOT____Vtogcov__device_rdata_o;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vgpio__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgpio___024root(Vgpio__Syms* symsp, const char* v__name);
    ~Vgpio___024root();
    VL_UNCOPYABLE(Vgpio___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
