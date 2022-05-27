#include "stdio.h"
#include "stdlib.h"
int main()
{
    int size;
    int *ptr;
    puts("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d", &size);
    int ARR[size];
    int ARRcopy[size];
    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE %d element of the array: ", i + 1);
        scanf("%d", &ARR[i]);
    }
    puts("THE ARRAY BEFORE COPY");
    for (int i = 0; i < size; i++)
    {
        printf("%d", ARR[i]);
        printf(",");
    }
    ptr=ARR;
    puts("\n");
    for (int i = 0; i < size; i++)
    {
      ARRcopy[i]=(*ptr);
        ptr++;
    }
    puts("\n");
    puts("THE ARRAY AFTER COPY");
    for (int i = 0; i < size; i++)
  {
    printf("%d", ARRcopy[i]);
    printf(",");
  }
}