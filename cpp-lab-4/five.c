#include <stdio.h>
int main()
{ // doubt?
    // Develop a program to print the given array in reverse order.
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int j = a - 1; j >= 0; j--)
    {

        printf("%d\t", b[j]);
    }
    return 0;
}