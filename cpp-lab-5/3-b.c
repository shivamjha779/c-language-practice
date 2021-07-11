#include <stdio.h>
int sumof(int arr[], int a)
{ int sum=0;
    for (int i = 0; i < a; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    // { Develop a program with functions using Arrays –
    // Sum and average of N numbers.
    int a;
    printf("enter the size of array = ");
    scanf("%d", &a);
    int arr[a];
    printf("enter the nos of the array = ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = sumof(arr, a);
    int avg = sumof(arr, a)/a;
    printf("sum is %d and avg is %d", sum, avg);

    return 0;
}
