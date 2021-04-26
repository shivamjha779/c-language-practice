#include<stdio.h>
int main(){
int a, b;
float c, d;
scanf("%d %d %f %f", &a, &b, &c, &d);
printf("%d %d\n%.1f %.1f", a+b, c+d, a-b, c-d);

    return 0;
}