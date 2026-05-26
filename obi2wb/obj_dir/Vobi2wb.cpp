// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vobi2wb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vobi2wb::Vobi2wb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vobi2wb__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , obi_req_i{vlSymsp->TOP.obi_req_i}
    , obi_gnt_o{vlSymsp->TOP.obi_gnt_o}
    , obi_we_i{vlSymsp->TOP.obi_we_i}
    , obi_be_i{vlSymsp->TOP.obi_be_i}
    , obi_rvalid_o{vlSymsp->TOP.obi_rvalid_o}
    , wb_cyc_o{vlSymsp->TOP.wb_cyc_o}
    , wb_stb_o{vlSymsp->TOP.wb_stb_o}
    , wb_we_o{vlSymsp->TOP.wb_we_o}
    , wb_sel_o{vlSymsp->TOP.wb_sel_o}
    , wb_ack_i{vlSymsp->TOP.wb_ack_i}
    , wb_stall_i{vlSymsp->TOP.wb_stall_i}
    , obi_addr_i{vlSymsp->TOP.obi_addr_i}
    , obi_wdata_i{vlSymsp->TOP.obi_wdata_i}
    , obi_rdata_o{vlSymsp->TOP.obi_rdata_o}
    , wb_adr_o{vlSymsp->TOP.wb_adr_o}
    , wb_dat_o{vlSymsp->TOP.wb_dat_o}
    , wb_dat_i{vlSymsp->TOP.wb_dat_i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vobi2wb::Vobi2wb(const char* _vcname__)
    : Vobi2wb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vobi2wb::~Vobi2wb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vobi2wb___024root___eval_debug_assertions(Vobi2wb___024root* vlSelf);
#endif  // VL_DEBUG
void Vobi2wb___024root___eval_static(Vobi2wb___024root* vlSelf);
void Vobi2wb___024root___eval_initial(Vobi2wb___024root* vlSelf);
void Vobi2wb___024root___eval_settle(Vobi2wb___024root* vlSelf);
void Vobi2wb___024root___eval(Vobi2wb___024root* vlSelf);

void Vobi2wb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vobi2wb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vobi2wb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vobi2wb___024root___eval_static(&(vlSymsp->TOP));
        Vobi2wb___024root___eval_initial(&(vlSymsp->TOP));
        Vobi2wb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vobi2wb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vobi2wb::eventsPending() { return false; }

uint64_t Vobi2wb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vobi2wb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vobi2wb___024root___eval_final(Vobi2wb___024root* vlSelf);

VL_ATTR_COLD void Vobi2wb::final() {
    Vobi2wb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vobi2wb::hierName() const { return vlSymsp->name(); }
const char* Vobi2wb::modelName() const { return "Vobi2wb"; }
unsigned Vobi2wb::threads() const { return 1; }
void Vobi2wb::prepareClone() const { contextp()->prepareClone(); }
void Vobi2wb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vobi2wb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vobi2wb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vobi2wb___024root__trace_init_top(Vobi2wb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vobi2wb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vobi2wb___024root*>(voidSelf);
    Vobi2wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vobi2wb___024root__trace_decl_types(tracep);
    Vobi2wb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vobi2wb___024root__trace_register(Vobi2wb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vobi2wb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vobi2wb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vobi2wb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
