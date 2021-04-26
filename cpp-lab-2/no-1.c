#include<stdio.h>
#include<math.h>

int main(){
    // 1. Write a program to find simple interest
    int p, r, t, a, b;
    printf("enter the principle ammount p = ");
    scanf("%d", &p);
    printf("enter the rate annually r = ");
    scanf("%d", &r);
    printf("enter the time in year t =");
    scanf("%d", &t);
    a = p * r * t;
    b = a/100;
    printf("the simple intrest is %d", b);
    return 0;
}