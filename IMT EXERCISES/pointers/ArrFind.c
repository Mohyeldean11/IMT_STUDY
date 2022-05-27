#include "stdio.h"
#include "stdlib.h"
void main()
{
    int size, value;
    int *ptr;
    puts("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d", &size);
    int ARR[size];
    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE %d element of the array: ", i + 1);
        scanf("%d", &ARR[i]);
    }
    ptr = ARR;
    puts("enter the value you want to find: ");
    scanf("%d", &value);
    puts("THE ARRAY BEFORE REVERSE");
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == value)
            printf("the value is %d at position %d", ptr[i], i + 1);
    }
    puts("\n");
}