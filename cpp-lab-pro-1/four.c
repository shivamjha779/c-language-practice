#include<stdio.h>
int main()
{
// Write a C program to print all natural numbers in reverse order 
int a;
printf("enter a no =");
scanf("%d", &a);
for(int i=a; i >=1; i--){
    printf("%d\n", i);
}
return 0;
}