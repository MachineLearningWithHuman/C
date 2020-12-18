/*
area---> pi * r * r 
r = 1
area = 3.14 
*/

#include <stdio.h>
#define PI 3.14159
int main()
{
    double  area=0.0,rad=0.0;
    printf("Enter the value of radius\n");
    scanf("%lf", &rad);
    area = PI * rad * rad;
    printf("The area is %lf for radius %lf \n",area,rad);
    return 0;
}