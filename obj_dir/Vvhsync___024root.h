// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvhsync.h for the primary calling header

#ifndef VERILATED_VVHSYNC___024ROOT_H_
#define VERILATED_VVHSYNC___024ROOT_H_  // guard

#include "verilated.h"

class Vvhsync__Syms;
VL_MODULE(Vvhsync___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(pixel_clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(display_on,0,0);
    CData/*0:0*/ __Vclklast__TOP__pixel_clk;
    VL_OUT(hcounter,31,0);
    VL_OUT(vcounter,31,0);

    // INTERNAL VARIABLES
    Vvhsync__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vvhsync___024root(const char* name);
    ~Vvhsync___024root();
    VL_UNCOPYABLE(Vvhsync___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vvhsync__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
