// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvhsync.h for the primary calling header

#include "verilated.h"

#include "Vvhsync__Syms.h"
#include "Vvhsync___024root.h"

void Vvhsync___024root___ctor_var_reset(Vvhsync___024root* vlSelf);

Vvhsync___024root::Vvhsync___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vvhsync___024root___ctor_var_reset(this);
}

void Vvhsync___024root::__Vconfigure(Vvhsync__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vvhsync___024root::~Vvhsync___024root() {
}
