#include <stdio.h>

void main ()
{
    int n;
    printf("Please Enter your number?\n");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}