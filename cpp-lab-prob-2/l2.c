#include <stdio.h>
int main()
{
    // Write a program to find sum of first N odd numbers.
    int a, sum=0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i = i + 2)
    {
        sum = sum + i;

    }
    printf("sum is %d", sum);
    return 0;
}