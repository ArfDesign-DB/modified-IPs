// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_top.h for the primary calling header

#ifndef VERILATED_VSPI_TOP___024ROOT_H_
#define VERILATED_VSPI_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vspi_top__Syms;
class Vspi_top_prim_util_pkg;

VL_MODULE(Vspi_top___024root) {
  public:
    // CELLS
    Vspi_top_prim_util_pkg* __PVT__prim_util_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(device_req_i,0,0);
        VL_IN8(device_we_i,0,0);
        VL_IN8(device_be_i,3,0);
        VL_OUT8(device_rvalid_o,0,0);
        VL_IN8(spi_rx_i,0,0);
        VL_OUT8(spi_tx_o,0,0);
        VL_OUT8(sck_o,0,0);
        VL_OUT8(byte_data_o,7,0);
        CData/*0:0*/ spi_top__DOT__read_status_q;
        CData/*0:0*/ spi_top__DOT__read_status_d;
        CData/*0:0*/ spi_top__DOT__next_tx_byte_q;
        CData/*0:0*/ spi_top__DOT__tx_fifo_wvalid;
        CData/*0:0*/ spi_top__DOT__tx_fifo_rvalid;
        CData/*0:0*/ spi_top__DOT__tx_fifo_rready;
        CData/*7:0*/ spi_top__DOT__tx_fifo_rdata;
        CData/*0:0*/ spi_top__DOT__tx_fifo_full;
        CData/*6:0*/ spi_top__DOT__tx_fifo_depth;
        CData/*0:0*/ spi_top__DOT____Vtogcov__clk_i;
        CData/*0:0*/ spi_top__DOT____Vtogcov__rst_ni;
        CData/*0:0*/ spi_top__DOT____Vtogcov__device_req_i;
        CData/*0:0*/ spi_top__DOT____Vtogcov__device_we_i;
        CData/*3:0*/ spi_top__DOT____Vtogcov__device_be_i;
        CData/*0:0*/ spi_top__DOT____Vtogcov__device_rvalid_o;
        CData/*0:0*/ spi_top__DOT____Vtogcov__spi_rx_i;
        CData/*0:0*/ spi_top__DOT____Vtogcov__spi_tx_o;
        CData/*0:0*/ spi_top__DOT____Vtogcov__sck_o;
        CData/*7:0*/ spi_top__DOT____Vtogcov__byte_data_o;
        CData/*0:0*/ spi_top__DOT____Vtogcov__read_status_q;
        CData/*0:0*/ spi_top__DOT____Vtogcov__read_status_d;
        CData/*0:0*/ spi_top__DOT____Vtogcov__next_tx_byte_d;
        CData/*0:0*/ spi_top__DOT____Vtogcov__next_tx_byte_q;
        CData/*0:0*/ spi_top__DOT____Vtogcov__tx_fifo_wvalid;
        CData/*0:0*/ spi_top__DOT____Vtogcov__tx_fifo_rvalid;
        CData/*0:0*/ spi_top__DOT____Vtogcov__tx_fifo_rready;
        CData/*7:0*/ spi_top__DOT____Vtogcov__tx_fifo_rdata;
        CData/*0:0*/ spi_top__DOT____Vtogcov__tx_fifo_full;
        CData/*0:0*/ spi_top__DOT____Vtogcov__tx_fifo_empty;
        CData/*6:0*/ spi_top__DOT____Vtogcov__tx_fifo_depth;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__wready_o;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT____Vtogcov__clr_i;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT____Vtogcov__wready_o;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        VlWide<32>/*1015:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*7:0*/ spi_top__DOT__u_tx_fifo__DOT____Vlvbound_h177f33a5__0;
        CData/*7:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*7:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
        CData/*7:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        CData/*7:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i;
        CData/*6:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o;
        CData/*6:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o;
        CData/*7:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q;
        CData/*7:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt;
        CData/*7:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q;
        CData/*7:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt;
    };
    struct {
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_msb;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_msb;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set;
        CData/*0:0*/ spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT__count;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT__sck;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT__count_at_limit;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT__sck_pos;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT__sck_neg;
        CData/*1:0*/ spi_top__DOT__u_spi_host__DOT__state_q;
        CData/*2:0*/ spi_top__DOT__u_spi_host__DOT__bit_counter_q;
        CData/*7:0*/ spi_top__DOT__u_spi_host__DOT__current_byte_q;
        CData/*7:0*/ spi_top__DOT__u_spi_host__DOT__recieved_byte_q;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT____Vtogcov__count;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT____Vtogcov__limit;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT____Vtogcov__sck;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT____Vtogcov__count_at_limit;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_pos;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_neg;
        CData/*1:0*/ spi_top__DOT__u_spi_host__DOT____Vtogcov__state_q;
        CData/*2:0*/ spi_top__DOT__u_spi_host__DOT____Vtogcov__bit_counter_q;
        CData/*7:0*/ spi_top__DOT__u_spi_host__DOT____Vtogcov__current_byte_q;
        CData/*7:0*/ spi_top__DOT__u_spi_host__DOT____Vtogcov__recieved_byte_q;
        CData/*0:0*/ spi_top__DOT__u_spi_host__DOT____Vtogcov__sck_en;
        CData/*7:0*/ __Vdly__spi_top__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        VL_IN(device_addr_i,31,0);
        VL_IN(device_wdata_i,31,0);
        VL_OUT(device_rdata_o,31,0);
        IData/*31:0*/ spi_top__DOT____Vtogcov__device_addr_i;
        IData/*31:0*/ spi_top__DOT____Vtogcov__device_wdata_i;
        IData/*31:0*/ spi_top__DOT____Vtogcov__device_rdata_o;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vspi_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vspi_top___024root(const char* name);
    ~Vspi_top___024root();
    VL_UNCOPYABLE(Vspi_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vspi_top__Syms* symsp, bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
