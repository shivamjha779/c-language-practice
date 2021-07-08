#include<stdio.h>
int fin();
int fin(int x)
{
    int b;
   
    for(int i=1; i<x; i++){
        if(x%i == 0){
            b=i;
        }
    }
    return b;
}
int main(){
// G.C.D. of two given numbers. 

    int digit, gcd = 0;
    printf("enter the no = ");
    scanf("%d", &digit);
    gcd = fin(digit);
    printf("%d", gcd);

    return 0;
}