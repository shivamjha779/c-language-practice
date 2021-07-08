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
{
// e) Check whether the given number is strong or not
int a, b;
    printf("enter the no= ");
    scanf("%d", &a);
    b = fod(a);
    if(b==a){
        printf("%d is a strong", a);
    } else{
        printf("not a strong");
    }
return 0;
}