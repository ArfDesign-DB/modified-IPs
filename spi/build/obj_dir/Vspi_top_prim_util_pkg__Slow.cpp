// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_top.h for the primary calling header

#include "verilated.h"

#include "Vspi_top__Syms.h"
#include "Vspi_top_prim_util_pkg.h"

void Vspi_top_prim_util_pkg___ctor_var_reset(Vspi_top_prim_util_pkg* vlSelf);

Vspi_top_prim_util_pkg::Vspi_top_prim_util_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vspi_top_prim_util_pkg___ctor_var_reset(this);
}

void Vspi_top_prim_util_pkg___configure_coverage(Vspi_top_prim_util_pkg* vlSelf, bool first);

void Vspi_top_prim_util_pkg::__Vconfigure(Vspi_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vspi_top_prim_util_pkg___configure_coverage(this, first);
}

Vspi_top_prim_util_pkg::~Vspi_top_prim_util_pkg() {
}

// Coverage
void Vspi_top_prim_util_pkg::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
