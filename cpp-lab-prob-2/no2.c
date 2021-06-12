#include<stdio.h>
int main()
{
// 2. Write a program that finds the number of roots of a quadratic equation. 
int a, b, c;
printf("enter the digits a b c");
scanf("%d %d %d", &a, &b, &c);
int d=(b*b)-4*a*c;
if(d>0){
    if(d=0){
        printf("roots are 2 but equal");
    }else{
        printf("roots are 2 diffrent");

    }
} else{
    printf("roots are imaginary");
    
}
return 0;
}