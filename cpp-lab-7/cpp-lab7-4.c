#include<stdio.h>
int equal(char arr1[], char arr2[])
{
    int i=0, j=0;
    while(arr1[i]!='\0') {
        if(arr1[i]==arr2[j]) {
            return 1;
        }
        i++;
        j++;
    }
}
return
}
int main()
{
    char arr1[7]="orange";
    char arr2[6]="mango";
    int ans = equal(arr1, arr2);
    printf("%d", ans);
    return 0;
}