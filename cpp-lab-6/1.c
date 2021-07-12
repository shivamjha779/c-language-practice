#include<stdio.h>
int prime(int a){
    int count =0;
    for(int i=1; i<=a; i++){
        if(a%i==0){
            count++;
        }

    } if(count ==2){
        return 1;

    }else{
        return 0;
    }
}
int main()
{
// Write a program which has a function prime that returns 1 if its argument is prime and return 0 otherwise. 
int a;
printf("enter the no = ");
scanf("%d", &a);
int ans = prime(a);
printf("%d", ans);
return 0;
}