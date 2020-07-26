`timescale 1ns / 1ps

module parallel_in(
    input   clk,
    input   rst_,

    input   [ 7:0]  in_parallel_pcm,
    input           i2s_sck_posedge_strobe,
    input           in_ws,
    output  [15:0]  out_pcm,
    output reg      out_xfc
    );

reg in_ws_p1;

wire in_ws_pulse;
    
always @ (posedge clk)
if (!rst_)
    in_ws_p1 <= 0;
else
    in_ws_p1 <= in_ws ;

assign in_ws_pulse = in_ws & ~in_ws_p1;

always @ (posedge clk)
if (!rst_)
    out_xfc <= 0;
else
    out_xfc <= in_ws_pulse;

assign out_pcm = {in_parallel_pcm, 8'h00};

endmodule
