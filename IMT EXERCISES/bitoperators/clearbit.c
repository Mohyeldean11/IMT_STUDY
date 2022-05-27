#include "stdio.h"
#include "stdlib.h"

int main()
{
    int bit_pos,temp_bit,new_numb;
    printf("ENTER THE NUMBER TO clear: ");
    scanf("%d",&temp_bit);
    printf("\n enter the bit position : ");
    scanf("%d",&bit_pos);
    new_numb=temp_bit&(~(1<<bit_pos));
    printf("\n %d",new_numb);
}