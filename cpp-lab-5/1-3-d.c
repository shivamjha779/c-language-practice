#include <stdio.h>
int prime();
int prime(int x)
{
    int b=0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            b++;
        }
    }
    return b;
}
int main()
{
    // d) Check whether the given number is prime or not
    int a, b;
    printf("enter the no= ");
    scanf("%d", &a);
    b = prime(a);
    if(b==2){
        printf("%d is a prime", a);
    } else{
        printf("not a prime");
    }


    return 0;
}