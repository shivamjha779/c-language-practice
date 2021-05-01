#include<stdio.h>
#include<math.h>
int main(){
    // 5. Write a program to convert Celsius to Fahrenheit temperature and vice versa. C=(f-32)/1.8
    float c, f;
    printf("enter the temp in celsius c = ");
    scanf("%f", &c);
    f = (1.8*c + 32);
    printf("%f", f);
return 0;


}