#include<stdio.h>

int main()
{
    char arr1[]= {'s','h','i','v'};
    int a = sizeof(arr1)/sizeof(arr1[0]);
    char arr2[a];
    for(int i=0; i<a; i++) {
        arr2[i]=arr1[i];
    }
    for(int j=0; j<a; j++){
    printf("%c", arr2[j]);}
    return 0;
}