// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart.h for the primary calling header

#ifndef VERILATED_VUART___024ROOT_H_
#define VERILATED_VUART___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class Vuart_prim_fifo_sync__W8_Pz1_D80;
class Vuart_prim_util_pkg;


class Vuart__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart___024root final : public VerilatedModule {
  public:
    // CELLS
    Vuart_prim_util_pkg* __PVT__prim_util_pkg;
    Vuart_prim_fifo_sync__W8_Pz1_D80* __PVT__uart__DOT__u_rx_fifo;
    Vuart_prim_fifo_sync__W8_Pz1_D80* __PVT__uart__DOT__u_tx_fifo;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(device_req_i,0,0);
        VL_IN8(device_we_i,0,0);
        VL_IN8(device_be_i,3,0);
        VL_OUT8(device_rvalid_o,0,0);
        VL_IN8(uart_rx_i,0,0);
        VL_OUT8(uart_irq_o,0,0);
        VL_OUT8(uart_tx_o,0,0);
        CData/*0:0*/ uart__DOT__device_rvalid_d;
        CData/*0:0*/ uart__DOT__device_rvalid_q;
        CData/*1:0*/ uart__DOT__rx_state_q;
        CData/*1:0*/ uart__DOT__rx_state_d;
        CData/*2:0*/ uart__DOT__rx_bit_counter_q;
        CData/*2:0*/ uart__DOT__rx_bit_counter_d;
        CData/*7:0*/ uart__DOT__rx_current_byte_q;
        CData/*7:0*/ uart__DOT__rx_current_byte_d;
        CData/*2:0*/ uart__DOT__rx_q;
        CData/*0:0*/ uart__DOT__rx_start;
        CData/*0:0*/ uart__DOT__rx_valid;
        CData/*0:0*/ uart__DOT__rx_fifo_wvalid;
        CData/*0:0*/ uart__DOT__rx_fifo_rready;
        CData/*0:0*/ uart__DOT__write_req;
        CData/*1:0*/ uart__DOT__tx_state_q;
        CData/*1:0*/ uart__DOT__tx_state_d;
        CData/*2:0*/ uart__DOT__tx_bit_counter_q;
        CData/*2:0*/ uart__DOT__tx_bit_counter_d;
        CData/*7:0*/ uart__DOT__tx_current_byte_q;
        CData/*7:0*/ uart__DOT__tx_current_byte_d;
        CData/*0:0*/ uart__DOT__tx_next_byte;
        CData/*0:0*/ uart__DOT__tx_fifo_wvalid;
        CData/*0:0*/ uart__DOT__tx_fifo_rready;
        CData/*0:0*/ uart__DOT____Vtogcov__clk_i;
        CData/*0:0*/ uart__DOT____Vtogcov__rst_ni;
        CData/*0:0*/ uart__DOT____Vtogcov__device_req_i;
        CData/*0:0*/ uart__DOT____Vtogcov__device_we_i;
        CData/*3:0*/ uart__DOT____Vtogcov__device_be_i;
        CData/*0:0*/ uart__DOT____Vtogcov__device_rvalid_o;
        CData/*0:0*/ uart__DOT____Vtogcov__uart_rx_i;
        CData/*0:0*/ uart__DOT____Vtogcov__uart_irq_o;
        CData/*0:0*/ uart__DOT____Vtogcov__uart_tx_o;
        CData/*0:0*/ uart__DOT____Vtogcov__device_rvalid_d;
        CData/*0:0*/ uart__DOT____Vtogcov__device_rvalid_q;
        CData/*0:0*/ uart__DOT____Vtogcov__rx_baud_tick;
        CData/*1:0*/ uart__DOT____Vtogcov__rx_state_q;
        CData/*1:0*/ uart__DOT____Vtogcov__rx_state_d;
        CData/*2:0*/ uart__DOT____Vtogcov__rx_bit_counter_q;
        CData/*2:0*/ uart__DOT____Vtogcov__rx_bit_counter_d;
        CData/*7:0*/ uart__DOT____Vtogcov__rx_current_byte_q;
        CData/*7:0*/ uart__DOT____Vtogcov__rx_current_byte_d;
        CData/*2:0*/ uart__DOT____Vtogcov__rx_q;
        CData/*0:0*/ uart__DOT____Vtogcov__rx_start;
        CData/*0:0*/ uart__DOT____Vtogcov__rx_valid;
        CData/*0:0*/ uart__DOT____Vtogcov__rx_fifo_wvalid;
        CData/*0:0*/ uart__DOT____Vtogcov__rx_fifo_rready;
        CData/*7:0*/ uart__DOT____Vtogcov__rx_fifo_rdata;
        CData/*0:0*/ uart__DOT____Vtogcov__rx_fifo_rvalid;
        CData/*0:0*/ uart__DOT____Vtogcov__rx_fifo_empty;
        CData/*0:0*/ uart__DOT____Vtogcov__tx_baud_tick;
        CData/*0:0*/ uart__DOT____Vtogcov__write_req;
        CData/*1:0*/ uart__DOT____Vtogcov__tx_state_q;
        CData/*1:0*/ uart__DOT____Vtogcov__tx_state_d;
        CData/*2:0*/ uart__DOT____Vtogcov__tx_bit_counter_q;
        CData/*2:0*/ uart__DOT____Vtogcov__tx_bit_counter_d;
    };
    struct {
        CData/*7:0*/ uart__DOT____Vtogcov__tx_current_byte_q;
        CData/*7:0*/ uart__DOT____Vtogcov__tx_current_byte_d;
        CData/*0:0*/ uart__DOT____Vtogcov__tx_next_byte;
        CData/*0:0*/ uart__DOT____Vtogcov__tx_fifo_wvalid;
        CData/*0:0*/ uart__DOT____Vtogcov__tx_fifo_rvalid;
        CData/*0:0*/ uart__DOT____Vtogcov__tx_fifo_rready;
        CData/*7:0*/ uart__DOT____Vtogcov__tx_fifo_rdata;
        CData/*0:0*/ uart__DOT____Vtogcov__tx_fifo_full;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ uart__DOT__rx_baud_counter_q;
        SData/*8:0*/ uart__DOT__rx_baud_counter_d;
        SData/*8:0*/ uart__DOT__tx_baud_counter_q;
        SData/*8:0*/ uart__DOT__tx_baud_counter_d;
        SData/*8:0*/ uart__DOT____Vtogcov__rx_baud_counter_q;
        SData/*8:0*/ uart__DOT____Vtogcov__rx_baud_counter_d;
        SData/*8:0*/ uart__DOT____Vtogcov__tx_baud_counter_q;
        SData/*8:0*/ uart__DOT____Vtogcov__tx_baud_counter_d;
        VL_IN(device_addr_i,31,0);
        VL_IN(device_wdata_i,31,0);
        VL_OUT(device_rdata_o,31,0);
        IData/*31:0*/ uart__DOT__device_rdata_d;
        IData/*31:0*/ uart__DOT__device_rdata_q;
        IData/*31:0*/ uart__DOT____Vtogcov__device_addr_i;
        IData/*31:0*/ uart__DOT____Vtogcov__device_wdata_i;
        IData/*31:0*/ uart__DOT____Vtogcov__device_rdata_o;
        IData/*31:0*/ uart__DOT____Vtogcov__device_rdata_d;
        IData/*31:0*/ uart__DOT____Vtogcov__device_rdata_q;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vuart__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart___024root(Vuart__Syms* symsp, const char* v__name);
    ~Vuart___024root();
    VL_UNCOPYABLE(Vuart___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
