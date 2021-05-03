#include <stdio.h>
int main()
{
    // int a = 7, b = 7, c = 10;
    // Try all relational operators on these variables and print the output as 0 and 1 based on these values.
    int a = 7, b = 7, c = 10;
    int x, y, j, k;

    x = (a == b);
    y = (a >= c);
    j= (a != c);
    k = (b > c);
    printf("%d %d %d %d", x, y, j, k );
    return 0;
}