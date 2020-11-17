`timescale 1ns / 1ps
module tb_bresenham();
////////////////////////////////////////////////////////////////////////    
// Clock & reset generator
//
reg     clk;
reg     rst_ = 0;
wire    reset;

integer reset_count         = 0;

`define NUM_RESET_CYCLES (10)

assign reset = ~rst_;

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
////////////////////////////////////////////////////////////////////////    
reg [9:0] x0 [10] = '{ 0,  3,  5,  7, 11, 13, 17, 23, 29, 31};
reg [8:0] y0 [10] = '{31, 29, 23, 17, 13, 17, 23, 29, 31, 31};
reg [9:0] x1 [10] = '{31, 29, 23, 17, 13, 11,  7,  5,  3,  1};
reg [8:0] y1 [10] = '{ 0,  3,  5,  7, 11, 23, 29, 31, 31, 37};

integer   tb_state;
integer   case_idx;

`define TB_STATE_IDLE  (0)
`define TB_STATE_RTS   (1)
`define TB_STATE_DONE  (2)

`define TB_NUM_CASES   (10)

wire CAP_IN_RTR;
wire STIM_IN_RTS;
wire [9:0] STIM_IN_X0;
wire [9:0] STIM_IN_X1;
wire [8:0] STIM_IN_Y0;
wire [8:0] STIM_IN_Y1;

assign STIM_IN_RTS = (tb_state == `TB_STATE_RTS);
assign STIM_IN_X0 = x0[case_idx];
assign STIM_IN_X1 = x1[case_idx];
assign STIM_IN_Y0 = y0[case_idx];
assign STIM_IN_Y1 = y1[case_idx];

always @ (posedge clk)
    if (!rst_)
    begin
        tb_state <= `TB_STATE_IDLE;
        case_idx <= 0;
    end
    else
        case (tb_state)
            `TB_STATE_IDLE:
                tb_state <= `TB_STATE_RTS;
            `TB_STATE_RTS:
                if (CAP_IN_RTR)
                    if (case_idx == `TB_NUM_CASES)
                        tb_state <= `TB_STATE_DONE;
                    else
                        case_idx <= case_idx + 1;
            `TB_STATE_DONE:
                $finish;
        endcase

wire [18:0] CAP_RAMW_ADDR;
wire        CAP_RAMW_WEN;
wire [ 7:0] CAP_RAMW_DAT;

bresenham u_bresenham(
    .IN_X0     (STIM_IN_X0    ),
    .IN_Y0     (STIM_IN_Y0    ),
    .IN_X1     (STIM_IN_X1    ),
    .IN_Y1     (STIM_IN_Y1    ),
    .IN_RTS    (STIM_IN_RTS   ),
    .IN_RTR    (CAP_IN_RTR    ),
    .RAMW_ADDR (CAP_RAMW_ADDR ),
    .RAMW_WEN  (CAP_RAMW_WEN  ),
    .RAMW_DAT  (CAP_RAMW_DAT  ),
    .CLK       (clk      ),
    .RESET     (reset    )
);
        
endmodule
