#include<stdio.h>
int main()
{
// Print Rhombus Star Pattern 
 int a;
    printf("enter the no of rows/columns=");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    { for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < a; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
return 0;
}