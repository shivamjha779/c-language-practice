#include <stdio.h>
int npr();
int npr(int x, int y)
{
    int fx = 1, fy = 1;
    for (int i = 1; i <= x; i++)
    {
        fx = fx * i;
    }
    for (int j = 1; j <= (x - y); j++)
    {
        fy = fy * j;
    }
    return fx / fy;
}

int main()
{
    // finding npr
    int n, r, ans;
    printf("enter the nos n and r = ");
    scanf("%d %d", &n, &r);
    ans = npr(n, r);
    printf("%d", ans);

    return 0;
}