#include "stdlib.h"
#include "stdio.h"

enum months
{
    january,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};
int main()
{

    enum months month=1;

    printf("jan is %d \n", month);
    printf("feb is %d \n", month + 1);
    printf("marc is %d \n", month + 2);
}