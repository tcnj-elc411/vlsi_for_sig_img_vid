`timescale 1ns / 1ps

module tb();
reg  [ 7:0] in_parallel_pcm;
wire [15:0] out_parallel_pcm;
wire        out_pwm;
wire        inout_i2s_ws;
wire        inout_i2s_sck;
reg         in_i2s_sd;
wire        out_i2s_sd;

// Clock & reset generator
reg     clk;
reg     rst_ = 0;
integer reset_count = 0;
`define NUM_RESET_CYCLES (10)

wire    sck_falling_edge;

initial
begin
    clk = 0;
    while (1)
        #5 clk = ~clk;  // toggle clk each 5 ns (100 MHz clock frequency)
end

always @ (posedge clk)
begin
    reset_count <= reset_count + 1;     // always use non-blocking assignment, '<=',
                                        // in sequential processes

    if (reset_count == `NUM_RESET_CYCLES)
        rst_ <= 1;                                        
end

// Assume that two I2S words are sent in 2048 cycles, to keep things moving
// and SCK is reset_count[5]
assign inout_i2s_sck = reset_count[5];

assign sck_falling_edge = (reset_count[5:0] == 6'b000000);

reg  [ 4:0] i2s_bit_idx;

// Let the audio value be bits [26:11]
reg  [15:0] audio_val;

always @ (posedge clk)
if (!rst_)
begin
    in_i2s_sd   <= 0;
    i2s_bit_idx <= 5'h1F;
    audio_val   <= 16'h8000;
end
else if (sck_falling_edge)
begin
    in_i2s_sd   <= audio_val[i2s_bit_idx[3:0]];
    i2s_bit_idx <= i2s_bit_idx - 1;
    
    if (i2s_bit_idx == 0)
        audio_val <= audio_val + 16'h0400;
end

// This is a bit tricky -- we might think 1 <= bit_idx < 17
// but there is a one SCK period delay in the use of
// i2s_bit_idx, and this statement below is combinational!
assign inout_i2s_ws = (i2s_bit_idx >= 0 && i2s_bit_idx < 16);

i2s_top u_i2s_top(
    .clk             (clk             ),
    .rst_            (rst_            ),
    .in_parallel_pcm (in_parallel_pcm ),
    .out_parallel_pcm(out_parallel_pcm),
    .out_pwm         (out_pwm         ),
    .inout_i2s_ws    (inout_i2s_ws    ),
    .inout_i2s_sck   (inout_i2s_sck   ),
    .in_i2s_sd       (in_i2s_sd       ),
    .out_i2s_sd      (out_i2s_sd      )
    );

endmodule
