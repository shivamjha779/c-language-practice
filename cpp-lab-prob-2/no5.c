#include<stdio.h>
int main()
{
// Write a program that checks whether entered year is leap year or not. 
int a;
scanf("%d", &a);
int b, c;
b = a%4;
c = a%100;

if(b==0 && c!= 0){
    printf("%d is a leap year", a);
} else if(b==0 && c == 0){
    if(a%400 == 0){
        printf("%d is a leap year", a);

    }else {
        printf("%d is not a leap year", a);
    }
}else{
    printf("%d is not a leap year", a);
}
return 0;
}