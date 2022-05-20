// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvhsync.h for the primary calling header

#include "verilated.h"

#include "Vvhsync___024root.h"

VL_ATTR_COLD void Vvhsync___024root___settle__TOP__2(Vvhsync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->hsync = ((0xf7U <= vlSelf->hcounter) & 
                     (0x10eU > vlSelf->hcounter));
    vlSelf->vsync = ((0x105U <= vlSelf->vcounter) & 
                     (0x108U > vlSelf->vcounter));
    vlSelf->display_on = ((0xf0U > vlSelf->hcounter) 
                          & (0x100U > vlSelf->vcounter));
}

VL_ATTR_COLD void Vvhsync___024root___eval_initial(Vvhsync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__pixel_clk = vlSelf->pixel_clk;
}

VL_ATTR_COLD void Vvhsync___024root___eval_settle(Vvhsync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root___eval_settle\n"); );
    // Body
    Vvhsync___024root___settle__TOP__2(vlSelf);
}

VL_ATTR_COLD void Vvhsync___024root___final(Vvhsync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root___final\n"); );
}

VL_ATTR_COLD void Vvhsync___024root___ctor_var_reset(Vvhsync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->pixel_clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->hsync = VL_RAND_RESET_I(1);
    vlSelf->vsync = VL_RAND_RESET_I(1);
    vlSelf->display_on = VL_RAND_RESET_I(1);
    vlSelf->hcounter = VL_RAND_RESET_I(32);
    vlSelf->vcounter = VL_RAND_RESET_I(32);
}
