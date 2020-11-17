#include <stdio.h>
#include <math.h>

void plot_line_bigy(int y0, int x0, int y1, int x1, char *arr, int wid)
{
    int DX = x1 - x0;
    int DY;
    int D = DX;
    int y = y0;
    int inc;

    if (y1>y0)
    {
        inc = 1;
        DY = y1 - y0;
    }
    else
    {
        inc = -1;
        DY = y0 - y1;
    }

    for (int x = x0; x <= x1; ++x)
    {
        arr[x*wid + y] = 'X';

        D = D + 2 * DY;     // Add 1, in units of 2DY

                            // Check to see if we've 'carried out' to the next integer
                            // in modulo 2DX units
        if (D > 2 * DX)
        {
            y = y + inc;    // increment y
            D = D - 2 * DX; // Subtraction accomplishes modulus
        }
    }
}

void plot_line_bigx(int x0, int y0, int x1, int y1, char *arr, int wid)
{
    int DX = x1 - x0;
    int DY;
    int D = DX;
    int y = y0;
    int inc;

    if (y1>y0)
    {
        inc = 1;
        DY = y1 - y0;
    }
    else
    {
        inc = -1;
        DY = y0 - y1;
    }

    for (int x = x0; x <= x1; ++x)
    {
        arr[y*wid + x] = 'X';

        D = D + 2 * DY;     // Add 1, in units of 2DY

                            // Check to see if we've 'carried out' to the next integer
                            // in modulo 2DX units
        if (D > 2 * DX)
        {
            y = y + inc;    // increment y
            D = D - 2 * DX; // Subtraction accomplishes modulus
        }
    }
}

void initbuf(char *arr, int wid, int hgt)
{

    for (int j = 0; j < hgt; ++j)
        for (int i = 0; i < wid; ++i)
            arr[j*wid + i] = '.';
}


void printbuf(char *arr, int wid, int hgt)
{

    for (int j = 0; j < hgt; ++j)
    {
        for (int i = 0; i < wid; ++i)
            printf("%c", arr[j*wid + i]);

        printf("\n");
    }
    printf("\n\n");
}


#define WID (80)
#define HGT (25)

void plot_line(int x0, int y0, int x1, int y1, char *arr, int wid)
{
    if (abs(x0-x1) >= abs(y0-y1))
        if (x1 >= x0)
            plot_line_bigx(x0, y0, x1, y1, arr, wid);
        else
            plot_line_bigx(x1, y1, x0, y0, arr, wid);
    else
        if (y1 >= y0)
            plot_line_bigy(x0, y0, x1, y1, arr, wid);
        else
            plot_line_bigy(x1, y1, x0, y0, arr, wid);
}

int main(int argc, char *argv[])
{
    char buffer[HGT*WID] = {' '};

    initbuf(buffer, WID, HGT);

    printbuf(buffer, WID, HGT);

    // Triangle, vertices:
    //  (0,0)
    //  (37,7)
    //  (11,23)
    //     and
    //  ( 3, 7) to (37, 7)

    plot_line( 0,  0, 37,  7, buffer, WID);
    plot_line(37,  7, 11, 23, buffer, WID);
    plot_line(11, 23,  0,  0, buffer, WID);
    plot_line(37,  7,  3,  7, buffer, WID);

    printbuf(buffer, WID, HGT);

    while (!getchar()) {}
}