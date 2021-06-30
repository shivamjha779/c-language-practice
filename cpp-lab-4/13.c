#include<stdio.h>
int main()
{ // incomplete
/*Develop a program to print the following output using a single dimensional array
1 2 3
4 5 6
7 8 9 */ 
int arr[]={1,2,3,4,5,6,7,8,9};
for(int i=0; i<3; i++){
    for(int j=i; j<3; j++){
        printf("%d",arr[i])
    }
}
return 0;
}