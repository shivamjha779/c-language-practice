#include<stdio.h>
int main()
{
// Write a program that checks if the input number is positive, negative or zero. 
int a;
scanf("%d", &a);
if(a==0){
    printf("The no %d is zero", a);
}else if(a<0){
    printf("The no %d is negative", a);

}else{
    printf("The no %d is positive", a);
}
return 0;
}