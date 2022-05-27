#include "stdio.h"
#include "stdlib.h"

int main()
{
    int number;
    printf("please enter the number: ");
    scanf("%d",&number);
    (number%2==0) ? printf("the number %d is even",number) : printf("the number %d is odd",number);
}