#include <stdio.h>
int main()
{
    // 7. Develop a program to print numbers in even and odd places of a given array.
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("nos at even places are = ");
     for (int j = 0; j < a; j = j + 2)
    {
        printf("%d\t", b[j]);
    }
    printf("\nnos at odd places are =");
     for (int j = 1; j < a; j = j + 2)
    {
        printf("%d\t", b[j]);
    }
    return 0;
}