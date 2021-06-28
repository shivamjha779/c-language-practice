#include <stdio.h>
int main()
{
    // 8. Develop a program to print second half of the given array.
    // for (i = 0; i < Size; i++)
    // 	{
    // 		for(j = i + 1; j < Size; j++)
    // 		{
    //     		if(arr[i] == arr[j])
    //     		{
    //     			for(k = j; k < Size; k++)
    //     			{
    //     				arr[k] = arr[k + 1];
    // 				}
    // 				Size--;
    // 				j--;
    // 			}
    // 		}
    // 	}
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    if (a % 2 == 0)
    {
        for (int j = (a / 2); j < a; j++)
        {
            printf("%d\t", b[j]);
        }
    }
    else
    {
        for (int j = (a / 2) + 1; j < a; j++)
        {
            printf("%d\t", b[j]);
        }

       
    }
     return 0;
}