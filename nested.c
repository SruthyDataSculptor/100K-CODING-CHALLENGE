#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1,num2,num3;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1 > num2 && num1 > num3) 
    {
        printf("num1 is greater %d",num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("num2 is greater %d",num2);
    }
    else
    {
        printf("num3 is greater %d",num3);
    }
    
    return EXIT_SUCCESS;
}