`timescale 1ns / 1ps

module i2s_out(
    input   clk,
    input   rst_,

    input   [15:0] in_pcm,
    input   in_xfc,

    input   in_i2s_ws,
    input   i2s_sck_posedge_strobe,     // used to sample ws
    input   i2s_sck_negedge_strobe,     // used to generate sd
    output  reg out_i2s_sd
    );

reg [15:0]  cur_val;    
reg         ws_posedge_sck;

reg [ 3:0]  bit_idx_posedge_sck;
reg [ 3:0]  bit_idx_negedge_sck;

always @ (posedge clk)
if (!rst_)
begin
    ws_posedge_sck      <= 0;
    bit_idx_posedge_sck <= 0;
end
else if (i2s_sck_posedge_strobe)
begin
    ws_posedge_sck <= in_i2s_ws;
    
    if (in_i2s_ws & ~ws_posedge_sck)
        bit_idx_posedge_sck <= 15;
    else
        bit_idx_posedge_sck <= bit_idx_posedge_sck - 1;
end

always @ (posedge clk)
if (!rst_)
begin
    bit_idx_negedge_sck <= 0;
end
else if (i2s_sck_negedge_strobe)
begin
    bit_idx_negedge_sck <= bit_idx_posedge_sck;
end

always @ (posedge clk)
if (!rst_)
begin
    cur_val     <=  0;   
    out_i2s_sd  <= 0;
end
else
begin
    cur_val     <=  in_pcm;
    out_i2s_sd  <=  cur_val[bit_idx_negedge_sck];
end

endmodule
