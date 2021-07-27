#include <stdio.h>

int main(void)
{
    // your code goes here
    int a, r1, r2, w1, w2, c1, c2;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d %d", &r1, &w1, &c1);
        scanf("%d %d %d", &r2, &w2, &c2);
        if ((r1 > r2 && w1 > w2) || (r1 > r2 && c1 > c2) || (c1 > c2 && w1 > w2))
        {
            printf("A");
        } else printf("B");
    }

    return 0;
}