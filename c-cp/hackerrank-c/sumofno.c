#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main()
{
int n;
scanf("%d", &n);
//calculate the sum of the five digits on n. 
int a, sum=0;
for(int i=1; i<=5; i++){
a = n%10;
n = n/10;
sum = sum + a;
}
printf("%d", sum);
return 0;
}