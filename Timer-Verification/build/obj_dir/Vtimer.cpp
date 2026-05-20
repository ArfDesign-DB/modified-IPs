// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtimer__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtimer::Vtimer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtimer__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , timer_req_i{vlSymsp->TOP.timer_req_i}
    , timer_we_i{vlSymsp->TOP.timer_we_i}
    , timer_be_i{vlSymsp->TOP.timer_be_i}
    , timer_rvalid_o{vlSymsp->TOP.timer_rvalid_o}
    , timer_err_o{vlSymsp->TOP.timer_err_o}
    , timer_intr_o{vlSymsp->TOP.timer_intr_o}
    , timer_addr_i{vlSymsp->TOP.timer_addr_i}
    , timer_wdata_i{vlSymsp->TOP.timer_wdata_i}
    , timer_rdata_o{vlSymsp->TOP.timer_rdata_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtimer::Vtimer(const char* _vcname__)
    : Vtimer(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtimer::~Vtimer() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtimer___024root___eval_debug_assertions(Vtimer___024root* vlSelf);
#endif  // VL_DEBUG
void Vtimer___024root___eval_static(Vtimer___024root* vlSelf);
void Vtimer___024root___eval_initial(Vtimer___024root* vlSelf);
void Vtimer___024root___eval_settle(Vtimer___024root* vlSelf);
void Vtimer___024root___eval(Vtimer___024root* vlSelf);

void Vtimer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtimer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtimer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtimer___024root___eval_static(&(vlSymsp->TOP));
        Vtimer___024root___eval_initial(&(vlSymsp->TOP));
        Vtimer___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtimer___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtimer::eventsPending() { return false; }

uint64_t Vtimer::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtimer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtimer___024root___eval_final(Vtimer___024root* vlSelf);

VL_ATTR_COLD void Vtimer::final() {
    Vtimer___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtimer::hierName() const { return vlSymsp->name(); }
const char* Vtimer::modelName() const { return "Vtimer"; }
unsigned Vtimer::threads() const { return 1; }
void Vtimer::prepareClone() const { contextp()->prepareClone(); }
void Vtimer::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtimer::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtimer___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtimer___024root__trace_init_top(Vtimer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtimer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtimer___024root*>(voidSelf);
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtimer___024root__trace_decl_types(tracep);
    Vtimer___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtimer___024root__trace_register(Vtimer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtimer::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtimer::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtimer___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
