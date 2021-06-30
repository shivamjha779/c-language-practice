#include <stdio.h>
int main()
{
    // 10. Develop a program to delete an element from a list of elements in the Array.
    int a;
    printf("enter the no of elements in a array=? ");
    scanf("%d", &a);
    int arr[a];

    printf("enter the elements = ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the no to delete? ");
    int del;
    scanf("%d", &del);
    int pos;
    for(int i=0; i<a; i++){
        if(del==arr[i]){
            pos=i;
        }
    }
    for(int i=pos; i<a-1; i++){
        arr[i]=arr[i+1];
    }
    a--;
    for(int j=0; j<a; j++){
        printf("%d\t", arr[j]);
    }
    
    return 0;
}