// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "Vuart__pch.h"
#include "Vuart__Syms.h"
#include "Vuart___024root.h"

VL_ATTR_COLD void Vuart___024root___eval_initial__TOP(Vuart___024root* vlSelf);
VL_ATTR_COLD void Vuart_prim_fifo_sync__W8_Pz1_D80___eval_initial__TOP__uart__DOT__u_rx_fifo(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf);

VL_ATTR_COLD void Vuart___024root___eval_initial(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_initial\n"); );
    // Body
    Vuart___024root___eval_initial__TOP(vlSelf);
    Vuart_prim_fifo_sync__W8_Pz1_D80___eval_initial__TOP__uart__DOT__u_rx_fifo((&vlSymsp->TOP__uart__DOT__u_rx_fifo));
    Vuart_prim_fifo_sync__W8_Pz1_D80___eval_initial__TOP__uart__DOT__u_rx_fifo((&vlSymsp->TOP__uart__DOT__u_tx_fifo));
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vuart___024root___eval_initial__TOP(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_initial__TOP\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[303]);
    ++(vlSymsp->__Vcoverage[329]);
    ++(vlSymsp->__Vcoverage[347]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart___024root___dump_triggers__stl(Vuart___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart___024root___eval_triggers__stl(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vuart___024root___stl_sequent__TOP__0(Vuart___024root* vlSelf);
VL_ATTR_COLD void Vuart_prim_fifo_sync__W8_Pz1_D80___stl_sequent__TOP__uart__DOT__u_rx_fifo__0(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf);
VL_ATTR_COLD void Vuart_prim_fifo_sync__W8_Pz1_D80___stl_sequent__TOP__uart__DOT__u_tx_fifo__0(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf);
VL_ATTR_COLD void Vuart___024root___stl_sequent__TOP__1(Vuart___024root* vlSelf);

VL_ATTR_COLD void Vuart___024root___eval_stl(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vuart___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vuart_prim_fifo_sync__W8_Pz1_D80___stl_sequent__TOP__uart__DOT__u_rx_fifo__0((&vlSymsp->TOP__uart__DOT__u_rx_fifo));
        Vuart_prim_fifo_sync__W8_Pz1_D80___stl_sequent__TOP__uart__DOT__u_tx_fifo__0((&vlSymsp->TOP__uart__DOT__u_tx_fifo));
        Vuart___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vuart___024root___stl_sequent__TOP__0(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->device_req_i)))) {
        ++(vlSymsp->__Vcoverage[302]);
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->uart__DOT____Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->uart__DOT____Vtogcov__clk_i = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_ni) ^ (IData)(vlSelf->uart__DOT____Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->uart__DOT____Vtogcov__rst_ni = vlSelf->rst_ni;
    }
    if (((IData)(vlSelf->device_req_i) ^ (IData)(vlSelf->uart__DOT____Vtogcov__device_req_i))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->uart__DOT____Vtogcov__device_req_i 
            = vlSelf->device_req_i;
    }
    if (((IData)(vlSelf->device_we_i) ^ (IData)(vlSelf->uart__DOT____Vtogcov__device_we_i))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->uart__DOT____Vtogcov__device_we_i = vlSelf->device_we_i;
    }
    if (((IData)(vlSelf->uart_rx_i) ^ (IData)(vlSelf->uart__DOT____Vtogcov__uart_rx_i))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->uart__DOT____Vtogcov__uart_rx_i = vlSelf->uart_rx_i;
    }
    if (((IData)(vlSelf->uart__DOT__device_rvalid_q) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__device_rvalid_q))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->uart__DOT____Vtogcov__device_rvalid_q 
            = vlSelf->uart__DOT__device_rvalid_q;
    }
    if (((0x1b1U == (IData)(vlSelf->uart__DOT__rx_baud_counter_q)) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_tick))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_tick 
            = (0x1b1U == (IData)(vlSelf->uart__DOT__rx_baud_counter_q));
    }
    if (((0x1b1U == (IData)(vlSelf->uart__DOT__tx_baud_counter_q)) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_tick))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_tick 
            = (0x1b1U == (IData)(vlSelf->uart__DOT__tx_baud_counter_q));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__rx_state_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_state_q)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->uart__DOT____Vtogcov__rx_state_q = 
            ((2U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_state_q)) 
             | (1U & (IData)(vlSelf->uart__DOT__rx_state_q)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__rx_state_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_state_q)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->uart__DOT____Vtogcov__rx_state_q = 
            ((1U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_state_q)) 
             | (2U & (IData)(vlSelf->uart__DOT__rx_state_q)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__tx_state_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_state_q)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->uart__DOT____Vtogcov__tx_state_q = 
            ((2U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_state_q)) 
             | (1U & (IData)(vlSelf->uart__DOT__tx_state_q)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__tx_state_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_state_q)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->uart__DOT____Vtogcov__tx_state_q = 
            ((1U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_state_q)) 
             | (2U & (IData)(vlSelf->uart__DOT__tx_state_q)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__rx_bit_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_q)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->uart__DOT____Vtogcov__rx_bit_counter_q 
            = ((6U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_q)) 
               | (1U & (IData)(vlSelf->uart__DOT__rx_bit_counter_q)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__rx_bit_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_q)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->uart__DOT____Vtogcov__rx_bit_counter_q 
            = ((5U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_q)) 
               | (2U & (IData)(vlSelf->uart__DOT__rx_bit_counter_q)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__rx_bit_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_q)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->uart__DOT____Vtogcov__rx_bit_counter_q 
            = ((3U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_q)) 
               | (4U & (IData)(vlSelf->uart__DOT__rx_bit_counter_q)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__rx_q) ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_q)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->uart__DOT____Vtogcov__rx_q = ((6U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_q)) 
                                              | (1U 
                                                 & (IData)(vlSelf->uart__DOT__rx_q)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__rx_q) ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_q)))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->uart__DOT____Vtogcov__rx_q = ((5U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_q)) 
                                              | (2U 
                                                 & (IData)(vlSelf->uart__DOT__rx_q)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__rx_q) ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_q)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->uart__DOT____Vtogcov__rx_q = ((3U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_q)) 
                                              | (4U 
                                                 & (IData)(vlSelf->uart__DOT__rx_q)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__tx_bit_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_q)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->uart__DOT____Vtogcov__tx_bit_counter_q 
            = ((6U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_q)) 
               | (1U & (IData)(vlSelf->uart__DOT__tx_bit_counter_q)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__tx_bit_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_q)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->uart__DOT____Vtogcov__tx_bit_counter_q 
            = ((5U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_q)) 
               | (2U & (IData)(vlSelf->uart__DOT__tx_bit_counter_q)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__tx_bit_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_q)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->uart__DOT____Vtogcov__tx_bit_counter_q 
            = ((3U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_q)) 
               | (4U & (IData)(vlSelf->uart__DOT__tx_bit_counter_q)));
    }
    vlSelf->uart__DOT__device_rvalid_d = 0U;
    if ((1U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->uart__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->uart__DOT____Vtogcov__device_be_i = 
            ((0xeU & (IData)(vlSelf->uart__DOT____Vtogcov__device_be_i)) 
             | (1U & (IData)(vlSelf->device_be_i)));
    }
    if ((2U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->uart__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->uart__DOT____Vtogcov__device_be_i = 
            ((0xdU & (IData)(vlSelf->uart__DOT____Vtogcov__device_be_i)) 
             | (2U & (IData)(vlSelf->device_be_i)));
    }
    if ((4U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->uart__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->uart__DOT____Vtogcov__device_be_i = 
            ((0xbU & (IData)(vlSelf->uart__DOT____Vtogcov__device_be_i)) 
             | (4U & (IData)(vlSelf->device_be_i)));
    }
    if ((8U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->uart__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->uart__DOT____Vtogcov__device_be_i = 
            ((7U & (IData)(vlSelf->uart__DOT____Vtogcov__device_be_i)) 
             | (8U & (IData)(vlSelf->device_be_i)));
    }
    vlSelf->device_rvalid_o = vlSelf->uart__DOT__device_rvalid_q;
    vlSelf->uart_tx_o = 0U;
    if ((1U & ((IData)(vlSelf->uart__DOT__rx_current_byte_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_q 
            = ((0xfeU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)) 
               | (1U & (IData)(vlSelf->uart__DOT__rx_current_byte_q)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__rx_current_byte_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_q 
            = ((0xfdU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)) 
               | (2U & (IData)(vlSelf->uart__DOT__rx_current_byte_q)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__rx_current_byte_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_q 
            = ((0xfbU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)) 
               | (4U & (IData)(vlSelf->uart__DOT__rx_current_byte_q)));
    }
    if ((8U & ((IData)(vlSelf->uart__DOT__rx_current_byte_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_q 
            = ((0xf7U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)) 
               | (8U & (IData)(vlSelf->uart__DOT__rx_current_byte_q)));
    }
    if ((0x10U & ((IData)(vlSelf->uart__DOT__rx_current_byte_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_q 
            = ((0xefU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)) 
               | (0x10U & (IData)(vlSelf->uart__DOT__rx_current_byte_q)));
    }
    if ((0x20U & ((IData)(vlSelf->uart__DOT__rx_current_byte_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_q 
            = ((0xdfU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)) 
               | (0x20U & (IData)(vlSelf->uart__DOT__rx_current_byte_q)));
    }
    if ((0x40U & ((IData)(vlSelf->uart__DOT__rx_current_byte_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_q 
            = ((0xbfU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)) 
               | (0x40U & (IData)(vlSelf->uart__DOT__rx_current_byte_q)));
    }
    if ((0x80U & ((IData)(vlSelf->uart__DOT__rx_current_byte_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_q 
            = ((0x7fU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_q)) 
               | (0x80U & (IData)(vlSelf->uart__DOT__rx_current_byte_q)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__tx_current_byte_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_q 
            = ((0xfeU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)) 
               | (1U & (IData)(vlSelf->uart__DOT__tx_current_byte_q)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__tx_current_byte_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_q 
            = ((0xfdU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)) 
               | (2U & (IData)(vlSelf->uart__DOT__tx_current_byte_q)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__tx_current_byte_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_q 
            = ((0xfbU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)) 
               | (4U & (IData)(vlSelf->uart__DOT__tx_current_byte_q)));
    }
    if ((8U & ((IData)(vlSelf->uart__DOT__tx_current_byte_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_q 
            = ((0xf7U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)) 
               | (8U & (IData)(vlSelf->uart__DOT__tx_current_byte_q)));
    }
    if ((0x10U & ((IData)(vlSelf->uart__DOT__tx_current_byte_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_q 
            = ((0xefU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)) 
               | (0x10U & (IData)(vlSelf->uart__DOT__tx_current_byte_q)));
    }
    if ((0x20U & ((IData)(vlSelf->uart__DOT__tx_current_byte_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_q 
            = ((0xdfU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)) 
               | (0x20U & (IData)(vlSelf->uart__DOT__tx_current_byte_q)));
    }
    if ((0x40U & ((IData)(vlSelf->uart__DOT__tx_current_byte_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_q 
            = ((0xbfU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)) 
               | (0x40U & (IData)(vlSelf->uart__DOT__tx_current_byte_q)));
    }
    if ((0x80U & ((IData)(vlSelf->uart__DOT__tx_current_byte_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_q 
            = ((0x7fU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_q)) 
               | (0x80U & (IData)(vlSelf->uart__DOT__tx_current_byte_q)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q 
            = ((0x1feU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)) 
               | (1U & (IData)(vlSelf->uart__DOT__rx_baud_counter_q)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q 
            = ((0x1fdU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)) 
               | (2U & (IData)(vlSelf->uart__DOT__rx_baud_counter_q)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q 
            = ((0x1fbU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)) 
               | (4U & (IData)(vlSelf->uart__DOT__rx_baud_counter_q)));
    }
    if ((8U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q 
            = ((0x1f7U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)) 
               | (8U & (IData)(vlSelf->uart__DOT__rx_baud_counter_q)));
    }
    if ((0x10U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q 
            = ((0x1efU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)) 
               | (0x10U & (IData)(vlSelf->uart__DOT__rx_baud_counter_q)));
    }
    if ((0x20U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q 
            = ((0x1dfU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)) 
               | (0x20U & (IData)(vlSelf->uart__DOT__rx_baud_counter_q)));
    }
    if ((0x40U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q 
            = ((0x1bfU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)) 
               | (0x40U & (IData)(vlSelf->uart__DOT__rx_baud_counter_q)));
    }
    if ((0x80U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q 
            = ((0x17fU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)) 
               | (0x80U & (IData)(vlSelf->uart__DOT__rx_baud_counter_q)));
    }
    if ((0x100U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_q) 
                   ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q 
            = ((0xffU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_q)) 
               | (0x100U & (IData)(vlSelf->uart__DOT__rx_baud_counter_q)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q 
            = ((0x1feU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)) 
               | (1U & (IData)(vlSelf->uart__DOT__tx_baud_counter_q)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q 
            = ((0x1fdU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)) 
               | (2U & (IData)(vlSelf->uart__DOT__tx_baud_counter_q)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q 
            = ((0x1fbU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)) 
               | (4U & (IData)(vlSelf->uart__DOT__tx_baud_counter_q)));
    }
    if ((8U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_q) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q 
            = ((0x1f7U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)) 
               | (8U & (IData)(vlSelf->uart__DOT__tx_baud_counter_q)));
    }
    if ((0x10U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q 
            = ((0x1efU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)) 
               | (0x10U & (IData)(vlSelf->uart__DOT__tx_baud_counter_q)));
    }
    if ((0x20U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q 
            = ((0x1dfU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)) 
               | (0x20U & (IData)(vlSelf->uart__DOT__tx_baud_counter_q)));
    }
    if ((0x40U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q 
            = ((0x1bfU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)) 
               | (0x40U & (IData)(vlSelf->uart__DOT__tx_baud_counter_q)));
    }
    if ((0x80U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_q) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q 
            = ((0x17fU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)) 
               | (0x80U & (IData)(vlSelf->uart__DOT__tx_baud_counter_q)));
    }
    if ((0x100U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_q) 
                   ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q 
            = ((0xffU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_q)) 
               | (0x100U & (IData)(vlSelf->uart__DOT__tx_baud_counter_q)));
    }
    vlSelf->uart__DOT__rx_bit_counter_d = vlSelf->uart__DOT__rx_bit_counter_q;
    vlSelf->uart__DOT__tx_bit_counter_d = vlSelf->uart__DOT__tx_bit_counter_q;
    if ((2U & (IData)(vlSelf->uart__DOT__tx_state_q))) {
        if ((1U & (IData)(vlSelf->uart__DOT__tx_state_q))) {
            ++(vlSymsp->__Vcoverage[346]);
        }
        if ((1U & (~ (IData)(vlSelf->uart__DOT__tx_state_q)))) {
            ++(vlSymsp->__Vcoverage[343]);
            if ((7U == (IData)(vlSelf->uart__DOT__tx_bit_counter_q))) {
                ++(vlSymsp->__Vcoverage[341]);
            }
            if ((7U != (IData)(vlSelf->uart__DOT__tx_bit_counter_q))) {
                ++(vlSymsp->__Vcoverage[342]);
                vlSelf->uart__DOT__tx_bit_counter_d 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->uart__DOT__tx_bit_counter_q)));
            }
        }
        vlSelf->uart_tx_o = (1U & ((1U & (IData)(vlSelf->uart__DOT__tx_state_q)) 
                                   || (1U & (IData)(vlSelf->uart__DOT__tx_current_byte_q))));
    } else {
        vlSelf->uart_tx_o = (1U & (~ (IData)(vlSelf->uart__DOT__tx_state_q)));
        if ((1U & (IData)(vlSelf->uart__DOT__tx_state_q))) {
            vlSelf->uart__DOT__tx_bit_counter_d = 0U;
        }
    }
    vlSelf->uart__DOT__rx_fifo_rready = 0U;
    if (vlSelf->device_req_i) {
        ++(vlSymsp->__Vcoverage[301]);
        if ((1U & ((IData)(vlSelf->device_be_i) & (~ (IData)(vlSelf->device_we_i))))) {
            ++(vlSymsp->__Vcoverage[299]);
            if ((0U != (0xfffU & vlSelf->device_addr_i))) {
                if ((4U != (0xfffU & vlSelf->device_addr_i))) {
                    if ((8U != (0xfffU & vlSelf->device_addr_i))) {
                        ++(vlSymsp->__Vcoverage[298]);
                    }
                    if ((8U == (0xfffU & vlSelf->device_addr_i))) {
                        ++(vlSymsp->__Vcoverage[297]);
                    }
                }
                if ((4U == (0xfffU & vlSelf->device_addr_i))) {
                    ++(vlSymsp->__Vcoverage[296]);
                }
            }
            if ((0U == (0xfffU & vlSelf->device_addr_i))) {
                ++(vlSymsp->__Vcoverage[295]);
                vlSelf->uart__DOT__rx_fifo_rready = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->device_be_i) 
                      & (~ (IData)(vlSelf->device_we_i)))))) {
            ++(vlSymsp->__Vcoverage[300]);
        }
        vlSelf->uart__DOT__device_rvalid_d = 1U;
    }
    vlSelf->uart__DOT__tx_next_byte = 0U;
    if ((1U & (~ ((IData)(vlSelf->uart__DOT__tx_state_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->uart__DOT__tx_state_q))) {
            ++(vlSymsp->__Vcoverage[340]);
            vlSelf->uart__DOT__tx_next_byte = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->uart__DOT__tx_state_q)))) {
            ++(vlSymsp->__Vcoverage[339]);
        }
    }
    vlSelf->uart__DOT__rx_valid = 0U;
    vlSelf->uart__DOT__write_req = ((IData)(vlSelf->device_req_i) 
                                    & ((IData)(vlSelf->device_be_i) 
                                       & (IData)(vlSelf->device_we_i)));
    if ((1U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfffffffeU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (1U & vlSelf->device_addr_i));
    }
    if ((2U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfffffffdU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (2U & vlSelf->device_addr_i));
    }
    if ((4U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfffffffbU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (4U & vlSelf->device_addr_i));
    }
    if ((8U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfffffff7U & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (8U & vlSelf->device_addr_i));
    }
    if ((0x10U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xffffffefU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x10U & vlSelf->device_addr_i));
    }
    if ((0x20U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xffffffdfU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x20U & vlSelf->device_addr_i));
    }
    if ((0x40U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xffffffbfU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x40U & vlSelf->device_addr_i));
    }
    if ((0x80U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xffffff7fU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x80U & vlSelf->device_addr_i));
    }
    if ((0x100U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfffffeffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x100U & vlSelf->device_addr_i));
    }
    if ((0x200U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfffffdffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x200U & vlSelf->device_addr_i));
    }
    if ((0x400U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfffffbffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x400U & vlSelf->device_addr_i));
    }
    if ((0x800U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfffff7ffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x800U & vlSelf->device_addr_i));
    }
    if ((0x1000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xffffefffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x1000U & vlSelf->device_addr_i));
    }
    if ((0x2000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xffffdfffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x2000U & vlSelf->device_addr_i));
    }
    if ((0x4000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xffffbfffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x4000U & vlSelf->device_addr_i));
    }
    if ((0x8000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xffff7fffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x8000U & vlSelf->device_addr_i));
    }
    if ((0x10000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfffeffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x10000U & vlSelf->device_addr_i));
    }
    if ((0x20000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfffdffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x20000U & vlSelf->device_addr_i));
    }
    if ((0x40000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfffbffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x40000U & vlSelf->device_addr_i));
    }
    if ((0x80000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfff7ffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x80000U & vlSelf->device_addr_i));
    }
    if ((0x100000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xffefffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x100000U & vlSelf->device_addr_i));
    }
    if ((0x200000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xffdfffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x200000U & vlSelf->device_addr_i));
    }
    if ((0x400000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xffbfffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x400000U & vlSelf->device_addr_i));
    }
    if ((0x800000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xff7fffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x800000U & vlSelf->device_addr_i));
    }
    if ((0x1000000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfeffffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x1000000U & vlSelf->device_addr_i));
    }
    if ((0x2000000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfdffffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x2000000U & vlSelf->device_addr_i));
    }
    if ((0x4000000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xfbffffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x4000000U & vlSelf->device_addr_i));
    }
    if ((0x8000000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xf7ffffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x8000000U & vlSelf->device_addr_i));
    }
    if ((0x10000000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xefffffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x10000000U & vlSelf->device_addr_i));
    }
    if ((0x20000000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xdfffffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x20000000U & vlSelf->device_addr_i));
    }
    if ((0x40000000U & (vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0xbfffffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x40000000U & vlSelf->device_addr_i));
    }
    if (((vlSelf->device_addr_i ^ vlSelf->uart__DOT____Vtogcov__device_addr_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->uart__DOT____Vtogcov__device_addr_i 
            = ((0x7fffffffU & vlSelf->uart__DOT____Vtogcov__device_addr_i) 
               | (0x80000000U & vlSelf->device_addr_i));
    }
    if ((1U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffffeU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (1U & vlSelf->device_wdata_i));
    }
    if ((2U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffffdU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (2U & vlSelf->device_wdata_i));
    }
    if ((4U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffffbU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (4U & vlSelf->device_wdata_i));
    }
    if ((8U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffff7U & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (8U & vlSelf->device_wdata_i));
    }
    if ((0x10U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xffffffefU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x10U & vlSelf->device_wdata_i));
    }
    if ((0x20U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xffffffdfU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x20U & vlSelf->device_wdata_i));
    }
    if ((0x40U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xffffffbfU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x40U & vlSelf->device_wdata_i));
    }
    if ((0x80U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xffffff7fU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x80U & vlSelf->device_wdata_i));
    }
    if ((0x100U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffeffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x100U & vlSelf->device_wdata_i));
    }
    if ((0x200U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffdffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x200U & vlSelf->device_wdata_i));
    }
    if ((0x400U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffbffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x400U & vlSelf->device_wdata_i));
    }
    if ((0x800U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfffff7ffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x800U & vlSelf->device_wdata_i));
    }
    if ((0x1000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xffffefffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x1000U & vlSelf->device_wdata_i));
    }
    if ((0x2000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xffffdfffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x2000U & vlSelf->device_wdata_i));
    }
    if ((0x4000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xffffbfffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x4000U & vlSelf->device_wdata_i));
    }
    if ((0x8000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xffff7fffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x8000U & vlSelf->device_wdata_i));
    }
    if ((0x10000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfffeffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x10000U & vlSelf->device_wdata_i));
    }
    if ((0x20000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfffdffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x20000U & vlSelf->device_wdata_i));
    }
    if ((0x40000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfffbffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x40000U & vlSelf->device_wdata_i));
    }
    if ((0x80000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfff7ffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x80000U & vlSelf->device_wdata_i));
    }
    if ((0x100000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xffefffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x100000U & vlSelf->device_wdata_i));
    }
    if ((0x200000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xffdfffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x200000U & vlSelf->device_wdata_i));
    }
    if ((0x400000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xffbfffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x400000U & vlSelf->device_wdata_i));
    }
    if ((0x800000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xff7fffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x800000U & vlSelf->device_wdata_i));
    }
    if ((0x1000000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfeffffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x1000000U & vlSelf->device_wdata_i));
    }
    if ((0x2000000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfdffffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x2000000U & vlSelf->device_wdata_i));
    }
    if ((0x4000000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xfbffffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x4000000U & vlSelf->device_wdata_i));
    }
    if ((0x8000000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xf7ffffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x8000000U & vlSelf->device_wdata_i));
    }
    if ((0x10000000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xefffffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x10000000U & vlSelf->device_wdata_i));
    }
    if ((0x20000000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xdfffffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x20000000U & vlSelf->device_wdata_i));
    }
    if ((0x40000000U & (vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0xbfffffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x40000000U & vlSelf->device_wdata_i));
    }
    if (((vlSelf->device_wdata_i ^ vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->uart__DOT____Vtogcov__device_wdata_i 
            = ((0x7fffffffU & vlSelf->uart__DOT____Vtogcov__device_wdata_i) 
               | (0x80000000U & vlSelf->device_wdata_i));
    }
    if ((1U & (vlSelf->uart__DOT__device_rdata_q ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfffffffeU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (1U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((2U & (vlSelf->uart__DOT__device_rdata_q ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfffffffdU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (2U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((4U & (vlSelf->uart__DOT__device_rdata_q ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfffffffbU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (4U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((8U & (vlSelf->uart__DOT__device_rdata_q ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfffffff7U & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (8U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x10U & (vlSelf->uart__DOT__device_rdata_q 
                  ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xffffffefU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x10U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x20U & (vlSelf->uart__DOT__device_rdata_q 
                  ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xffffffdfU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x20U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x40U & (vlSelf->uart__DOT__device_rdata_q 
                  ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xffffffbfU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x40U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x80U & (vlSelf->uart__DOT__device_rdata_q 
                  ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xffffff7fU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x80U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x100U & (vlSelf->uart__DOT__device_rdata_q 
                   ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfffffeffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x100U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x200U & (vlSelf->uart__DOT__device_rdata_q 
                   ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfffffdffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x200U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x400U & (vlSelf->uart__DOT__device_rdata_q 
                   ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfffffbffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x400U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x800U & (vlSelf->uart__DOT__device_rdata_q 
                   ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfffff7ffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x800U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x1000U & (vlSelf->uart__DOT__device_rdata_q 
                    ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xffffefffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x1000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x2000U & (vlSelf->uart__DOT__device_rdata_q 
                    ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xffffdfffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x2000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x4000U & (vlSelf->uart__DOT__device_rdata_q 
                    ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xffffbfffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x4000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x8000U & (vlSelf->uart__DOT__device_rdata_q 
                    ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xffff7fffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x8000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x10000U & (vlSelf->uart__DOT__device_rdata_q 
                     ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfffeffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x10000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x20000U & (vlSelf->uart__DOT__device_rdata_q 
                     ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfffdffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x20000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x40000U & (vlSelf->uart__DOT__device_rdata_q 
                     ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfffbffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x40000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x80000U & (vlSelf->uart__DOT__device_rdata_q 
                     ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfff7ffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x80000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x100000U & (vlSelf->uart__DOT__device_rdata_q 
                      ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xffefffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x100000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x200000U & (vlSelf->uart__DOT__device_rdata_q 
                      ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xffdfffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x200000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x400000U & (vlSelf->uart__DOT__device_rdata_q 
                      ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xffbfffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x400000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x800000U & (vlSelf->uart__DOT__device_rdata_q 
                      ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xff7fffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x800000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x1000000U & (vlSelf->uart__DOT__device_rdata_q 
                       ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfeffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x1000000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x2000000U & (vlSelf->uart__DOT__device_rdata_q 
                       ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfdffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x2000000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x4000000U & (vlSelf->uart__DOT__device_rdata_q 
                       ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xfbffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x4000000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x8000000U & (vlSelf->uart__DOT__device_rdata_q 
                       ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xf7ffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x8000000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x10000000U & (vlSelf->uart__DOT__device_rdata_q 
                        ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xefffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x10000000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x20000000U & (vlSelf->uart__DOT__device_rdata_q 
                        ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xdfffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x20000000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if ((0x40000000U & (vlSelf->uart__DOT__device_rdata_q 
                        ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0xbfffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x40000000U & vlSelf->uart__DOT__device_rdata_q));
    }
    if (((vlSelf->uart__DOT__device_rdata_q ^ vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_q 
            = ((0x7fffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_q) 
               | (0x80000000U & vlSelf->uart__DOT__device_rdata_q));
    }
    vlSelf->uart__DOT__rx_current_byte_d = vlSelf->uart__DOT__rx_current_byte_q;
    vlSelf->uart__DOT__tx_baud_counter_d = ((0x1b1U 
                                             == (IData)(vlSelf->uart__DOT__tx_baud_counter_q))
                                             ? 0U : 
                                            (0x1ffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->uart__DOT__tx_baud_counter_q))));
    vlSelf->uart__DOT__rx_start = (IData)(((4U == (6U 
                                                   & (IData)(vlSelf->uart__DOT__rx_q))) 
                                           & (0U == (IData)(vlSelf->uart__DOT__rx_state_q))));
    if ((1U & (~ ((IData)(vlSelf->uart__DOT__rx_state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->uart__DOT__rx_state_q)))) {
            ++(vlSymsp->__Vcoverage[319]);
            if ((1U & (~ (IData)(vlSelf->uart__DOT__rx_start)))) {
                ++(vlSymsp->__Vcoverage[318]);
            }
            if (vlSelf->uart__DOT__rx_start) {
                ++(vlSymsp->__Vcoverage[317]);
            }
        }
        if ((1U & (IData)(vlSelf->uart__DOT__rx_state_q))) {
            ++(vlSymsp->__Vcoverage[322]);
            if ((1U & (~ ((IData)(vlSelf->uart__DOT__rx_q) 
                          >> 2U)))) {
                ++(vlSymsp->__Vcoverage[320]);
            }
            if ((4U & (IData)(vlSelf->uart__DOT__rx_q))) {
                ++(vlSymsp->__Vcoverage[321]);
            }
        }
    }
    vlSelf->device_rdata_o = vlSelf->uart__DOT__device_rdata_q;
    if (((IData)(vlSelf->uart__DOT__device_rvalid_d) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__device_rvalid_d))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->uart__DOT____Vtogcov__device_rvalid_d 
            = vlSelf->uart__DOT__device_rvalid_d;
    }
    if (((IData)(vlSelf->device_rvalid_o) ^ (IData)(vlSelf->uart__DOT____Vtogcov__device_rvalid_o))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->uart__DOT____Vtogcov__device_rvalid_o 
            = vlSelf->device_rvalid_o;
    }
    if (((IData)(vlSelf->uart_tx_o) ^ (IData)(vlSelf->uart__DOT____Vtogcov__uart_tx_o))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->uart__DOT____Vtogcov__uart_tx_o = vlSelf->uart_tx_o;
    }
    if ((2U & (IData)(vlSelf->uart__DOT__rx_state_q))) {
        if ((1U & (IData)(vlSelf->uart__DOT__rx_state_q))) {
            ++(vlSymsp->__Vcoverage[328]);
            if ((1U & (~ ((IData)(vlSelf->uart__DOT__rx_q) 
                          >> 2U)))) {
                ++(vlSymsp->__Vcoverage[327]);
            }
            if ((4U & (IData)(vlSelf->uart__DOT__rx_q))) {
                ++(vlSymsp->__Vcoverage[326]);
            }
        }
        if ((1U & (~ (IData)(vlSelf->uart__DOT__rx_state_q)))) {
            ++(vlSymsp->__Vcoverage[325]);
            if ((7U == (IData)(vlSelf->uart__DOT__rx_bit_counter_q))) {
                ++(vlSymsp->__Vcoverage[323]);
            }
            if ((7U != (IData)(vlSelf->uart__DOT__rx_bit_counter_q))) {
                ++(vlSymsp->__Vcoverage[324]);
                vlSelf->uart__DOT__rx_bit_counter_d 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->uart__DOT__rx_bit_counter_q)));
            }
        }
    } else if ((1U & (IData)(vlSelf->uart__DOT__rx_state_q))) {
        vlSelf->uart__DOT__rx_bit_counter_d = 0U;
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__rx_bit_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_d)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->uart__DOT____Vtogcov__rx_bit_counter_d 
            = ((6U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_d)) 
               | (1U & (IData)(vlSelf->uart__DOT__rx_bit_counter_d)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__rx_bit_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_d)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->uart__DOT____Vtogcov__rx_bit_counter_d 
            = ((5U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_d)) 
               | (2U & (IData)(vlSelf->uart__DOT__rx_bit_counter_d)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__rx_bit_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_d)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->uart__DOT____Vtogcov__rx_bit_counter_d 
            = ((3U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_bit_counter_d)) 
               | (4U & (IData)(vlSelf->uart__DOT__rx_bit_counter_d)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__tx_bit_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_d)))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->uart__DOT____Vtogcov__tx_bit_counter_d 
            = ((6U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_d)) 
               | (1U & (IData)(vlSelf->uart__DOT__tx_bit_counter_d)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__tx_bit_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_d)))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->uart__DOT____Vtogcov__tx_bit_counter_d 
            = ((5U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_d)) 
               | (2U & (IData)(vlSelf->uart__DOT__tx_bit_counter_d)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__tx_bit_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_d)))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->uart__DOT____Vtogcov__tx_bit_counter_d 
            = ((3U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_bit_counter_d)) 
               | (4U & (IData)(vlSelf->uart__DOT__tx_bit_counter_d)));
    }
    if (((IData)(vlSelf->uart__DOT__rx_fifo_rready) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rready))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_rready 
            = vlSelf->uart__DOT__rx_fifo_rready;
    }
    if (((IData)(vlSelf->uart__DOT__tx_next_byte) ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_next_byte))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->uart__DOT____Vtogcov__tx_next_byte 
            = vlSelf->uart__DOT__tx_next_byte;
    }
    vlSelf->uart__DOT__tx_fifo_rready = ((0x1b1U == (IData)(vlSelf->uart__DOT__tx_baud_counter_q)) 
                                         & (IData)(vlSelf->uart__DOT__tx_next_byte));
    if ((2U & (IData)(vlSelf->uart__DOT__rx_state_q))) {
        if ((1U & (IData)(vlSelf->uart__DOT__rx_state_q))) {
            if ((4U & (IData)(vlSelf->uart__DOT__rx_q))) {
                vlSelf->uart__DOT__rx_valid = 1U;
            }
        }
    }
    if (((IData)(vlSelf->uart__DOT__rx_valid) ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_valid))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->uart__DOT____Vtogcov__rx_valid = vlSelf->uart__DOT__rx_valid;
    }
    vlSelf->uart__DOT__rx_fifo_wvalid = ((0x1b1U == (IData)(vlSelf->uart__DOT__rx_baud_counter_q)) 
                                         & (IData)(vlSelf->uart__DOT__rx_valid));
    if (((IData)(vlSelf->uart__DOT__write_req) ^ (IData)(vlSelf->uart__DOT____Vtogcov__write_req))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->uart__DOT____Vtogcov__write_req = vlSelf->uart__DOT__write_req;
    }
    vlSelf->uart__DOT__tx_fifo_wvalid = ((4U == (0xfffU 
                                                 & vlSelf->device_addr_i)) 
                                         & (IData)(vlSelf->uart__DOT__write_req));
    if ((2U & (IData)(vlSelf->uart__DOT__rx_state_q))) {
        if ((1U & (~ (IData)(vlSelf->uart__DOT__rx_state_q)))) {
            vlSelf->uart__DOT__rx_current_byte_d = 
                ((0x80U & ((IData)(vlSelf->uart__DOT__rx_q) 
                           << 5U)) | (0x7fU & ((IData)(vlSelf->uart__DOT__rx_current_byte_q) 
                                               >> 1U)));
        }
    } else if ((1U & (IData)(vlSelf->uart__DOT__rx_state_q))) {
        vlSelf->uart__DOT__rx_current_byte_d = 0U;
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__rx_current_byte_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_d 
            = ((0xfeU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)) 
               | (1U & (IData)(vlSelf->uart__DOT__rx_current_byte_d)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__rx_current_byte_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_d 
            = ((0xfdU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)) 
               | (2U & (IData)(vlSelf->uart__DOT__rx_current_byte_d)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__rx_current_byte_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_d 
            = ((0xfbU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)) 
               | (4U & (IData)(vlSelf->uart__DOT__rx_current_byte_d)));
    }
    if ((8U & ((IData)(vlSelf->uart__DOT__rx_current_byte_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_d 
            = ((0xf7U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)) 
               | (8U & (IData)(vlSelf->uart__DOT__rx_current_byte_d)));
    }
    if ((0x10U & ((IData)(vlSelf->uart__DOT__rx_current_byte_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_d 
            = ((0xefU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)) 
               | (0x10U & (IData)(vlSelf->uart__DOT__rx_current_byte_d)));
    }
    if ((0x20U & ((IData)(vlSelf->uart__DOT__rx_current_byte_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_d 
            = ((0xdfU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)) 
               | (0x20U & (IData)(vlSelf->uart__DOT__rx_current_byte_d)));
    }
    if ((0x40U & ((IData)(vlSelf->uart__DOT__rx_current_byte_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_d 
            = ((0xbfU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)) 
               | (0x40U & (IData)(vlSelf->uart__DOT__rx_current_byte_d)));
    }
    if ((0x80U & ((IData)(vlSelf->uart__DOT__rx_current_byte_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->uart__DOT____Vtogcov__rx_current_byte_d 
            = ((0x7fU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_current_byte_d)) 
               | (0x80U & (IData)(vlSelf->uart__DOT__rx_current_byte_d)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d 
            = ((0x1feU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)) 
               | (1U & (IData)(vlSelf->uart__DOT__tx_baud_counter_d)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d 
            = ((0x1fdU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)) 
               | (2U & (IData)(vlSelf->uart__DOT__tx_baud_counter_d)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d 
            = ((0x1fbU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)) 
               | (4U & (IData)(vlSelf->uart__DOT__tx_baud_counter_d)));
    }
    if ((8U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d 
            = ((0x1f7U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)) 
               | (8U & (IData)(vlSelf->uart__DOT__tx_baud_counter_d)));
    }
    if ((0x10U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d 
            = ((0x1efU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)) 
               | (0x10U & (IData)(vlSelf->uart__DOT__tx_baud_counter_d)));
    }
    if ((0x20U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d 
            = ((0x1dfU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)) 
               | (0x20U & (IData)(vlSelf->uart__DOT__tx_baud_counter_d)));
    }
    if ((0x40U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d 
            = ((0x1bfU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)) 
               | (0x40U & (IData)(vlSelf->uart__DOT__tx_baud_counter_d)));
    }
    if ((0x80U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d 
            = ((0x17fU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)) 
               | (0x80U & (IData)(vlSelf->uart__DOT__tx_baud_counter_d)));
    }
    if ((0x100U & ((IData)(vlSelf->uart__DOT__tx_baud_counter_d) 
                   ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d 
            = ((0xffU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_baud_counter_d)) 
               | (0x100U & (IData)(vlSelf->uart__DOT__tx_baud_counter_d)));
    }
    if (((IData)(vlSelf->uart__DOT__rx_start) ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_start))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->uart__DOT____Vtogcov__rx_start = vlSelf->uart__DOT__rx_start;
    }
    vlSelf->uart__DOT__rx_state_d = vlSelf->uart__DOT__rx_state_q;
    if ((2U & (IData)(vlSelf->uart__DOT__rx_state_q))) {
        if ((1U & (IData)(vlSelf->uart__DOT__rx_state_q))) {
            vlSelf->uart__DOT__rx_state_d = 0U;
        } else if ((7U == (IData)(vlSelf->uart__DOT__rx_bit_counter_q))) {
            vlSelf->uart__DOT__rx_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->uart__DOT__rx_state_q))) {
        vlSelf->uart__DOT__rx_state_d = ((4U & (IData)(vlSelf->uart__DOT__rx_q))
                                          ? 0U : 2U);
    } else if (vlSelf->uart__DOT__rx_start) {
        vlSelf->uart__DOT__rx_state_d = 1U;
    }
    vlSelf->uart__DOT__rx_baud_counter_d = ((0x1b1U 
                                             == (IData)(vlSelf->uart__DOT__rx_baud_counter_q))
                                             ? 0U : 
                                            ((IData)(vlSelf->uart__DOT__rx_start)
                                              ? 0xd9U
                                              : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->uart__DOT__rx_baud_counter_q)))));
    if ((1U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffeU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (1U & vlSelf->device_rdata_o));
    }
    if ((2U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffdU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (2U & vlSelf->device_rdata_o));
    }
    if ((4U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffbU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (4U & vlSelf->device_rdata_o));
    }
    if ((8U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffff7U & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (8U & vlSelf->device_rdata_o));
    }
    if ((0x10U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffefU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x10U & vlSelf->device_rdata_o));
    }
    if ((0x20U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffdfU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x20U & vlSelf->device_rdata_o));
    }
    if ((0x40U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffbfU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x40U & vlSelf->device_rdata_o));
    }
    if ((0x80U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xffffff7fU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x80U & vlSelf->device_rdata_o));
    }
    if ((0x100U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffeffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x100U & vlSelf->device_rdata_o));
    }
    if ((0x200U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffdffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x200U & vlSelf->device_rdata_o));
    }
    if ((0x400U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffbffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x400U & vlSelf->device_rdata_o));
    }
    if ((0x800U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfffff7ffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x800U & vlSelf->device_rdata_o));
    }
    if ((0x1000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xffffefffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x1000U & vlSelf->device_rdata_o));
    }
    if ((0x2000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xffffdfffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x2000U & vlSelf->device_rdata_o));
    }
    if ((0x4000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xffffbfffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x4000U & vlSelf->device_rdata_o));
    }
    if ((0x8000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xffff7fffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x8000U & vlSelf->device_rdata_o));
    }
    if ((0x10000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfffeffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x10000U & vlSelf->device_rdata_o));
    }
    if ((0x20000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfffdffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x20000U & vlSelf->device_rdata_o));
    }
    if ((0x40000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfffbffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x40000U & vlSelf->device_rdata_o));
    }
    if ((0x80000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfff7ffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x80000U & vlSelf->device_rdata_o));
    }
    if ((0x100000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xffefffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x100000U & vlSelf->device_rdata_o));
    }
    if ((0x200000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xffdfffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x200000U & vlSelf->device_rdata_o));
    }
    if ((0x400000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xffbfffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x400000U & vlSelf->device_rdata_o));
    }
    if ((0x800000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xff7fffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x800000U & vlSelf->device_rdata_o));
    }
    if ((0x1000000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfeffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x1000000U & vlSelf->device_rdata_o));
    }
    if ((0x2000000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfdffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x2000000U & vlSelf->device_rdata_o));
    }
    if ((0x4000000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xfbffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x4000000U & vlSelf->device_rdata_o));
    }
    if ((0x8000000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xf7ffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x8000000U & vlSelf->device_rdata_o));
    }
    if ((0x10000000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xefffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x10000000U & vlSelf->device_rdata_o));
    }
    if ((0x20000000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xdfffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x20000000U & vlSelf->device_rdata_o));
    }
    if ((0x40000000U & (vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0xbfffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x40000000U & vlSelf->device_rdata_o));
    }
    if (((vlSelf->device_rdata_o ^ vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_o 
            = ((0x7fffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_o) 
               | (0x80000000U & vlSelf->device_rdata_o));
    }
    if (((IData)(vlSelf->uart__DOT__tx_fifo_rready) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rready))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_rready 
            = vlSelf->uart__DOT__tx_fifo_rready;
    }
    if (((IData)(vlSelf->uart__DOT__rx_fifo_wvalid) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_wvalid))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_wvalid 
            = vlSelf->uart__DOT__rx_fifo_wvalid;
    }
    if (((IData)(vlSelf->uart__DOT__tx_fifo_wvalid) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_wvalid))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_wvalid 
            = vlSelf->uart__DOT__tx_fifo_wvalid;
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__rx_state_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_state_d)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->uart__DOT____Vtogcov__rx_state_d = 
            ((2U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_state_d)) 
             | (1U & (IData)(vlSelf->uart__DOT__rx_state_d)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__rx_state_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_state_d)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->uart__DOT____Vtogcov__rx_state_d = 
            ((1U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_state_d)) 
             | (2U & (IData)(vlSelf->uart__DOT__rx_state_d)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d 
            = ((0x1feU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)) 
               | (1U & (IData)(vlSelf->uart__DOT__rx_baud_counter_d)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d 
            = ((0x1fdU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)) 
               | (2U & (IData)(vlSelf->uart__DOT__rx_baud_counter_d)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d 
            = ((0x1fbU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)) 
               | (4U & (IData)(vlSelf->uart__DOT__rx_baud_counter_d)));
    }
    if ((8U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d 
            = ((0x1f7U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)) 
               | (8U & (IData)(vlSelf->uart__DOT__rx_baud_counter_d)));
    }
    if ((0x10U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d 
            = ((0x1efU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)) 
               | (0x10U & (IData)(vlSelf->uart__DOT__rx_baud_counter_d)));
    }
    if ((0x20U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d 
            = ((0x1dfU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)) 
               | (0x20U & (IData)(vlSelf->uart__DOT__rx_baud_counter_d)));
    }
    if ((0x40U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d 
            = ((0x1bfU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)) 
               | (0x40U & (IData)(vlSelf->uart__DOT__rx_baud_counter_d)));
    }
    if ((0x80U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d 
            = ((0x17fU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)) 
               | (0x80U & (IData)(vlSelf->uart__DOT__rx_baud_counter_d)));
    }
    if ((0x100U & ((IData)(vlSelf->uart__DOT__rx_baud_counter_d) 
                   ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d 
            = ((0xffU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_baud_counter_d)) 
               | (0x100U & (IData)(vlSelf->uart__DOT__rx_baud_counter_d)));
    }
}

VL_ATTR_COLD void Vuart___024root___stl_sequent__TOP__1(Vuart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___stl_sequent__TOP__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rvalid_o) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rvalid))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_rvalid 
            = vlSymsp->TOP__uart__DOT__u_rx_fifo.rvalid_o;
    }
    if ((1U ^ ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rvalid_o) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_empty)))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_empty 
            = (1U & (~ (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rvalid_o)));
    }
    vlSelf->uart_irq_o = vlSymsp->TOP__uart__DOT__u_rx_fifo.rvalid_o;
    if ((1U & ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata 
            = ((0xfeU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)) 
               | (1U & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata 
            = ((0xfdU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)) 
               | (2U & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata 
            = ((0xfbU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)) 
               | (4U & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata 
            = ((0xf7U & (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)) 
               | (8U & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata 
            = ((0xefU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)) 
               | (0x10U & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata 
            = ((0xdfU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)) 
               | (0x20U & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata 
            = ((0xbfU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)) 
               | (0x40U & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata 
            = ((0x7fU & (IData)(vlSelf->uart__DOT____Vtogcov__rx_fifo_rdata)) 
               | (0x80U & (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o)));
    }
    if (((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.full_o) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_full))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_full 
            = vlSymsp->TOP__uart__DOT__u_tx_fifo.full_o;
    }
    vlSelf->uart__DOT__device_rdata_d = 0U;
    if (vlSelf->device_req_i) {
        if ((1U & ((IData)(vlSelf->device_be_i) & (~ (IData)(vlSelf->device_we_i))))) {
            vlSelf->uart__DOT__device_rdata_d = ((0U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->device_addr_i))
                                                  ? (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rdata_o)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->device_addr_i))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->device_addr_i))
                                                    ? 
                                                   (((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.full_o) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ (IData)(vlSymsp->TOP__uart__DOT__u_rx_fifo.rvalid_o))))
                                                    : 0U)));
        }
    }
    if ((1U & (~ ((IData)(vlSelf->uart__DOT__tx_state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->uart__DOT__tx_state_q)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rvalid_o)))) {
                ++(vlSymsp->__Vcoverage[338]);
            }
            if (vlSymsp->TOP__uart__DOT__u_tx_fifo.rvalid_o) {
                ++(vlSymsp->__Vcoverage[337]);
            }
        }
    }
    if (((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rvalid_o) 
         ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rvalid))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_rvalid 
            = vlSymsp->TOP__uart__DOT__u_tx_fifo.rvalid_o;
    }
    vlSelf->uart__DOT__tx_state_d = vlSelf->uart__DOT__tx_state_q;
    if ((1U & ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xfeU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)) 
               | (1U & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xfdU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)) 
               | (2U & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xfbU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)) 
               | (4U & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xf7U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)) 
               | (8U & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xefU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)) 
               | (0x10U & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xdfU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)) 
               | (0x20U & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata 
            = ((0xbfU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)) 
               | (0x40U & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata 
            = ((0x7fU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_fifo_rdata)) 
               | (0x80U & (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o)));
    }
    vlSelf->uart__DOT__tx_current_byte_d = vlSelf->uart__DOT__tx_current_byte_q;
    if ((2U & (IData)(vlSelf->uart__DOT__tx_state_q))) {
        if ((1U & (IData)(vlSelf->uart__DOT__tx_state_q))) {
            if (vlSymsp->TOP__uart__DOT__u_tx_fifo.rvalid_o) {
                ++(vlSymsp->__Vcoverage[344]);
                vlSelf->uart__DOT__tx_state_d = 1U;
            } else {
                vlSelf->uart__DOT__tx_state_d = 0U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__uart__DOT__u_tx_fifo.rvalid_o)))) {
                ++(vlSymsp->__Vcoverage[345]);
            }
        } else if ((7U == (IData)(vlSelf->uart__DOT__tx_bit_counter_q))) {
            vlSelf->uart__DOT__tx_state_d = 3U;
        }
        if ((1U & (~ (IData)(vlSelf->uart__DOT__tx_state_q)))) {
            vlSelf->uart__DOT__tx_current_byte_d = 
                (0x7fU & ((IData)(vlSelf->uart__DOT__tx_current_byte_q) 
                          >> 1U));
        }
    } else if ((1U & (IData)(vlSelf->uart__DOT__tx_state_q))) {
        vlSelf->uart__DOT__tx_state_d = 2U;
        vlSelf->uart__DOT__tx_current_byte_d = vlSymsp->TOP__uart__DOT__u_tx_fifo.rdata_o;
    } else if (vlSymsp->TOP__uart__DOT__u_tx_fifo.rvalid_o) {
        vlSelf->uart__DOT__tx_state_d = 1U;
    }
    if (((IData)(vlSelf->uart_irq_o) ^ (IData)(vlSelf->uart__DOT____Vtogcov__uart_irq_o))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->uart__DOT____Vtogcov__uart_irq_o = vlSelf->uart_irq_o;
    }
    if ((1U & (vlSelf->uart__DOT__device_rdata_d ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfffffffeU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (1U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((2U & (vlSelf->uart__DOT__device_rdata_d ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfffffffdU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (2U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((4U & (vlSelf->uart__DOT__device_rdata_d ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfffffffbU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (4U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((8U & (vlSelf->uart__DOT__device_rdata_d ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfffffff7U & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (8U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x10U & (vlSelf->uart__DOT__device_rdata_d 
                  ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xffffffefU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x10U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x20U & (vlSelf->uart__DOT__device_rdata_d 
                  ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xffffffdfU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x20U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x40U & (vlSelf->uart__DOT__device_rdata_d 
                  ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xffffffbfU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x40U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x80U & (vlSelf->uart__DOT__device_rdata_d 
                  ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xffffff7fU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x80U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x100U & (vlSelf->uart__DOT__device_rdata_d 
                   ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfffffeffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x100U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x200U & (vlSelf->uart__DOT__device_rdata_d 
                   ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfffffdffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x200U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x400U & (vlSelf->uart__DOT__device_rdata_d 
                   ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfffffbffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x400U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x800U & (vlSelf->uart__DOT__device_rdata_d 
                   ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfffff7ffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x800U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x1000U & (vlSelf->uart__DOT__device_rdata_d 
                    ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xffffefffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x1000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x2000U & (vlSelf->uart__DOT__device_rdata_d 
                    ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xffffdfffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x2000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x4000U & (vlSelf->uart__DOT__device_rdata_d 
                    ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xffffbfffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x4000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x8000U & (vlSelf->uart__DOT__device_rdata_d 
                    ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xffff7fffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x8000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x10000U & (vlSelf->uart__DOT__device_rdata_d 
                     ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfffeffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x10000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x20000U & (vlSelf->uart__DOT__device_rdata_d 
                     ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfffdffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x20000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x40000U & (vlSelf->uart__DOT__device_rdata_d 
                     ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfffbffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x40000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x80000U & (vlSelf->uart__DOT__device_rdata_d 
                     ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfff7ffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x80000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x100000U & (vlSelf->uart__DOT__device_rdata_d 
                      ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xffefffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x100000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x200000U & (vlSelf->uart__DOT__device_rdata_d 
                      ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xffdfffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x200000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x400000U & (vlSelf->uart__DOT__device_rdata_d 
                      ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xffbfffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x400000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x800000U & (vlSelf->uart__DOT__device_rdata_d 
                      ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xff7fffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x800000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x1000000U & (vlSelf->uart__DOT__device_rdata_d 
                       ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfeffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x1000000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x2000000U & (vlSelf->uart__DOT__device_rdata_d 
                       ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfdffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x2000000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x4000000U & (vlSelf->uart__DOT__device_rdata_d 
                       ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xfbffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x4000000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x8000000U & (vlSelf->uart__DOT__device_rdata_d 
                       ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xf7ffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x8000000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x10000000U & (vlSelf->uart__DOT__device_rdata_d 
                        ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xefffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x10000000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x20000000U & (vlSelf->uart__DOT__device_rdata_d 
                        ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xdfffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x20000000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((0x40000000U & (vlSelf->uart__DOT__device_rdata_d 
                        ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0xbfffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x40000000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if (((vlSelf->uart__DOT__device_rdata_d ^ vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->uart__DOT____Vtogcov__device_rdata_d 
            = ((0x7fffffffU & vlSelf->uart__DOT____Vtogcov__device_rdata_d) 
               | (0x80000000U & vlSelf->uart__DOT__device_rdata_d));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__tx_state_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_state_d)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->uart__DOT____Vtogcov__tx_state_d = 
            ((2U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_state_d)) 
             | (1U & (IData)(vlSelf->uart__DOT__tx_state_d)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__tx_state_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_state_d)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->uart__DOT____Vtogcov__tx_state_d = 
            ((1U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_state_d)) 
             | (2U & (IData)(vlSelf->uart__DOT__tx_state_d)));
    }
    if ((1U & ((IData)(vlSelf->uart__DOT__tx_current_byte_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_d 
            = ((0xfeU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)) 
               | (1U & (IData)(vlSelf->uart__DOT__tx_current_byte_d)));
    }
    if ((2U & ((IData)(vlSelf->uart__DOT__tx_current_byte_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_d 
            = ((0xfdU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)) 
               | (2U & (IData)(vlSelf->uart__DOT__tx_current_byte_d)));
    }
    if ((4U & ((IData)(vlSelf->uart__DOT__tx_current_byte_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_d 
            = ((0xfbU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)) 
               | (4U & (IData)(vlSelf->uart__DOT__tx_current_byte_d)));
    }
    if ((8U & ((IData)(vlSelf->uart__DOT__tx_current_byte_d) 
               ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_d 
            = ((0xf7U & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)) 
               | (8U & (IData)(vlSelf->uart__DOT__tx_current_byte_d)));
    }
    if ((0x10U & ((IData)(vlSelf->uart__DOT__tx_current_byte_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_d 
            = ((0xefU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)) 
               | (0x10U & (IData)(vlSelf->uart__DOT__tx_current_byte_d)));
    }
    if ((0x20U & ((IData)(vlSelf->uart__DOT__tx_current_byte_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_d 
            = ((0xdfU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)) 
               | (0x20U & (IData)(vlSelf->uart__DOT__tx_current_byte_d)));
    }
    if ((0x40U & ((IData)(vlSelf->uart__DOT__tx_current_byte_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_d 
            = ((0xbfU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)) 
               | (0x40U & (IData)(vlSelf->uart__DOT__tx_current_byte_d)));
    }
    if ((0x80U & ((IData)(vlSelf->uart__DOT__tx_current_byte_d) 
                  ^ (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->uart__DOT____Vtogcov__tx_current_byte_d 
            = ((0x7fU & (IData)(vlSelf->uart__DOT____Vtogcov__tx_current_byte_d)) 
               | (0x80U & (IData)(vlSelf->uart__DOT__tx_current_byte_d)));
    }
}

VL_ATTR_COLD void Vuart___024root___configure_coverage(Vuart___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart___024root___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../rtl/system/uart.sv", 14, 16, ".uart", "v_toggle/uart", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "../rtl/system/uart.sv", 15, 16, ".uart", "v_toggle/uart", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../rtl/system/uart.sv", 17, 32, ".uart", "v_toggle/uart", "device_req_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../rtl/system/uart.sv", 18, 32, ".uart", "v_toggle/uart", "device_addr_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../rtl/system/uart.sv", 19, 32, ".uart", "v_toggle/uart", "device_we_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../rtl/system/uart.sv", 20, 32, ".uart", "v_toggle/uart", "device_be_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../rtl/system/uart.sv", 20, 32, ".uart", "v_toggle/uart", "device_be_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../rtl/system/uart.sv", 20, 32, ".uart", "v_toggle/uart", "device_be_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../rtl/system/uart.sv", 20, 32, ".uart", "v_toggle/uart", "device_be_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../rtl/system/uart.sv", 21, 32, ".uart", "v_toggle/uart", "device_wdata_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../rtl/system/uart.sv", 22, 32, ".uart", "v_toggle/uart", "device_rvalid_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../rtl/system/uart.sv", 23, 32, ".uart", "v_toggle/uart", "device_rdata_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../rtl/system/uart.sv", 25, 16, ".uart", "v_toggle/uart", "uart_rx_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../rtl/system/uart.sv", 26, 16, ".uart", "v_toggle/uart", "uart_irq_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../rtl/system/uart.sv", 27, 16, ".uart", "v_toggle/uart", "uart_tx_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "../rtl/system/uart.sv", 42, 25, ".uart", "v_toggle/uart", "device_rdata_d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../rtl/system/uart.sv", 42, 41, ".uart", "v_toggle/uart", "device_rdata_q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "../rtl/system/uart.sv", 43, 25, ".uart", "v_toggle/uart", "device_rvalid_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "../rtl/system/uart.sv", 43, 42, ".uart", "v_toggle/uart", "device_rvalid_q", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../rtl/system/uart.sv", 45, 23, ".uart", "v_toggle/uart", "reg_addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "../rtl/system/uart.sv", 47, 37, ".uart", "v_toggle/uart", "rx_baud_counter_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "../rtl/system/uart.sv", 47, 37, ".uart", "v_toggle/uart", "rx_baud_counter_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "../rtl/system/uart.sv", 47, 37, ".uart", "v_toggle/uart", "rx_baud_counter_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "../rtl/system/uart.sv", 47, 37, ".uart", "v_toggle/uart", "rx_baud_counter_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "../rtl/system/uart.sv", 47, 37, ".uart", "v_toggle/uart", "rx_baud_counter_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "../rtl/system/uart.sv", 47, 37, ".uart", "v_toggle/uart", "rx_baud_counter_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "../rtl/system/uart.sv", 47, 37, ".uart", "v_toggle/uart", "rx_baud_counter_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "../rtl/system/uart.sv", 47, 37, ".uart", "v_toggle/uart", "rx_baud_counter_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "../rtl/system/uart.sv", 47, 37, ".uart", "v_toggle/uart", "rx_baud_counter_q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "../rtl/system/uart.sv", 47, 56, ".uart", "v_toggle/uart", "rx_baud_counter_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../rtl/system/uart.sv", 47, 56, ".uart", "v_toggle/uart", "rx_baud_counter_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../rtl/system/uart.sv", 47, 56, ".uart", "v_toggle/uart", "rx_baud_counter_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../rtl/system/uart.sv", 47, 56, ".uart", "v_toggle/uart", "rx_baud_counter_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../rtl/system/uart.sv", 47, 56, ".uart", "v_toggle/uart", "rx_baud_counter_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../rtl/system/uart.sv", 47, 56, ".uart", "v_toggle/uart", "rx_baud_counter_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../rtl/system/uart.sv", 47, 56, ".uart", "v_toggle/uart", "rx_baud_counter_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../rtl/system/uart.sv", 47, 56, ".uart", "v_toggle/uart", "rx_baud_counter_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../rtl/system/uart.sv", 47, 56, ".uart", "v_toggle/uart", "rx_baud_counter_d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../rtl/system/uart.sv", 48, 37, ".uart", "v_toggle/uart", "rx_baud_tick", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../rtl/system/uart.sv", 50, 16, ".uart", "v_toggle/uart", "rx_state_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../rtl/system/uart.sv", 50, 16, ".uart", "v_toggle/uart", "rx_state_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../rtl/system/uart.sv", 50, 28, ".uart", "v_toggle/uart", "rx_state_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../rtl/system/uart.sv", 50, 28, ".uart", "v_toggle/uart", "rx_state_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../rtl/system/uart.sv", 51, 16, ".uart", "v_toggle/uart", "rx_bit_counter_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../rtl/system/uart.sv", 51, 16, ".uart", "v_toggle/uart", "rx_bit_counter_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../rtl/system/uart.sv", 51, 16, ".uart", "v_toggle/uart", "rx_bit_counter_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../rtl/system/uart.sv", 51, 34, ".uart", "v_toggle/uart", "rx_bit_counter_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../rtl/system/uart.sv", 51, 34, ".uart", "v_toggle/uart", "rx_bit_counter_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../rtl/system/uart.sv", 51, 34, ".uart", "v_toggle/uart", "rx_bit_counter_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../rtl/system/uart.sv", 52, 16, ".uart", "v_toggle/uart", "rx_current_byte_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../rtl/system/uart.sv", 52, 16, ".uart", "v_toggle/uart", "rx_current_byte_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../rtl/system/uart.sv", 52, 16, ".uart", "v_toggle/uart", "rx_current_byte_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../rtl/system/uart.sv", 52, 16, ".uart", "v_toggle/uart", "rx_current_byte_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../rtl/system/uart.sv", 52, 16, ".uart", "v_toggle/uart", "rx_current_byte_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../rtl/system/uart.sv", 52, 16, ".uart", "v_toggle/uart", "rx_current_byte_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../rtl/system/uart.sv", 52, 16, ".uart", "v_toggle/uart", "rx_current_byte_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../rtl/system/uart.sv", 52, 16, ".uart", "v_toggle/uart", "rx_current_byte_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../rtl/system/uart.sv", 52, 35, ".uart", "v_toggle/uart", "rx_current_byte_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../rtl/system/uart.sv", 52, 35, ".uart", "v_toggle/uart", "rx_current_byte_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../rtl/system/uart.sv", 52, 35, ".uart", "v_toggle/uart", "rx_current_byte_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../rtl/system/uart.sv", 52, 35, ".uart", "v_toggle/uart", "rx_current_byte_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../rtl/system/uart.sv", 52, 35, ".uart", "v_toggle/uart", "rx_current_byte_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../rtl/system/uart.sv", 52, 35, ".uart", "v_toggle/uart", "rx_current_byte_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../rtl/system/uart.sv", 52, 35, ".uart", "v_toggle/uart", "rx_current_byte_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../rtl/system/uart.sv", 52, 35, ".uart", "v_toggle/uart", "rx_current_byte_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../rtl/system/uart.sv", 53, 16, ".uart", "v_toggle/uart", "rx_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../rtl/system/uart.sv", 53, 16, ".uart", "v_toggle/uart", "rx_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "../rtl/system/uart.sv", 53, 16, ".uart", "v_toggle/uart", "rx_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "../rtl/system/uart.sv", 54, 16, ".uart", "v_toggle/uart", "rx_start", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "../rtl/system/uart.sv", 54, 26, ".uart", "v_toggle/uart", "rx_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "../rtl/system/uart.sv", 56, 16, ".uart", "v_toggle/uart", "rx_fifo_wvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "../rtl/system/uart.sv", 57, 16, ".uart", "v_toggle/uart", "rx_fifo_rready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "../rtl/system/uart.sv", 58, 16, ".uart", "v_toggle/uart", "rx_fifo_rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "../rtl/system/uart.sv", 58, 16, ".uart", "v_toggle/uart", "rx_fifo_rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "../rtl/system/uart.sv", 58, 16, ".uart", "v_toggle/uart", "rx_fifo_rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "../rtl/system/uart.sv", 58, 16, ".uart", "v_toggle/uart", "rx_fifo_rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "../rtl/system/uart.sv", 58, 16, ".uart", "v_toggle/uart", "rx_fifo_rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "../rtl/system/uart.sv", 58, 16, ".uart", "v_toggle/uart", "rx_fifo_rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "../rtl/system/uart.sv", 58, 16, ".uart", "v_toggle/uart", "rx_fifo_rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "../rtl/system/uart.sv", 58, 16, ".uart", "v_toggle/uart", "rx_fifo_rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "../rtl/system/uart.sv", 59, 16, ".uart", "v_toggle/uart", "rx_fifo_rvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "../rtl/system/uart.sv", 60, 16, ".uart", "v_toggle/uart", "rx_fifo_empty", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "../rtl/system/uart.sv", 62, 37, ".uart", "v_toggle/uart", "tx_baud_counter_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "../rtl/system/uart.sv", 62, 37, ".uart", "v_toggle/uart", "tx_baud_counter_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "../rtl/system/uart.sv", 62, 37, ".uart", "v_toggle/uart", "tx_baud_counter_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "../rtl/system/uart.sv", 62, 37, ".uart", "v_toggle/uart", "tx_baud_counter_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "../rtl/system/uart.sv", 62, 37, ".uart", "v_toggle/uart", "tx_baud_counter_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "../rtl/system/uart.sv", 62, 37, ".uart", "v_toggle/uart", "tx_baud_counter_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "../rtl/system/uart.sv", 62, 37, ".uart", "v_toggle/uart", "tx_baud_counter_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "../rtl/system/uart.sv", 62, 37, ".uart", "v_toggle/uart", "tx_baud_counter_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "../rtl/system/uart.sv", 62, 37, ".uart", "v_toggle/uart", "tx_baud_counter_q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "../rtl/system/uart.sv", 62, 56, ".uart", "v_toggle/uart", "tx_baud_counter_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "../rtl/system/uart.sv", 62, 56, ".uart", "v_toggle/uart", "tx_baud_counter_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "../rtl/system/uart.sv", 62, 56, ".uart", "v_toggle/uart", "tx_baud_counter_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "../rtl/system/uart.sv", 62, 56, ".uart", "v_toggle/uart", "tx_baud_counter_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "../rtl/system/uart.sv", 62, 56, ".uart", "v_toggle/uart", "tx_baud_counter_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "../rtl/system/uart.sv", 62, 56, ".uart", "v_toggle/uart", "tx_baud_counter_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "../rtl/system/uart.sv", 62, 56, ".uart", "v_toggle/uart", "tx_baud_counter_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "../rtl/system/uart.sv", 62, 56, ".uart", "v_toggle/uart", "tx_baud_counter_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "../rtl/system/uart.sv", 62, 56, ".uart", "v_toggle/uart", "tx_baud_counter_d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "../rtl/system/uart.sv", 63, 37, ".uart", "v_toggle/uart", "tx_baud_tick", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "../rtl/system/uart.sv", 65, 9, ".uart", "v_toggle/uart", "write_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "../rtl/system/uart.sv", 67, 16, ".uart", "v_toggle/uart", "tx_state_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "../rtl/system/uart.sv", 67, 16, ".uart", "v_toggle/uart", "tx_state_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "../rtl/system/uart.sv", 67, 28, ".uart", "v_toggle/uart", "tx_state_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "../rtl/system/uart.sv", 67, 28, ".uart", "v_toggle/uart", "tx_state_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "../rtl/system/uart.sv", 68, 16, ".uart", "v_toggle/uart", "tx_bit_counter_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "../rtl/system/uart.sv", 68, 16, ".uart", "v_toggle/uart", "tx_bit_counter_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "../rtl/system/uart.sv", 68, 16, ".uart", "v_toggle/uart", "tx_bit_counter_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "../rtl/system/uart.sv", 68, 34, ".uart", "v_toggle/uart", "tx_bit_counter_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "../rtl/system/uart.sv", 68, 34, ".uart", "v_toggle/uart", "tx_bit_counter_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "../rtl/system/uart.sv", 68, 34, ".uart", "v_toggle/uart", "tx_bit_counter_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "../rtl/system/uart.sv", 69, 16, ".uart", "v_toggle/uart", "tx_current_byte_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "../rtl/system/uart.sv", 69, 16, ".uart", "v_toggle/uart", "tx_current_byte_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "../rtl/system/uart.sv", 69, 16, ".uart", "v_toggle/uart", "tx_current_byte_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "../rtl/system/uart.sv", 69, 16, ".uart", "v_toggle/uart", "tx_current_byte_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "../rtl/system/uart.sv", 69, 16, ".uart", "v_toggle/uart", "tx_current_byte_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "../rtl/system/uart.sv", 69, 16, ".uart", "v_toggle/uart", "tx_current_byte_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "../rtl/system/uart.sv", 69, 16, ".uart", "v_toggle/uart", "tx_current_byte_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "../rtl/system/uart.sv", 69, 16, ".uart", "v_toggle/uart", "tx_current_byte_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "../rtl/system/uart.sv", 69, 35, ".uart", "v_toggle/uart", "tx_current_byte_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "../rtl/system/uart.sv", 69, 35, ".uart", "v_toggle/uart", "tx_current_byte_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "../rtl/system/uart.sv", 69, 35, ".uart", "v_toggle/uart", "tx_current_byte_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "../rtl/system/uart.sv", 69, 35, ".uart", "v_toggle/uart", "tx_current_byte_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "../rtl/system/uart.sv", 69, 35, ".uart", "v_toggle/uart", "tx_current_byte_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "../rtl/system/uart.sv", 69, 35, ".uart", "v_toggle/uart", "tx_current_byte_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "../rtl/system/uart.sv", 69, 35, ".uart", "v_toggle/uart", "tx_current_byte_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "../rtl/system/uart.sv", 69, 35, ".uart", "v_toggle/uart", "tx_current_byte_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "../rtl/system/uart.sv", 70, 16, ".uart", "v_toggle/uart", "tx_next_byte", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "../rtl/system/uart.sv", 72, 15, ".uart", "v_toggle/uart", "tx_fifo_wvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "../rtl/system/uart.sv", 73, 15, ".uart", "v_toggle/uart", "tx_fifo_rvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "../rtl/system/uart.sv", 73, 31, ".uart", "v_toggle/uart", "tx_fifo_rready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "../rtl/system/uart.sv", 74, 15, ".uart", "v_toggle/uart", "tx_fifo_rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "../rtl/system/uart.sv", 74, 15, ".uart", "v_toggle/uart", "tx_fifo_rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "../rtl/system/uart.sv", 74, 15, ".uart", "v_toggle/uart", "tx_fifo_rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "../rtl/system/uart.sv", 74, 15, ".uart", "v_toggle/uart", "tx_fifo_rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "../rtl/system/uart.sv", 74, 15, ".uart", "v_toggle/uart", "tx_fifo_rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "../rtl/system/uart.sv", 74, 15, ".uart", "v_toggle/uart", "tx_fifo_rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "../rtl/system/uart.sv", 74, 15, ".uart", "v_toggle/uart", "tx_fifo_rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "../rtl/system/uart.sv", 74, 15, ".uart", "v_toggle/uart", "tx_fifo_rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "../rtl/system/uart.sv", 75, 15, ".uart", "v_toggle/uart", "tx_fifo_full", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "../rtl/system/uart.sv", 89, 20, ".uart", "v_line/uart", "case", "89-91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "../rtl/system/uart.sv", 93, 20, ".uart", "v_line/uart", "case", "93-94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "../rtl/system/uart.sv", 96, 24, ".uart", "v_line/uart", "case", "96-97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "../rtl/system/uart.sv", 99, 11, ".uart", "v_line/uart", "case", "99-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "../rtl/system/uart.sv", 87, 7, ".uart", "v_branch/uart", "if", "87-88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "../rtl/system/uart.sv", 87, 8, ".uart", "v_branch/uart", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "../rtl/system/uart.sv", 84, 5, ".uart", "v_branch/uart", "if", "84-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "../rtl/system/uart.sv", 84, 6, ".uart", "v_branch/uart", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "../rtl/system/uart.sv", 79, 3, ".uart", "v_line/uart", "block", "79-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "../rtl/system/uart.sv", 108, 5, ".uart", "v_branch/uart", "if", "108-110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "../rtl/system/uart.sv", 108, 6, ".uart", "v_branch/uart", "else", "111-113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "../rtl/system/uart.sv", 107, 3, ".uart", "v_line/uart", "block", "107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "../rtl/system/uart.sv", 156, 5, ".uart", "v_branch/uart", "if", "156-157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "../rtl/system/uart.sv", 156, 6, ".uart", "v_branch/uart", "else", "158-159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "../rtl/system/uart.sv", 155, 3, ".uart", "v_line/uart", "block", "155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "../rtl/system/uart.sv", 166, 5, ".uart", "v_branch/uart", "if", "166-167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "../rtl/system/uart.sv", 166, 6, ".uart", "v_branch/uart", "else", "168-169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "../rtl/system/uart.sv", 165, 3, ".uart", "v_line/uart", "block", "165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "../rtl/system/uart.sv", 179, 14, ".uart", "v_branch/uart", "if", "179-182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "../rtl/system/uart.sv", 179, 15, ".uart", "v_branch/uart", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "../rtl/system/uart.sv", 174, 5, ".uart", "v_line/uart", "elsif", "174-177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "../rtl/system/uart.sv", 173, 3, ".uart", "v_line/uart", "block", "173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "../rtl/system/uart.sv", 195, 9, ".uart", "v_branch/uart", "if", "195-196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "../rtl/system/uart.sv", 195, 10, ".uart", "v_branch/uart", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "../rtl/system/uart.sv", 193, 11, ".uart", "v_line/uart", "case", "193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "../rtl/system/uart.sv", 203, 9, ".uart", "v_branch/uart", "if", "203-204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "../rtl/system/uart.sv", 203, 10, ".uart", "v_branch/uart", "else", "205-206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "../rtl/system/uart.sv", 199, 12, ".uart", "v_line/uart", "case", "199-201");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "../rtl/system/uart.sv", 212, 9, ".uart", "v_branch/uart", "if", "212-213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "../rtl/system/uart.sv", 212, 10, ".uart", "v_branch/uart", "else", "214-215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "../rtl/system/uart.sv", 209, 11, ".uart", "v_line/uart", "case", "209-210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "../rtl/system/uart.sv", 219, 9, ".uart", "v_branch/uart", "if", "219-220");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "../rtl/system/uart.sv", 219, 10, ".uart", "v_branch/uart", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "../rtl/system/uart.sv", 218, 11, ".uart", "v_line/uart", "case", "218,222");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "../rtl/system/uart.sv", 186, 3, ".uart", "v_line/uart", "block", "186-190,192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "../rtl/system/uart.sv", 258, 5, ".uart", "v_branch/uart", "if", "258-259");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "../rtl/system/uart.sv", 258, 6, ".uart", "v_branch/uart", "else", "260-261");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "../rtl/system/uart.sv", 257, 3, ".uart", "v_line/uart", "block", "257");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "../rtl/system/uart.sv", 270, 14, ".uart", "v_branch/uart", "if", "270-273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "../rtl/system/uart.sv", 270, 15, ".uart", "v_branch/uart", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "../rtl/system/uart.sv", 266, 5, ".uart", "v_line/uart", "elsif", "266-269");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "../rtl/system/uart.sv", 265, 3, ".uart", "v_line/uart", "block", "265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "../rtl/system/uart.sv", 288, 9, ".uart", "v_branch/uart", "if", "288-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "../rtl/system/uart.sv", 288, 10, ".uart", "v_branch/uart", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "../rtl/system/uart.sv", 285, 11, ".uart", "v_line/uart", "case", "285-286");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "../rtl/system/uart.sv", 292, 12, ".uart", "v_line/uart", "case", "292-297");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "../rtl/system/uart.sv", 303, 9, ".uart", "v_branch/uart", "if", "303-304");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "../rtl/system/uart.sv", 303, 10, ".uart", "v_branch/uart", "else", "305-306");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "../rtl/system/uart.sv", 299, 11, ".uart", "v_line/uart", "case", "299-300,302");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "../rtl/system/uart.sv", 311, 9, ".uart", "v_branch/uart", "if", "311-312");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "../rtl/system/uart.sv", 311, 10, ".uart", "v_branch/uart", "else", "313-314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "../rtl/system/uart.sv", 309, 11, ".uart", "v_line/uart", "case", "309-310");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "../rtl/system/uart.sv", 277, 3, ".uart", "v_line/uart", "block", "277-282,284");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../rtl/system/uart.sv", 321, 33, ".uart", "v_toggle/uart", "unused_device_addr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../rtl/system/uart.sv", 322, 33, ".uart", "v_toggle/uart", "unused_device_be[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../rtl/system/uart.sv", 322, 33, ".uart", "v_toggle/uart", "unused_device_be[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../rtl/system/uart.sv", 322, 33, ".uart", "v_toggle/uart", "unused_device_be[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../rtl/system/uart.sv", 323, 33, ".uart", "v_toggle/uart", "unused_device_wdata[23]", "");
}
