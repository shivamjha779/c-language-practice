#include<stdio.h>
int main()
{
//12. Develop a program to count number’s greater than, less than or equal to a number ‘k’ in an array of N elements.
int size;
printf("enter the size of array=? ");
scanf("%d", &size);
int arr[size];
for(int i=0; i<size; i++){
    scanf("%d", &arr[i]);

}
int no;
printf("enter the no =? ");
scanf("%d", &no);
int g=0, l=0, e=0;
for(int i=0; i<size; i++){
    if(arr[i]>no){
        g++;
    }else if(arr[i]<no){
        l++;
    }else{
        e++;
    }
}
printf("the nos greater than %d is %d\n less than is %d\n equal is %d", no, g, l, e);
return 0;
}