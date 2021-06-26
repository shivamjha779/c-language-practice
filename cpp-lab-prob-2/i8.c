#include <stdio.h>
int main()
{ // incomplete
    // Write a program to display prime number between 1 and 100.
    printf("2\n");
    for (int i = 3; i <= 100; i++)
    {
        for (int b = 2; b < i; b++)
        {
            if(i%b!=0){
                printf("%d\t", i);
            }
        }
    }
    return 0;
}