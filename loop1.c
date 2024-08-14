#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int limit,i,sum=0;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        sum = sum + i;
    }
    printf("Result is :%d",sum);
    return EXIT_SUCCESS;
}