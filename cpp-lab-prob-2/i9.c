#include<stdio.h>
int main()
{
// Write a program that stops asking number from users when -1 is pressed and show total numbers input by users. (Note: use while… OR do…while loop) 
int a, no=0;
do{
    printf("Enter the no\n");
    scanf("%d", &a);
    no++;
    

}while(a!=-1);
printf("%d\t", no);
return 0;
}