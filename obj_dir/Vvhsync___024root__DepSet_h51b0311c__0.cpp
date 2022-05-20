// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvhsync.h for the primary calling header

#include "verilated.h"

#include "Vvhsync___024root.h"

VL_INLINE_OPT void Vvhsync___024root___sequent__TOP__1(Vvhsync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root___sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__hcounter;
    IData/*31:0*/ __Vdly__vcounter;
    // Body
    __Vdly__hcounter = vlSelf->hcounter;
    __Vdly__vcounter = vlSelf->vcounter;
    if (vlSelf->reset_n) {
        __Vdly__hcounter = ((0x124U == vlSelf->hcounter)
                             ? 0U : ((IData)(1U) + vlSelf->hcounter));
        if ((0x115U == vlSelf->vcounter)) {
            __Vdly__vcounter = 0U;
        } else if ((0x124U == vlSelf->hcounter)) {
            __Vdly__vcounter = ((IData)(1U) + vlSelf->vcounter);
        }
    } else {
        __Vdly__hcounter = 0U;
        __Vdly__vcounter = 0U;
    }
    vlSelf->vcounter = __Vdly__vcounter;
    vlSelf->hcounter = __Vdly__hcounter;
    vlSelf->vsync = ((0x105U <= vlSelf->vcounter) & 
                     (0x108U > vlSelf->vcounter));
    vlSelf->hsync = ((0xf7U <= vlSelf->hcounter) & 
                     (0x10eU > vlSelf->hcounter));
    vlSelf->display_on = ((0xf0U > vlSelf->hcounter) 
                          & (0x100U > vlSelf->vcounter));
}

void Vvhsync___024root___eval(Vvhsync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->pixel_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__pixel_clk)))) {
        Vvhsync___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__pixel_clk = vlSelf->pixel_clk;
}

#ifdef VL_DEBUG
void Vvhsync___024root___eval_debug_assertions(Vvhsync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->pixel_clk & 0xfeU))) {
        Verilated::overWidthError("pixel_clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
}
#endif  // VL_DEBUG
