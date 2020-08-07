`timescale 1ns / 1ps

module tb(

    );

////////////////////////////////////////////////////////////////////////    
// Clock & reset generator
//
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
////////////////////////////////////////////////////////////////////////    


////////////////////////////////////////////////////////////////////////    
// Open the file at simulation startup
//
integer fd_in;

initial
begin
    fd_in = $fopen( "../../../../../scripts/stim_resp_0", "r" );
    if (fd_in == 0)
    begin
        $display( "Couldn't open file for read" );
        $finish;
    end
end
////////////////////////////////////////////////////////////////////////    

////////////////////////////////////////////////////////////////////////    
// Read in stimulus vectors, and golden response from the file
//
reg  signed[15:0] stim_a;
reg  signed[15:0] stim_b;
reg  signed[15:0] stim_c;
reg  signed[15:0] stim_d;
reg        [ 1:0] stim_sel;

reg  signed[30:0] gold_out_arr[0:3];
reg  signed[30:0] gold_out_arr_p1[0:3];
reg  signed[30:0] gold_out_arr_p2[0:3];

wire   [31*4-1:0]  resp_out_arr_flat;
wire signed[30:0] resp_out_arr[0:3];


integer i;
integer num_items;
string the_line;

always @ (posedge clk)
begin
    if (!rst_)
    begin
        stim_a <= 0;
        stim_b <= 0;
        stim_c <= 0;
        stim_d <= 0;
        stim_sel <= 0;
        for (i=0; i<4; i=i+1)        
            gold_out_arr[i] = 0;
    end
    else
    begin
        num_items=$fgets( the_line, fd_in );
        
        if (num_items == 0)
            #25 $finish;
        else if (the_line[0] != "/")
            $sscanf( the_line, "%d %d %d %d %d %d %d %d %d", stim_a, stim_b, stim_c, stim_d, stim_sel, gold_out_arr[0], gold_out_arr[1], gold_out_arr[2], gold_out_arr[3] );
    end
end
////////////////////////////////////////////////////////////////////////    


////////////////////////////////////////////////////////////////////////    
// Instantiate DUT
//
chip_top u_chip_top
(
    .A( stim_a ),
    .B( stim_b ),
    .C( stim_c ),
    .D( stim_d ),
    .SEL( stim_sel ),
    .OUT( resp_out_arr_flat ),
    .CLK( clk ),
    .RESET( !rst_ )
);    
////////////////////////////////////////////////////////////////////////    

// Convert flat array at interface into packed array
assign resp_out_arr[0] = resp_out_arr_flat[1*31-1:0*31];
assign resp_out_arr[1] = resp_out_arr_flat[2*31-1:1*31];
assign resp_out_arr[2] = resp_out_arr_flat[3*31-1:2*31];
assign resp_out_arr[3] = resp_out_arr_flat[4*31-1:3*31];

////////////////////////////////////////////////////////////////////////    
// Insert 2-cycle pipeline delay to allow golden response to line up
// with DUT output
//
reg check_flag_p1;
reg check_flag_p2;

always @ (posedge clk)
begin
    if (!rst_)
    begin
        gold_out_arr_p1 <= {0,0,0,0};
        gold_out_arr_p2 <= {0,0,0,0};
        check_flag_p1 <= 0;
        check_flag_p2 <= 0;
    end
    else
    begin
        gold_out_arr_p1 <= gold_out_arr;
        gold_out_arr_p2 <= gold_out_arr_p1;
        check_flag_p1 <= 1;
        check_flag_p2 <= check_flag_p1;
    end
end
////////////////////////////////////////////////////////////////////////    


////////////////////////////////////////////////////////////////////////    
// Compare DUT response to golden
// FAIL and EXIT on mismatch
//
reg fail_flag = 0;
always @ (posedge clk)
begin
    if (rst_ && check_flag_p2)
        if (gold_out_arr_p2 != resp_out_arr)
        begin
            $display( "*** FAIL FAIL FAIL *** !!!\n" );
            $finish;
        end
        fail_flag <= (gold_out_arr_p2 != resp_out_arr);
end
////////////////////////////////////////////////////////////////////////    
            
endmodule
