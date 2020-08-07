import numpy as np
import random

NUM_VECS = 1000

fd = open( "stim_resp_1", "w" )

fd.write( "//   A       B       C       D       SEL     OUT0    OUT1    OUT2    OUT3\n")

test_val = 0

out_arr = np.zeros( (4), np.int64 )

in_vals = np.zeros((4), np.int64)

for line_idx in range(NUM_VECS):
    fd.write( "    " )

    # For A, B, C, D
    for elt in range(4):
        in_vals[elt] = random.randrange(-(1 << 15), (1 << 15))
        fd.write( "%7d " % in_vals[elt] );

    # SEL
    sel_val = random.randrange(0,4)
    fd.write( "%7d " % sel_val );

    selected_val = in_vals[sel_val]
    
    sum_val = (in_vals[0] + in_vals[1])     # A + B
    prod_val = sum_val * selected_val
    
    if (prod_val < -(1<<30)):
        prod_val = -(1<<30)
    elif (prod_val >= (1<<30)):
        prod_val = (1<<30)-1
        
    out_arr[sel_val] = prod_val
    
    # For OUT[0:3]
    for elt in range(4):
        fd.write( "%7d " % out_arr[elt] );

    fd.write( "\n" );


fd.close()

