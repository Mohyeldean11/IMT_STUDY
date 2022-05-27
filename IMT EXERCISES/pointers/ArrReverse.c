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
    puts("THE ARRAY BEFORE REVERSE");
    for (int i = 0; i < size; i++)
    {
        printf("%d", ARR[i]);
        printf(",");
    }
    puts("\n");
    ptr = &ARR[size - 1];
    puts("THE ARRAY AFTER REVERSE");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d", *ptr);
        printf(",");
        ptr--;
    }
}