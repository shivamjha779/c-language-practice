#include<stdio.h>
int main()
{
// Write C program to print multiplication table of a given number 
int a;
printf("enter a no =");
scanf("%d", &a);
for(int i=1; i <= 10; i++){
    printf("%d\t", a * i);
}

return 0;
}