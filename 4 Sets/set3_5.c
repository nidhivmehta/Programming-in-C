/*value of X, Y, Z, and T after execution */

#include<stdio.h>
int main()
{
    int X, Y=6, Z, T;;
    X=Y--;
    Z=X++;
    X=++Y;
    T=Z++ + ++Y;
    T+=8;
    T=Z++ + ++Z;
    printf( " X = %d \n", X);
    printf( " Y = %d \n", Y);
    printf( " Z = %d \n", Z);
    printf( " T = %d \n", T);
}
