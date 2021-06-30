#include <stdio.h>
int main()
{
    //11. Develop a program to print the elements of array by eliminating the duplicate numbers.
    int size;
    printf("enter the size of the array =?");
    scanf("%d", &size);
    int arr[size];
    printf("enter the nos of array =? ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for(int k=i; k<size; k++){
                    arr[k]=arr[k+1];
                }
                size--;
            }
        }
    }
    for (int i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}