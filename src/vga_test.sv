module vhsync
(
    input  wire          pixel_clk,
    input  wire          reset_n,
    output wire          hsync,
    output wire          vsync,
    output wire          display_on,
    output reg  [31:0]   hcounter,
    output reg  [31:0]   vcounter
    output reg  [7:0]    r,
    output reg  [7:0]    g,
    output reg  [7:0]    b,
);

    vhsync vhsync(.*);

    always @(posedge pixel_clk)
        if(!reset_n || !display_on) begin
            r <= '0;
            g <= '0;
            b <= '0;
        end else begin
            r <= 0xFF;
            g <= '0;
            b <= '0;
        end

endmodule
