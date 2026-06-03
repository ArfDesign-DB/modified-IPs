// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vi2c_wb_wrapper.h"
#include "Vi2c_wb_wrapper__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vi2c_wb_wrapper::Vi2c_wb_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vi2c_wb_wrapper__Syms(_vcontextp__, _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , i2c_req_o{vlSymsp->TOP.i2c_req_o}
    , i2c_we_o{vlSymsp->TOP.i2c_we_o}
    , i2c_be_o{vlSymsp->TOP.i2c_be_o}
    , i2c_rvalid_i{vlSymsp->TOP.i2c_rvalid_i}
    , scl_pad_i{vlSymsp->TOP.scl_pad_i}
    , scl_pad_o{vlSymsp->TOP.scl_pad_o}
    , scl_padoen_o{vlSymsp->TOP.scl_padoen_o}
    , sda_pad_i{vlSymsp->TOP.sda_pad_i}
    , sda_pad_o{vlSymsp->TOP.sda_pad_o}
    , sda_padoen_o{vlSymsp->TOP.sda_padoen_o}
    , wb_inta_o{vlSymsp->TOP.wb_inta_o}
    , i2c_addr_o{vlSymsp->TOP.i2c_addr_o}
    , i2c_wdata_o{vlSymsp->TOP.i2c_wdata_o}
    , i2c_rdata_i{vlSymsp->TOP.i2c_rdata_i}
    , rootp{&(vlSymsp->TOP)}
{
}

Vi2c_wb_wrapper::Vi2c_wb_wrapper(const char* _vcname__)
    : Vi2c_wb_wrapper(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vi2c_wb_wrapper::~Vi2c_wb_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vi2c_wb_wrapper___024root___eval_initial(Vi2c_wb_wrapper___024root* vlSelf);
void Vi2c_wb_wrapper___024root___eval_settle(Vi2c_wb_wrapper___024root* vlSelf);
void Vi2c_wb_wrapper___024root___eval(Vi2c_wb_wrapper___024root* vlSelf);
QData Vi2c_wb_wrapper___024root___change_request(Vi2c_wb_wrapper___024root* vlSelf);
#ifdef VL_DEBUG
void Vi2c_wb_wrapper___024root___eval_debug_assertions(Vi2c_wb_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vi2c_wb_wrapper___024root___final(Vi2c_wb_wrapper___024root* vlSelf);

static void _eval_initial_loop(Vi2c_wb_wrapper__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vi2c_wb_wrapper___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vi2c_wb_wrapper___024root___eval_settle(&(vlSymsp->TOP));
        Vi2c_wb_wrapper___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vi2c_wb_wrapper___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vi2c_wb_wrapper___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vi2c_wb_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vi2c_wb_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vi2c_wb_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vi2c_wb_wrapper___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vi2c_wb_wrapper___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/shrinidhi/IBEX/I2C/rtl/i2c_wb_wrapper.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vi2c_wb_wrapper___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vi2c_wb_wrapper::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vi2c_wb_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vi2c_wb_wrapper::final() {
    Vi2c_wb_wrapper___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vi2c_wb_wrapper___024root__trace_init_top(Vi2c_wb_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vi2c_wb_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vi2c_wb_wrapper___024root*>(voidSelf);
    Vi2c_wb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vi2c_wb_wrapper___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vi2c_wb_wrapper___024root__trace_register(Vi2c_wb_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vi2c_wb_wrapper::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vi2c_wb_wrapper___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
