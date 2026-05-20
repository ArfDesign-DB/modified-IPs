// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio.h for the primary calling header

#include "Vgpio__pch.h"
#include "Vgpio__Syms.h"
#include "Vgpio___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio___024root___dump_triggers__ico(Vgpio___024root* vlSelf);
#endif  // VL_DEBUG

void Vgpio___024root___eval_triggers__ico(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgpio___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vgpio___024root___ico_sequent__TOP__0(Vgpio___024root* vlSelf);
void Vgpio_debounce___ico_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf);

void Vgpio___024root___eval_ico(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vgpio___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vgpio_debounce___ico_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc));
        Vgpio_debounce___ico_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc));
        Vgpio_debounce___ico_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc));
        Vgpio_debounce___ico_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc));
        Vgpio_debounce___ico_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc));
        Vgpio_debounce___ico_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc));
        Vgpio_debounce___ico_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc));
        Vgpio_debounce___ico_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc));
    }
}

VL_INLINE_OPT void Vgpio___024root___ico_sequent__TOP__0(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ gpio__DOT____VdfgRegularize_h96760f73_0_0;
    gpio__DOT____VdfgRegularize_h96760f73_0_0 = 0;
    // Body
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gpio__DOT____Vtogcov__clk_i = vlSelf->clk_i;
    }
    if (((IData)(vlSelf->rst_ni) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__rst_ni))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->gpio__DOT____Vtogcov__rst_ni = vlSelf->rst_ni;
    }
    if (((IData)(vlSelf->device_req_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__device_req_i))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->gpio__DOT____Vtogcov__device_req_i 
            = vlSelf->device_req_i;
    }
    if (((IData)(vlSelf->device_we_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__device_we_i))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->gpio__DOT____Vtogcov__device_we_i = vlSelf->device_we_i;
    }
    if ((1U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->gpio__DOT____Vtogcov__device_be_i = 
            ((0xeU & (IData)(vlSelf->gpio__DOT____Vtogcov__device_be_i)) 
             | (1U & (IData)(vlSelf->device_be_i)));
    }
    if ((2U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->gpio__DOT____Vtogcov__device_be_i = 
            ((0xdU & (IData)(vlSelf->gpio__DOT____Vtogcov__device_be_i)) 
             | (2U & (IData)(vlSelf->device_be_i)));
    }
    if ((4U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->gpio__DOT____Vtogcov__device_be_i = 
            ((0xbU & (IData)(vlSelf->gpio__DOT____Vtogcov__device_be_i)) 
             | (4U & (IData)(vlSelf->device_be_i)));
    }
    if ((8U & ((IData)(vlSelf->device_be_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__device_be_i)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->gpio__DOT____Vtogcov__device_be_i = 
            ((7U & (IData)(vlSelf->gpio__DOT____Vtogcov__device_be_i)) 
             | (8U & (IData)(vlSelf->device_be_i)));
    }
    if ((1U & ((IData)(vlSelf->gp_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->gpio__DOT____Vtogcov__gp_i = ((0xfeU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)) 
                                              | (1U 
                                                 & (IData)(vlSelf->gp_i)));
    }
    if ((2U & ((IData)(vlSelf->gp_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->gpio__DOT____Vtogcov__gp_i = ((0xfdU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)) 
                                              | (2U 
                                                 & (IData)(vlSelf->gp_i)));
    }
    if ((4U & ((IData)(vlSelf->gp_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->gpio__DOT____Vtogcov__gp_i = ((0xfbU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)) 
                                              | (4U 
                                                 & (IData)(vlSelf->gp_i)));
    }
    if ((8U & ((IData)(vlSelf->gp_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->gpio__DOT____Vtogcov__gp_i = ((0xf7U 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)) 
                                              | (8U 
                                                 & (IData)(vlSelf->gp_i)));
    }
    if ((0x10U & ((IData)(vlSelf->gp_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->gpio__DOT____Vtogcov__gp_i = ((0xefU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->gp_i)));
    }
    if ((0x20U & ((IData)(vlSelf->gp_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->gpio__DOT____Vtogcov__gp_i = ((0xdfU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->gp_i)));
    }
    if ((0x40U & ((IData)(vlSelf->gp_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->gpio__DOT____Vtogcov__gp_i = ((0xbfU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->gp_i)));
    }
    if ((0x80U & ((IData)(vlSelf->gp_i) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->gpio__DOT____Vtogcov__gp_i = ((0x7fU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->gp_i)));
    }
    gpio__DOT____VdfgRegularize_h96760f73_0_0 = ((~ (IData)(vlSelf->device_we_i)) 
                                                 & (IData)(vlSelf->device_req_i));
    if ((1U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfffffffeU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (1U & vlSelf->device_addr_i));
    }
    if ((2U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfffffffdU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (2U & vlSelf->device_addr_i));
    }
    if ((4U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfffffffbU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (4U & vlSelf->device_addr_i));
    }
    if ((8U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfffffff7U & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (8U & vlSelf->device_addr_i));
    }
    if ((0x10U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xffffffefU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x10U & vlSelf->device_addr_i));
    }
    if ((0x20U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xffffffdfU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x20U & vlSelf->device_addr_i));
    }
    if ((0x40U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xffffffbfU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x40U & vlSelf->device_addr_i));
    }
    if ((0x80U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xffffff7fU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x80U & vlSelf->device_addr_i));
    }
    if ((0x100U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfffffeffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x100U & vlSelf->device_addr_i));
    }
    if ((0x200U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfffffdffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x200U & vlSelf->device_addr_i));
    }
    if ((0x400U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfffffbffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x400U & vlSelf->device_addr_i));
    }
    if ((0x800U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfffff7ffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x800U & vlSelf->device_addr_i));
    }
    if ((0x1000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xffffefffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x1000U & vlSelf->device_addr_i));
    }
    if ((0x2000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xffffdfffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x2000U & vlSelf->device_addr_i));
    }
    if ((0x4000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xffffbfffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x4000U & vlSelf->device_addr_i));
    }
    if ((0x8000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xffff7fffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x8000U & vlSelf->device_addr_i));
    }
    if ((0x10000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfffeffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x10000U & vlSelf->device_addr_i));
    }
    if ((0x20000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfffdffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x20000U & vlSelf->device_addr_i));
    }
    if ((0x40000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfffbffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x40000U & vlSelf->device_addr_i));
    }
    if ((0x80000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfff7ffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x80000U & vlSelf->device_addr_i));
    }
    if ((0x100000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xffefffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x100000U & vlSelf->device_addr_i));
    }
    if ((0x200000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xffdfffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x200000U & vlSelf->device_addr_i));
    }
    if ((0x400000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xffbfffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x400000U & vlSelf->device_addr_i));
    }
    if ((0x800000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xff7fffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x800000U & vlSelf->device_addr_i));
    }
    if ((0x1000000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfeffffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x1000000U & vlSelf->device_addr_i));
    }
    if ((0x2000000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfdffffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x2000000U & vlSelf->device_addr_i));
    }
    if ((0x4000000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xfbffffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x4000000U & vlSelf->device_addr_i));
    }
    if ((0x8000000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xf7ffffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x8000000U & vlSelf->device_addr_i));
    }
    if ((0x10000000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xefffffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x10000000U & vlSelf->device_addr_i));
    }
    if ((0x20000000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xdfffffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x20000000U & vlSelf->device_addr_i));
    }
    if ((0x40000000U & (vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0xbfffffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x40000000U & vlSelf->device_addr_i));
    }
    if (((vlSelf->device_addr_i ^ vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->gpio__DOT____Vtogcov__device_addr_i 
            = ((0x7fffffffU & vlSelf->gpio__DOT____Vtogcov__device_addr_i) 
               | (0x80000000U & vlSelf->device_addr_i));
    }
    if ((1U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffffeU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (1U & vlSelf->device_wdata_i));
    }
    if ((2U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffffdU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (2U & vlSelf->device_wdata_i));
    }
    if ((4U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffffbU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (4U & vlSelf->device_wdata_i));
    }
    if ((8U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffff7U & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (8U & vlSelf->device_wdata_i));
    }
    if ((0x10U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xffffffefU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x10U & vlSelf->device_wdata_i));
    }
    if ((0x20U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xffffffdfU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x20U & vlSelf->device_wdata_i));
    }
    if ((0x40U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xffffffbfU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x40U & vlSelf->device_wdata_i));
    }
    if ((0x80U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xffffff7fU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x80U & vlSelf->device_wdata_i));
    }
    if ((0x100U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffeffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x100U & vlSelf->device_wdata_i));
    }
    if ((0x200U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffdffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x200U & vlSelf->device_wdata_i));
    }
    if ((0x400U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfffffbffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x400U & vlSelf->device_wdata_i));
    }
    if ((0x800U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfffff7ffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x800U & vlSelf->device_wdata_i));
    }
    if ((0x1000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xffffefffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x1000U & vlSelf->device_wdata_i));
    }
    if ((0x2000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xffffdfffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x2000U & vlSelf->device_wdata_i));
    }
    if ((0x4000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xffffbfffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x4000U & vlSelf->device_wdata_i));
    }
    if ((0x8000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xffff7fffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x8000U & vlSelf->device_wdata_i));
    }
    if ((0x10000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfffeffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x10000U & vlSelf->device_wdata_i));
    }
    if ((0x20000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfffdffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x20000U & vlSelf->device_wdata_i));
    }
    if ((0x40000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfffbffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x40000U & vlSelf->device_wdata_i));
    }
    if ((0x80000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfff7ffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x80000U & vlSelf->device_wdata_i));
    }
    if ((0x100000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xffefffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x100000U & vlSelf->device_wdata_i));
    }
    if ((0x200000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xffdfffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x200000U & vlSelf->device_wdata_i));
    }
    if ((0x400000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xffbfffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x400000U & vlSelf->device_wdata_i));
    }
    if ((0x800000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xff7fffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x800000U & vlSelf->device_wdata_i));
    }
    if ((0x1000000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfeffffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x1000000U & vlSelf->device_wdata_i));
    }
    if ((0x2000000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfdffffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x2000000U & vlSelf->device_wdata_i));
    }
    if ((0x4000000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xfbffffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x4000000U & vlSelf->device_wdata_i));
    }
    if ((0x8000000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xf7ffffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x8000000U & vlSelf->device_wdata_i));
    }
    if ((0x10000000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xefffffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x10000000U & vlSelf->device_wdata_i));
    }
    if ((0x20000000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xdfffffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x20000000U & vlSelf->device_wdata_i));
    }
    if ((0x40000000U & (vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0xbfffffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x40000000U & vlSelf->device_wdata_i));
    }
    if (((vlSelf->device_wdata_i ^ vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->gpio__DOT____Vtogcov__device_wdata_i 
            = ((0x7fffffffU & vlSelf->gpio__DOT____Vtogcov__device_wdata_i) 
               | (0x80000000U & vlSelf->device_wdata_i));
    }
    vlSelf->gpio__DOT__gp_o_d = ((0xff00U & (((2U & (IData)(vlSelf->device_be_i))
                                               ? (vlSelf->device_wdata_i 
                                                  >> 8U)
                                               : ((IData)(vlSelf->gp_o) 
                                                  >> 8U)) 
                                             << 8U)) 
                                 | (0xffU & ((1U & (IData)(vlSelf->device_be_i))
                                              ? vlSelf->device_wdata_i
                                              : (IData)(vlSelf->gp_o))));
    vlSelf->gpio__DOT__gp_o_wr_en = ((IData)(vlSelf->device_req_i) 
                                     & ((IData)(vlSelf->device_we_i) 
                                        & (0U == (0xfffU 
                                                  & vlSelf->device_addr_i))));
    vlSelf->gpio__DOT__invalid_address_signal = ((0U 
                                                  != 
                                                  (0xfffU 
                                                   & vlSelf->device_addr_i)) 
                                                 & ((4U 
                                                     != 
                                                     (0xfffU 
                                                      & vlSelf->device_addr_i)) 
                                                    & (8U 
                                                       != 
                                                       (0xfffU 
                                                        & vlSelf->device_addr_i))));
    vlSelf->gpio__DOT__gp_i_rd_en_d = ((IData)(gpio__DOT____VdfgRegularize_h96760f73_0_0) 
                                       & (4U == (0xfffU 
                                                 & vlSelf->device_addr_i)));
    vlSelf->gpio__DOT__gp_i_dbnc_rd_en_d = ((IData)(gpio__DOT____VdfgRegularize_h96760f73_0_0) 
                                            & (8U == 
                                               (0xfffU 
                                                & vlSelf->device_addr_i)));
    if ((1U & ((IData)(vlSelf->gpio__DOT__gp_o_d) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfffeU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (1U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((2U & ((IData)(vlSelf->gpio__DOT__gp_o_d) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfffdU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (2U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((4U & ((IData)(vlSelf->gpio__DOT__gp_o_d) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfffbU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (4U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((8U & ((IData)(vlSelf->gpio__DOT__gp_o_d) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfff7U 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (8U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x10U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xffefU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x20U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xffdfU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x40U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xffbfU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x80U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xff7fU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x80U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x100U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                   ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfeffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x100U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x200U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                   ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfdffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x200U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x400U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                   ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfbffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x400U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x800U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                   ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xf7ffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x800U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x1000U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                    ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xefffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x1000U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x2000U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                    ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xdfffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x2000U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x4000U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                    ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xbfffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x4000U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x8000U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                    ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0x7fffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x8000U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if (((IData)(vlSelf->gpio__DOT__gp_o_wr_en) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_wr_en))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_wr_en = vlSelf->gpio__DOT__gp_o_wr_en;
    }
    if (vlSelf->gpio__DOT__invalid_address_signal) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->device_rdata_o = 0U;
    } else {
        vlSelf->device_rdata_o = ((IData)(vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q)
                                   ? (IData)(vlSelf->gpio__DOT__gp_i_dbnc)
                                   : ((IData)(vlSelf->gpio__DOT__gp_i_rd_en_q)
                                       ? (0xffU & (vlSelf->gpio__DOT__gp_i_q 
                                                   >> 0x10U))
                                       : (IData)(vlSelf->gp_o)));
    }
    if ((1U & (~ (IData)(vlSelf->gpio__DOT__invalid_address_signal)))) {
        if (vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q) {
            ++(vlSymsp->__Vcoverage[192]);
        }
        if ((1U & (~ (IData)(vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q)))) {
            if (vlSelf->gpio__DOT__gp_i_rd_en_q) {
                ++(vlSymsp->__Vcoverage[191]);
            }
            if ((1U & (~ (IData)(vlSelf->gpio__DOT__gp_i_rd_en_q)))) {
                if (vlSelf->gpio__DOT__gp_o_wr_en) {
                    ++(vlSymsp->__Vcoverage[189]);
                }
                if ((1U & (~ (IData)(vlSelf->gpio__DOT__gp_o_wr_en)))) {
                    ++(vlSymsp->__Vcoverage[190]);
                }
            }
        }
    }
    if (((IData)(vlSelf->gpio__DOT__invalid_address_signal) 
         ^ (IData)(vlSelf->gpio__DOT____Vtogcov__invalid_address_signal))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->gpio__DOT____Vtogcov__invalid_address_signal 
            = vlSelf->gpio__DOT__invalid_address_signal;
    }
    if (((IData)(vlSelf->gpio__DOT__gp_i_rd_en_d) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_rd_en_d))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_rd_en_d 
            = vlSelf->gpio__DOT__gp_i_rd_en_d;
    }
    if (((IData)(vlSelf->gpio__DOT__gp_i_dbnc_rd_en_d) 
         ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc_rd_en_d))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc_rd_en_d 
            = vlSelf->gpio__DOT__gp_i_dbnc_rd_en_d;
    }
    if ((1U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffeU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (1U & vlSelf->device_rdata_o));
    }
    if ((2U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffdU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (2U & vlSelf->device_rdata_o));
    }
    if ((4U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffbU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (4U & vlSelf->device_rdata_o));
    }
    if ((8U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffff7U & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (8U & vlSelf->device_rdata_o));
    }
    if ((0x10U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffefU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x10U & vlSelf->device_rdata_o));
    }
    if ((0x20U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffdfU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x20U & vlSelf->device_rdata_o));
    }
    if ((0x40U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffbfU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x40U & vlSelf->device_rdata_o));
    }
    if ((0x80U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffff7fU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x80U & vlSelf->device_rdata_o));
    }
    if ((0x100U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffeffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x100U & vlSelf->device_rdata_o));
    }
    if ((0x200U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffdffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x200U & vlSelf->device_rdata_o));
    }
    if ((0x400U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffbffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x400U & vlSelf->device_rdata_o));
    }
    if ((0x800U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffff7ffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x800U & vlSelf->device_rdata_o));
    }
    if ((0x1000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffefffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x1000U & vlSelf->device_rdata_o));
    }
    if ((0x2000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffdfffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x2000U & vlSelf->device_rdata_o));
    }
    if ((0x4000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffbfffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x4000U & vlSelf->device_rdata_o));
    }
    if ((0x8000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffff7fffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x8000U & vlSelf->device_rdata_o));
    }
    if ((0x10000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffeffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x10000U & vlSelf->device_rdata_o));
    }
    if ((0x20000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffdffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x20000U & vlSelf->device_rdata_o));
    }
    if ((0x40000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffbffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x40000U & vlSelf->device_rdata_o));
    }
    if ((0x80000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfff7ffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x80000U & vlSelf->device_rdata_o));
    }
    if ((0x100000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffefffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x100000U & vlSelf->device_rdata_o));
    }
    if ((0x200000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffdfffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x200000U & vlSelf->device_rdata_o));
    }
    if ((0x400000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffbfffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x400000U & vlSelf->device_rdata_o));
    }
    if ((0x800000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xff7fffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x800000U & vlSelf->device_rdata_o));
    }
    if ((0x1000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfeffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x1000000U & vlSelf->device_rdata_o));
    }
    if ((0x2000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfdffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x2000000U & vlSelf->device_rdata_o));
    }
    if ((0x4000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfbffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x4000000U & vlSelf->device_rdata_o));
    }
    if ((0x8000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xf7ffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x8000000U & vlSelf->device_rdata_o));
    }
    if ((0x10000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xefffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x10000000U & vlSelf->device_rdata_o));
    }
    if ((0x20000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xdfffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x20000000U & vlSelf->device_rdata_o));
    }
    if ((0x40000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xbfffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x40000000U & vlSelf->device_rdata_o));
    }
    if (((vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0x7fffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x80000000U & vlSelf->device_rdata_o));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio___024root___dump_triggers__act(Vgpio___024root* vlSelf);
#endif  // VL_DEBUG

void Vgpio___024root___eval_triggers__act(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->rst_ni)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgpio___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vgpio___024root___nba_sequent__TOP__0(Vgpio___024root* vlSelf);
void Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf);
void Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf);
void Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf);
void Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf);
void Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf);
void Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf);
void Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf);
void Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__0(Vgpio_debounce* vlSelf);
void Vgpio___024root___nba_sequent__TOP__1(Vgpio___024root* vlSelf);

