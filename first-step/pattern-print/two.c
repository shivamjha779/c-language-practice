#include <stdio.h>
int main()
{
    // Print Hollow Square Star Pattern
    int a;
    printf("Enter the no of rows ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
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