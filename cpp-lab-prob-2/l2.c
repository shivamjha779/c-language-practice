#include <stdio.h>
int main()
{
    // Write a program to find sum of first N odd numbers.
    int a, sum=0;
    scanf("%d", &a);
    for (int i = 1; i <= (2*a-1); i = i + 2)
    {
        sum = sum + i;

    }
    printf("sum is %d", sum);
    return 0;
}