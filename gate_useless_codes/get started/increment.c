
/*
code to experiment 
*/
#include <stdio.h>

int main(void)
{
    int a,b,c;
    a = 5;
    b = a++; //5 ,6
    printf("a is %d",a);
    printf("b is %d",b);
    c = ++a;
    printf("c is %d",c);
    printf("a is %d",a);

}