module vhsync #
(
    parameter int HACTIVE = 240,
    parameter int HSYNC   = 23,
    parameter int HFRONT  = 7,
    parameter int HBACK   = 23,
    parameter int VACTIVE = 256,
    parameter int VSYNC   = 3,
    parameter int VTOP    = 5,
    parameter int VBOTTOM = 14
)
(
    input  wire                    pixel_clk,
    input  wire                    reset_n,
    output wire                    hsync,
    output wire                    vsync,
    output wire                    display_on,
    output reg  [31:0]             hcounter,
    output reg  [31:0]             vcounter
);

    localparam int HMAX = HACTIVE + HFRONT + HBACK + HSYNC;
    localparam int VMAX = VACTIVE + VTOP   + VBOTTOM + VSYNC;

    always @(posedge pixel_clk)
        if(!reset_n)
            hcounter <= '0;
        else if (hcounter == (HMAX-1))
            hcounter <= '0;
        else
            hcounter <= hcounter + 1'b1;

    assign hsync = (hcounter >= (HACTIVE + HFRONT)) && (hcounter < (HACTIVE + HFRONT + HSYNC));

    always @(posedge pixel_clk)
        if(!reset_n)
            vcounter <= '0;
        else if (vcounter == (VMAX-1))
            vcounter <= '0;
        else if(hcounter == (HMAX-1))
            vcounter <= vcounter + 1'b1;

    assign vsync = (vcounter >= (VACTIVE + VTOP)) && (vcounter < (VACTIVE + VTOP + VSYNC));

    assign display_on = (hcounter < HACTIVE) && (vcounter < VACTIVE);

endmodule
