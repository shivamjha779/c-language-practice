#include <stdio.h>
void sort(int arr[], int a){
    int temp = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (arr[i] > arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<a; i++){
        printf("%d ", arr[i]);
    }
}
int main()
{
    // Develop a program with functions using Arrays –
    // sorting of N nos
    int a;
    printf("enter the size of the array= ");
    scanf("%d", &a);
    int arr[a];
    printf("enter the nos of the array = ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, a);
    

    return 0;
}