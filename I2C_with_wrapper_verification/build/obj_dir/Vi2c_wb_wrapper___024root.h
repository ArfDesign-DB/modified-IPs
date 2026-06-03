// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vi2c_wb_wrapper.h for the primary calling header

#ifndef VERILATED_VI2C_WB_WRAPPER___024ROOT_H_
#define VERILATED_VI2C_WB_WRAPPER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vi2c_wb_wrapper__Syms;
VL_MODULE(Vi2c_wb_wrapper___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i;
        VL_IN8(rst_i,0,0);
        VL_IN8(i2c_req_o,0,0);
        VL_IN8(i2c_we_o,0,0);
        VL_IN8(i2c_be_o,3,0);
        VL_OUT8(i2c_rvalid_i,0,0);
        VL_IN8(scl_pad_i,0,0);
        VL_OUT8(scl_pad_o,0,0);
        VL_OUT8(scl_padoen_o,0,0);
        VL_IN8(sda_pad_i,0,0);
        VL_OUT8(sda_pad_o,0,0);
        VL_OUT8(sda_padoen_o,0,0);
        VL_OUT8(wb_inta_o,0,0);
        CData/*7:0*/ i2c_wb_wrapper__DOT__wb_dat_o;
        CData/*0:0*/ i2c_wb_wrapper__DOT__wb_ack_o;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__clk_i;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__rst_i;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__i2c_req_o;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__i2c_we_o;
        CData/*3:0*/ i2c_wb_wrapper__DOT____Vtogcov__i2c_be_o;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__i2c_rvalid_i;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__scl_pad_i;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__scl_pad_o;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__scl_padoen_o;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__sda_pad_i;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__sda_pad_o;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__sda_padoen_o;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__wb_inta_o;
        CData/*7:0*/ i2c_wb_wrapper__DOT____Vtogcov__wb_dat_o;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__wb_ack_o;
        CData/*0:0*/ i2c_wb_wrapper__DOT____Vtogcov__arst_i;
        CData/*7:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr;
        CData/*7:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr;
        CData/*7:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr;
        CData/*7:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc;
        CData/*7:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ctr;
        CData/*7:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__txr;
        CData/*7:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxr;
        CData/*7:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__cr;
        CData/*7:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sr;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__done;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__core_en;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ien;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irxack;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rxack;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__tip;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__irq_flag;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__i2c_busy;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__i2c_al;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__al;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rst_i;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__wb_wacc;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sta;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__sto;
    };
    struct {
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__rd;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__wr;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__ack;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__iack;
        CData/*3:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_rxd;
        CData/*7:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go;
        CData/*2:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt;
        CData/*4:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state;
        CData/*3:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_cmd;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_txd;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_ack;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__core_rxd;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__shift;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__ld;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__go;
        CData/*2:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__dcnt;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__cnt_done;
        CData/*4:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT____Vtogcov__c_state;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__scl_o;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSCL;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sSDA;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dscl_oen;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sda_chk;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__clk_en;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__slave_wait;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSCL;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__dSDA;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sta_condition;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__sto_condition;
        CData/*0:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cmd_stop;
        CData/*0:0*/ __VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i;
        CData/*0:0*/ __Vchglast__TOP__i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i;
        SData/*15:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer;
        SData/*15:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT____Vtogcov__prer;
        SData/*15:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt;
        SData/*15:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__cnt;
        VL_IN(i2c_addr_o,31,0);
        VL_IN(i2c_wdata_o,31,0);
        VL_OUT(i2c_rdata_i,31,0);
        IData/*31:0*/ i2c_wb_wrapper__DOT____Vtogcov__i2c_addr_o;
        IData/*31:0*/ i2c_wb_wrapper__DOT____Vtogcov__i2c_wdata_o;
        IData/*31:0*/ i2c_wb_wrapper__DOT____Vtogcov__i2c_rdata_i;
        IData/*16:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state;
        IData/*16:0*/ i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT____Vtogcov__c_state;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vi2c_wb_wrapper__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vi2c_wb_wrapper___024root(const char* name);
    ~Vi2c_wb_wrapper___024root();
    VL_UNCOPYABLE(Vi2c_wb_wrapper___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vi2c_wb_wrapper__Syms* symsp, bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
