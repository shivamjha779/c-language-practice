#include<stdio.h>
int main()
{
// Using switch case check input character is vowel or consonant 
char p;
scanf("%c", &p);
switch (p)
{
case('a'):
    printf("%c is a vowel", p);
    break;
case('e'):
printf("%c is a vowel", p);
break;
case('i'):
printf("%c is a vowel", p);
break;
case('o'):
printf("%c is a vowel", p);
break;
case('u'):
printf("%c is a vowel", p);
break;
default:
printf("%c is a consonent", p);
    break;
}
return 0;
}