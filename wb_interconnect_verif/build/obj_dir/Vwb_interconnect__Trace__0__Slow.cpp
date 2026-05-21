// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwb_interconnect__Syms.h"


VL_ATTR_COLD void Vwb_interconnect___024root__trace_init_sub__TOP__0(Vwb_interconnect___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBit(c+2,"rst_ni", false,-1);
    tracep->declBit(c+3,"wb_cyc_i", false,-1);
    tracep->declBit(c+4,"wb_stb_i", false,-1);
    tracep->declBit(c+5,"wb_we_i", false,-1);
    tracep->declBus(c+6,"wb_adr_i", false,-1, 31,0);
    tracep->declBus(c+7,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+8,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+9,"wb_ack_o", false,-1);
    tracep->declBus(c+10,"wb_dat_o", false,-1, 31,0);
    tracep->declBit(c+11,"wb_stall_o", false,-1);
    tracep->declBit(c+12,"bootrom_req_o", false,-1);
    tracep->declBit(c+13,"bootrom_we_o", false,-1);
    tracep->declBus(c+14,"bootrom_addr_o", false,-1, 31,0);
    tracep->declBus(c+15,"bootrom_wdata_o", false,-1, 31,0);
    tracep->declBus(c+16,"bootrom_be_o", false,-1, 3,0);
    tracep->declBit(c+17,"bootrom_rvalid_i", false,-1);
    tracep->declBus(c+18,"bootrom_rdata_i", false,-1, 31,0);
    tracep->declBit(c+19,"sram_req_o", false,-1);
    tracep->declBit(c+20,"sram_we_o", false,-1);
    tracep->declBus(c+21,"sram_addr_o", false,-1, 31,0);
    tracep->declBus(c+22,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+23,"sram_be_o", false,-1, 3,0);
    tracep->declBit(c+24,"sram_rvalid_i", false,-1);
    tracep->declBus(c+25,"sram_rdata_i", false,-1, 31,0);
    tracep->declBit(c+26,"xip_req_o", false,-1);
    tracep->declBit(c+27,"xip_we_o", false,-1);
    tracep->declBus(c+28,"xip_addr_o", false,-1, 31,0);
    tracep->declBus(c+29,"xip_wdata_o", false,-1, 31,0);
    tracep->declBus(c+30,"xip_be_o", false,-1, 3,0);
    tracep->declBit(c+31,"xip_rvalid_i", false,-1);
    tracep->declBus(c+32,"xip_rdata_i", false,-1, 31,0);
    tracep->declBit(c+33,"uart_req_o", false,-1);
    tracep->declBit(c+34,"uart_we_o", false,-1);
    tracep->declBus(c+35,"uart_addr_o", false,-1, 31,0);
    tracep->declBus(c+36,"uart_wdata_o", false,-1, 31,0);
    tracep->declBus(c+37,"uart_be_o", false,-1, 3,0);
    tracep->declBit(c+38,"uart_rvalid_i", false,-1);
    tracep->declBus(c+39,"uart_rdata_i", false,-1, 31,0);
    tracep->declBit(c+40,"gpio_req_o", false,-1);
    tracep->declBit(c+41,"gpio_we_o", false,-1);
    tracep->declBus(c+42,"gpio_addr_o", false,-1, 31,0);
    tracep->declBus(c+43,"gpio_wdata_o", false,-1, 31,0);
    tracep->declBus(c+44,"gpio_be_o", false,-1, 3,0);
    tracep->declBit(c+45,"gpio_rvalid_i", false,-1);
    tracep->declBus(c+46,"gpio_rdata_i", false,-1, 31,0);
    tracep->declBit(c+47,"timer_req_o", false,-1);
    tracep->declBit(c+48,"timer_we_o", false,-1);
    tracep->declBus(c+49,"timer_addr_o", false,-1, 31,0);
    tracep->declBus(c+50,"timer_wdata_o", false,-1, 31,0);
    tracep->declBus(c+51,"timer_be_o", false,-1, 3,0);
    tracep->declBit(c+52,"timer_rvalid_i", false,-1);
    tracep->declBus(c+53,"timer_rdata_i", false,-1, 31,0);
    tracep->declBit(c+54,"spictrl_req_o", false,-1);
    tracep->declBit(c+55,"spictrl_we_o", false,-1);
    tracep->declBus(c+56,"spictrl_addr_o", false,-1, 31,0);
    tracep->declBus(c+57,"spictrl_wdata_o", false,-1, 31,0);
    tracep->declBus(c+58,"spictrl_be_o", false,-1, 3,0);
    tracep->declBit(c+59,"spictrl_rvalid_i", false,-1);
    tracep->declBus(c+60,"spictrl_rdata_i", false,-1, 31,0);
    tracep->declBit(c+61,"i2c_req_o", false,-1);
    tracep->declBit(c+62,"i2c_we_o", false,-1);
    tracep->declBus(c+63,"i2c_addr_o", false,-1, 31,0);
    tracep->declBus(c+64,"i2c_wdata_o", false,-1, 31,0);
    tracep->declBus(c+65,"i2c_be_o", false,-1, 3,0);
    tracep->declBit(c+66,"i2c_rvalid_i", false,-1);
    tracep->declBus(c+67,"i2c_rdata_i", false,-1, 31,0);
    tracep->declBit(c+68,"spihost_req_o", false,-1);
    tracep->declBit(c+69,"spihost_we_o", false,-1);
    tracep->declBus(c+70,"spihost_addr_o", false,-1, 31,0);
    tracep->declBus(c+71,"spihost_wdata_o", false,-1, 31,0);
    tracep->declBus(c+72,"spihost_be_o", false,-1, 3,0);
    tracep->declBit(c+73,"spihost_rvalid_i", false,-1);
    tracep->declBus(c+74,"spihost_rdata_i", false,-1, 31,0);
    tracep->pushNamePrefix("wb_interconnect ");
    tracep->declBus(c+86,"AW", false,-1, 31,0);
    tracep->declBus(c+86,"DW", false,-1, 31,0);
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBit(c+2,"rst_ni", false,-1);
    tracep->declBit(c+3,"wb_cyc_i", false,-1);
    tracep->declBit(c+4,"wb_stb_i", false,-1);
    tracep->declBit(c+5,"wb_we_i", false,-1);
    tracep->declBus(c+6,"wb_adr_i", false,-1, 31,0);
    tracep->declBus(c+7,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+8,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+9,"wb_ack_o", false,-1);
    tracep->declBus(c+10,"wb_dat_o", false,-1, 31,0);
    tracep->declBit(c+11,"wb_stall_o", false,-1);
    tracep->declBit(c+12,"bootrom_req_o", false,-1);
    tracep->declBit(c+13,"bootrom_we_o", false,-1);
    tracep->declBus(c+14,"bootrom_addr_o", false,-1, 31,0);
    tracep->declBus(c+15,"bootrom_wdata_o", false,-1, 31,0);
    tracep->declBus(c+16,"bootrom_be_o", false,-1, 3,0);
    tracep->declBit(c+17,"bootrom_rvalid_i", false,-1);
    tracep->declBus(c+18,"bootrom_rdata_i", false,-1, 31,0);
    tracep->declBit(c+19,"sram_req_o", false,-1);
    tracep->declBit(c+20,"sram_we_o", false,-1);
    tracep->declBus(c+21,"sram_addr_o", false,-1, 31,0);
    tracep->declBus(c+22,"sram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+23,"sram_be_o", false,-1, 3,0);
    tracep->declBit(c+24,"sram_rvalid_i", false,-1);
    tracep->declBus(c+25,"sram_rdata_i", false,-1, 31,0);
    tracep->declBit(c+26,"xip_req_o", false,-1);
    tracep->declBit(c+27,"xip_we_o", false,-1);
    tracep->declBus(c+28,"xip_addr_o", false,-1, 31,0);
    tracep->declBus(c+29,"xip_wdata_o", false,-1, 31,0);
    tracep->declBus(c+30,"xip_be_o", false,-1, 3,0);
    tracep->declBit(c+31,"xip_rvalid_i", false,-1);
    tracep->declBus(c+32,"xip_rdata_i", false,-1, 31,0);
    tracep->declBit(c+33,"uart_req_o", false,-1);
    tracep->declBit(c+34,"uart_we_o", false,-1);
    tracep->declBus(c+35,"uart_addr_o", false,-1, 31,0);
    tracep->declBus(c+36,"uart_wdata_o", false,-1, 31,0);
    tracep->declBus(c+37,"uart_be_o", false,-1, 3,0);
    tracep->declBit(c+38,"uart_rvalid_i", false,-1);
    tracep->declBus(c+39,"uart_rdata_i", false,-1, 31,0);
    tracep->declBit(c+40,"gpio_req_o", false,-1);
    tracep->declBit(c+41,"gpio_we_o", false,-1);
    tracep->declBus(c+42,"gpio_addr_o", false,-1, 31,0);
    tracep->declBus(c+43,"gpio_wdata_o", false,-1, 31,0);
    tracep->declBus(c+44,"gpio_be_o", false,-1, 3,0);
    tracep->declBit(c+45,"gpio_rvalid_i", false,-1);
    tracep->declBus(c+46,"gpio_rdata_i", false,-1, 31,0);
    tracep->declBit(c+47,"timer_req_o", false,-1);
    tracep->declBit(c+48,"timer_we_o", false,-1);
    tracep->declBus(c+49,"timer_addr_o", false,-1, 31,0);
    tracep->declBus(c+50,"timer_wdata_o", false,-1, 31,0);
    tracep->declBus(c+51,"timer_be_o", false,-1, 3,0);
    tracep->declBit(c+52,"timer_rvalid_i", false,-1);
    tracep->declBus(c+53,"timer_rdata_i", false,-1, 31,0);
    tracep->declBit(c+54,"spictrl_req_o", false,-1);
    tracep->declBit(c+55,"spictrl_we_o", false,-1);
    tracep->declBus(c+56,"spictrl_addr_o", false,-1, 31,0);
    tracep->declBus(c+57,"spictrl_wdata_o", false,-1, 31,0);
    tracep->declBus(c+58,"spictrl_be_o", false,-1, 3,0);
    tracep->declBit(c+59,"spictrl_rvalid_i", false,-1);
    tracep->declBus(c+60,"spictrl_rdata_i", false,-1, 31,0);
    tracep->declBit(c+61,"i2c_req_o", false,-1);
    tracep->declBit(c+62,"i2c_we_o", false,-1);
    tracep->declBus(c+63,"i2c_addr_o", false,-1, 31,0);
    tracep->declBus(c+64,"i2c_wdata_o", false,-1, 31,0);
    tracep->declBus(c+65,"i2c_be_o", false,-1, 3,0);
    tracep->declBit(c+66,"i2c_rvalid_i", false,-1);
    tracep->declBus(c+67,"i2c_rdata_i", false,-1, 31,0);
    tracep->declBit(c+68,"spihost_req_o", false,-1);
    tracep->declBit(c+69,"spihost_we_o", false,-1);
    tracep->declBus(c+70,"spihost_addr_o", false,-1, 31,0);
    tracep->declBus(c+71,"spihost_wdata_o", false,-1, 31,0);
    tracep->declBus(c+72,"spihost_be_o", false,-1, 3,0);
    tracep->declBit(c+73,"spihost_rvalid_i", false,-1);
    tracep->declBus(c+74,"spihost_rdata_i", false,-1, 31,0);
    tracep->declBus(c+87,"BOOTROM_BASE", false,-1, 31,0);
    tracep->declBus(c+88,"BOOTROM_MASK", false,-1, 31,0);
    tracep->declBus(c+89,"SRAM_BASE", false,-1, 31,0);
    tracep->declBus(c+88,"SRAM_MASK", false,-1, 31,0);
    tracep->declBus(c+90,"XIP_BASE", false,-1, 31,0);
    tracep->declBus(c+91,"XIP_MASK", false,-1, 31,0);
    tracep->declBus(c+92,"UART_BASE", false,-1, 31,0);
    tracep->declBus(c+93,"UART_MASK", false,-1, 31,0);
    tracep->declBus(c+94,"GPIO_BASE", false,-1, 31,0);
    tracep->declBus(c+93,"GPIO_MASK", false,-1, 31,0);
    tracep->declBus(c+95,"TIMER_BASE", false,-1, 31,0);
    tracep->declBus(c+93,"TIMER_MASK", false,-1, 31,0);
    tracep->declBus(c+96,"SPICTRL_BASE", false,-1, 31,0);
    tracep->declBus(c+93,"SPICTRL_MASK", false,-1, 31,0);
    tracep->declBus(c+97,"I2C_BASE", false,-1, 31,0);
    tracep->declBus(c+93,"I2C_MASK", false,-1, 31,0);
    tracep->declBus(c+98,"SPIHOST_BASE", false,-1, 31,0);
    tracep->declBus(c+93,"SPIHOST_MASK", false,-1, 31,0);
    tracep->declBit(c+75,"bootrom_sel", false,-1);
    tracep->declBit(c+76,"sram_sel", false,-1);
    tracep->declBit(c+77,"xip_sel", false,-1);
    tracep->declBit(c+78,"uart_sel", false,-1);
    tracep->declBit(c+79,"gpio_sel", false,-1);
    tracep->declBit(c+80,"timer_sel", false,-1);
    tracep->declBit(c+81,"spictrl_sel", false,-1);
    tracep->declBit(c+82,"i2c_sel", false,-1);
    tracep->declBit(c+83,"spihost_sel", false,-1);
    tracep->declBus(c+84,"device_sel_resp", false,-1, 3,0);
    tracep->declBit(c+85,"decode_err_resp", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vwb_interconnect___024root__trace_init_top(Vwb_interconnect___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root__trace_init_top\n"); );
    // Body
    Vwb_interconnect___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vwb_interconnect___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vwb_interconnect___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vwb_interconnect___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vwb_interconnect___024root__trace_register(Vwb_interconnect___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vwb_interconnect___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vwb_interconnect___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vwb_interconnect___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vwb_interconnect___024root__trace_full_sub_0(Vwb_interconnect___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vwb_interconnect___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root__trace_full_top_0\n"); );
    // Init
    Vwb_interconnect___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwb_interconnect___024root*>(voidSelf);
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vwb_interconnect___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vwb_interconnect___024root__trace_full_sub_0(Vwb_interconnect___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_interconnect___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk_i));
    bufp->fullBit(oldp+2,(vlSelf->rst_ni));
    bufp->fullBit(oldp+3,(vlSelf->wb_cyc_i));
    bufp->fullBit(oldp+4,(vlSelf->wb_stb_i));
    bufp->fullBit(oldp+5,(vlSelf->wb_we_i));
    bufp->fullIData(oldp+6,(vlSelf->wb_adr_i),32);
    bufp->fullIData(oldp+7,(vlSelf->wb_dat_i),32);
    bufp->fullCData(oldp+8,(vlSelf->wb_sel_i),4);
    bufp->fullBit(oldp+9,(vlSelf->wb_ack_o));
    bufp->fullIData(oldp+10,(vlSelf->wb_dat_o),32);
    bufp->fullBit(oldp+11,(vlSelf->wb_stall_o));
    bufp->fullBit(oldp+12,(vlSelf->bootrom_req_o));
    bufp->fullBit(oldp+13,(vlSelf->bootrom_we_o));
    bufp->fullIData(oldp+14,(vlSelf->bootrom_addr_o),32);
    bufp->fullIData(oldp+15,(vlSelf->bootrom_wdata_o),32);
    bufp->fullCData(oldp+16,(vlSelf->bootrom_be_o),4);
    bufp->fullBit(oldp+17,(vlSelf->bootrom_rvalid_i));
    bufp->fullIData(oldp+18,(vlSelf->bootrom_rdata_i),32);
    bufp->fullBit(oldp+19,(vlSelf->sram_req_o));
    bufp->fullBit(oldp+20,(vlSelf->sram_we_o));
    bufp->fullIData(oldp+21,(vlSelf->sram_addr_o),32);
    bufp->fullIData(oldp+22,(vlSelf->sram_wdata_o),32);
    bufp->fullCData(oldp+23,(vlSelf->sram_be_o),4);
    bufp->fullBit(oldp+24,(vlSelf->sram_rvalid_i));
    bufp->fullIData(oldp+25,(vlSelf->sram_rdata_i),32);
    bufp->fullBit(oldp+26,(vlSelf->xip_req_o));
    bufp->fullBit(oldp+27,(vlSelf->xip_we_o));
    bufp->fullIData(oldp+28,(vlSelf->xip_addr_o),32);
    bufp->fullIData(oldp+29,(vlSelf->xip_wdata_o),32);
    bufp->fullCData(oldp+30,(vlSelf->xip_be_o),4);
    bufp->fullBit(oldp+31,(vlSelf->xip_rvalid_i));
    bufp->fullIData(oldp+32,(vlSelf->xip_rdata_i),32);
    bufp->fullBit(oldp+33,(vlSelf->uart_req_o));
    bufp->fullBit(oldp+34,(vlSelf->uart_we_o));
    bufp->fullIData(oldp+35,(vlSelf->uart_addr_o),32);
    bufp->fullIData(oldp+36,(vlSelf->uart_wdata_o),32);
    bufp->fullCData(oldp+37,(vlSelf->uart_be_o),4);
    bufp->fullBit(oldp+38,(vlSelf->uart_rvalid_i));
    bufp->fullIData(oldp+39,(vlSelf->uart_rdata_i),32);
    bufp->fullBit(oldp+40,(vlSelf->gpio_req_o));
    bufp->fullBit(oldp+41,(vlSelf->gpio_we_o));
    bufp->fullIData(oldp+42,(vlSelf->gpio_addr_o),32);
    bufp->fullIData(oldp+43,(vlSelf->gpio_wdata_o),32);
    bufp->fullCData(oldp+44,(vlSelf->gpio_be_o),4);
    bufp->fullBit(oldp+45,(vlSelf->gpio_rvalid_i));
    bufp->fullIData(oldp+46,(vlSelf->gpio_rdata_i),32);
    bufp->fullBit(oldp+47,(vlSelf->timer_req_o));
    bufp->fullBit(oldp+48,(vlSelf->timer_we_o));
    bufp->fullIData(oldp+49,(vlSelf->timer_addr_o),32);
    bufp->fullIData(oldp+50,(vlSelf->timer_wdata_o),32);
    bufp->fullCData(oldp+51,(vlSelf->timer_be_o),4);
    bufp->fullBit(oldp+52,(vlSelf->timer_rvalid_i));
    bufp->fullIData(oldp+53,(vlSelf->timer_rdata_i),32);
    bufp->fullBit(oldp+54,(vlSelf->spictrl_req_o));
    bufp->fullBit(oldp+55,(vlSelf->spictrl_we_o));
    bufp->fullIData(oldp+56,(vlSelf->spictrl_addr_o),32);
    bufp->fullIData(oldp+57,(vlSelf->spictrl_wdata_o),32);
    bufp->fullCData(oldp+58,(vlSelf->spictrl_be_o),4);
    bufp->fullBit(oldp+59,(vlSelf->spictrl_rvalid_i));
    bufp->fullIData(oldp+60,(vlSelf->spictrl_rdata_i),32);
    bufp->fullBit(oldp+61,(vlSelf->i2c_req_o));
    bufp->fullBit(oldp+62,(vlSelf->i2c_we_o));
    bufp->fullIData(oldp+63,(vlSelf->i2c_addr_o),32);
    bufp->fullIData(oldp+64,(vlSelf->i2c_wdata_o),32);
    bufp->fullCData(oldp+65,(vlSelf->i2c_be_o),4);
    bufp->fullBit(oldp+66,(vlSelf->i2c_rvalid_i));
    bufp->fullIData(oldp+67,(vlSelf->i2c_rdata_i),32);
    bufp->fullBit(oldp+68,(vlSelf->spihost_req_o));
    bufp->fullBit(oldp+69,(vlSelf->spihost_we_o));
    bufp->fullIData(oldp+70,(vlSelf->spihost_addr_o),32);
    bufp->fullIData(oldp+71,(vlSelf->spihost_wdata_o),32);
    bufp->fullCData(oldp+72,(vlSelf->spihost_be_o),4);
    bufp->fullBit(oldp+73,(vlSelf->spihost_rvalid_i));
    bufp->fullIData(oldp+74,(vlSelf->spihost_rdata_i),32);
    bufp->fullBit(oldp+75,((0x100000U == (0xfffff000U 
                                          & vlSelf->wb_adr_i))));
    bufp->fullBit(oldp+76,((0x101000U == (0xfffff000U 
                                          & vlSelf->wb_adr_i))));
    bufp->fullBit(oldp+77,((0x20000000U == (0xf0000000U 
                                            & vlSelf->wb_adr_i))));
    bufp->fullBit(oldp+78,((0x40000000U == (0xffffff00U 
                                            & vlSelf->wb_adr_i))));
    bufp->fullBit(oldp+79,((0x40000100U == (0xffffff00U 
                                            & vlSelf->wb_adr_i))));
    bufp->fullBit(oldp+80,((0x40000200U == (0xffffff00U 
                                            & vlSelf->wb_adr_i))));
    bufp->fullBit(oldp+81,((0x40000300U == (0xffffff00U 
                                            & vlSelf->wb_adr_i))));
    bufp->fullBit(oldp+82,((0x40000400U == (0xffffff00U 
                                            & vlSelf->wb_adr_i))));
    bufp->fullBit(oldp+83,((0x40000500U == (0xffffff00U 
                                            & vlSelf->wb_adr_i))));
    bufp->fullCData(oldp+84,(vlSelf->wb_interconnect__DOT__device_sel_resp),4);
    bufp->fullBit(oldp+85,(vlSelf->wb_interconnect__DOT__decode_err_resp));
    bufp->fullIData(oldp+86,(0x20U),32);
    bufp->fullIData(oldp+87,(0x100000U),32);
    bufp->fullIData(oldp+88,(0xfffff000U),32);
    bufp->fullIData(oldp+89,(0x101000U),32);
    bufp->fullIData(oldp+90,(0x20000000U),32);
    bufp->fullIData(oldp+91,(0xf0000000U),32);
    bufp->fullIData(oldp+92,(0x40000000U),32);
    bufp->fullIData(oldp+93,(0xffffff00U),32);
    bufp->fullIData(oldp+94,(0x40000100U),32);
    bufp->fullIData(oldp+95,(0x40000200U),32);
    bufp->fullIData(oldp+96,(0x40000300U),32);
    bufp->fullIData(oldp+97,(0x40000400U),32);
    bufp->fullIData(oldp+98,(0x40000500U),32);
}
