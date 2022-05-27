#include "stdio.h"
#include "stdlib.h"

int main()
{
    int size=1000,i = 0, counter = 0;
    char *ptr;
    char ARR[size];
    puts("ENTER THE STRING : ");
    gets(ARR);
    ptr = &ARR[0];
    puts("THE LENGTH OF THE STRING is: ");
    while ((*ptr) != '\0')
    {
        counter++;
        ptr++;
    }
    printf("%d", counter);
}