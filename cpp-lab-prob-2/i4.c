#include <stdio.h>
int main()
{
    // Write a program to find factorial of given no.
    int a, fact = 1;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;

    }
    printf("%d", fact);
    return 0;
}