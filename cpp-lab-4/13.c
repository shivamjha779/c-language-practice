#include <stdio.h>
int main()
{ 
    /*Develop a program to print the following output using a single dimensional array
     1 2 3
     4 5 6
     7 8 9 */
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 9; i = i + 3)
    {
        for (int j = i; j < i + 3; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    return 0;
}