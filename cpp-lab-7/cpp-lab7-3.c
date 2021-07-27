#include<stdio.h>

int main()
{
    char arr1[5]="shiv";
    char arr2[3]="am";
    char arr3[8];
    int i=0,j=0;
    while(arr1[i]!='\0') {
        arr3[j]=arr1[i];
        i++;
        j++;
    }
    i=0;
    while(arr2[i]!='\0') {
 arr3[j]=arr2[i];
i++;
j++;
    }
    for(int i=0; i<8; i++){
    printf("%c", arr3[i]);}
    return 0;
}