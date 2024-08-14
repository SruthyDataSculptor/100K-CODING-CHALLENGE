#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float Total_Percentage;
    printf("Enter your total percentage: ");
    scanf("%f",&Total_Percentage);
    if(Total_Percentage > 90)
    {
        printf("A Grade %f\n",Total_Percentage);
    }
    else if(Total_Percentage > 80 && Total_Percentage <= 89)
    {
        printf("B Grade %f\n",Total_Percentage);
    }
    else if(Total_Percentage >= 70 && Total_Percentage <= 79)
    {
        printf("C Grade %f\n",Total_Percentage);
    }
    else if(Total_Percentage >= 60 && Total_Percentage <= 69)
    {
        printf("D Grade %f\n",Total_Percentage);
    }
    else if(Total_Percentage >= 50 && Total_Percentage <= 59)
    {
        printf("E Grade %f\n",Total_Percentage);
    }
    else if(Total_Percentage <= 50)
    {
        printf("Failed %f",Total_Percentage);
    }
    else
    {
        printf("Invalid input");
    }

    return EXIT_SUCCESS;
}