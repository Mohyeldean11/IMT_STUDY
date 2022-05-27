#include "stdio.h"
#include "stdlib.h"

int main()
{
    int bit_pos,temp_bit,new_numb,i;
    int zeros=0,ones=0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&temp_bit);
    for ( i = 0; i < (sizeof(int)*8); i++)
    {
        if (temp_bit&(1<<i))
        {
            ones++;
        }
        else
        {
            zeros++;
        }
    }
    
    printf("\n  the ones : %d \n",ones);
    printf("\n  the zeros : %d \n",zeros);
}