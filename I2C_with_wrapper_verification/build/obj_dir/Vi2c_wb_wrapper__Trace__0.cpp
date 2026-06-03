// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vi2c_wb_wrapper__Syms.h"


void Vi2c_wb_wrapper___024root__trace_chg_sub_0(Vi2c_wb_wrapper___024root* vlSelf, VerilatedVcd* tracep);

void Vi2c_wb_wrapper___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root__trace_chg_top_0\n"); );
    // Init
    Vi2c_wb_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vi2c_wb_wrapper___024root*>(voidSelf);
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vi2c_wb_wrapper___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vi2c_wb_wrapper___024root__trace_chg_sub_0(Vi2c_wb_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o),8);
        tracep->chgBit(oldp+1,(vlSelf->i2c_wb_wrapper__DOT__wb_ack_o));
        tracep->chgBit(oldp+2,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgSData(oldp+3,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer),16);
        tracep->chgCData(oldp+4,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr),8);
        tracep->chgCData(oldp+5,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr),8);
        tracep->chgCData(oldp+6,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr),8);
        tracep->chgCData(oldp+7,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr),8);
        tracep->chgCData(oldp+8,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr),8);
        tracep->chgBit(oldp+9,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done));
        tracep->chgBit(oldp+10,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                                       >> 7U))));
        tracep->chgBit(oldp+11,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                                       >> 6U))));
        tracep->chgBit(oldp+12,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack));
        tracep->chgBit(oldp+13,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack));
        tracep->chgBit(oldp+14,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip));
        tracep->chgBit(oldp+15,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag));
        tracep->chgBit(oldp+16,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy));
        tracep->chgBit(oldp+17,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al));
        tracep->chgBit(oldp+18,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al));
        tracep->chgBit(oldp+19,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                       >> 7U))));
        tracep->chgBit(oldp+20,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                       >> 6U))));
        tracep->chgBit(oldp+21,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                       >> 5U))));
        tracep->chgBit(oldp+22,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                       >> 4U))));
        tracep->chgBit(oldp+23,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                       >> 3U))));
        tracep->chgBit(oldp+24,((1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))));
        tracep->chgCData(oldp+25,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd),4);
        tracep->chgBit(oldp+26,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd));
        tracep->chgBit(oldp+27,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack));
        tracep->chgBit(oldp+28,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift));
        tracep->chgBit(oldp+29,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld));
        tracep->chgBit(oldp+30,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go));
        tracep->chgCData(oldp+31,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt),3);
        tracep->chgBit(oldp+32,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt)))))));
        tracep->chgCData(oldp+33,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state),5);
        tracep->chgBit(oldp+34,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk));
        tracep->chgBit(oldp+35,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en));
        tracep->chgSData(oldp+36,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt),16);
        tracep->chgBit(oldp+37,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA));
        tracep->chgBit(oldp+38,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition));
        tracep->chgBit(oldp+39,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition));
        tracep->chgBit(oldp+40,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop));
        tracep->chgIData(oldp+41,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state),17);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+42,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL));
        tracep->chgBit(oldp+43,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA));
        tracep->chgBit(oldp+44,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait));
        tracep->chgBit(oldp+45,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL));
    }
    tracep->chgBit(oldp+46,(vlSelf->clk_i));
    tracep->chgBit(oldp+47,(vlSelf->rst_i));
    tracep->chgBit(oldp+48,(vlSelf->i2c_req_o));
    tracep->chgBit(oldp+49,(vlSelf->i2c_we_o));
    tracep->chgIData(oldp+50,(vlSelf->i2c_addr_o),32);
    tracep->chgIData(oldp+51,(vlSelf->i2c_wdata_o),32);
    tracep->chgCData(oldp+52,(vlSelf->i2c_be_o),4);
    tracep->chgBit(oldp+53,(vlSelf->i2c_rvalid_i));
    tracep->chgIData(oldp+54,(vlSelf->i2c_rdata_i),32);
    tracep->chgBit(oldp+55,(vlSelf->scl_pad_i));
    tracep->chgBit(oldp+56,(vlSelf->scl_pad_o));
    tracep->chgBit(oldp+57,(vlSelf->scl_padoen_o));
    tracep->chgBit(oldp+58,(vlSelf->sda_pad_i));
    tracep->chgBit(oldp+59,(vlSelf->sda_pad_o));
    tracep->chgBit(oldp+60,(vlSelf->sda_padoen_o));
    tracep->chgBit(oldp+61,(vlSelf->wb_inta_o));
    tracep->chgCData(oldp+62,((7U & vlSelf->i2c_addr_o)),3);
    tracep->chgCData(oldp+63,((0xffU & vlSelf->i2c_wdata_o)),8);
    tracep->chgBit(oldp+64,((1U & (~ (IData)(vlSelf->rst_i)))));
    tracep->chgBit(oldp+65,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i));
    tracep->chgBit(oldp+66,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc));
    tracep->chgBit(oldp+67,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_rxd));
}

void Vi2c_wb_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root__trace_cleanup\n"); );
    // Init
    Vi2c_wb_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vi2c_wb_wrapper___024root*>(voidSelf);
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
