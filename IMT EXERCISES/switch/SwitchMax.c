#include "stdio.h"
#include "stdlib.h"

int main()
{
    int numb1, numb2;
    puts("ENTER THE FIRST NUMBER ");
    scanf("%d", &numb1);
    puts("ENTER THE SECOND NUMBER ");
    scanf("%d", &numb2);

    switch (numb1>numb2)
    {
    case 0:
    {
        puts("THE SECOND NUMBER IS THE MAXIMUM");
        printf("%d", numb2);
        break;
    }
    case 1:
    {
        puts("THE FIRST NUMBER IS THE MAXIMUM");
        printf("%d", numb1);
        break;
    }
    default:
        break;
    }
}
