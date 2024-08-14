#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1,num2,choice,result;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("1 for Addition\n 2 for Sub\n 3 for mul\n 4 for div \n enter ur choice : ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        result = num1 + num2;
        printf("Result is %d",result);
    }
    else if(choice == 2)
    {
        result = num1 - num2;
        printf("Result is %d",result);
    }
    else if(choice == 3)
    {
        result = num1 * num2;
        printf("Result is %d",result);
    }
    else if(choice == 4)
    {
        result == num1/num2;
        printf("Result is %d",result);
    }
    else
    {
        printf("Invalid number: ");
    }
    

    return EXIT_SUCCESS;
}