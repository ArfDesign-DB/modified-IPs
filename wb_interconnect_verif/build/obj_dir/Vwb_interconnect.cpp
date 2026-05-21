// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vwb_interconnect.h"
#include "Vwb_interconnect__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vwb_interconnect::Vwb_interconnect(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vwb_interconnect__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , wb_cyc_i{vlSymsp->TOP.wb_cyc_i}
    , wb_stb_i{vlSymsp->TOP.wb_stb_i}
    , wb_we_i{vlSymsp->TOP.wb_we_i}
    , wb_sel_i{vlSymsp->TOP.wb_sel_i}
    , wb_ack_o{vlSymsp->TOP.wb_ack_o}
    , wb_stall_o{vlSymsp->TOP.wb_stall_o}
    , bootrom_req_o{vlSymsp->TOP.bootrom_req_o}
    , bootrom_we_o{vlSymsp->TOP.bootrom_we_o}
    , bootrom_be_o{vlSymsp->TOP.bootrom_be_o}
    , bootrom_rvalid_i{vlSymsp->TOP.bootrom_rvalid_i}
    , sram_req_o{vlSymsp->TOP.sram_req_o}
    , sram_we_o{vlSymsp->TOP.sram_we_o}
    , sram_be_o{vlSymsp->TOP.sram_be_o}
    , sram_rvalid_i{vlSymsp->TOP.sram_rvalid_i}
    , xip_req_o{vlSymsp->TOP.xip_req_o}
    , xip_we_o{vlSymsp->TOP.xip_we_o}
    , xip_be_o{vlSymsp->TOP.xip_be_o}
    , xip_rvalid_i{vlSymsp->TOP.xip_rvalid_i}
    , uart_req_o{vlSymsp->TOP.uart_req_o}
    , uart_we_o{vlSymsp->TOP.uart_we_o}
    , uart_be_o{vlSymsp->TOP.uart_be_o}
    , uart_rvalid_i{vlSymsp->TOP.uart_rvalid_i}
    , gpio_req_o{vlSymsp->TOP.gpio_req_o}
    , gpio_we_o{vlSymsp->TOP.gpio_we_o}
    , gpio_be_o{vlSymsp->TOP.gpio_be_o}
    , gpio_rvalid_i{vlSymsp->TOP.gpio_rvalid_i}
    , timer_req_o{vlSymsp->TOP.timer_req_o}
    , timer_we_o{vlSymsp->TOP.timer_we_o}
    , timer_be_o{vlSymsp->TOP.timer_be_o}
    , timer_rvalid_i{vlSymsp->TOP.timer_rvalid_i}
    , spictrl_req_o{vlSymsp->TOP.spictrl_req_o}
    , spictrl_we_o{vlSymsp->TOP.spictrl_we_o}
    , spictrl_be_o{vlSymsp->TOP.spictrl_be_o}
    , spictrl_rvalid_i{vlSymsp->TOP.spictrl_rvalid_i}
    , i2c_req_o{vlSymsp->TOP.i2c_req_o}
    , i2c_we_o{vlSymsp->TOP.i2c_we_o}
    , i2c_be_o{vlSymsp->TOP.i2c_be_o}
    , i2c_rvalid_i{vlSymsp->TOP.i2c_rvalid_i}
    , spihost_req_o{vlSymsp->TOP.spihost_req_o}
    , spihost_we_o{vlSymsp->TOP.spihost_we_o}
    , spihost_be_o{vlSymsp->TOP.spihost_be_o}
    , spihost_rvalid_i{vlSymsp->TOP.spihost_rvalid_i}
    , wb_adr_i{vlSymsp->TOP.wb_adr_i}
    , wb_dat_i{vlSymsp->TOP.wb_dat_i}
    , wb_dat_o{vlSymsp->TOP.wb_dat_o}
    , bootrom_addr_o{vlSymsp->TOP.bootrom_addr_o}
    , bootrom_wdata_o{vlSymsp->TOP.bootrom_wdata_o}
    , bootrom_rdata_i{vlSymsp->TOP.bootrom_rdata_i}
    , sram_addr_o{vlSymsp->TOP.sram_addr_o}
    , sram_wdata_o{vlSymsp->TOP.sram_wdata_o}
    , sram_rdata_i{vlSymsp->TOP.sram_rdata_i}
    , xip_addr_o{vlSymsp->TOP.xip_addr_o}
    , xip_wdata_o{vlSymsp->TOP.xip_wdata_o}
    , xip_rdata_i{vlSymsp->TOP.xip_rdata_i}
    , uart_addr_o{vlSymsp->TOP.uart_addr_o}
    , uart_wdata_o{vlSymsp->TOP.uart_wdata_o}
    , uart_rdata_i{vlSymsp->TOP.uart_rdata_i}
    , gpio_addr_o{vlSymsp->TOP.gpio_addr_o}
    , gpio_wdata_o{vlSymsp->TOP.gpio_wdata_o}
    , gpio_rdata_i{vlSymsp->TOP.gpio_rdata_i}
    , timer_addr_o{vlSymsp->TOP.timer_addr_o}
    , timer_wdata_o{vlSymsp->TOP.timer_wdata_o}
    , timer_rdata_i{vlSymsp->TOP.timer_rdata_i}
    , spictrl_addr_o{vlSymsp->TOP.spictrl_addr_o}
    , spictrl_wdata_o{vlSymsp->TOP.spictrl_wdata_o}
    , spictrl_rdata_i{vlSymsp->TOP.spictrl_rdata_i}
    , i2c_addr_o{vlSymsp->TOP.i2c_addr_o}
    , i2c_wdata_o{vlSymsp->TOP.i2c_wdata_o}
    , i2c_rdata_i{vlSymsp->TOP.i2c_rdata_i}
    , spihost_addr_o{vlSymsp->TOP.spihost_addr_o}
    , spihost_wdata_o{vlSymsp->TOP.spihost_wdata_o}
    , spihost_rdata_i{vlSymsp->TOP.spihost_rdata_i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vwb_interconnect::Vwb_interconnect(const char* _vcname__)
    : Vwb_interconnect(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vwb_interconnect::~Vwb_interconnect() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vwb_interconnect___024root___eval_initial(Vwb_interconnect___024root* vlSelf);
void Vwb_interconnect___024root___eval_settle(Vwb_interconnect___024root* vlSelf);
void Vwb_interconnect___024root___eval(Vwb_interconnect___024root* vlSelf);
#ifdef VL_DEBUG
void Vwb_interconnect___024root___eval_debug_assertions(Vwb_interconnect___024root* vlSelf);
#endif  // VL_DEBUG
void Vwb_interconnect___024root___final(Vwb_interconnect___024root* vlSelf);

static void _eval_initial_loop(Vwb_interconnect__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vwb_interconnect___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vwb_interconnect___024root___eval_settle(&(vlSymsp->TOP));
        Vwb_interconnect___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vwb_interconnect::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vwb_interconnect::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vwb_interconnect___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vwb_interconnect___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vwb_interconnect::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vwb_interconnect::final() {
    Vwb_interconnect___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vwb_interconnect::hierName() const { return vlSymsp->name(); }
const char* Vwb_interconnect::modelName() const { return "Vwb_interconnect"; }
unsigned Vwb_interconnect::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vwb_interconnect::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vwb_interconnect___024root__trace_init_top(Vwb_interconnect___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vwb_interconnect___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwb_interconnect___024root*>(voidSelf);
    Vwb_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vwb_interconnect___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vwb_interconnect___024root__trace_register(Vwb_interconnect___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vwb_interconnect::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vwb_interconnect::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vwb_interconnect___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
