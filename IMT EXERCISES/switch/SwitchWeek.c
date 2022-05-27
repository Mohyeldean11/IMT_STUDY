#include "stdio.h"
#include "stdlib.h"

int main()
{
    int numb;
    puts("ENTER THE NUMBER FOR THE WEEK");
    scanf("%d",&numb);
    switch (numb)
    {
    case 1:
    {
        puts("SATURDAY");
        break;
    }
    case 2:
    {
        puts("SUNDAY");
        break;
    }
    case 3:
    {
        puts("MONDAY");
        break;
    }
    case 4:
    {
        puts("TUESDAY");
        break;
    }
    case 5:
    {
        puts("WEDNESDAY");
        break;
    }
    case 6:
    {
        puts("THURSDAY");
        break;
    }
    case 7:
    {
        puts("FRIDAY");
        break;
    }
    default:
    {
        break;
    }
    }
}
