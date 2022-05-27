#include "stdio.h"
#include "stdlib.h"
#define bit     sizeof(int)*8
int main()
{
    int temp,bits;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&temp);
    bits=(1<<(bit-1));
    if(temp&bits)
   {
        printf("MSB OF %d is set (1)",temp);
   }
   else
   {
        printf("MSB OF %d is unset (0)",temp);
   }
}