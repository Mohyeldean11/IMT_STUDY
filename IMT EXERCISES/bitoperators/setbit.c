#include "stdio.h"
#include "stdlib.h"

int main()
{
    int bit_pos,temp_bit;
    printf("ENTER THE NUMBER TO SET: ");
    scanf("%d",&temp_bit);
    printf("\n enter the bit position : ");
    scanf("%d",&bit_pos);
    temp_bit|=(1<<bit_pos);
    printf("\n %d",temp_bit);
}