#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int len,i,flag = 0;
    char word[100];
    printf("Enter the string : ");
    scanf("%s",word);
    len = strlen(word);
    for(i=0;i<len;i++)
    {
        if(word[i]!=word[len-i-1])
        {
            flag = 1;
            break;

        }
    }
    if(flag == 1)
    {
        printf("not palindrome %s",word);
    }
    else
    {
        printf("palindrome %s",word);
    }



    
    return EXIT_SUCCESS;
}
