#include <stdio.h>
int main()
{
    int no[10];
    int sum = 0;

    // Write a program to calculate the sum of 10 numbers. If user inputs negative number then negative number skips from calculation. (Note: use of goto or continue statemen
    for (int i = 1; i < 10; i++)
    {
        scanf("%d", &no[i]);
    }
    for (int j = 1; j < 10; j++)
    {
        if (no[j] >= 0)
        {
            sum = sum + no[j];
        }
    }
    printf("%d", sum);

    return 0;
}