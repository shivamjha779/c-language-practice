#include <stdio.h>
int main()
{ 
    // 9. Develop a program to insert an element into a list of elements in the Array.
    int a;
    printf("enter the size of array=? ");
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    int pla, num;
    printf("enter the no where in array you want to insert =? ");

    scanf("%d", &pla);
    printf("enter the no to insert=? ");
    scanf("%d", &num);
    for (int i = a; i > pla; i--)
    {
        b[i] = b[i - 1];
    }
    b[pla - 1] = num;
    a++;
    for (int j = 0; j < a; j++)
    {
        printf("%d\t", b[j]);
    }

    return 0;
}