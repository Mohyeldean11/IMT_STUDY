#include "stdio.h"
#include "stdlib.h"

int main()
{
    int SECOND,FIRST,max;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d",&FIRST);
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d",&SECOND);
    max=( FIRST>SECOND) ? FIRST:SECOND;
 
    printf("THE BIGGEST NUMBER IS %d",max);
    


}