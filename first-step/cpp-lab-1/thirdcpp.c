#include<stdio.h>

int main() {
    //  Write a program to interchange the values of given two variables. (Using the third variable).

    int a, b, c;
    printf("type a no to swap a = \n");
    scanf("%d", &a);
    printf("type another no to swap b = \n");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf(" a = %d, b = %d", a, b);


    return 0;
}