#include <stdio.h>
#include <math.h>
int main()
{
    // 6. Write a program to add individual digits of a 5 digit no
    int a, b, c, sum;
    printf("enter the 5 digit no ");

    scanf("%d", &a);
    b = (a % 10);
    c = (a / 10);
    sum = b;

    b = c % 10;
    c = (c / 10);
    sum = sum + b;

    b = c % 10;
    c = (c / 10);
    sum = sum + b;

    b = c % 10;
    c = (c / 10);
    sum = sum + b;

    b = c % 10;
    c = (c / 10);
    sum = sum + b;

    printf("%d", sum);

    return 0;
}