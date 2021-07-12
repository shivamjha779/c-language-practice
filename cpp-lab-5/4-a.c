#include <stdio.h>
int fact(int a)
{
    int ans;
    if (a == 0)
    {
        ans=1;
    }else{
        ans = a*fact(a-1);

    }
    return ans;
}
int main()
{
    // Develop a program with Recursive Function for --
    // a) Factorial of a given number.
    int a;
    printf("enter the no = ");
    scanf("%d", &a);
    int ans = fact(a);
    printf("%d", ans);
    return 0;
}