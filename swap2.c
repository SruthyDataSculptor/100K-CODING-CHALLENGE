#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a = 100,b =40;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a: %d b: %d",a,b);
    return EXIT_SUCCESS;
}