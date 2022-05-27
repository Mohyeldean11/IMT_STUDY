#include "stdio.h"
#include "stdlib.h"

int main()
{
    int numb;
    puts("ENTER THE NUMBER FOR THE WEEK");
    scanf("%d", &numb);
    switch (numb)
    {
    case 1:
    {
        puts("january");
        puts("the month days : 31");
        break;
    }
    case 2:
    {
        puts("february");
        puts("the month days : 28");
        break;
    }
    case 3:
    {
        puts("march");
        puts("the month days : 31");
        break;
    }
    case 4:
    {
        puts("april");
        puts("the month days : 30");
        break;
    }
    case 5:
    {
        puts("may");
        puts("the month days : 31");
        break;
    }
    case 6:
    {
        puts("june");
        puts("the month days : 30");
        break;
    }
    case 7:
    {
        puts("july");
        puts("the month days : 31");
        break;
    }
    case 8:
    {
        puts("august");
        puts("the month days : 31");
        break;
    }
    case 9:
    {
        puts("september");
        puts("the month days : 30");
        break;
    }
    case 10:
    {
        puts("october");
        puts("the month days : 31");
        break;
    }
    case 11:
    {
        puts("november");
        puts("the month days : 30");
        break;
    }
    case 12:
    {
        puts("december");
        puts("the month days : 30");
        break;
    }
    default:
    {
        break;
    }
    }
}
