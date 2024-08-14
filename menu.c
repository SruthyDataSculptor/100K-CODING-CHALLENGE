#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int choice;
    printf(" 1 for Biryani\n 2 for Porotta\n 3 for Mandhi \n 4 for fried rice\n Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("You selected Biriyani");
        break;

    case 2:
        printf("You selected for Porotta");
        break;

    case 3:
        printf("You selected Mandhi");
        break;

    case 4:
        printf("You selected Fried rice");
        break;

    default:
        printf("Invalid option");
        
    }
    return EXIT_SUCCESS;
}