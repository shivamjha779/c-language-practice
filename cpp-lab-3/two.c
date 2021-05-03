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

    int Y = 6;
    int X, T, Z=1;

    X = Y--;
    X = X++;
    X = ++Y;
    T = Z++ + ++Y;
    T += 8;
    T = Z++ + ++Z;
    printf("%d %d %d %d", X, Y, T, Z);
    return 0;
}