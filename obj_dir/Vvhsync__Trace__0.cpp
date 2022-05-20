// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvhsync__Syms.h"


void Vvhsync___024root__trace_chg_sub_0(Vvhsync___024root* vlSelf, VerilatedVcd* tracep);

void Vvhsync___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root__trace_chg_top_0\n"); );
    // Init
    Vvhsync___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvhsync___024root*>(voidSelf);
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vvhsync___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vvhsync___024root__trace_chg_sub_0(Vvhsync___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgBit(oldp+0,(vlSelf->pixel_clk));
    tracep->chgBit(oldp+1,(vlSelf->reset_n));
    tracep->chgBit(oldp+2,(vlSelf->hsync));
    tracep->chgBit(oldp+3,(vlSelf->vsync));
    tracep->chgBit(oldp+4,(vlSelf->display_on));
    tracep->chgIData(oldp+5,(vlSelf->hcounter),32);
    tracep->chgIData(oldp+6,(vlSelf->vcounter),32);
}

void Vvhsync___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root__trace_cleanup\n"); );
    // Init
    Vvhsync___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvhsync___024root*>(voidSelf);
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
