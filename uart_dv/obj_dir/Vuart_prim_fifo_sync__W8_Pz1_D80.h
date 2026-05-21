// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart.h for the primary calling header

#ifndef VERILATED_VUART_PRIM_FIFO_SYNC__W8_PZ1_D80_H_
#define VERILATED_VUART_PRIM_FIFO_SYNC__W8_PZ1_D80_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vuart__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_prim_fifo_sync__W8_Pz1_D80 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(clr_i,0,0);
    VL_IN8(wvalid_i,0,0);
    VL_OUT8(__PVT__wready_o,0,0);
    VL_IN8(wdata_i,7,0);
    VL_OUT8(rvalid_o,0,0);
    VL_IN8(rready_i,0,0);
    VL_OUT8(rdata_o,7,0);
    VL_OUT8(full_o,0,0);
    VL_OUT8(__PVT__depth_o,7,0);
    VL_OUT8(__PVT__err_o,0,0);
    CData/*0:0*/ __Vtogcov__clk_i;
    CData/*0:0*/ __Vtogcov__rst_ni;
    CData/*0:0*/ __Vtogcov__clr_i;
    CData/*0:0*/ __Vtogcov__wvalid_i;
    CData/*0:0*/ __Vtogcov__wready_o;
    CData/*7:0*/ __Vtogcov__wdata_i;
    CData/*0:0*/ __Vtogcov__rvalid_o;
    CData/*0:0*/ __Vtogcov__rready_i;
    CData/*7:0*/ __Vtogcov__rdata_o;
    CData/*0:0*/ __Vtogcov__full_o;
    CData/*7:0*/ __Vtogcov__depth_o;
    CData/*0:0*/ __PVT__gen_normal_fifo__DOT__fifo_incr_wptr;
    CData/*0:0*/ __PVT__gen_normal_fifo__DOT__fifo_incr_rptr;
    CData/*0:0*/ __PVT__gen_normal_fifo__DOT__fifo_empty;
    CData/*0:0*/ __PVT__gen_normal_fifo__DOT__under_rst;
    VlWide<32>/*1023:0*/ __PVT__gen_normal_fifo__DOT__storage;
    CData/*7:0*/ __PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    CData/*7:0*/ __PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    CData/*0:0*/ __PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb;
    CData/*0:0*/ __PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb;
    CData/*0:0*/ __PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
    CData/*0:0*/ __PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
    CData/*0:0*/ gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i;
    CData/*0:0*/ gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i;
    CData/*6:0*/ gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o;
    CData/*6:0*/ gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o;
    CData/*0:0*/ gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o;
    CData/*7:0*/ gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q;
    CData/*7:0*/ gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt;
    CData/*7:0*/ gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q;
    CData/*7:0*/ gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt;
    CData/*0:0*/ gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set;
    CData/*0:0*/ gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set;
    CData/*7:0*/ __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;

    // INTERNAL VARIABLES
    Vuart__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_prim_fifo_sync__W8_Pz1_D80(Vuart__Syms* symsp, const char* v__name);
    ~Vuart_prim_fifo_sync__W8_Pz1_D80();
    VL_UNCOPYABLE(Vuart_prim_fifo_sync__W8_Pz1_D80);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
