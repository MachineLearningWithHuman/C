// learn how to save space while doing c using supression 

#include <stdio.h>

void main()
{
    int x,y,z;
    printf("Enter your date of birth(use / version (23/12/2009))\n");
    scanf("%d%*c%d%*c%d",&x,&y,&z);
    printf("The date is %d\n",x);
    printf("The month is %d\n",y);
    printf("The year is %d\n",z); //thank you

}