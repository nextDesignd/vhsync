// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvhsync.h"
#include "Vvhsync__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vvhsync::Vvhsync(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vvhsync__Syms(_vcontextp__, _vcname__, this)}
    , pixel_clk{vlSymsp->TOP.pixel_clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , hsync{vlSymsp->TOP.hsync}
    , vsync{vlSymsp->TOP.vsync}
    , display_on{vlSymsp->TOP.display_on}
    , hcounter{vlSymsp->TOP.hcounter}
    , vcounter{vlSymsp->TOP.vcounter}
    , rootp{&(vlSymsp->TOP)}
{
}

Vvhsync::Vvhsync(const char* _vcname__)
    : Vvhsync(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vvhsync::~Vvhsync() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vvhsync___024root___eval_initial(Vvhsync___024root* vlSelf);
void Vvhsync___024root___eval_settle(Vvhsync___024root* vlSelf);
void Vvhsync___024root___eval(Vvhsync___024root* vlSelf);
#ifdef VL_DEBUG
void Vvhsync___024root___eval_debug_assertions(Vvhsync___024root* vlSelf);
#endif  // VL_DEBUG
void Vvhsync___024root___final(Vvhsync___024root* vlSelf);

static void _eval_initial_loop(Vvhsync__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vvhsync___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vvhsync___024root___eval_settle(&(vlSymsp->TOP));
        Vvhsync___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vvhsync::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvhsync::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvhsync___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vvhsync___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vvhsync::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vvhsync::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vvhsync::final() {
    Vvhsync___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vvhsync___024root__trace_init_top(Vvhsync___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vvhsync___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvhsync___024root*>(voidSelf);
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vvhsync___024root__trace_init_top(vlSelf, tracep);
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vvhsync___024root__trace_register(Vvhsync___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vvhsync::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vvhsync___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
