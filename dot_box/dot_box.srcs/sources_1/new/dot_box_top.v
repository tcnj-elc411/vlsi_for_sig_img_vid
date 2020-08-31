`timescale 1ns / 1ps

module dot_box_top
(
    input                    clk,
    input                    reset,

    input signed [7:0][15:0] IN_X,
    input signed [7:0][15:0] IN_Y,
    input                    IN_START,

    output signed [31:0] OUT_DAT,
    output signed [15:0] OUT_DAT16,
    output               OUT_XFC
);

`define ROUND_16 (1 << 15)
`define INT32_MAX (  (1 << 31) - 1 )
`define INT32_MIN ( -(1 << 31) )
`define INT16_MAX (  (1 << 16) - 1 )
`define INT16_MIN ( -(1 << 16) )

`define STATE_IDLE (0)
`define STATE_RUN  (1)
`define STATE_DONE (2)

reg         [ 2:0] in_dat_idx;
reg         [ 1:0] state;

reg  signed [34:0] acc;
reg  signed [31:0] acc_clip;
wire signed [34:0] acc_round;
reg  signed [34:0] acc_clip_shift_round;

assign OUT_DAT      = acc_clip;
assign OUT_DAT16    = acc_clip_shift_round[31:16];
assign OUT_XFC      = (state == `STATE_DONE);

assign acc_round = (acc + `ROUND_16);

always @ (*)
begin
    if (acc > `INT32_MAX)
        acc_clip = `INT32_MAX;
    else if (acc < `INT32_MIN)
        acc_clip = `INT32_MIN;
    else
        acc_clip = acc;

    if (acc_round > `INT32_MAX)
        acc_clip_shift_round = `INT32_MAX;
    else if (acc_round < `INT32_MIN)
        acc_clip_shift_round = `INT32_MIN;
    else
        acc_clip_shift_round = acc_round;
end

// State Machine
always @ (posedge clk)
begin
if (reset)
    state <= `STATE_IDLE;
else
    case (state)
        `STATE_IDLE:
            if (IN_START)
                state <= `STATE_RUN;
        `STATE_RUN:
            if (in_dat_idx == 7)
                state <= `STATE_DONE;
        `STATE_DONE:
            state <= `STATE_IDLE;
    endcase
end

// Input Data Indexer
always @ (posedge clk)
begin
if (reset || in_dat_idx == 7)
    in_dat_idx <= 0;
else if (state == `STATE_RUN)
    in_dat_idx <= in_dat_idx + 1;
end

// Accumulator
always @ (posedge clk)
begin
if (reset || (state == `STATE_IDLE))
    acc <= 0;
else if (state == `STATE_RUN)
    acc <= acc + $signed(IN_X[in_dat_idx]) * $signed(IN_Y[in_dat_idx]);
end

endmodule
