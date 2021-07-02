#include <stdio.h>
int main()
{
    int a;
    printf("enter the size of the array =? ");
    scanf("%d", &a);
    int A[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &A[i]);
    }
    int lar = 0;
    int sm = 0;
    if (A[0] > A[1])
    {
        lar = A[0];
        sm = A[1];
    }
    else
    {
        lar = A[1];
        sm = A[0];
    }
    for (int i = 2; i < a; i++)
    {
        if (A[i] > lar)
        {
            lar = A[i];
        }
    }
    for (int j = 2; j < a; j++)
    {
        if (A[j] < sm)
        {
            sm = A[j];
        }
    }
    printf("largst is %d and smallest is %d", lar, sm);
    return 0;
}