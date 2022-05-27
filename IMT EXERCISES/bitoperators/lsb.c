#include "stdio.h"
#include "stdlib.h"

int main()
{
    int value;
    puts("ENTER ANY NUMBER: ");
    scanf("%d",&value);
   if(value)
   {
        printf("LSB OF %d is set (1)",value);
   }
   else
   {
        printf("LSB OF %d is unset (0)",value);
   }
   return ;
}