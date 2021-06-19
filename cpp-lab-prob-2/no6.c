#include<stdio.h>
int main()
{
// Write a program that checks whether input number is divisible by 5 or not. 
int a;
scanf("%d", &a);
int b = a%5;
if(b ==0 || b==5){
    printf("the no is divisible by 5");
}else{
    printf("the no is not divisible by 5");
}
return 0;
}