// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vspi_top.h"
#include "Vspi_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vspi_top::Vspi_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vspi_top__Syms(_vcontextp__, _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , device_req_i{vlSymsp->TOP.device_req_i}
    , device_we_i{vlSymsp->TOP.device_we_i}
    , device_be_i{vlSymsp->TOP.device_be_i}
    , device_rvalid_o{vlSymsp->TOP.device_rvalid_o}
    , spi_rx_i{vlSymsp->TOP.spi_rx_i}
    , spi_tx_o{vlSymsp->TOP.spi_tx_o}
    , sck_o{vlSymsp->TOP.sck_o}
    , byte_data_o{vlSymsp->TOP.byte_data_o}
    , device_addr_i{vlSymsp->TOP.device_addr_i}
    , device_wdata_i{vlSymsp->TOP.device_wdata_i}
    , device_rdata_o{vlSymsp->TOP.device_rdata_o}
    , __PVT__prim_util_pkg{vlSymsp->TOP.__PVT__prim_util_pkg}
    , rootp{&(vlSymsp->TOP)}
{
}

Vspi_top::Vspi_top(const char* _vcname__)
    : Vspi_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vspi_top::~Vspi_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vspi_top___024root___eval_initial(Vspi_top___024root* vlSelf);
void Vspi_top___024root___eval_settle(Vspi_top___024root* vlSelf);
void Vspi_top___024root___eval(Vspi_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vspi_top___024root___eval_debug_assertions(Vspi_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vspi_top___024root___final(Vspi_top___024root* vlSelf);

static void _eval_initial_loop(Vspi_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vspi_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vspi_top___024root___eval_settle(&(vlSymsp->TOP));
        Vspi_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vspi_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vspi_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vspi_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vspi_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vspi_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vspi_top::final() {
    Vspi_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vspi_top___024root__trace_init_top(Vspi_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vspi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_top___024root*>(voidSelf);
    Vspi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vspi_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vspi_top___024root__trace_register(Vspi_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vspi_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vspi_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
