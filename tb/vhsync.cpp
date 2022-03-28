#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vvhsync.h"

#define MAX_SIM_TIME 2000
vluint64_t sim_time = 0;

int main(int argc, char **argv) {

    Vvhsync *dut = new Vvhsync;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while(sim_time < MAX_SIM_TIME) {
        dut->pixel_clk ^= 1;
        dut->reset_n = 1;
        dut->eval();
        m_trace->dump(sim_time);
        if(dut->pixel_clk)
            printf("hcount = %d hsync = %d\n", dut->hcounter, dut->hsync);
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
