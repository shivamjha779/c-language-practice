#include <stdio.h>
int main()
{
    // Develop a program to find the biggest element in an array of N elements.
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int j = 1; j <= a; j++)
    {

        if (b[0] < b[j])
        {
            b[0] = b[j];
        }
    }
    printf("%d", b[0]);
    return 0;
}