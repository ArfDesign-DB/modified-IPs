// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart.h for the primary calling header

#include "Vuart__pch.h"
#include "Vuart__Syms.h"
#include "Vuart_prim_fifo_sync__W8_Pz1_D80.h"

VL_INLINE_OPT void Vuart_prim_fifo_sync__W8_Pz1_D80___ico_sequent__TOP__uart__DOT__u_rx_fifo__0(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___ico_sequent__TOP__uart__DOT__u_rx_fifo__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
    }
    if (((IData)(vlSymsp->TOP.uart__DOT__rx_fifo_rready) 
         ^ (IData)(vlSelf->__Vtogcov__rready_i))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->__Vtogcov__rready_i = vlSymsp->TOP.uart__DOT__rx_fifo_rready;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelf->rvalid_o) & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst)) 
                                        & (IData)(vlSymsp->TOP.uart__DOT__rx_fifo_rready)));
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_rptr_i 
            = vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__rptr_wrap_set 
            = vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
    }
}

VL_INLINE_OPT void Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_rx_fifo__0(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_rx_fifo__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    ++(vlSymsp->__Vcoverage[386]);
    ++(vlSymsp->__Vcoverage[418]);
    ++(vlSymsp->__Vcoverage[424]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_ni)))) {
        ++(vlSymsp->__Vcoverage[385]);
        ++(vlSymsp->__Vcoverage[417]);
        ++(vlSymsp->__Vcoverage[423]);
    }
    vlSelf->__Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    if (vlSymsp->TOP.rst_ni) {
        if (vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            ++(vlSymsp->__Vcoverage[415]);
            vlSelf->__Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (0x80U & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                            << 7U));
        } else if (vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlSelf->__Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
        if (vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            ++(vlSymsp->__Vcoverage[421]);
            __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (0x80U & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                            << 7U));
        } else if (vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr)))) {
                ++(vlSymsp->__Vcoverage[420]);
            }
            if (vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                ++(vlSymsp->__Vcoverage[419]);
            }
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr)))) {
                ++(vlSymsp->__Vcoverage[414]);
            }
            if (vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                ++(vlSymsp->__Vcoverage[413]);
            }
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst)))) {
            ++(vlSymsp->__Vcoverage[384]);
        }
        if (vlSelf->__PVT__gen_normal_fifo__DOT__under_rst) {
            ++(vlSymsp->__Vcoverage[383]);
        }
        if (vlSelf->__PVT__gen_normal_fifo__DOT__under_rst) {
            vlSelf->__PVT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst)));
        }
    } else {
        vlSelf->__PVT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelf->__Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
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
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 7U));
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
}

VL_INLINE_OPT void Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_rx_fifo__1(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_rx_fifo__1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[389]);
    if (vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        ++(vlSymsp->__Vcoverage[387]);
        VL_ASSIGNSEL_WI(1024,8,(0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 3U)), vlSelf->__PVT__gen_normal_fifo__DOT__storage, vlSymsp->TOP.uart__DOT__rx_current_byte_q);
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr)))) {
        ++(vlSymsp->__Vcoverage[388]);
    }
}

