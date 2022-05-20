// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvhsync__Syms.h"


VL_ATTR_COLD void Vvhsync___024root__trace_init_sub_0(Vvhsync___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vvhsync___024root__trace_init_top(Vvhsync___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root__trace_init_top\n"); );
    // Body
    Vvhsync___024root__trace_init_sub_0(vlSelf, tracep);
}

VL_ATTR_COLD void Vvhsync___024root__trace_init_sub_0(Vvhsync___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+1,"pixel_clk", false,-1);
    tracep->declBit(c+2,"reset_n", false,-1);
    tracep->declBit(c+3,"hsync", false,-1);
    tracep->declBit(c+4,"vsync", false,-1);
    tracep->declBit(c+5,"display_on", false,-1);
    tracep->declBus(c+6,"hcounter", false,-1, 31,0);
    tracep->declBus(c+7,"vcounter", false,-1, 31,0);
    tracep->declBus(c+8,"vhsync HACTIVE", false,-1, 31,0);
    tracep->declBus(c+9,"vhsync HSYNC", false,-1, 31,0);
    tracep->declBus(c+10,"vhsync HFRONT", false,-1, 31,0);
    tracep->declBus(c+9,"vhsync HBACK", false,-1, 31,0);
    tracep->declBus(c+11,"vhsync VACTIVE", false,-1, 31,0);
    tracep->declBus(c+12,"vhsync VSYNC", false,-1, 31,0);
    tracep->declBus(c+13,"vhsync VTOP", false,-1, 31,0);
    tracep->declBus(c+14,"vhsync VBOTTOM", false,-1, 31,0);
    tracep->declBit(c+1,"vhsync pixel_clk", false,-1);
    tracep->declBit(c+2,"vhsync reset_n", false,-1);
    tracep->declBit(c+3,"vhsync hsync", false,-1);
    tracep->declBit(c+4,"vhsync vsync", false,-1);
    tracep->declBit(c+5,"vhsync display_on", false,-1);
    tracep->declBus(c+6,"vhsync hcounter", false,-1, 31,0);
    tracep->declBus(c+7,"vhsync vcounter", false,-1, 31,0);
    tracep->declBus(c+15,"vhsync HMAX", false,-1, 31,0);
    tracep->declBus(c+16,"vhsync VMAX", false,-1, 31,0);
}

VL_ATTR_COLD void Vvhsync___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vvhsync___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vvhsync___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vvhsync___024root__trace_register(Vvhsync___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vvhsync___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vvhsync___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vvhsync___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vvhsync___024root__trace_full_sub_0(Vvhsync___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vvhsync___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root__trace_full_top_0\n"); );
    // Init
    Vvhsync___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvhsync___024root*>(voidSelf);
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vvhsync___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vvhsync___024root__trace_full_sub_0(Vvhsync___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vvhsync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvhsync___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->pixel_clk));
    tracep->fullBit(oldp+2,(vlSelf->reset_n));
    tracep->fullBit(oldp+3,(vlSelf->hsync));
    tracep->fullBit(oldp+4,(vlSelf->vsync));
    tracep->fullBit(oldp+5,(vlSelf->display_on));
    tracep->fullIData(oldp+6,(vlSelf->hcounter),32);
    tracep->fullIData(oldp+7,(vlSelf->vcounter),32);
    tracep->fullIData(oldp+8,(0xf0U),32);
    tracep->fullIData(oldp+9,(0x17U),32);
    tracep->fullIData(oldp+10,(7U),32);
    tracep->fullIData(oldp+11,(0x100U),32);
    tracep->fullIData(oldp+12,(3U),32);
    tracep->fullIData(oldp+13,(5U),32);
    tracep->fullIData(oldp+14,(0xeU),32);
    tracep->fullIData(oldp+15,(0x125U),32);
    tracep->fullIData(oldp+16,(0x116U),32);
}
