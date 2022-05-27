#include "stdio.h"
#include "stdlib.h"

int main()
{
    int size;
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
    }
    int *ptr = ARR;
    puts("\n");
    for (int i = 0; i < size; i++)
    {
        if (*ptr != ARR[i + 1])
        {
            printf("%d", ARR[i]);
            ptr++;
            counter++;
        }
    }
}