#include<stdio.h>
int main()
{
// Print Pyramid Star Pattern 
int a;
printf("Enter tje no of rows= ");
scanf("%d", &a);
for(int i=1; i<=a; i++){
    for(int j=a; j>=i+1; j--){
        printf(" ");
    }
    for(int j=0; j<i*2; j++){
        printf("*");
    } printf("\n");
}
return 0;
}