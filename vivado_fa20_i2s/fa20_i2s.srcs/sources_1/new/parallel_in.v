`timescale 1ns / 1ps


module parallel_in(
    input   clk,
    input   rst_,

    input   [7:0] in_parallel_pcm,
    input   in_xfc,

    output  [15:0] out_pcm,
    output  out_xfc
    );
    
    assign out_pcm = {in_parallel_pcm, 8'h00};
    assign out_xfc = in_xfc;
    
endmodule
