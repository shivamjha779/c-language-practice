#include <stdio.h>
int main()
{
    // C Program to check a Number is Armstrong or not
    int a;
    printf("Enter the no= ");
    scanf("%d", &a);
    int org = a;
    int b, sum = 0;
    while (a != 0)
    {
        b = a % 10;
        a = a / 10;
        sum = sum + (b * b * b);
    }
    if (sum == org)
    {
        printf("the no is a armstrong no");
    }
    else
    {
        printf("not a armstrong no");
    }
    return 0;
}