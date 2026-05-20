// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vgpio__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vgpio::Vgpio(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vgpio__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , device_req_i{vlSymsp->TOP.device_req_i}
    , device_we_i{vlSymsp->TOP.device_we_i}
    , device_be_i{vlSymsp->TOP.device_be_i}
    , device_rvalid_o{vlSymsp->TOP.device_rvalid_o}
    , gp_i{vlSymsp->TOP.gp_i}
    , gp_o{vlSymsp->TOP.gp_o}
    , device_addr_i{vlSymsp->TOP.device_addr_i}
    , device_wdata_i{vlSymsp->TOP.device_wdata_i}
    , device_rdata_o{vlSymsp->TOP.device_rdata_o}
    , __PVT__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc{vlSymsp->TOP.__PVT__gpio__DOT__gen_debounce__BRA__0__KET____DOT__dbnc}
    , __PVT__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc{vlSymsp->TOP.__PVT__gpio__DOT__gen_debounce__BRA__1__KET____DOT__dbnc}
    , __PVT__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc{vlSymsp->TOP.__PVT__gpio__DOT__gen_debounce__BRA__2__KET____DOT__dbnc}
    , __PVT__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc{vlSymsp->TOP.__PVT__gpio__DOT__gen_debounce__BRA__3__KET____DOT__dbnc}
    , __PVT__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc{vlSymsp->TOP.__PVT__gpio__DOT__gen_debounce__BRA__4__KET____DOT__dbnc}
    , __PVT__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc{vlSymsp->TOP.__PVT__gpio__DOT__gen_debounce__BRA__5__KET____DOT__dbnc}
    , __PVT__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc{vlSymsp->TOP.__PVT__gpio__DOT__gen_debounce__BRA__6__KET____DOT__dbnc}
    , __PVT__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc{vlSymsp->TOP.__PVT__gpio__DOT__gen_debounce__BRA__7__KET____DOT__dbnc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vgpio::Vgpio(const char* _vcname__)
    : Vgpio(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vgpio::~Vgpio() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vgpio___024root___eval_debug_assertions(Vgpio___024root* vlSelf);
#endif  // VL_DEBUG
void Vgpio___024root___eval_static(Vgpio___024root* vlSelf);
void Vgpio___024root___eval_initial(Vgpio___024root* vlSelf);
void Vgpio___024root___eval_settle(Vgpio___024root* vlSelf);
void Vgpio___024root___eval(Vgpio___024root* vlSelf);

void Vgpio::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vgpio::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vgpio___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vgpio___024root___eval_static(&(vlSymsp->TOP));
        Vgpio___024root___eval_initial(&(vlSymsp->TOP));
        Vgpio___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vgpio___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vgpio::eventsPending() { return false; }

uint64_t Vgpio::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vgpio::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vgpio___024root___eval_final(Vgpio___024root* vlSelf);

VL_ATTR_COLD void Vgpio::final() {
    Vgpio___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vgpio::hierName() const { return vlSymsp->name(); }
const char* Vgpio::modelName() const { return "Vgpio"; }
unsigned Vgpio::threads() const { return 1; }
void Vgpio::prepareClone() const { contextp()->prepareClone(); }
void Vgpio::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vgpio::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vgpio___024root__trace_decl_types(VerilatedVcd* tracep);

void Vgpio___024root__trace_init_top(Vgpio___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vgpio___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgpio___024root*>(voidSelf);
    Vgpio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vgpio___024root__trace_decl_types(tracep);
    Vgpio___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vgpio___024root__trace_register(Vgpio___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vgpio::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vgpio::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vgpio___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
