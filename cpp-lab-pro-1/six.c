#include <stdio.h>

int main()
{
    // Write C program to find sum of even numbers between 1 to n
    int a, b;
    printf("enter the two nos \n");
    scanf("%d %d", &a, &b);
    int c, d;
    c= a%2;
    d = b%2;
    if(c==0 && d==0)
    {
    printf("%d", (a+b)/2);
    }
    return 0;
}