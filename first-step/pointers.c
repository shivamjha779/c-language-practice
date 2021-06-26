#include <stdio.h>
int main()
{
    int a = 50;
    int *p;
    p = &a;
    printf("%d\n", p);
    printf("%d", p+1);
    return 0;
}