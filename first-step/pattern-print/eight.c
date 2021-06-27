#include <stdio.h>
int main()
{
    // Print Hollow Pyramid Star Pattern
    int a;
    printf("enter the no of rows= ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        for (int j = a; j > i + 1; j--)
        {
            printf(" ");
        }
        for (int j = 0; j > i; j++)
        {
            if (j == 0 || j == (i * 2) - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}