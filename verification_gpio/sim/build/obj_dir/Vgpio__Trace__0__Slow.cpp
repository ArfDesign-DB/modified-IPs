// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgpio__Syms.h"


VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+49,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"device_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"device_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"device_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"device_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"device_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"device_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"device_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"gp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"gp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("gpio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"GpiWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+66,0,"GpoWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+67,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+67,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+68,0,"RegAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+49,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"device_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"device_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"device_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"device_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"device_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"device_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"device_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"gp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"gp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"GPIO_OUT_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+70,0,"GPIO_IN_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+65,0,"GPIO_IN_DBNC_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+60,0,"reg_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+5,0,"gp_i_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+6,0,"gp_i_dbnc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"gp_o_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1,0,"gp_o_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"gp_i_rd_en_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"gp_i_rd_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"gp_i_dbnc_rd_en_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"gp_i_dbnc_rd_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"invalid_address_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"unused_device_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"unused_device_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+64,0,"unused_device_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("gen_debounce[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dbnc", VerilatedTracePrefixType::SCOPE_MODULE);
    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_debounce[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dbnc", VerilatedTracePrefixType::SCOPE_MODULE);
    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_debounce[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dbnc", VerilatedTracePrefixType::SCOPE_MODULE);
    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_debounce[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dbnc", VerilatedTracePrefixType::SCOPE_MODULE);
    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_debounce[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dbnc", VerilatedTracePrefixType::SCOPE_MODULE);
    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_debounce[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dbnc", VerilatedTracePrefixType::SCOPE_MODULE);
    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_debounce[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dbnc", VerilatedTracePrefixType::SCOPE_MODULE);
    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_debounce[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dbnc", VerilatedTracePrefixType::SCOPE_MODULE);
    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_gp_o_d[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_gp_o_d_inner", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"gpo_byte_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_gp_o_d[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_gp_o_d_inner", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+72,0,"gpo_byte_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+73,0,"ClkCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+49,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"btn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"btn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+12,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+13,0,"btn_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"btn_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+73,0,"ClkCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+49,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"btn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"btn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+17,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+18,0,"btn_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"btn_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+73,0,"ClkCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+49,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"btn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"btn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+22,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+23,0,"btn_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"btn_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+73,0,"ClkCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+49,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"btn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"btn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+27,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+28,0,"btn_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"btn_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+73,0,"ClkCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+49,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"btn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"btn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+32,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+33,0,"btn_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"btn_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+73,0,"ClkCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+49,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"btn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"btn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+37,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+38,0,"btn_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"btn_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+73,0,"ClkCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+49,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"btn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"btn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+42,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+43,0,"btn_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"btn_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__0(Vgpio___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_init_sub__TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+73,0,"ClkCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+49,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"btn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"btn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+47,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+48,0,"btn_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"btn_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vgpio___024root__trace_init_top(Vgpio___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_init_top\n"); );
    // Body
    Vgpio___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vgpio___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vgpio___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vgpio___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vgpio___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vgpio___024root__trace_register(Vgpio___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vgpio___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vgpio___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vgpio___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vgpio___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vgpio___024root__trace_const_0_sub_0(Vgpio___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vgpio___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_const_0\n"); );
    // Init
    Vgpio___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgpio___024root*>(voidSelf);
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vgpio___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vgpio___024root__trace_const_0_sub_0(Vgpio___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+65,(8U),32);
    bufp->fullIData(oldp+66,(0x10U),32);
    bufp->fullIData(oldp+67,(0x20U),32);
    bufp->fullIData(oldp+68,(0xcU),32);
    bufp->fullIData(oldp+69,(0U),32);
    bufp->fullIData(oldp+70,(4U),32);
    bufp->fullIData(oldp+71,(8U),32);
    bufp->fullIData(oldp+72,(0x10U),32);
    bufp->fullIData(oldp+73,(0x1f4U),32);
}

VL_ATTR_COLD void Vgpio___024root__trace_full_0_sub_0(Vgpio___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vgpio___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_full_0\n"); );
    // Init
    Vgpio___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgpio___024root*>(voidSelf);
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vgpio___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vgpio___024root__trace_full_0_sub_0(Vgpio___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->gpio__DOT__gp_o_wr_en));
    bufp->fullBit(oldp+2,(vlSelf->gpio__DOT__gp_i_rd_en_d));
    bufp->fullBit(oldp+3,(vlSelf->gpio__DOT__gp_i_dbnc_rd_en_d));
    bufp->fullBit(oldp+4,(vlSelf->gpio__DOT__invalid_address_signal));
    bufp->fullIData(oldp+5,(vlSelf->gpio__DOT__gp_i_q),24);
    bufp->fullCData(oldp+6,(vlSelf->gpio__DOT__gp_i_dbnc),8);
    bufp->fullBit(oldp+7,(vlSelf->gpio__DOT__gp_i_rd_en_q));
    bufp->fullBit(oldp+8,(vlSelf->gpio__DOT__gp_i_dbnc_rd_en_q));
    bufp->fullBit(oldp+9,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                 >> 0x10U))));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc.__PVT__btn_q));
    bufp->fullSData(oldp+11,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc.__PVT__cnt_d),9);
    bufp->fullSData(oldp+12,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc.__PVT__cnt_q),9);
    bufp->fullBit(oldp+13,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc.__PVT__btn_d));
    bufp->fullBit(oldp+14,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                  >> 0x11U))));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc.__PVT__btn_q));
    bufp->fullSData(oldp+16,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc.__PVT__cnt_d),9);
    bufp->fullSData(oldp+17,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc.__PVT__cnt_q),9);
    bufp->fullBit(oldp+18,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc.__PVT__btn_d));
    bufp->fullBit(oldp+19,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                  >> 0x12U))));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc.__PVT__btn_q));
    bufp->fullSData(oldp+21,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc.__PVT__cnt_d),9);
    bufp->fullSData(oldp+22,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc.__PVT__cnt_q),9);
    bufp->fullBit(oldp+23,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc.__PVT__btn_d));
    bufp->fullBit(oldp+24,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                  >> 0x13U))));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc.__PVT__btn_q));
    bufp->fullSData(oldp+26,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc.__PVT__cnt_d),9);
    bufp->fullSData(oldp+27,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc.__PVT__cnt_q),9);
    bufp->fullBit(oldp+28,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc.__PVT__btn_d));
    bufp->fullBit(oldp+29,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                  >> 0x14U))));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc.__PVT__btn_q));
    bufp->fullSData(oldp+31,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc.__PVT__cnt_d),9);
    bufp->fullSData(oldp+32,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc.__PVT__cnt_q),9);
    bufp->fullBit(oldp+33,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc.__PVT__btn_d));
    bufp->fullBit(oldp+34,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                  >> 0x15U))));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc.__PVT__btn_q));
    bufp->fullSData(oldp+36,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc.__PVT__cnt_d),9);
    bufp->fullSData(oldp+37,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc.__PVT__cnt_q),9);
    bufp->fullBit(oldp+38,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc.__PVT__btn_d));
    bufp->fullBit(oldp+39,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                  >> 0x16U))));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc.__PVT__btn_q));
    bufp->fullSData(oldp+41,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc.__PVT__cnt_d),9);
    bufp->fullSData(oldp+42,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc.__PVT__cnt_q),9);
    bufp->fullBit(oldp+43,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc.__PVT__btn_d));
    bufp->fullBit(oldp+44,((1U & (vlSelf->gpio__DOT__gp_i_q 
                                  >> 0x17U))));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc.__PVT__btn_q));
    bufp->fullSData(oldp+46,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc.__PVT__cnt_d),9);
    bufp->fullSData(oldp+47,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc.__PVT__cnt_q),9);
    bufp->fullBit(oldp+48,(vlSymsp->TOP__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc.__PVT__btn_d));
    bufp->fullBit(oldp+49,(vlSelf->clk_i));
    bufp->fullBit(oldp+50,(vlSelf->rst_ni));
    bufp->fullBit(oldp+51,(vlSelf->device_req_i));
    bufp->fullIData(oldp+52,(vlSelf->device_addr_i),32);
    bufp->fullBit(oldp+53,(vlSelf->device_we_i));
    bufp->fullCData(oldp+54,(vlSelf->device_be_i),4);
    bufp->fullIData(oldp+55,(vlSelf->device_wdata_i),32);
    bufp->fullBit(oldp+56,(vlSelf->device_rvalid_o));
    bufp->fullIData(oldp+57,(vlSelf->device_rdata_o),32);
    bufp->fullCData(oldp+58,(vlSelf->gp_i),8);
    bufp->fullSData(oldp+59,(vlSelf->gp_o),16);
    bufp->fullSData(oldp+60,((0xfffU & vlSelf->device_addr_i)),12);
    bufp->fullSData(oldp+61,(vlSelf->gpio__DOT__gp_o_d),16);
    bufp->fullCData(oldp+62,((0xcU & (IData)(vlSelf->device_be_i))),4);
    bufp->fullIData(oldp+63,((vlSelf->device_addr_i 
                              >> 0xcU)),20);
    bufp->fullSData(oldp+64,((vlSelf->device_wdata_i 
                              >> 0x10U)),16);
}
