#include "stdio.h"
#include "stdlib.h"

int main()
{
    int numb;
    puts("ENTER THE  NUMBER ");
    scanf("%d", &numb);

    switch (numb % 2)
    {
    case 0:
    {
        puts("THE  NUMBER IS EVEN");

        break;
    }
    case 1:
    {
        puts("THE  NUMBER IS ODD");
        break;
    }
    default:
        break;
    }
}
