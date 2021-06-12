#include<stdio.h>
int main()
{
// 1.Write a program that finds the maximum number from 3 numbers. 
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if(a>b){
    if(a>c){
        printf("the greatest no is = %d", a);
    } else{
        printf("the greatest no is = %d", c);
    }
} else if(b>c){
    printf("the greatest no is =%d", b);

} else{
    printf("the greatest no is = %d", c);
}
return 0;
}