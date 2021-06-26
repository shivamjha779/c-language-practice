#include <stdio.h>
int main()
{ 
    // Write a program to show Fibonacci series for firs N nos. Hint: 1 1 2 3 5 8 13 21 . . .
    int a = 0, b = 1, c, n = 0;

    printf("how many nos of fibonacci? =");
    scanf("%d", &n);
    printf("%d\t%d", a, b);
    for (int i = 2; i < n; i++)
    {
        c = (a + b);
        printf("\t%d", c);
        a = b;
        b = c;
    }

    return 0;
}