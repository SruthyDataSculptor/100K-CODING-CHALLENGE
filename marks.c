#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float mark;
    printf("Enter your mark: ");
    scanf("%f",&mark);
    if(mark > 50)
    {
        printf("You are Passed %f",mark);
    }
    else
    {
        printf("You are failed %f",mark);

    }
    return EXIT_SUCCESS;

}