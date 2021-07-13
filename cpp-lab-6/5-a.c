#include <stdio.h>
int binarysearch(int arr[], int low, int high, int a)
{
    int mid = (low + high) / 2;
    if (low > high)
        return -1;
    if (arr[mid] == a)
        return mid;
    else if (arr[mid] > a)
        return binarysearch(arr, low, mid - 1, a);
    else
        return binarysearch(arr, mid + 1, high, a);
}
int main()
{ // this is with recursion
    // 5. Write a program for Binary search (using recursion and without recursion)
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int a;
    printf("enter the no ");
    scanf("%d", &a);
    int ans = binarysearch(arr, 0, 9, a);
    if(ans!=-1) printf("at index %d", ans);
    else printf("not found");
    return 0;
}