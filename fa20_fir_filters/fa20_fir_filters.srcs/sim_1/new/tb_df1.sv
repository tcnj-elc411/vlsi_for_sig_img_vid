`timescale 1ns / 1ps

`define COEFF_FILENAME "filt_100_110_fs1000_fir_int.txt"
`define MAX_FILT_ORDER (143)

module tb_df1();

////////////////////////////////////////////////////////////////////////    
// Clock & reset generator
//
reg     clk;
reg     rst_ = 0;
wire    reset;

integer reset_count         = 0;

`define NUM_RESET_CYCLES    (10)
`define MAX_CYCLES          (1000)

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
        
    if (reset_count == `MAX_CYCLES)
        $finish;
end
////////////////////////////////////////////////////////////////////////    

////////////////////////////////////////////////////////////////////////    
// Open the file at simulation startup
//
string coeff_filename;
integer fd_in;

string  the_line;
integer filt_order;
integer coeffs[`MAX_FILT_ORDER-1:0];
integer num_items;
integer i;

initial
begin
    coeff_filename = {"../../../../../scripts/", `COEFF_FILENAME};
    $display ("Looking for coefficient file in %s", coeff_filename);

    fd_in = $fopen( coeff_filename, "r" );
    if (fd_in == 0)
    begin
        $display( "Couldn't open file for read" );
        $finish;
    end

    do
        // Skip over comment lines
        num_items=$fgets( the_line, fd_in );
    while (the_line[0] == "/");

    $sscanf( the_line, "%d", filt_order );

    for (i = 0; i < filt_order; ++i)
    begin
        do
            // Skip over comment lines
            num_items=$fgets( the_line, fd_in );
        while (the_line[0] == "/");
        $sscanf( the_line, "%d", coeffs[i] );
    end
end
////////////////////////////////////////////////////////////////////////    
        
////////////////////////////////////////////////////////////////////////    

integer din;
integer n;

assign din = (!reset) && (n >= 0);
always @ (posedge clk)
begin
    if (reset)
    begin
        n <= 0;
    end
    else
    begin
        n <= n + 1;
    end
end

integer dout;
direct_form_1
#
(
    .FILT_ORDER_N(`MAX_FILT_ORDER)
)
u_df1
(
    .coeffs(coeffs),
    
    .din(din),     // data in
    .dout(dout),   // data out
    
    .clk(clk),
    .reset(reset)
);


endmodule
