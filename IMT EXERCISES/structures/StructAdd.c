#include "stdlib.h"
#include "stdio.h"

struct Distance
{
    int feet;
    int inch;
};

int main()
{

    struct Distance first;
    struct Distance second;
    puts("Enter the feet and inchs for the first point");
    scanf("%d %d", &first.feet, &first.inch);
    puts("Enter the feet and inchs for the first point");
    scanf("%d %d", &second.feet, &second.inch);
    printf("the sum of feet is %d",first.feet + second.feet);
    printf("the sum of inches is %d",first.inch + second.inch);
}