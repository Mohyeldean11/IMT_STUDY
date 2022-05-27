#include "stdio.h"
#include "stdlib.h"
int main()
{
    int size, max;
    int *ptr;
    puts("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d", &size);
    int ARR[size], counter = 0;
    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE %d element of the array: ", i + 1);
        scanf("%d", &ARR[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d", ARR[i]);
        printf(",");
    }
    ptr = ARR;
    puts("\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (max < abs(ptr[j] - ptr[i]))
            {
                max = abs(ptr[j] - ptr[i]);
            }
        }
    }
    printf("\n the max val is %d", max);
}