`timescale 1ns / 1ps


module i2s_out(
    input   clk,
    input   rst_,

    input   [15:0] in_pcm,
    input   in_xfc,

    output  out_i2s_sd,
    input   out_i2s_ws,
    input   out_i2s_sck
    );
endmodule
