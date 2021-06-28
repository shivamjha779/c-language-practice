#include <stdio.h>
int main()
{
    // Develop a program to find sum and average of given N elements in an array.
    int n;
    float avg=0, sum = 0;
    printf("enter how many nos?= ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        sum = sum+a[j];

    } avg = sum/n;
     printf("the sum is %.1f and the average is %.2f", sum, avg);
    return 0;
}