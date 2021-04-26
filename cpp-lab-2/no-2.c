#include<stdio.h>
#include<math.h>
int main(){
    // 2. Write a program to find roots of a quadratic equation where a=3, b=8 & c=26
    int a=3, b=8, c=2;
    float d, e, f;

    d = b*b - 4*a*c;
    e = (-b + sqrt(d))/(2*a);
    f = (-b - sqrt(d))/(2*a);
    printf("root is %.2f %.2f", e, f);

return 0;
}