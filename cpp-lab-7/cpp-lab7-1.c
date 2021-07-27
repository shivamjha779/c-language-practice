#include<stdio.h>

int main()
{   char arr[]= {'s','h','i','v'};
    int a = sizeof(arr)/sizeof(arr[0]);
    printf("%d", a);
    return 0;
}