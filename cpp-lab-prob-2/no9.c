#include <stdio.h>
int main()
{ // not completed
    // Display grade according to percentage using switch statement Per>= 90 – “A+” Per>= 80 – “A” Per>= 70 – “B” Per>= 60 – “B+” Per>= 50 – “C+” Per>= 40 – “C” Per< 40 – “F”
    float per;
    printf("enetr your percentage marks =\t");
    scanf("%f", &per);
    switch (per)
    {
    case ('per>= 90'):
        printf("A+");
        break;
    case ('per>= 80'):
        printf("A");
        break;
    case ('per>= 70'):
        printf("B");
        break;
    default:
        printf("FAIL");
        break;
    }
    return 0;
}