`timescale 1ns / 1ps


module i2s_in(
    input   clk,
    input   rst_,

    input   in_i2s_sd,
    input   i2s_ws,
    input   i2s_sck_posedge_strobe,
    
    output  reg [15:0] out_pcm,
    output             out_ws,
    output  reg        out_xfc
    );
    
    reg         chan_idx;
    reg [3:0]   bit_idx;
    reg         cap_ws;
    
    reg         next_xfc;
    
    assign out_ws = cap_ws;
    
    always @ (posedge clk)
    begin
        next_xfc <= 0;
        
        if (!rst_)
        begin
            out_xfc     <= 0;
            chan_idx    <= 0;
            bit_idx     <= 0;
        end
        else
        begin
            out_xfc <= next_xfc;
            
            if (i2s_sck_posedge_strobe)
            begin
                cap_ws              <= i2s_ws;
                out_pcm[bit_idx]    <= in_i2s_sd;

                if (cap_ws != i2s_ws)
                begin
                    bit_idx     <= 4'hF;
                    next_xfc    <= 1;
                end
                else
                    bit_idx     <= bit_idx - 1;
            end
        end
    end
    
endmodule