void Vgpio___024root___eval_nba(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vgpio___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc));
        Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc));
        Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc));
        Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc));
        Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc));
        Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc));
        Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc));
        Vgpio_debounce___nba_sequent__TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__0((&vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc));
        Vgpio___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vgpio___024root___nba_sequent__TOP__0(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___nba_sequent__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[187]);
    if (vlSelf->rst_ni) {
        ++(vlSymsp->__Vcoverage[186]);
        if ((1U & (~ (IData)(vlSelf->gpio__DOT__gp_o_wr_en)))) {
            ++(vlSymsp->__Vcoverage[184]);
        }
        if (vlSelf->gpio__DOT__gp_o_wr_en) {
            ++(vlSymsp->__Vcoverage[183]);
            vlSelf->gp_o = vlSelf->gpio__DOT__gp_o_d;
        }
        vlSelf->gpio__DOT__gp_i_q = ((0xffff00U & (vlSelf->gpio__DOT__gp_i_q 
                                                   << 8U)) 
                                     | (IData)(vlSelf->gp_i));
    } else {
        vlSelf->gpio__DOT__gp_i_q = 0U;
        vlSelf->gp_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        ++(vlSymsp->__Vcoverage[185]);
    }
    vlSelf->device_rvalid_o = ((IData)(vlSelf->rst_ni) 
                               && (IData)(vlSelf->device_req_i));
    vlSelf->gpio__DOT__gp_i_rd_en_q = ((IData)(vlSelf->rst_ni) 
                                       && (IData)(vlSelf->gpio__DOT__gp_i_rd_en_d));
    vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q = ((IData)(vlSelf->rst_ni) 
                                            && (IData)(vlSelf->gpio__DOT__gp_i_dbnc_rd_en_d));
    if ((1U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xfffffeU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (1U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((2U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xfffffdU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (2U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((4U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xfffffbU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (4U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((8U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xfffff7U 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (8U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x10U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xffffefU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x10U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x20U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xffffdfU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x20U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x40U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xffffbfU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x40U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x80U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xffff7fU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x80U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x100U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xfffeffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x100U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x200U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xfffdffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x200U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x400U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xfffbffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x400U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x800U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xfff7ffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x800U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x1000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xffefffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x1000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x2000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xffdfffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x2000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x4000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xffbfffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x4000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x8000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xff7fffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x8000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x10000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xfeffffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x10000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x20000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xfdffffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x20000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x40000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xfbffffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x40000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x80000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xf7ffffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x80000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x100000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xefffffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x100000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x200000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xdfffffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x200000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x400000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0xbfffffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x400000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if ((0x800000U & (vlSelf->gpio__DOT__gp_i_q ^ vlSelf->gpio__DOT____Vtogcov__gp_i_q))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_q = ((0x7fffffU 
                                                 & vlSelf->gpio__DOT____Vtogcov__gp_i_q) 
                                                | (0x800000U 
                                                   & vlSelf->gpio__DOT__gp_i_q));
    }
    if (((IData)(vlSelf->device_rvalid_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__device_rvalid_o))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->gpio__DOT____Vtogcov__device_rvalid_o 
            = vlSelf->device_rvalid_o;
    }
    if (((IData)(vlSelf->gpio__DOT__gp_i_rd_en_q) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_rd_en_q))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_rd_en_q 
            = vlSelf->gpio__DOT__gp_i_rd_en_q;
    }
    if ((1U & (~ (IData)(vlSelf->gpio__DOT__invalid_address_signal)))) {
        if (vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q) {
            ++(vlSymsp->__Vcoverage[192]);
        }
        if ((1U & (~ (IData)(vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q)))) {
            if (vlSelf->gpio__DOT__gp_i_rd_en_q) {
                ++(vlSymsp->__Vcoverage[191]);
            }
            if ((1U & (~ (IData)(vlSelf->gpio__DOT__gp_i_rd_en_q)))) {
                if (vlSelf->gpio__DOT__gp_o_wr_en) {
                    ++(vlSymsp->__Vcoverage[189]);
                }
                if ((1U & (~ (IData)(vlSelf->gpio__DOT__gp_o_wr_en)))) {
                    ++(vlSymsp->__Vcoverage[190]);
                }
            }
        }
    }
    if (((IData)(vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q) 
         ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc_rd_en_q))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc_rd_en_q 
            = vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q;
    }
    if ((1U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xfffeU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (1U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((2U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xfffdU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (2U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((4U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xfffbU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (4U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((8U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xfff7U 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (8U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x10U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xffefU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x20U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xffdfU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x40U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xffbfU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x80U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xff7fU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x100U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xfeffU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x100U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x200U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xfdffU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x200U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x400U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xfbffU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x400U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x800U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xf7ffU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x800U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x1000U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xefffU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x1000U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x2000U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xdfffU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x2000U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x4000U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0xbfffU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x4000U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    if ((0x8000U & ((IData)(vlSelf->gp_o) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->gpio__DOT____Vtogcov__gp_o = ((0x7fffU 
                                               & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o)) 
                                              | (0x8000U 
                                                 & (IData)(vlSelf->gp_o)));
    }
    vlSelf->gpio__DOT__gp_o_d = ((0xff00U & (((2U & (IData)(vlSelf->device_be_i))
                                               ? (vlSelf->device_wdata_i 
                                                  >> 8U)
                                               : ((IData)(vlSelf->gp_o) 
                                                  >> 8U)) 
                                             << 8U)) 
                                 | (0xffU & ((1U & (IData)(vlSelf->device_be_i))
                                              ? vlSelf->device_wdata_i
                                              : (IData)(vlSelf->gp_o))));
    if ((1U & ((IData)(vlSelf->gpio__DOT__gp_o_d) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfffeU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (1U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((2U & ((IData)(vlSelf->gpio__DOT__gp_o_d) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfffdU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (2U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((4U & ((IData)(vlSelf->gpio__DOT__gp_o_d) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfffbU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (4U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((8U & ((IData)(vlSelf->gpio__DOT__gp_o_d) ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfff7U 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (8U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x10U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xffefU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x20U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xffdfU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x40U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xffbfU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x80U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xff7fU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x80U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x100U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                   ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfeffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x100U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x200U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                   ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfdffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x200U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x400U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                   ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xfbffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x400U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x800U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                   ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xf7ffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x800U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x1000U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                    ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xefffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x1000U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x2000U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                    ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xdfffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x2000U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x4000U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                    ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0xbfffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x4000U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
    if ((0x8000U & ((IData)(vlSelf->gpio__DOT__gp_o_d) 
                    ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->gpio__DOT____Vtogcov__gp_o_d = ((0x7fffU 
                                                 & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_o_d)) 
                                                | (0x8000U 
                                                   & (IData)(vlSelf->gpio__DOT__gp_o_d)));
    }
}

VL_INLINE_OPT void Vgpio___024root___nba_sequent__TOP__1(Vgpio___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->gpio__DOT__gp_i_dbnc = (((IData)(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc.__PVT__btn_q) 
                                     << 7U) | (((IData)(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc.__PVT__btn_q) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc.__PVT__btn_q) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc.__PVT__btn_q) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc.__PVT__btn_q) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc.__PVT__btn_q) 
                                                            << 2U) 
                                                           | (((IData)(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc.__PVT__btn_q) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc.__PVT__btn_q))))))));
    if ((1U & ((IData)(vlSelf->gpio__DOT__gp_i_dbnc) 
               ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->gpio__DOT__gp_i_dbnc)));
    }
    if ((2U & ((IData)(vlSelf->gpio__DOT__gp_i_dbnc) 
               ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->gpio__DOT__gp_i_dbnc)));
    }
    if ((4U & ((IData)(vlSelf->gpio__DOT__gp_i_dbnc) 
               ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->gpio__DOT__gp_i_dbnc)));
    }
    if ((8U & ((IData)(vlSelf->gpio__DOT__gp_i_dbnc) 
               ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->gpio__DOT__gp_i_dbnc)));
    }
    if ((0x10U & ((IData)(vlSelf->gpio__DOT__gp_i_dbnc) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->gpio__DOT__gp_i_dbnc)));
    }
    if ((0x20U & ((IData)(vlSelf->gpio__DOT__gp_i_dbnc) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->gpio__DOT__gp_i_dbnc)));
    }
    if ((0x40U & ((IData)(vlSelf->gpio__DOT__gp_i_dbnc) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->gpio__DOT__gp_i_dbnc)));
    }
    if ((0x80U & ((IData)(vlSelf->gpio__DOT__gp_i_dbnc) 
                  ^ (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->gpio__DOT____Vtogcov__gp_i_dbnc)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->gpio__DOT__gp_i_dbnc)));
    }
    vlSelf->device_rdata_o = ((IData)(vlSelf->gpio__DOT__invalid_address_signal)
                               ? 0U : ((IData)(vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q)
                                        ? (IData)(vlSelf->gpio__DOT__gp_i_dbnc)
                                        : ((IData)(vlSelf->gpio__DOT__gp_i_rd_en_q)
                                            ? (0xffU 
                                               & (vlSelf->gpio__DOT__gp_i_q 
                                                  >> 0x10U))
                                            : (IData)(vlSelf->gp_o))));
    if ((1U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffeU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (1U & vlSelf->device_rdata_o));
    }
    if ((2U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffdU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (2U & vlSelf->device_rdata_o));
    }
    if ((4U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffffbU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (4U & vlSelf->device_rdata_o));
    }
    if ((8U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffff7U & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (8U & vlSelf->device_rdata_o));
    }
    if ((0x10U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffefU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x10U & vlSelf->device_rdata_o));
    }
    if ((0x20U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffdfU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x20U & vlSelf->device_rdata_o));
    }
    if ((0x40U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffffbfU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x40U & vlSelf->device_rdata_o));
    }
    if ((0x80U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffff7fU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x80U & vlSelf->device_rdata_o));
    }
    if ((0x100U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffeffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x100U & vlSelf->device_rdata_o));
    }
    if ((0x200U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffdffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x200U & vlSelf->device_rdata_o));
    }
    if ((0x400U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffffbffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x400U & vlSelf->device_rdata_o));
    }
    if ((0x800U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffff7ffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x800U & vlSelf->device_rdata_o));
    }
    if ((0x1000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffefffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x1000U & vlSelf->device_rdata_o));
    }
    if ((0x2000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffdfffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x2000U & vlSelf->device_rdata_o));
    }
    if ((0x4000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffffbfffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x4000U & vlSelf->device_rdata_o));
    }
    if ((0x8000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffff7fffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x8000U & vlSelf->device_rdata_o));
    }
    if ((0x10000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffeffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x10000U & vlSelf->device_rdata_o));
    }
    if ((0x20000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffdffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x20000U & vlSelf->device_rdata_o));
    }
    if ((0x40000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfffbffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x40000U & vlSelf->device_rdata_o));
    }
    if ((0x80000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfff7ffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x80000U & vlSelf->device_rdata_o));
    }
    if ((0x100000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffefffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x100000U & vlSelf->device_rdata_o));
    }
    if ((0x200000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffdfffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x200000U & vlSelf->device_rdata_o));
    }
    if ((0x400000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xffbfffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x400000U & vlSelf->device_rdata_o));
    }
    if ((0x800000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xff7fffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x800000U & vlSelf->device_rdata_o));
    }
    if ((0x1000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfeffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x1000000U & vlSelf->device_rdata_o));
    }
    if ((0x2000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfdffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x2000000U & vlSelf->device_rdata_o));
    }
    if ((0x4000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xfbffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x4000000U & vlSelf->device_rdata_o));
    }
    if ((0x8000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xf7ffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x8000000U & vlSelf->device_rdata_o));
    }
    if ((0x10000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xefffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x10000000U & vlSelf->device_rdata_o));
    }
    if ((0x20000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xdfffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x20000000U & vlSelf->device_rdata_o));
    }
    if ((0x40000000U & (vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0xbfffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x40000000U & vlSelf->device_rdata_o));
    }
    if (((vlSelf->device_rdata_o ^ vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->gpio__DOT____Vtogcov__device_rdata_o 
            = ((0x7fffffffU & vlSelf->gpio__DOT____Vtogcov__device_rdata_o) 
               | (0x80000000U & vlSelf->device_rdata_o));
    }
}
