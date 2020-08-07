`timescale 1ns / 1ps

`define OUT_ARR_WID (31)
`define OUT_ARR_DEP ( 4)
`define OUT_ARR_BITS (`OUT_ARR_WID * `OUT_ARR_DEP)

module chip_top (
    input signed [15:0] A,
    input signed [15:0] B,
    input signed [15:0] C,
    input signed [15:0] D,
    
    input        [ 1:0] SEL,
    
    input               CLK,
    input               RESET,
    
    output signed [(`OUT_ARR_BITS - 1):0] OUT 
);

reg signed [`OUT_ARR_WID-1:0] result_arr[0:`OUT_ARR_DEP-1];

reg signed [16:0] add_stage1;
reg signed [15:0] mux_stage1;
reg        [ 1:0] sel_stage1;
wire signed [32:0] prod;
reg  signed [30:0] prod_saturated;

assign OUT[1*`OUT_ARR_WID-1:0*`OUT_ARR_WID] = result_arr[0];
assign OUT[2*`OUT_ARR_WID-1:1*`OUT_ARR_WID] = result_arr[1];
assign OUT[3*`OUT_ARR_WID-1:2*`OUT_ARR_WID] = result_arr[2];
assign OUT[4*`OUT_ARR_WID-1:3*`OUT_ARR_WID] = result_arr[3];

// Process: add_stage1
always @ (posedge CLK)
begin
    if (RESET)
        add_stage1 <= 0;
    else
        add_stage1 <= A + B;
end

// Process: mux_stage1
always @ (posedge CLK)
begin
    if (RESET)
        mux_stage1 <= 0;
    else
        case (SEL)
            0: mux_stage1 <= A;
            1: mux_stage1 <= B;
            2: mux_stage1 <= C;
            3: mux_stage1 <= D;
        endcase
end

// Process: sel_stage1
always @ (posedge CLK)
begin
    if (RESET)
        sel_stage1 <= 0;
    else
        sel_stage1 <= SEL;
end

assign prod = add_stage1 * mux_stage1;

// Process: prod_saturated
//
// Saturate to signed 31 bit range
// -2^30 <= x <= 2^30 - 1
always @ (*)
begin
    if (prod < -(1<<30))
        prod_saturated = -(1<<30);
    else if (prod > (1<<30) - 1)
        prod_saturated = (1<<30) - 1;
    else
        prod_saturated = prod[30:0];
end

always @ (posedge CLK)
begin
    if (RESET)
    begin
        result_arr[0] <= 0;
        result_arr[1] <= 0;
        result_arr[2] <= 0;
        result_arr[3] <= 0;
    end
    else
        result_arr[sel_stage1] <= prod_saturated;
end

endmodule
