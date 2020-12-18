#include <stdio.h>

int main()
{
    //register int i = 10;
    //int *a = &i; //trying to get address of i while i is stored in register
    //printf("%d is the address\n",*a); //error will be thrown
    int i = 10;
    register int *a = &i;
    printf("%d",*a); //stored in register
    return 0;
}