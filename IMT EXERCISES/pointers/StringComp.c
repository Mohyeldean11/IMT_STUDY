#include "stdio.h"
#include "stdlib.h"

int main()
{
    int size = 1000, i = 0, counter = 0;
    char *ptr1;
    char *ptr2;
    char STR1[size];
    char STR2[size];
    puts("ENTER THE 1ST STRING : ");
    gets(STR1);
    puts("ENTER THE 2ND STRING : ");
    gets(STR2);
    ptr1 = &STR1[0];
    ptr2 = &STR2[0];
    while ((*ptr1) != '\0')
    {
        if (*ptr1 == *ptr2)
        {
            ptr1++;
            ptr2++;
        }
        else
        {
            puts("THE TWO STRINGS ARENT ALIKE");
            break;
        }
        counter++;
    }
    if (*ptr1 == ptr2[counter-1])
    {
        puts("THE TWO STRINGS ARE ALIKE");
    }
}