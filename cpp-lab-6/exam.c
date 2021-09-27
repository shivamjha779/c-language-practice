#include <stdio.h>
int main()
{
    unsigned short i, N;
    scanf("%hu", &N);
    for (i = 1; i <= N; ++i)
    {
        switch (i % 3)
        {
        case 0:
            continue;
            break;
        case 1:
            break;
            continue;
        default:;
        }
        printf("%d", i);
    }
    return 0;
}