#include "stdio.h"
#include "stdlib.h"

int main()
{

    int bit_pos,temp_bit,new_numb,i;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&temp_bit);
    for ( i = 0; i <=sizeof(temp_bit); i++)
    {
        if (temp_bit&(1<<i))
        {
            break;
        }
        
    }
    
    printf("\n  the bit position is %d : ",i);

}