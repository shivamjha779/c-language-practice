#include <stdio.h>
#include <math.h>
int main()
{
    // Write a program to find whether a number is palindrome or not.
    int a, b, c=0;
    scanf("%d", &a);
    int org=a;
    while (a != 0)
    {
        b = a % 10;
        c = c * 10 + b;
        a = a / 10;
    } 
    if (org == c)
    {
        printf("The %d is a palindrome", org);
    }
    else
    {
      printf("Not a palindrome no");
    }
    return 0;
}