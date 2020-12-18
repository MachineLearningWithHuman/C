#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,a;
    printf("Enter the Number?\n");
    scanf("%d", &a);
    for (i=2;i=a-1;i++)
    {
        if(a%i==0)
        {
          printf("Not a prime\n");
          exit(1);
        }
        
        
        
            
    }printf("Prime");
}