VL_INLINE_OPT void Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_rx_fifo__2(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_rx_fifo__2\n"); );
    // Body
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->__Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
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
    if (((IData)(vlSymsp->TOP.uart__DOT__rx_fifo_wvalid) 
         ^ (IData)(vlSelf->__Vtogcov__wvalid_i))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vtogcov__wvalid_i = vlSymsp->TOP.uart__DOT__rx_fifo_wvalid;
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
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
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
    vlSelf->full_o = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                      == (0x80U ^ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
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

VL_INLINE_OPT void Vuart_prim_fifo_sync__W8_Pz1_D80___nba_comb__TOP__uart__DOT__u_rx_fifo__0(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___nba_comb__TOP__uart__DOT__u_rx_fifo__0\n"); );
    // Body
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
}

VL_INLINE_OPT void Vuart_prim_fifo_sync__W8_Pz1_D80___ico_sequent__TOP__uart__DOT__u_tx_fifo__0(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___ico_sequent__TOP__uart__DOT__u_tx_fifo__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk_i) ^ (IData)(vlSelf->__Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->__Vtogcov__clk_i = vlSymsp->TOP.clk_i;
    }
    if (((IData)(vlSymsp->TOP.rst_ni) ^ (IData)(vlSelf->__Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->__Vtogcov__rst_ni = vlSymsp->TOP.rst_ni;
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
    if (((IData)(vlSymsp->TOP.uart__DOT__tx_fifo_wvalid) 
         ^ (IData)(vlSelf->__Vtogcov__wvalid_i))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->__Vtogcov__wvalid_i = vlSymsp->TOP.uart__DOT__tx_fifo_wvalid;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSymsp->TOP.uart__DOT__tx_fifo_wvalid) 
           & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelf->__PVT__wready_o)));
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__incr_wptr_i 
            = vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x7fU & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__wptr_wrap_set 
            = vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
    }
}

VL_INLINE_OPT void Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_tx_fifo__0(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_tx_fifo__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    ++(vlSymsp->__Vcoverage[386]);
    ++(vlSymsp->__Vcoverage[418]);
    ++(vlSymsp->__Vcoverage[424]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_ni)))) {
        ++(vlSymsp->__Vcoverage[385]);
        ++(vlSymsp->__Vcoverage[417]);
        ++(vlSymsp->__Vcoverage[423]);
    }
    vlSelf->__Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    if (vlSymsp->TOP.rst_ni) {
        if (vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            ++(vlSymsp->__Vcoverage[415]);
            vlSelf->__Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (0x80U & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                            << 7U));
        } else if (vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlSelf->__Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
        if (vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            ++(vlSymsp->__Vcoverage[421]);
            __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (0x80U & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                            << 7U));
        } else if (vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr)))) {
                ++(vlSymsp->__Vcoverage[420]);
            }
            if (vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                ++(vlSymsp->__Vcoverage[419]);
            }
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr)))) {
                ++(vlSymsp->__Vcoverage[414]);
            }
            if (vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                ++(vlSymsp->__Vcoverage[413]);
            }
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst)))) {
            ++(vlSymsp->__Vcoverage[384]);
        }
        if (vlSelf->__PVT__gen_normal_fifo__DOT__under_rst) {
            ++(vlSymsp->__Vcoverage[383]);
        }
        if (vlSelf->__PVT__gen_normal_fifo__DOT__under_rst) {
            vlSelf->__PVT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst)));
        }
    } else {
        vlSelf->__PVT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelf->__Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
    }
    if (((IData)(vlSymsp->TOP.uart__DOT__tx_fifo_rready) 
         ^ (IData)(vlSelf->__Vtogcov__rready_i))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->__Vtogcov__rready_i = vlSymsp->TOP.uart__DOT__tx_fifo_rready;
    }
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
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
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 7U));
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
}

VL_INLINE_OPT void Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_tx_fifo__1(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_tx_fifo__1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[389]);
    if (vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        ++(vlSymsp->__Vcoverage[387]);
        VL_ASSIGNSEL_WI(1024,8,(0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 3U)), vlSelf->__PVT__gen_normal_fifo__DOT__storage, 
                        (0xffU & vlSymsp->TOP.device_wdata_i));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_incr_wptr)))) {
        ++(vlSymsp->__Vcoverage[388]);
    }
}

VL_INLINE_OPT void Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_tx_fifo__2(Vuart_prim_fifo_sync__W8_Pz1_D80* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuart_prim_fifo_sync__W8_Pz1_D80___nba_sequent__TOP__uart__DOT__u_tx_fifo__2\n"); );
    // Body
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->__Vdly__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
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
    vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
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
    vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelf->full_o = ((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                      == (0x80U ^ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    if (((IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty) 
         ^ (IData)(vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->gen_normal_fifo__DOT__u_fifo_cnt__DOT____Vtogcov__empty_o 
            = vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty;
    }
    vlSelf->rvalid_o = (1U & ((~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__fifo_empty)) 
                              & (~ (IData)(vlSelf->__PVT__gen_normal_fifo__DOT__under_rst))));
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
