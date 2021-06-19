#include<stdio.h>
int main()
{
// Write a program that displays student information like: Roll Number, Marks of any five subjects, total marks , percentage and result pass or fail 
int roll;
printf("enter your roll no\n");
scanf("%d", &roll);
int a, b, c, d, e;
printf("Enter marks of any five subjects out of 100\n");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
int total = (a+b+c+d+e);
float per = (total/5);
printf("Roll no: %d/n", roll);
printf("Marks of five subjects: %d\t %d\t %d\t %d\t %d\t", a, b, c, d, e);
printf("Total marks: %d\n", total);
printf("Percentage marks: %f\n", per);
if(per>30){
    printf("result : PASS");

}else{
    printf("result : FAIL");
}
return 0;
}