#include<stdio.h>
int main()
{
// Develop a program to find to add first and last element from a given array.
int a;
scanf("%d", &a);
int b[a];
for (int i=0; i<a; i++){
    scanf("%d", &b[i]);

} 
int sum = b[0]+b[a-1];
printf("%d", sum);

return 0;
}