#include "stdio.h"
#include "stdlib.h"

int main()
{
    char character;
    printf("ENTER THE character : ");
    scanf("%c",&character);

        
        if (character>'A' && character<'Z' ||character>'a' && character<'z')
        {
            printf("the character is %c is alphabet",character);
        }
        else
        {
            printf("the character is %c is not alphabet",character);
        }
}