#include <stdio.h>
int main()
{
    // Print Hollow Rectangle Star Pattern
    int a;
    printf("Enter the no of rows= ");
    scanf("%d", &a);
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if(i==0 || i==a-2 || j==0 || j==a-1){
                printf("*");
            }else{
                printf(" ");
            }
        } printf("\n");
    }
    return 0;
}