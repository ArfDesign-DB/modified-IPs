// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwb_interconnect__Syms.h"


void Vwb_interconnect___024root__trace_chg_sub_0(Vwb_interconnect___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vwb_interconnect___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root__trace_chg_top_0\n"); );
    // Init
    Vwb_interconnect___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwb_interconnect___024root*>(voidSelf);
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vwb_interconnect___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vwb_interconnect___024root__trace_chg_sub_0(Vwb_interconnect___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk_i));
    bufp->chgBit(oldp+1,(vlSelf->rst_ni));
    bufp->chgBit(oldp+2,(vlSelf->wb_cyc_i));
    bufp->chgBit(oldp+3,(vlSelf->wb_stb_i));
    bufp->chgBit(oldp+4,(vlSelf->wb_we_i));
    bufp->chgIData(oldp+5,(vlSelf->wb_adr_i),32);
    bufp->chgIData(oldp+6,(vlSelf->wb_dat_i),32);
    bufp->chgCData(oldp+7,(vlSelf->wb_sel_i),4);
    bufp->chgBit(oldp+8,(vlSelf->wb_ack_o));
    bufp->chgIData(oldp+9,(vlSelf->wb_dat_o),32);
    bufp->chgBit(oldp+10,(vlSelf->wb_stall_o));
    bufp->chgBit(oldp+11,(vlSelf->bootrom_req_o));
    bufp->chgBit(oldp+12,(vlSelf->bootrom_we_o));
    bufp->chgIData(oldp+13,(vlSelf->bootrom_addr_o),32);
    bufp->chgIData(oldp+14,(vlSelf->bootrom_wdata_o),32);
    bufp->chgCData(oldp+15,(vlSelf->bootrom_be_o),4);
    bufp->chgBit(oldp+16,(vlSelf->bootrom_rvalid_i));
    bufp->chgIData(oldp+17,(vlSelf->bootrom_rdata_i),32);
    bufp->chgBit(oldp+18,(vlSelf->sram_req_o));
    bufp->chgBit(oldp+19,(vlSelf->sram_we_o));
    bufp->chgIData(oldp+20,(vlSelf->sram_addr_o),32);
    bufp->chgIData(oldp+21,(vlSelf->sram_wdata_o),32);
    bufp->chgCData(oldp+22,(vlSelf->sram_be_o),4);
    bufp->chgBit(oldp+23,(vlSelf->sram_rvalid_i));
    bufp->chgIData(oldp+24,(vlSelf->sram_rdata_i),32);
    bufp->chgBit(oldp+25,(vlSelf->xip_req_o));
    bufp->chgBit(oldp+26,(vlSelf->xip_we_o));
    bufp->chgIData(oldp+27,(vlSelf->xip_addr_o),32);
    bufp->chgIData(oldp+28,(vlSelf->xip_wdata_o),32);
    bufp->chgCData(oldp+29,(vlSelf->xip_be_o),4);
    bufp->chgBit(oldp+30,(vlSelf->xip_rvalid_i));
    bufp->chgIData(oldp+31,(vlSelf->xip_rdata_i),32);
    bufp->chgBit(oldp+32,(vlSelf->uart_req_o));
    bufp->chgBit(oldp+33,(vlSelf->uart_we_o));
    bufp->chgIData(oldp+34,(vlSelf->uart_addr_o),32);
    bufp->chgIData(oldp+35,(vlSelf->uart_wdata_o),32);
    bufp->chgCData(oldp+36,(vlSelf->uart_be_o),4);
    bufp->chgBit(oldp+37,(vlSelf->uart_rvalid_i));
    bufp->chgIData(oldp+38,(vlSelf->uart_rdata_i),32);
    bufp->chgBit(oldp+39,(vlSelf->gpio_req_o));
    bufp->chgBit(oldp+40,(vlSelf->gpio_we_o));
    bufp->chgIData(oldp+41,(vlSelf->gpio_addr_o),32);
    bufp->chgIData(oldp+42,(vlSelf->gpio_wdata_o),32);
    bufp->chgCData(oldp+43,(vlSelf->gpio_be_o),4);
    bufp->chgBit(oldp+44,(vlSelf->gpio_rvalid_i));
    bufp->chgIData(oldp+45,(vlSelf->gpio_rdata_i),32);
    bufp->chgBit(oldp+46,(vlSelf->timer_req_o));
    bufp->chgBit(oldp+47,(vlSelf->timer_we_o));
    bufp->chgIData(oldp+48,(vlSelf->timer_addr_o),32);
    bufp->chgIData(oldp+49,(vlSelf->timer_wdata_o),32);
    bufp->chgCData(oldp+50,(vlSelf->timer_be_o),4);
    bufp->chgBit(oldp+51,(vlSelf->timer_rvalid_i));
    bufp->chgIData(oldp+52,(vlSelf->timer_rdata_i),32);
    bufp->chgBit(oldp+53,(vlSelf->spictrl_req_o));
    bufp->chgBit(oldp+54,(vlSelf->spictrl_we_o));
    bufp->chgIData(oldp+55,(vlSelf->spictrl_addr_o),32);
    bufp->chgIData(oldp+56,(vlSelf->spictrl_wdata_o),32);
    bufp->chgCData(oldp+57,(vlSelf->spictrl_be_o),4);
    bufp->chgBit(oldp+58,(vlSelf->spictrl_rvalid_i));
    bufp->chgIData(oldp+59,(vlSelf->spictrl_rdata_i),32);
    bufp->chgBit(oldp+60,(vlSelf->i2c_req_o));
    bufp->chgBit(oldp+61,(vlSelf->i2c_we_o));
    bufp->chgIData(oldp+62,(vlSelf->i2c_addr_o),32);
    bufp->chgIData(oldp+63,(vlSelf->i2c_wdata_o),32);
    bufp->chgCData(oldp+64,(vlSelf->i2c_be_o),4);
    bufp->chgBit(oldp+65,(vlSelf->i2c_rvalid_i));
    bufp->chgIData(oldp+66,(vlSelf->i2c_rdata_i),32);
    bufp->chgBit(oldp+67,(vlSelf->spihost_req_o));
    bufp->chgBit(oldp+68,(vlSelf->spihost_we_o));
    bufp->chgIData(oldp+69,(vlSelf->spihost_addr_o),32);
    bufp->chgIData(oldp+70,(vlSelf->spihost_wdata_o),32);
    bufp->chgCData(oldp+71,(vlSelf->spihost_be_o),4);
    bufp->chgBit(oldp+72,(vlSelf->spihost_rvalid_i));
    bufp->chgIData(oldp+73,(vlSelf->spihost_rdata_i),32);
    bufp->chgBit(oldp+74,((0x100000U == (0xfffff000U 
                                         & vlSelf->wb_adr_i))));
    bufp->chgBit(oldp+75,((0x101000U == (0xfffff000U 
                                         & vlSelf->wb_adr_i))));
    bufp->chgBit(oldp+76,((0x20000000U == (0xf0000000U 
                                           & vlSelf->wb_adr_i))));
    bufp->chgBit(oldp+77,((0x40000000U == (0xffffff00U 
                                           & vlSelf->wb_adr_i))));
    bufp->chgBit(oldp+78,((0x40000100U == (0xffffff00U 
                                           & vlSelf->wb_adr_i))));
    bufp->chgBit(oldp+79,((0x40000200U == (0xffffff00U 
                                           & vlSelf->wb_adr_i))));
    bufp->chgBit(oldp+80,((0x40000300U == (0xffffff00U 
                                           & vlSelf->wb_adr_i))));
    bufp->chgBit(oldp+81,((0x40000400U == (0xffffff00U 
                                           & vlSelf->wb_adr_i))));
    bufp->chgBit(oldp+82,((0x40000500U == (0xffffff00U 
                                           & vlSelf->wb_adr_i))));
    bufp->chgCData(oldp+83,(vlSelf->wb_interconnect__DOT__device_sel_resp),4);
    bufp->chgBit(oldp+84,(vlSelf->wb_interconnect__DOT__decode_err_resp));
}

void Vwb_interconnect___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root__trace_cleanup\n"); );
    // Init
    Vwb_interconnect___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwb_interconnect___024root*>(voidSelf);
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
