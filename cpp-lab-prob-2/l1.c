#include <stdio.h>
int main()
{
    // Write a program to find set of leap year between ranges of years.
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        int c = i % 4;
        int d = i % 100;
        int e = i % 400;

        if (c == 0 && d != 0)
        {
            printf("%d\t", i);
        }
        else if (c == 0 && d == 0)
        {
            if (e == 0)
            {
                printf("%d\t", i);
            }
        }
    }
    return 0;
}