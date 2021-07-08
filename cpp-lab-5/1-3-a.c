#include <stdio.h>
int sod();
int sod(int x)
{
    int rem, sum1=0;
    while(x!=0){
        rem= x%10;
        x= x/10;
        sum1= sum1 + rem;
    }
    return sum1;
}
int main()
{
    int digit, sum = 0;
    printf("enter the no = ");
    scanf("%d", &digit);
    sum = sod(digit);
    printf("%d", sum);

    return 0;
}