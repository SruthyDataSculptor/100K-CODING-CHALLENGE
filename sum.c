#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int number1,number2,sum;
    printf("Enter two number: ");
    scanf("%d%d",&number1,&number2);
    sum = number1+number2;
    printf("Result is : %d",sum);
    return EXIT_SUCCESS;
}