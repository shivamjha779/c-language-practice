#include <stdio.h>
int main()
{
    // 6. Develop a program to count number of even and odd number’s in a given array.
    int a, even = 0, odd = 0;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
        if (b[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
       
    }
     printf("even nos are %d and odd is %d", even, odd);
        return 0;
}