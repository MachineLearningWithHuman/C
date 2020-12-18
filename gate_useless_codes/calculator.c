#include <stdio.h>
#include <math.h>

void main()
{
    int a,b;
    char operator;
    printf("Enter valid operator\n");
    scanf("%c",&operator);
    printf("Enter the number\n");
    scanf("%d%d",&a,&b);
    switch(operator)
    {
        case '+': printf("Your result is %d\n",a+b); break;
        case '-': printf("Your result is %d\n",a-b); break;
        case '*': printf("Your result is %d\n",a*b); break;
        case '%': printf("Your result is %d\n",a%b); break;
        case '/': printf("Your result is %d\n",a/b); break;
        default: printf("Invalid operator"); break;
        case '^': printf("Your result is %d\n",pow(a,b)); break;
    }
}