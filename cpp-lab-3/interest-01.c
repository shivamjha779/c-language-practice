#include<stdio.h>
#include<math.h>

int main(){
//     Write a program to find accurate interest value using explicit type casting.
// int p,r,n; float i;

   int p, q, n;
   float i;
   int k;
   printf("enter the principal amount\n");
   scanf("%d", &p);
   printf("enter the rate\n");
   scanf("%d", &q);
   printf("enter the time\n ");
   scanf("%d", &n);
   i = (p*q*n)/100;
   k = i;
   printf("%d", k);
   return 0;

}