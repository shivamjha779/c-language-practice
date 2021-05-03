#include <stdio.h>
int main()
{
    //     What will be the value of X, Y, Z and t after execution of bellowed code?
    // Initial value of y=6;
    // X=Y--;
    // X=X++;
    // X=++Y;
    // T=Z++ + ++Y;
    // T+=8;
    // T=Z++ + ++Z;
//     KIRTI DUBEY11:34 AM
// Try running Q2 like this for better understanding int X=0, Y=6, Z=1, T=0;
//     X = Y--;
//     printf("X=%d, Y=%d", X, Y);
//     X = X++;
//     printf("\nX=%d", X);
//     X = ++Y;
//     printf("\nX=%d, Y=%d", X, Y);
//     T = Z++ + ++Y;
//     printf("\nY=%d, Z=%d, T=%d", Y, Z, T);
//     T += 8;
//     printf("\nT=%d", T);
//     T = Z++ + ++Z;
//     printf("\nT=%d, Z=%d", T, Z);

    int Y = 6;
    int X, T, Z=1;

    X = Y--;
    X = X++;
    X = ++Y;
    T = Z++ + ++Y;
    T += 8;
    T = Z++ + ++Z;
    printf("%d %d %d %d", X, Y, Z, T);
    return 0;
}