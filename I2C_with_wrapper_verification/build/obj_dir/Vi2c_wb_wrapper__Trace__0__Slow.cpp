// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vi2c_wb_wrapper__Syms.h"


VL_ATTR_COLD void Vi2c_wb_wrapper___024root__trace_init_sub__TOP__0(Vi2c_wb_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+47,"clk_i", false,-1);
    tracep->declBit(c+48,"rst_i", false,-1);
    tracep->declBit(c+49,"i2c_req_o", false,-1);
    tracep->declBit(c+50,"i2c_we_o", false,-1);
    tracep->declBus(c+51,"i2c_addr_o", false,-1, 31,0);
    tracep->declBus(c+52,"i2c_wdata_o", false,-1, 31,0);
    tracep->declBus(c+53,"i2c_be_o", false,-1, 3,0);
    tracep->declBit(c+54,"i2c_rvalid_i", false,-1);
    tracep->declBus(c+55,"i2c_rdata_i", false,-1, 31,0);
    tracep->declBit(c+56,"scl_pad_i", false,-1);
    tracep->declBit(c+57,"scl_pad_o", false,-1);
    tracep->declBit(c+58,"scl_padoen_o", false,-1);
    tracep->declBit(c+59,"sda_pad_i", false,-1);
    tracep->declBit(c+60,"sda_pad_o", false,-1);
    tracep->declBit(c+61,"sda_padoen_o", false,-1);
    tracep->declBit(c+62,"wb_inta_o", false,-1);
    tracep->pushNamePrefix("i2c_wb_wrapper ");
    tracep->declBus(c+69,"AW", false,-1, 31,0);
    tracep->declBus(c+69,"DW", false,-1, 31,0);
    tracep->declBit(c+47,"clk_i", false,-1);
    tracep->declBit(c+48,"rst_i", false,-1);
    tracep->declBit(c+49,"i2c_req_o", false,-1);
    tracep->declBit(c+50,"i2c_we_o", false,-1);
    tracep->declBus(c+51,"i2c_addr_o", false,-1, 31,0);
    tracep->declBus(c+52,"i2c_wdata_o", false,-1, 31,0);
    tracep->declBus(c+53,"i2c_be_o", false,-1, 3,0);
    tracep->declBit(c+54,"i2c_rvalid_i", false,-1);
    tracep->declBus(c+55,"i2c_rdata_i", false,-1, 31,0);
    tracep->declBit(c+56,"scl_pad_i", false,-1);
    tracep->declBit(c+57,"scl_pad_o", false,-1);
    tracep->declBit(c+58,"scl_padoen_o", false,-1);
    tracep->declBit(c+59,"sda_pad_i", false,-1);
    tracep->declBit(c+60,"sda_pad_o", false,-1);
    tracep->declBit(c+61,"sda_padoen_o", false,-1);
    tracep->declBit(c+62,"wb_inta_o", false,-1);
    tracep->declBus(c+63,"wb_adr_i", false,-1, 2,0);
    tracep->declBus(c+64,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+50,"wb_we_i", false,-1);
    tracep->declBit(c+49,"wb_stb_i", false,-1);
    tracep->declBit(c+49,"wb_cyc_i", false,-1);
    tracep->declBit(c+2,"wb_ack_o", false,-1);
    tracep->declBit(c+48,"wb_rst_i", false,-1);
    tracep->declBit(c+65,"arst_i", false,-1);
    tracep->pushNamePrefix("u_i2c_master_top ");
    tracep->declBus(c+70,"ARST_LVL", false,-1, 0,0);
    tracep->declBit(c+47,"wb_clk_i", false,-1);
    tracep->declBit(c+48,"wb_rst_i", false,-1);
    tracep->declBit(c+65,"arst_i", false,-1);
    tracep->declBus(c+63,"wb_adr_i", false,-1, 2,0);
    tracep->declBus(c+64,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+50,"wb_we_i", false,-1);
    tracep->declBit(c+49,"wb_stb_i", false,-1);
    tracep->declBit(c+49,"wb_cyc_i", false,-1);
    tracep->declBit(c+2,"wb_ack_o", false,-1);
    tracep->declBit(c+62,"wb_inta_o", false,-1);
    tracep->declBit(c+56,"scl_pad_i", false,-1);
    tracep->declBit(c+57,"scl_pad_o", false,-1);
    tracep->declBit(c+58,"scl_padoen_o", false,-1);
    tracep->declBit(c+59,"sda_pad_i", false,-1);
    tracep->declBit(c+60,"sda_pad_o", false,-1);
    tracep->declBit(c+61,"sda_padoen_o", false,-1);
    tracep->declBus(c+4,"prer", false,-1, 15,0);
    tracep->declBus(c+5,"ctr", false,-1, 7,0);
    tracep->declBus(c+6,"txr", false,-1, 7,0);
    tracep->declBus(c+7,"rxr", false,-1, 7,0);
    tracep->declBus(c+8,"cr", false,-1, 7,0);
    tracep->declBus(c+9,"sr", false,-1, 7,0);
    tracep->declBit(c+10,"done", false,-1);
    tracep->declBit(c+11,"core_en", false,-1);
    tracep->declBit(c+12,"ien", false,-1);
    tracep->declBit(c+13,"irxack", false,-1);
    tracep->declBit(c+14,"rxack", false,-1);
    tracep->declBit(c+15,"tip", false,-1);
    tracep->declBit(c+16,"irq_flag", false,-1);
    tracep->declBit(c+17,"i2c_busy", false,-1);
    tracep->declBit(c+18,"i2c_al", false,-1);
    tracep->declBit(c+19,"al", false,-1);
    tracep->declBit(c+66,"rst_i", false,-1);
    tracep->declBit(c+67,"wb_wacc", false,-1);
    tracep->declBit(c+20,"sta", false,-1);
    tracep->declBit(c+21,"sto", false,-1);
    tracep->declBit(c+22,"rd", false,-1);
    tracep->declBit(c+23,"wr", false,-1);
    tracep->declBit(c+24,"ack", false,-1);
    tracep->declBit(c+25,"iack", false,-1);
    tracep->pushNamePrefix("byte_controller ");
    tracep->declBit(c+47,"clk", false,-1);
    tracep->declBit(c+48,"rst", false,-1);
    tracep->declBit(c+66,"nReset", false,-1);
    tracep->declBit(c+11,"ena", false,-1);
    tracep->declBus(c+4,"clk_cnt", false,-1, 15,0);
    tracep->declBit(c+20,"start", false,-1);
    tracep->declBit(c+21,"stop", false,-1);
    tracep->declBit(c+22,"read", false,-1);
    tracep->declBit(c+23,"write", false,-1);
    tracep->declBit(c+24,"ack_in", false,-1);
    tracep->declBus(c+6,"din", false,-1, 7,0);
    tracep->declBit(c+10,"cmd_ack", false,-1);
    tracep->declBit(c+13,"ack_out", false,-1);
    tracep->declBit(c+17,"i2c_busy", false,-1);
    tracep->declBit(c+18,"i2c_al", false,-1);
    tracep->declBus(c+7,"dout", false,-1, 7,0);
    tracep->declBit(c+56,"scl_i", false,-1);
    tracep->declBit(c+57,"scl_o", false,-1);
    tracep->declBit(c+58,"scl_oen", false,-1);
    tracep->declBit(c+59,"sda_i", false,-1);
    tracep->declBit(c+60,"sda_o", false,-1);
    tracep->declBit(c+61,"sda_oen", false,-1);
    tracep->declBus(c+71,"ST_IDLE", false,-1, 4,0);
    tracep->declBus(c+72,"ST_START", false,-1, 4,0);
    tracep->declBus(c+73,"ST_READ", false,-1, 4,0);
    tracep->declBus(c+74,"ST_WRITE", false,-1, 4,0);
    tracep->declBus(c+75,"ST_ACK", false,-1, 4,0);
    tracep->declBus(c+76,"ST_STOP", false,-1, 4,0);
    tracep->declBus(c+26,"core_cmd", false,-1, 3,0);
    tracep->declBit(c+27,"core_txd", false,-1);
    tracep->declBit(c+28,"core_ack", false,-1);
    tracep->declBit(c+68,"core_rxd", false,-1);
    tracep->declBus(c+7,"sr", false,-1, 7,0);
    tracep->declBit(c+29,"shift", false,-1);
    tracep->declBit(c+30,"ld", false,-1);
    tracep->declBit(c+31,"go", false,-1);
    tracep->declBus(c+32,"dcnt", false,-1, 2,0);
    tracep->declBit(c+33,"cnt_done", false,-1);
    tracep->declBus(c+34,"c_state", false,-1, 4,0);
    tracep->pushNamePrefix("bit_controller ");
    tracep->declBit(c+47,"clk", false,-1);
    tracep->declBit(c+48,"rst", false,-1);
    tracep->declBit(c+66,"nReset", false,-1);
    tracep->declBit(c+11,"ena", false,-1);
    tracep->declBus(c+4,"clk_cnt", false,-1, 15,0);
    tracep->declBus(c+26,"cmd", false,-1, 3,0);
    tracep->declBit(c+28,"cmd_ack", false,-1);
    tracep->declBit(c+17,"busy", false,-1);
    tracep->declBit(c+18,"al", false,-1);
    tracep->declBit(c+27,"din", false,-1);
    tracep->declBit(c+68,"dout", false,-1);
    tracep->declBit(c+56,"scl_i", false,-1);
    tracep->declBit(c+57,"scl_o", false,-1);
    tracep->declBit(c+58,"scl_oen", false,-1);
    tracep->declBit(c+59,"sda_i", false,-1);
    tracep->declBit(c+60,"sda_o", false,-1);
    tracep->declBit(c+61,"sda_oen", false,-1);
    tracep->declBit(c+43,"sSCL", false,-1);
    tracep->declBit(c+44,"sSDA", false,-1);
    tracep->declBit(c+3,"dscl_oen", false,-1);
    tracep->declBit(c+35,"sda_chk", false,-1);
    tracep->declBit(c+36,"clk_en", false,-1);
    tracep->declBit(c+45,"slave_wait", false,-1);
    tracep->declBus(c+37,"cnt", false,-1, 15,0);
    tracep->declBit(c+46,"dSCL", false,-1);
    tracep->declBit(c+38,"dSDA", false,-1);
    tracep->declBit(c+39,"sta_condition", false,-1);
    tracep->declBit(c+40,"sto_condition", false,-1);
    tracep->declBit(c+41,"cmd_stop", false,-1);
    tracep->declBus(c+77,"idle", false,-1, 16,0);
    tracep->declBus(c+78,"start_a", false,-1, 16,0);
    tracep->declBus(c+79,"start_b", false,-1, 16,0);
    tracep->declBus(c+80,"start_c", false,-1, 16,0);
    tracep->declBus(c+81,"start_d", false,-1, 16,0);
    tracep->declBus(c+82,"start_e", false,-1, 16,0);
    tracep->declBus(c+83,"stop_a", false,-1, 16,0);
    tracep->declBus(c+84,"stop_b", false,-1, 16,0);
    tracep->declBus(c+85,"stop_c", false,-1, 16,0);
    tracep->declBus(c+86,"stop_d", false,-1, 16,0);
    tracep->declBus(c+87,"rd_a", false,-1, 16,0);
    tracep->declBus(c+88,"rd_b", false,-1, 16,0);
    tracep->declBus(c+89,"rd_c", false,-1, 16,0);
    tracep->declBus(c+90,"rd_d", false,-1, 16,0);
    tracep->declBus(c+91,"wr_a", false,-1, 16,0);
    tracep->declBus(c+92,"wr_b", false,-1, 16,0);
    tracep->declBus(c+93,"wr_c", false,-1, 16,0);
    tracep->declBus(c+94,"wr_d", false,-1, 16,0);
    tracep->declBus(c+42,"c_state", false,-1, 16,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vi2c_wb_wrapper___024root__trace_init_top(Vi2c_wb_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root__trace_init_top\n"); );
    // Body
    Vi2c_wb_wrapper___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vi2c_wb_wrapper___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vi2c_wb_wrapper___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vi2c_wb_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vi2c_wb_wrapper___024root__trace_register(Vi2c_wb_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vi2c_wb_wrapper___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vi2c_wb_wrapper___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vi2c_wb_wrapper___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vi2c_wb_wrapper___024root__trace_full_sub_0(Vi2c_wb_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vi2c_wb_wrapper___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root__trace_full_top_0\n"); );
    // Init
    Vi2c_wb_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vi2c_wb_wrapper___024root*>(voidSelf);
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vi2c_wb_wrapper___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vi2c_wb_wrapper___024root__trace_full_sub_0(Vi2c_wb_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_wb_wrapper___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->i2c_wb_wrapper__DOT__wb_dat_o),8);
    tracep->fullBit(oldp+2,(vlSelf->i2c_wb_wrapper__DOT__wb_ack_o));
    tracep->fullBit(oldp+3,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dscl_oen));
    tracep->fullSData(oldp+4,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__prer),16);
    tracep->fullCData(oldp+5,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr),8);
    tracep->fullCData(oldp+6,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__txr),8);
    tracep->fullCData(oldp+7,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__sr),8);
    tracep->fullCData(oldp+8,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr),8);
    tracep->fullCData(oldp+9,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__sr),8);
    tracep->fullBit(oldp+10,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__done));
    tracep->fullBit(oldp+11,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                                    >> 7U))));
    tracep->fullBit(oldp+12,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__ctr) 
                                    >> 6U))));
    tracep->fullBit(oldp+13,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irxack));
    tracep->fullBit(oldp+14,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rxack));
    tracep->fullBit(oldp+15,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__tip));
    tracep->fullBit(oldp+16,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__irq_flag));
    tracep->fullBit(oldp+17,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_busy));
    tracep->fullBit(oldp+18,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__i2c_al));
    tracep->fullBit(oldp+19,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__al));
    tracep->fullBit(oldp+20,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                    >> 7U))));
    tracep->fullBit(oldp+21,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                    >> 6U))));
    tracep->fullBit(oldp+22,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                    >> 5U))));
    tracep->fullBit(oldp+23,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                    >> 4U))));
    tracep->fullBit(oldp+24,((1U & ((IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr) 
                                    >> 3U))));
    tracep->fullBit(oldp+25,((1U & (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__cr))));
    tracep->fullCData(oldp+26,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_cmd),4);
    tracep->fullBit(oldp+27,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_txd));
    tracep->fullBit(oldp+28,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_ack));
    tracep->fullBit(oldp+29,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__shift));
    tracep->fullBit(oldp+30,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__ld));
    tracep->fullBit(oldp+31,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__go));
    tracep->fullCData(oldp+32,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt),3);
    tracep->fullBit(oldp+33,((1U & (~ (IData)((0U != (IData)(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__dcnt)))))));
    tracep->fullCData(oldp+34,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__c_state),5);
    tracep->fullBit(oldp+35,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sda_chk));
    tracep->fullBit(oldp+36,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__clk_en));
    tracep->fullSData(oldp+37,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cnt),16);
    tracep->fullBit(oldp+38,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSDA));
    tracep->fullBit(oldp+39,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sta_condition));
    tracep->fullBit(oldp+40,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sto_condition));
    tracep->fullBit(oldp+41,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__cmd_stop));
    tracep->fullIData(oldp+42,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__c_state),17);
    tracep->fullBit(oldp+43,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSCL));
    tracep->fullBit(oldp+44,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__sSDA));
    tracep->fullBit(oldp+45,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__slave_wait));
    tracep->fullBit(oldp+46,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__bit_controller__DOT__dSCL));
    tracep->fullBit(oldp+47,(vlSelf->clk_i));
    tracep->fullBit(oldp+48,(vlSelf->rst_i));
    tracep->fullBit(oldp+49,(vlSelf->i2c_req_o));
    tracep->fullBit(oldp+50,(vlSelf->i2c_we_o));
    tracep->fullIData(oldp+51,(vlSelf->i2c_addr_o),32);
    tracep->fullIData(oldp+52,(vlSelf->i2c_wdata_o),32);
    tracep->fullCData(oldp+53,(vlSelf->i2c_be_o),4);
    tracep->fullBit(oldp+54,(vlSelf->i2c_rvalid_i));
    tracep->fullIData(oldp+55,(vlSelf->i2c_rdata_i),32);
    tracep->fullBit(oldp+56,(vlSelf->scl_pad_i));
    tracep->fullBit(oldp+57,(vlSelf->scl_pad_o));
    tracep->fullBit(oldp+58,(vlSelf->scl_padoen_o));
    tracep->fullBit(oldp+59,(vlSelf->sda_pad_i));
    tracep->fullBit(oldp+60,(vlSelf->sda_pad_o));
    tracep->fullBit(oldp+61,(vlSelf->sda_padoen_o));
    tracep->fullBit(oldp+62,(vlSelf->wb_inta_o));
    tracep->fullCData(oldp+63,((7U & vlSelf->i2c_addr_o)),3);
    tracep->fullCData(oldp+64,((0xffU & vlSelf->i2c_wdata_o)),8);
    tracep->fullBit(oldp+65,((1U & (~ (IData)(vlSelf->rst_i)))));
    tracep->fullBit(oldp+66,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__rst_i));
    tracep->fullBit(oldp+67,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__wb_wacc));
    tracep->fullBit(oldp+68,(vlSelf->i2c_wb_wrapper__DOT__u_i2c_master_top__DOT__byte_controller__DOT__core_rxd));
    tracep->fullIData(oldp+69,(0x20U),32);
    tracep->fullBit(oldp+70,(0U));
    tracep->fullCData(oldp+71,(0U),5);
    tracep->fullCData(oldp+72,(1U),5);
    tracep->fullCData(oldp+73,(2U),5);
    tracep->fullCData(oldp+74,(4U),5);
    tracep->fullCData(oldp+75,(8U),5);
    tracep->fullCData(oldp+76,(0x10U),5);
    tracep->fullIData(oldp+77,(0U),17);
    tracep->fullIData(oldp+78,(1U),17);
    tracep->fullIData(oldp+79,(2U),17);
    tracep->fullIData(oldp+80,(4U),17);
    tracep->fullIData(oldp+81,(8U),17);
    tracep->fullIData(oldp+82,(0x10U),17);
    tracep->fullIData(oldp+83,(0x20U),17);
    tracep->fullIData(oldp+84,(0x40U),17);
    tracep->fullIData(oldp+85,(0x80U),17);
    tracep->fullIData(oldp+86,(0x100U),17);
    tracep->fullIData(oldp+87,(0x200U),17);
    tracep->fullIData(oldp+88,(0x400U),17);
    tracep->fullIData(oldp+89,(0x800U),17);
    tracep->fullIData(oldp+90,(0x1000U),17);
    tracep->fullIData(oldp+91,(0x2000U),17);
    tracep->fullIData(oldp+92,(0x4000U),17);
    tracep->fullIData(oldp+93,(0x8000U),17);
    tracep->fullIData(oldp+94,(0x10000U),17);
}
