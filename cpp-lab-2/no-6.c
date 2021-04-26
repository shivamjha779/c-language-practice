#include<stdio.h>
#include<math.h>
int main(){
    // 6. Write a program to add individual digits of a 5 digit no
    int a, b, c, d;
    printf("enter the 4 digit no ");

    scanf("%d", &a);
    b = (a%10);
    c = (a/10);
    d = (c%10);
    printf("%d %d", b, d);



    return 0;

}