#include <stdio.h>
int ncr();
int ncr(int x, int y)
{
    int fx = 1, fy = 1, fy1 = 1;
    for (int i = 1; i <= x; i++)
    {
        fx = fx * i;
    }
    for(int k=1; k<=y; k++){
        fy= fy*k;
    }
    for (int j = 1; j <= (x - y); j++)
    {
        fy1 = fy1 * j;
    }
    return fx / (fy * fy1);
}
int main()
{
    // ncr
    int n, r, ans = 0;
    printf("enter the no n and r = ");
    scanf("%d %d", &n, &r);
    ans = ncr(n, r);
    printf("%d", ans);
    return 0;
}