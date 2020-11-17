`timescale 1ns / 1ps

`define STATE_IDLE  (0)
`define STATE_SETUP (1)
`define STATE_RUN   (2)
`define STATE_DONE  (3)

module bresenham(
    input  [ 9:0] IN_X0,
    input  [ 8:0] IN_Y0,
    input  [ 9:0] IN_X1,
    input  [ 8:0] IN_Y1,
    input         IN_RTS,
    output        IN_RTR,
    
    output [18:0] RAMW_ADDR,
    output        RAMW_WEN,
    output [ 7:0] RAMW_DAT,

    input         CLK,
    input         RESET    
    );
    
reg [ 3:0]          state;
wire                in_xfc;

reg [ 9:0]          cap_x0;
reg [ 8:0]          cap_y0;
reg [ 9:0]          cap_x1;
reg [ 8:0]          cap_y1;

reg  signed [ 1:0]  incr;
reg  [ 9:0]         step_var_big;
reg  [ 9:0]         step_var_lit;
reg  [ 9:0]         step_var_big_lim;

reg  [10:0]         bresenham_modulus;
wire [10:0]         next_bresenham_modulus;
wire [ 9:0]         dbig;
wire [ 9:0]         dlit;
wire [ 9:0]         dx;
wire [ 8:0]         dy;

wire                x1_gt_x0_flag;
wire                y1_gt_y0_flag;
wire                big_x_flag;

assign x1_gt_x0_flag = (cap_x1 >= cap_x0);
assign y1_gt_y0_flag = (cap_y1 >= cap_y0);
assign dx            = x1_gt_x0_flag ? cap_x1 - cap_x0 : cap_x0 - cap_x1;
assign dy            = y1_gt_y0_flag ? cap_y1 - cap_y0 : cap_y0 - cap_y1;
assign big_x_flag    = (dx >= dy);
assign dbig          = big_x_flag ? dx : dy;
assign dlit          = big_x_flag ? dy : dx;

assign in_xfc = IN_RTS & IN_RTR;
assign IN_RTR = ((state == `STATE_IDLE) && !RESET);

assign next_bresenham_modulus = bresenham_modulus + {dlit,1'h0};

always @ (posedge CLK)
if (RESET)
begin
    state <= `STATE_IDLE;
end
else 
    case (state)
        `STATE_IDLE:
            if (in_xfc) state <= `STATE_SETUP;
        `STATE_SETUP:
            state <= `STATE_RUN;
        `STATE_RUN:
            if (step_var_big == step_var_big_lim)
                state <= `STATE_DONE;
        `STATE_DONE:
            state <= `STATE_IDLE;
    endcase
begin
end

always @ (posedge CLK)
if (RESET)
begin
    incr                <= 0;
    step_var_big        <= 0;
    step_var_big_lim    <= 0;
    step_var_lit        <= 0;
    bresenham_modulus   <= 0;
end
else if (state == `STATE_SETUP)
begin
    bresenham_modulus <= dbig;
    case ({big_x_flag, y1_gt_y0_flag, x1_gt_x0_flag})
        0:
        // BIG_Y, Y0 > Y1, X0 > X1
        begin
            incr                <= 1;
            step_var_big        <= cap_y1;
            step_var_big_lim    <= cap_y0;
            step_var_lit        <= cap_x1;
        end
        1:
        // BIG_Y, Y0 > Y1, X1 > X0
        begin
            incr                <= -1;
            step_var_big        <= cap_y1;
            step_var_big_lim    <= cap_y0;
            step_var_lit        <= cap_x1;
        end
        2:
        // BIG_Y, Y1 > Y0, X0 > X1
        begin
            incr                <= -1;
            step_var_big        <= cap_y0;
            step_var_big_lim    <= cap_y1;
            step_var_lit        <= cap_x0;
        end
        3:
        // BIG_Y, Y1 > Y0, X1 > X0
        begin
            incr                <= 1;
            step_var_big        <= cap_y0;
            step_var_big_lim    <= cap_y1;
            step_var_lit        <= cap_x0;
        end
        4:
        // BIG_X, Y0 > Y1, X0 > X1
        begin
            incr                <= 1;
            step_var_big        <= cap_x1;
            step_var_big_lim    <= cap_x0;
            step_var_lit        <= cap_y1;
        end
        5:
        // BIG_X, Y0 > Y1, X1 > X0
        begin
            incr                <= -1;
            step_var_big        <= cap_x0;
            step_var_big_lim    <= cap_x1;
            step_var_lit        <= cap_y0;
        end
        6:
        // BIG_X, Y1 > Y0, X0 > X1
        begin
            incr                <= -1;
            step_var_big        <= cap_x1;
            step_var_big_lim    <= cap_x0;
            step_var_lit        <= cap_y1;
        end
        7:
        // BIG_X, Y1 > Y0, X1 > X0
        begin
            incr                <= 1;
            step_var_big        <= cap_x0;
            step_var_big_lim    <= cap_x1;
            step_var_lit        <= cap_y0;
        end
    endcase
end
else if (state == `STATE_RUN)
begin
        step_var_big <= step_var_big + 1;
       
        if (next_bresenham_modulus > {dbig,1'h0})
        begin
            bresenham_modulus   <= next_bresenham_modulus - {dbig,1'h0};
            step_var_lit        <= $signed({1'b0,step_var_lit}) + incr;
        end
        else
            bresenham_modulus <= next_bresenham_modulus;
end

// Capture input command during in_xfc    
always @ (posedge CLK)
if (RESET)
begin
    cap_x0 <= 0;
    cap_y0 <= 0;
    cap_x1 <= 0;
    cap_y1 <= 0;
end
else if (in_xfc)
begin
    cap_x0 <= IN_X0;
    cap_y0 <= IN_Y0;
    cap_x1 <= IN_X1;
    cap_y1 <= IN_Y1;
end
    
   
endmodule
