#include<stdio.h>
int main()
{ 
// Write a program to find largest no from user given nos.
int a, b;
scanf("%d %d", &a, &b);
if(a>b){
    printf("%d is larger", a);

}else if(a==b){
    printf("both are equal");
}
else{
    printf("%d is larger", b);

}
return 0;
}