// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "Vuart__pch.h"
#include "Vuart__Syms.h"
#include "Vuart_prim_fifo_sync__W8_Pz1_D80.h"

VL_ATTR_COLD void Vuart_prim_fifo_sync__W8_Pz1_D80___eval_initial__TOP__uart__DOT__u_rx_fifo(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___eval_initial__TOP__uart__DOT__u_rx_fifo\n"); );
    // Body
    if (vlSelf->__Vtogcov__clr_i) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->__Vtogcov__clr_i = 0U;
    }
}

VL_ATTR_COLD void Vuart_prim_fifo_sync__W8_Pz1_D80___stl_sequent__TOP__uart__DOT__u_rx_fifo__0(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___stl_sequent__TOP__uart__DOT__u_rx_fifo__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q)))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q 
            = ((0x7fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q)) 
               | (0x80U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((1U ^ (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt)) 
               >> 7U))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt 
            = ((0x7fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt)) 
               | (0x80U & ((~ ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                               >> 7U)) << 7U)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q)))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q 
            = ((0x7fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q)) 
               | (0x80U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((1U ^ (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt)) 
               >> 7U))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt 
            = ((0x7fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt)) 
               | (0x80U & ((~ ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                               >> 7U)) << 7U)));
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 7U));
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 7U));
    if ((1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x7eU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (1U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x7dU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (2U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x7bU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (4U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x77U & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (8U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x6fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (0x10U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x5fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (0x20U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x3fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (0x40U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x7eU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (1U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x7dU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (2U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x7bU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (4U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x77U & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (8U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x6fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (0x10U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x5fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (0x20U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x3fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (0x40U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((1U & ((IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q) 
               ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->__Vtogcov__wdata_i = ((0xfeU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (1U & (IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q) 
               ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->__Vtogcov__wdata_i = ((0xfdU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (2U & (IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q) 
               ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->__Vtogcov__wdata_i = ((0xfbU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (4U & (IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q) 
               ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->__Vtogcov__wdata_i = ((0xf7U & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (8U & (IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q) 
                  ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->__Vtogcov__wdata_i = ((0xefU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (0x10U & (IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q) 
                  ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->__Vtogcov__wdata_i = ((0xdfU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (0x20U & (IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q) 
                  ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->__Vtogcov__wdata_i = ((0xbfU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (0x40U & (IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q) 
                  ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->__Vtogcov__wdata_i = ((0x7fU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (0x80U & (IData)(vlSymsp->TOP.uart__DOT__rx_current_byte_q)));
    }
    vlSelf->full_o = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                      == (0x80U ^ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    if (((IData)(vlSymsp->TOP.uart__DOT__rx_fifo_rready) 
         ^ (IData)(vlSelf->__Vtogcov__rready_i))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->__Vtogcov__rready_i = vlSymsp->TOP.uart__DOT__rx_fifo_rready;
    }
    if (((IData)(vlSymsp->TOP.uart__DOT__rx_fifo_wvalid) 
         ^ (IData)(vlSelf->__Vtogcov__wvalid_i))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vtogcov__wvalid_i = vlSymsp->TOP.uart__DOT__rx_fifo_wvalid;
    }
    if (((IData)(vlSelf->full_o) ^ (IData)(vlSelf->__Vtogcov__full_o))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->__Vtogcov__full_o = vlSelf->full_o;
    }
    vlSelf->__PVT__wready_o = (1U & ((~ (IData)(vlSelf->full_o)) 
                                     & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->__PVT__depth_o = ((IData)(vlSelf->full_o)
                               ? 0x80U : (0xffU & (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        >> 7U)))
                                                    ? 
                                                   ((0x7fU 
                                                     & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                                    : 
                                                   (((IData)(0x80U) 
                                                     - 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                    + 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o 
            = vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty;
    }
    vlSelf->rvalid_o = (1U & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty)) 
                              & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->rdata_o = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty)
                        ? 0U : (0xffU & (((0U == (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                           ? 0U : (
                                                   vlSelf->__PVT__gen_normal_fifo__DOT__storage[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x3ffU 
                                                      & VL_SHIFTL_III(10,10,32, 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                         | (vlSelf->__PVT__gen_normal_fifo__DOT__storage[
                                            (0x1fU 
                                             & (VL_SHIFTL_III(10,10,32, 
                                                              (0x7fU 
                                                               & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(10,10,32, 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))));
    if (((IData)(vlSelf->__PVT__wready_o) ^ (IData)(vlSelf->__Vtogcov__wready_o))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->__Vtogcov__wready_o = vlSelf->__PVT__wready_o;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSymsp->TOP.uart__DOT__rx_fifo_wvalid) 
           & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelf->__PVT__wready_o)));
    if ((1U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->__Vtogcov__depth_o = ((0xfeU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (1U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->__Vtogcov__depth_o = ((0xfdU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (2U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->__Vtogcov__depth_o = ((0xfbU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (4U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->__Vtogcov__depth_o = ((0xf7U & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (8U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->__Vtogcov__depth_o = ((0xefU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (0x10U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->__Vtogcov__depth_o = ((0xdfU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (0x20U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->__Vtogcov__depth_o = ((0xbfU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (0x40U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->__Vtogcov__depth_o = ((0x7fU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (0x80U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if (((IData)(vlSelf->rvalid_o) ^ (IData)(vlSelf->__Vtogcov__rvalid_o))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->__Vtogcov__rvalid_o = vlSelf->rvalid_o;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelf->rvalid_o) & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst)) 
                                        & (IData)(vlSymsp->TOP.uart__DOT__rx_fifo_rready)));
    if ((1U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->__Vtogcov__rdata_o = ((0xfeU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (1U & (IData)(vlSelf->rdata_o)));
    }
    if ((2U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->__Vtogcov__rdata_o = ((0xfdU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (2U & (IData)(vlSelf->rdata_o)));
    }
    if ((4U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->__Vtogcov__rdata_o = ((0xfbU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (4U & (IData)(vlSelf->rdata_o)));
    }
    if ((8U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->__Vtogcov__rdata_o = ((0xf7U & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (8U & (IData)(vlSelf->rdata_o)));
    }
    if ((0x10U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->__Vtogcov__rdata_o = ((0xefU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (0x10U & (IData)(vlSelf->rdata_o)));
    }
    if ((0x20U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->__Vtogcov__rdata_o = ((0xdfU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (0x20U & (IData)(vlSelf->rdata_o)));
    }
    if ((0x40U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->__Vtogcov__rdata_o = ((0xbfU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (0x40U & (IData)(vlSelf->rdata_o)));
    }
    if ((0x80U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->__Vtogcov__rdata_o = ((0x7fU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (0x80U & (IData)(vlSelf->rdata_o)));
    }
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i 
            = vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i 
            = vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set 
            = vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
    }
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set 
            = vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
    }
}

VL_ATTR_COLD void Vuart_prim_fifo_sync__W8_Pz1_D80___stl_sequent__TOP__uart__DOT__u_tx_fifo__0(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___stl_sequent__TOP__uart__DOT__u_tx_fifo__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q)))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q 
            = ((0x7fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_cnt_q)) 
               | (0x80U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((1U ^ (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt)) 
               >> 7U))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt 
            = ((0x7fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set_cnt)) 
               | (0x80U & ((~ ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                               >> 7U)) << 7U)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q)))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q 
            = ((0x7fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_cnt_q)) 
               | (0x80U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((1U ^ (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt)) 
               >> 7U))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt 
            = ((0x7fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set_cnt)) 
               | (0x80U & ((~ ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                               >> 7U)) << 7U)));
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 7U));
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 7U));
    if ((1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x7eU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (1U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x7dU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (2U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x7bU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (4U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x77U & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (8U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x6fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (0x10U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x5fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (0x20U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o 
            = ((0x3fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_o)) 
               | (0x40U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x7eU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (1U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x7dU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (2U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x7bU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (4U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
               ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x77U & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (8U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x6fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (0x10U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x5fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (0x20U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                  ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o 
            = ((0x3fU & (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_o)) 
               | (0x40U & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    }
    if ((1U & (vlSymsp->TOP.device_wdata_i ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->__Vtogcov__wdata_i = ((0xfeU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (1U & vlSymsp->TOP.device_wdata_i));
    }
    if ((2U & (vlSymsp->TOP.device_wdata_i ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->__Vtogcov__wdata_i = ((0xfdU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (2U & vlSymsp->TOP.device_wdata_i));
    }
    if ((4U & (vlSymsp->TOP.device_wdata_i ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->__Vtogcov__wdata_i = ((0xfbU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (4U & vlSymsp->TOP.device_wdata_i));
    }
    if ((8U & (vlSymsp->TOP.device_wdata_i ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->__Vtogcov__wdata_i = ((0xf7U & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (8U & vlSymsp->TOP.device_wdata_i));
    }
    if ((0x10U & (vlSymsp->TOP.device_wdata_i ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->__Vtogcov__wdata_i = ((0xefU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (0x10U & vlSymsp->TOP.device_wdata_i));
    }
    if ((0x20U & (vlSymsp->TOP.device_wdata_i ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->__Vtogcov__wdata_i = ((0xdfU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (0x20U & vlSymsp->TOP.device_wdata_i));
    }
    if ((0x40U & (vlSymsp->TOP.device_wdata_i ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->__Vtogcov__wdata_i = ((0xbfU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (0x40U & vlSymsp->TOP.device_wdata_i));
    }
    if ((0x80U & (vlSymsp->TOP.device_wdata_i ^ (IData)(vlSelf->__Vtogcov__wdata_i)))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->__Vtogcov__wdata_i = ((0x7fU & (IData)(vlSelf->__Vtogcov__wdata_i)) 
                                      | (0x80U & vlSymsp->TOP.device_wdata_i));
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelf->full_o = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                      == (0x80U ^ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    if (((IData)(vlSymsp->TOP.uart__DOT__tx_fifo_rready) 
         ^ (IData)(vlSelf->__Vtogcov__rready_i))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->__Vtogcov__rready_i = vlSymsp->TOP.uart__DOT__tx_fifo_rready;
    }
    if (((IData)(vlSymsp->TOP.uart__DOT__tx_fifo_wvalid) 
         ^ (IData)(vlSelf->__Vtogcov__wvalid_i))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vtogcov__wvalid_i = vlSymsp->TOP.uart__DOT__tx_fifo_wvalid;
    }
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o 
            = vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty;
    }
    vlSelf->rvalid_o = (1U & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty)) 
                              & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->rdata_o = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty)
                        ? 0U : (0xffU & (((0U == (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                           ? 0U : (
                                                   vlSelf->__PVT__gen_normal_fifo__DOT__storage[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x3ffU 
                                                      & VL_SHIFTL_III(10,10,32, 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                         | (vlSelf->__PVT__gen_normal_fifo__DOT__storage[
                                            (0x1fU 
                                             & (VL_SHIFTL_III(10,10,32, 
                                                              (0x7fU 
                                                               & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(10,10,32, 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))));
    if (((IData)(vlSelf->full_o) ^ (IData)(vlSelf->__Vtogcov__full_o))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->__Vtogcov__full_o = vlSelf->full_o;
    }
    vlSelf->__PVT__wready_o = (1U & ((~ (IData)(vlSelf->full_o)) 
                                     & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->__PVT__depth_o = ((IData)(vlSelf->full_o)
                               ? 0x80U : (0xffU & (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                        >> 7U)))
                                                    ? 
                                                   ((0x7fU 
                                                     & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                                    : 
                                                   (((IData)(0x80U) 
                                                     - 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                    + 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    if (((IData)(vlSelf->rvalid_o) ^ (IData)(vlSelf->__Vtogcov__rvalid_o))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->__Vtogcov__rvalid_o = vlSelf->rvalid_o;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelf->rvalid_o) & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst)) 
                                        & (IData)(vlSymsp->TOP.uart__DOT__tx_fifo_rready)));
    if ((1U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->__Vtogcov__rdata_o = ((0xfeU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (1U & (IData)(vlSelf->rdata_o)));
    }
    if ((2U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->__Vtogcov__rdata_o = ((0xfdU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (2U & (IData)(vlSelf->rdata_o)));
    }
    if ((4U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->__Vtogcov__rdata_o = ((0xfbU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (4U & (IData)(vlSelf->rdata_o)));
    }
    if ((8U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->__Vtogcov__rdata_o = ((0xf7U & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (8U & (IData)(vlSelf->rdata_o)));
    }
    if ((0x10U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->__Vtogcov__rdata_o = ((0xefU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (0x10U & (IData)(vlSelf->rdata_o)));
    }
    if ((0x20U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->__Vtogcov__rdata_o = ((0xdfU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (0x20U & (IData)(vlSelf->rdata_o)));
    }
    if ((0x40U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->__Vtogcov__rdata_o = ((0xbfU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (0x40U & (IData)(vlSelf->rdata_o)));
    }
    if ((0x80U & ((IData)(vlSelf->rdata_o) ^ (IData)(vlSelf->__Vtogcov__rdata_o)))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->__Vtogcov__rdata_o = ((0x7fU & (IData)(vlSelf->__Vtogcov__rdata_o)) 
                                      | (0x80U & (IData)(vlSelf->rdata_o)));
    }
    if (((IData)(vlSelf->__PVT__wready_o) ^ (IData)(vlSelf->__Vtogcov__wready_o))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->__Vtogcov__wready_o = vlSelf->__PVT__wready_o;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSymsp->TOP.uart__DOT__tx_fifo_wvalid) 
           & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelf->__PVT__wready_o)));
    if ((1U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->__Vtogcov__depth_o = ((0xfeU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (1U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->__Vtogcov__depth_o = ((0xfdU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (2U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->__Vtogcov__depth_o = ((0xfbU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (4U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->__Vtogcov__depth_o = ((0xf7U & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (8U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->__Vtogcov__depth_o = ((0xefU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (0x10U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->__Vtogcov__depth_o = ((0xdfU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (0x20U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->__Vtogcov__depth_o = ((0xbfU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (0x40U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__depth_o) ^ (IData)(vlSelf->__Vtogcov__depth_o)))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->__Vtogcov__depth_o = ((0x7fU & (IData)(vlSelf->__Vtogcov__depth_o)) 
                                      | (0x80U & (IData)(vlSelf->__PVT__depth_o)));
    }
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i 
            = vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i 
            = vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set 
            = vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
    }
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set 
            = vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
    }
}

VL_ATTR_COLD void Vuart_prim_fifo_sync__W8_Pz1_D80___configure_coverage(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 18, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 19, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 21, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "clr_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 23, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "wvalid_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 24, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "wready_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 25, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "wdata_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 25, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "wdata_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 25, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "wdata_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 25, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "wdata_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 25, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "wdata_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 25, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "wdata_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 25, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "wdata_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 25, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "wdata_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 27, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "rvalid_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 28, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "rready_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 29, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "rdata_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 29, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "rdata_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 29, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "rdata_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 29, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "rdata_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 29, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "rdata_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 29, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "rdata_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 29, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "rdata_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 29, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "rdata_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 31, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "full_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 32, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "depth_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 32, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "depth_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 32, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "depth_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 32, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "depth_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 32, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "depth_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 32, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "depth_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 32, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "depth_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 32, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "depth_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 33, 27, "", "v_toggle/prim_fifo_sync__W8_Pz1_D80", "err_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 71, 16, "", "v_branch/prim_fifo_sync__W8_Pz1_D80", "if", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 71, 17, "", "v_branch/prim_fifo_sync__W8_Pz1_D80", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 69, 7, "", "v_line/prim_fifo_sync__W8_Pz1_D80", "elsif", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 68, 5, "", "v_line/prim_fifo_sync__W8_Pz1_D80", "block", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 123, 9, "", "v_branch/prim_fifo_sync__W8_Pz1_D80", "if", "123-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 123, 10, "", "v_branch/prim_fifo_sync__W8_Pz1_D80", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync.sv", 122, 7, "", "v_line/prim_fifo_sync__W8_Pz1_D80", "block", "122");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 19, 9, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 20, 9, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 21, 9, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "clr_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 22, 9, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "incr_wptr_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 23, 9, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "incr_rptr_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 25, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 26, 27, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 27, 16, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "full_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 28, 16, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "empty_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "depth_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "depth_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "depth_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "depth_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "depth_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "depth_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "depth_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 31, 29, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "depth_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 32, 16, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "err_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_cnt_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_cnt_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_cnt_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_cnt_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_cnt_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_cnt_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_cnt_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_cnt_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_set_cnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_set_cnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_set_cnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_set_cnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_set_cnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_set_cnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_set_cnt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 37, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_set_cnt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_cnt_q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_cnt_q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_cnt_q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_cnt_q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_cnt_q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_cnt_q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_cnt_q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_cnt_q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_set_cnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_set_cnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_set_cnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_set_cnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_set_cnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_set_cnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_set_cnt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 38, 41, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_set_cnt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 45, 9, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_msb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 45, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_msb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 50, 9, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "wptr_wrap_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 50, 24, ".gen_normal_fifo.u_fifo_cnt", "v_toggle/prim_fifo_sync_cnt__D80_Sz2", "rptr_wrap_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 119, 16, ".gen_normal_fifo.u_fifo_cnt", "v_branch/prim_fifo_sync_cnt__D80_Sz2", "if", "119-120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 119, 17, ".gen_normal_fifo.u_fifo_cnt", "v_branch/prim_fifo_sync_cnt__D80_Sz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 117, 16, ".gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D80_Sz2", "elsif", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 115, 16, ".gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D80_Sz2", "elsif", "115-116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 113, 7, ".gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D80_Sz2", "elsif", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 112, 5, ".gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D80_Sz2", "block", "112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 131, 16, ".gen_normal_fifo.u_fifo_cnt", "v_branch/prim_fifo_sync_cnt__D80_Sz2", "if", "131-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 131, 17, ".gen_normal_fifo.u_fifo_cnt", "v_branch/prim_fifo_sync_cnt__D80_Sz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 129, 16, ".gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D80_Sz2", "elsif", "129-130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 127, 16, ".gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D80_Sz2", "elsif", "127-128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 125, 7, ".gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D80_Sz2", "elsif", "125-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "../vendor/lowrisc_ip/ip/prim/rtl/prim_fifo_sync_cnt.sv", 124, 5, ".gen_normal_fifo.u_fifo_cnt", "v_line/prim_fifo_sync_cnt__D80_Sz2", "block", "124");
}
