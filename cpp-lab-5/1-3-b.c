#include<stdio.h>
int fod();
int fod(int x)
{
    int rem, sum1=1;
    while(x!=0){
        rem= x%10;
        x= x/10;
        sum1= sum1 * rem;
    }
    return sum1;
}
int main()
// Factorial of a given number. 
{
    int digit, fact = 0;
    printf("enter the no = ");
    scanf("%d", &digit);
    fact = fod(digit);
    printf("%d", fact);

    return 0;
}