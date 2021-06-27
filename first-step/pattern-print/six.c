#include<stdio.h>
int main()
{
// Print Mirrored Rhombus Star Pattern 
int a;
printf("Enter the no of rows= ");
scanf("%d", &a);
for(int i=0; i<a; i++){
    for(int j=i; j<a; j++){
        printf(" ");
    }
    for(int j=0; j<a; j++){
        printf("*");

    } printf("\n");
}
return 0;
}