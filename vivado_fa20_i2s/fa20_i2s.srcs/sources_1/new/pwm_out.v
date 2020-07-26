`timescale 1ns / 1ps

// clock rate is 100 MHz
// audio sample rate is 48 KHz
// 2083 clock cycles per sample, about 11 bits/sample, but takes 12 bits

`define CYCLES_PER_AUD_SAMPLE (100_000_000/48_000)

module pwm_out(
    input               clk,
    input               rst_,

    input      [15:0]   in_pcm,
    input               in_ws,
    input               in_xfc,

    output reg [15:0]   out_parallel_pcm,
    output reg          out_pwm
    );
    
    // 12-bits, range 4095 to 0
    reg [11:0] pwm_control_level;
    reg [11:0] sawtooth;

    wire [10:0] pcm_11b;
    wire [10:0] pcm_11b_offset_binary;
    wire [11:0] offset_pcm_11b;         // need 12 bits to hold offset val
    
    wire pwm_sig;
    
    assign pcm_11b = out_parallel_pcm[15:5];
    assign pcm_11b_offset_binary = pcm_11b + 11'h400;
    
    // (`CYCLES_PER_AUD_SAMPLE/2) is 1041
    // need to nudge up by 1041-1024, to get zero correct
    assign offset_pcm_11b = pcm_11b_offset_binary + ((`CYCLES_PER_AUD_SAMPLE/2) - 11'h400);
    assign pwm_sig = pwm_control_level > sawtooth;
        
    always @ (posedge clk)
    if (!rst_)
        out_pwm <= 0;
    else
        out_pwm <= pwm_sig;
        
    always @ (posedge clk)
    if (!rst_)
    begin
        out_parallel_pcm    <= 16'h0;
        pwm_control_level   <= (`CYCLES_PER_AUD_SAMPLE/2);
    end
    else if (in_xfc)
    begin
        // Audio sample is 2's complement, e.g. 0x8000 is the lowest value
        // So add 0x8000 to get 'offset-binary'     
        out_parallel_pcm    <= in_pcm;
        pwm_control_level   <= offset_pcm_11b;
    end

    always @ (posedge clk)
    if (!rst_)
        sawtooth <= 12'h0;
    else if (in_xfc && (in_ws == 0))
        sawtooth <= (`CYCLES_PER_AUD_SAMPLE-1);
    else if (sawtooth > 0)
        sawtooth <= sawtooth - 1;
        
endmodule
