#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1,num2;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("num1 is greater %d",num1);
    }
    else
    {
        printf("num2 is greater %d",num2);
    }

    return EXIT_SUCCESS;
}