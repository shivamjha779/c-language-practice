#include<stdio.h>
int main()
{
// 3. Add, Subtract, multiply, divide, modulo and power two nos. using switch statement. 
int a, b, s;
char c;
printf("enter the two no and then oprator\n");
scanf("%d %d %c", &a, &b, &c);

switch (c)
{
case('+'):
s = a+b;
    break;
case('-'):
s = a-b;
break;
case('*'):
s = a*b;
break;
case('/'):
s = a/b;
break;

default:
printf("ERROR");
    break;
} printf("%d %c %d = %d", a,c,b, s);
return 0;
}