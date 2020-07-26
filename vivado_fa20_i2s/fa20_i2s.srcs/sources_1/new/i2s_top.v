`timescale 1ns / 1ps

module i2s_top(
    input   clk,
    input   rst_,
    
    input   [ 7:0] in_parallel_pcm,  // driven on falling edge of ws, sampled on rising edge
    output  [15:0] out_parallel_pcm,
    output  out_pwm,
    
    // I2S in/out
    input   inout_i2s_ws,
    input   inout_i2s_sck,
    input   in_i2s_sd,
    output  out_i2s_sd   
    );

wire    adc_xfc;    
wire    [15:0] xadc_in_i2s_out_pcm;
wire    [15:0] i2s_in_pwm_out_pcm;

wire    xadc_in_i2s_out_xfc;
wire    i2s_in_pwm_out_ws;
wire    i2s_in_pwm_out_xfc;

reg     rst_p1;
reg     rst_p2;
reg     rst_clean_;
reg     rst_clean;

reg     i2s_ws_p1;
reg     i2s_ws_p2;
reg     i2s_ws_clean;
reg     i2s_sck_p1;
reg     i2s_sck_p2;
reg     i2s_sck_clean;

wire    i2s_sck_posedge_strobe;     // use as strobe to sample I2S SD in
wire    i2s_sck_negedge_strobe;     // use as strobe to drive I2S SD out
wire    i2s_ws_posedge_strobe;      // use as strobe to sample parallel data
wire    i2s_ws_negedge_strobe;      // use as strobe to 

wire [15:0] parallel_in_out_pcm;
wire        parallel_in_out_xfc;


// Easy to get confused here!
// The 'clean' signal is actually p3, the most delayed!
assign i2s_sck_posedge_strobe =  i2s_sck_p2 & ~i2s_sck_clean;
assign i2s_sck_negedge_strobe = ~i2s_sck_p2 &  i2s_sck_clean;
//assign i2s_ws_posedge_strobe  =  i2s_ws_p2  & ~i2s_ws_clean;
//assign i2s_ws_negedge_strobe  = ~i2s_ws_p2  &  i2s_ws_clean;

// Double rank any asynchronous inputs!
always @ (posedge clk)
begin
    rst_p1      <= ~rst_;
    rst_p2      <= rst_p1;
    rst_clean   <= rst_p2;
    rst_clean_  <= ~rst_p2;

    i2s_ws_p1      <= inout_i2s_ws;
    i2s_ws_p2      <= i2s_ws_p1;
    i2s_ws_clean   <= i2s_ws_p2;
    
    i2s_sck_p1     <= inout_i2s_sck;
    i2s_sck_p2     <= i2s_sck_p1;
    i2s_sck_clean  <= i2s_sck_p2;
end
    
i2s_in u_i2s_in(
    .clk                    (clk            ),
    .rst_                   (rst_clean_     ),

    .in_i2s_sd              (in_i2s_sd      ),
    .i2s_ws                 (i2s_ws_clean),
    .i2s_sck_posedge_strobe (i2s_sck_posedge_strobe),

    .out_pcm                (i2s_in_pwm_out_pcm),
    .out_ws                 (i2s_in_pwm_out_ws),
    .out_xfc                (i2s_in_pwm_out_xfc)
    );

i2s_out u_i2s_out(
    .clk                    (clk),
    .rst_                   (rst_clean_),

    .in_pcm                 (parallel_in_out_pcm),
    .in_xfc                 (parallel_in_out_xfc),

    .in_i2s_ws              (i2s_ws_clean),
    .i2s_sck_posedge_strobe (i2s_sck_posedge_strobe),
    .i2s_sck_negedge_strobe (i2s_sck_negedge_strobe),
    .out_i2s_sd             (out_i2s_sd)
    );

pwm_out u_pwm_out(
    .clk                (clk            ),
    .rst_               (rst_clean_     ),

    .in_pcm             (i2s_in_pwm_out_pcm),
    .in_ws              (i2s_in_pwm_out_ws),
    .in_xfc             (i2s_in_pwm_out_xfc),

    .out_parallel_pcm   (out_parallel_pcm),
    .out_pwm            (out_pwm        )
    );

parallel_in u_parallel_in(
    .clk                    (clk            ),
    .rst_                   (rst_clean_     ),

    .in_parallel_pcm        (in_parallel_pcm),
    .i2s_sck_posedge_strobe (i2s_sck_posedge_strobe),
    .in_ws                  (i2s_ws_clean),

    .out_pcm                (parallel_in_out_pcm),
    .out_xfc                (parallel_in_out_xfc)
    );


endmodule

