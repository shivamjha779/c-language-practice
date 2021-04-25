#include <stdio.h>

int main(){
    // Write a program to ask five nos. from the user and display their sum and average

    int a, b, c, d, e;
    printf("type a no a = \n");
    scanf("%d", &a);
    printf("type a no b = \n");
    scanf("%d", &b);
    printf("type a no c = \n");
    scanf("%d", &c);
    printf("type a no d = \n");
    scanf("%d", &d);
    printf("type a no e = \n");
    scanf("%d", &e);
    printf("here is the sum of all nos\n");
    printf("sum = %d", a+b+c+d+e);
    return 0;
    
}