#include<stdio.h>

int main() {
    // Write a program to interchange the values of given two variables. (Without using the third variable)

    int a, b;

    printf("what is the no to swap a = \n");
    scanf("%d", &a);
    printf("what is the another no to swap b = \n");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("here is the swaped value of a and b \n");
    printf("a = %d b = %d", a, b);

    return 0;

}