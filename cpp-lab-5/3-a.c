#include<stdio.h>
int lar(int a, int arr[]){
    for(int i=1; i<a; i++){
        if(arr[0]<arr[i]){
            arr[0]= arr[i];
        }
    }
    return arr[0];
}
int main()
{
//  Develop a program with functions using Arrays –
// a) Largest of N numbers.
int a, ans;
printf("enter the size of the array = ");
scanf("%d", &a);
int arr[a];
printf("enter the nos of the array= ");
for(int i=0; i<a; i++){
    scanf("%d", &arr[i]);
}
ans = lar(a, arr);
printf("largest is %d ", arr[0]);
return 0;
}