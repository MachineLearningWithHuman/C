/*
C=F-32/1.8
*/

#include <stdio.h>

int main()
{
    float far=0.0,cel=0.0;
    printf("Enter the value of Farenhite(between(32-212))\n");
    scanf("%f",&far);
    cel = (far-32)/1.8;
    printf("The value is %f\n",cel);

    return 0;
}