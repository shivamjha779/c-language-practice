#include <stdio.h>
int main()
{ 
    // Write a program to display prime number between 1 and 100.
    int count = 0;
    printf("2\t");
    for (int i = 3; i <= 100; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count = count + 1;
            }
            
        }if (count == 2)
            {
                printf("%d\t", i);
            }
        count = 0;
    }
    return 0;
}