#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int week_no;
    printf(" 1 for Sunday \n 2 for Monday \n 3 for Tuesday \n 4 for Wendsday \n 5 for Thurday \n 6 for Friday \n 7 for Saturday \n Enter Your Week_No: ");
    scanf("%d",&week_no);
    switch(week_no)
    {
    case 1:
        printf("You Selected Sunday\n");
        break;

    case 2:
        printf("You Selected Monday\n");
        break;

    case 3:
        printf("You Selected Tuesday\n");
        break;

    case 4:
        printf("You Selected Wendsday\n");
        break;

    case 5:
        printf("You Selected Thursday\n");
        break;

    case 6:
        printf("You Selected Friday\n");
        break;

    case 7:
        printf("You Selected Saturday\n");
        break;

    default:
        printf("Invalid Option");
        
 
    }
}
