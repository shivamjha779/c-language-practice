#include <stdio.h>
int main()
{
    // Write a C program to print sum of digits enter by user
    int a, remind, sum = 0;
    printf("enter a no\n");
    for (scanf("%d", &a); a != 0; a = a / 10)
    {
        remind = a % 10;
        sum = sum + remind;
    }
    printf("sum is %d", sum);
    return 0;
}