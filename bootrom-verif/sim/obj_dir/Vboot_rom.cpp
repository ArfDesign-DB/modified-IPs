// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vboot_rom__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vboot_rom::Vboot_rom(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vboot_rom__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , addr_i{vlSymsp->TOP.addr_i}
    , data_o{vlSymsp->TOP.data_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vboot_rom::Vboot_rom(const char* _vcname__)
    : Vboot_rom(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vboot_rom::~Vboot_rom() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vboot_rom___024root___eval_debug_assertions(Vboot_rom___024root* vlSelf);
#endif  // VL_DEBUG
void Vboot_rom___024root___eval_static(Vboot_rom___024root* vlSelf);
void Vboot_rom___024root___eval_initial(Vboot_rom___024root* vlSelf);
void Vboot_rom___024root___eval_settle(Vboot_rom___024root* vlSelf);
void Vboot_rom___024root___eval(Vboot_rom___024root* vlSelf);

void Vboot_rom::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vboot_rom::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vboot_rom___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vboot_rom___024root___eval_static(&(vlSymsp->TOP));
        Vboot_rom___024root___eval_initial(&(vlSymsp->TOP));
        Vboot_rom___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vboot_rom___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vboot_rom::eventsPending() { return false; }

uint64_t Vboot_rom::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vboot_rom::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vboot_rom___024root___eval_final(Vboot_rom___024root* vlSelf);

VL_ATTR_COLD void Vboot_rom::final() {
    contextp()->executingFinal(true);
    Vboot_rom___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vboot_rom::hierName() const { return vlSymsp->name(); }
const char* Vboot_rom::modelName() const { return "Vboot_rom"; }
unsigned Vboot_rom::threads() const { return 1; }
void Vboot_rom::prepareClone() const { contextp()->prepareClone(); }
void Vboot_rom::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vboot_rom::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vboot_rom___024root__trace_decl_types(VerilatedVcd* tracep);

void Vboot_rom___024root__trace_init_top(Vboot_rom___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vboot_rom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vboot_rom___024root*>(voidSelf);
    Vboot_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vboot_rom___024root__trace_decl_types(tracep);
    Vboot_rom___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vboot_rom___024root__trace_register(Vboot_rom___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vboot_rom::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vboot_rom::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 6);
    Vboot_rom___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
