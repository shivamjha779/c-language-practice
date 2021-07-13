#include <stdio.h>
int binarysearch();
int binarysearch(int arr[], int size, int a)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == a)
            return mid;
        else if (arr[mid] > a)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{ // this is without recursion
    // 5. Write a program for Binary search (using recursion and without recursion)
    // int size;
    // printf("enter the size of the array ");
    // scanf("%d", &size);
    // int arr[size];
    // printf("enter the elements of array ");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // int temp;
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i + 1; j <= size; j++)
    //     {
    //         if (arr[j] < arr[i])
    //         {
    //             temp = arr[j];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int a;
    printf("enter the no ");
    scanf("%d", &a);
    int ans = binarysearch(arr, 9, a);
    if (ans != -1)
        printf("at index %d", ans);
    else
        printf("not found");

    return 0;
}