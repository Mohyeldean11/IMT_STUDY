#include "stdio.h"
#include "stdlib.h"

int main()
{
    int size = 1000, i = 0, counter = 0;
    char *ptr;
    char ARR[size];
    puts("ENTER THE STRING : ");
    gets(ARR);
    ptr = &ARR[0];
    char ARR2[size];
    puts("THE  ARRAY IS : ");
    puts(ARR);
    while ((*ptr) != '\0')
    {
        ARR2[counter] = (*ptr);
        ptr++;
        counter++;
    }
    ARR2[counter] = '\0';

    puts("THE COPIED ARRAY IS : ");
    puts(ARR2);
}