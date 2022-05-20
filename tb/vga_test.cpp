#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vvga_test.h"
#include <SDL2/SDL.h>

#define SCREEN_HEIGHT 240
#define SCREEN_WIDTH  256

vluint64_t sim_time = 0;

SDL_Window *gWindow = NULL;
SDL_Renderer *gRenderer = NULL;

bool init() {

    if(SDL_Init( SDL_INIT_VIDEO ) < 0) {
        printf("Unable to initialize SDL. SDL Error: %s\n", SDL_GetError());
        return false;
    }

    gWindow = SDL_CreateWindow("Texture-SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if ( !gWindow ) {
        printf("Unable to create Window. SDL Error: %s\n", SDL_GetError());
        return false;
    }

    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if ( !gRenderer ) {
        printf("Unable to create Renderer. SDL Error: %s\n", SDL_GetError());
        return false;
    }

    return true;
}

void close() {

    SDL_DestroyWindow( gWindow ) ;
    gWindow = NULL;

    SDL_DestroyRenderer( gRenderer );
    gRenderer = NULL;

    SDL_Quit();
}

int main(int argc, char **argv) {

    if(!init()) { return -1; }

    Vvga_test *dut = new Vvga_test;

    bool quit = false;
    SDL_Event e;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while(!quit) {

        while( SDL_PollEvent( &e ) != 0) {
            if( e.type == SDL_QUIT ) {
                quit = true;
            }
        }

        dut->pixel_clk ^= 1;
        dut->reset_n = 1;
        dut->eval();
        m_trace->dump(sim_time);
        if(dut->pixel_clk)
            printf("hcount = %d hsync = %d\n", dut->hcounter, dut->hsync);
        sim_time++;

        if(dut->vsync) { 
            SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
            SDL_RenderClear( gRenderer );
        }
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
