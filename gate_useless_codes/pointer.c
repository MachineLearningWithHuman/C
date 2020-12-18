#include <stdio.h>

void main()
{
    int i =5;
    int *y = &i;

    printf("the value of i is %d\n",i);
    printf("the value of &i is %d\n",&i);
    printf("the value of y is %d\n",y);
    printf("the value of &y is %d\n",&y);
    printf("the value of *y is %d\n",*y);
}