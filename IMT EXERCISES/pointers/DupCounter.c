#include "stdio.h"
#include "stdlib.h"
int main()
{
  int size, max, counter = 0;
  int *ptr;
  puts("ENTER THE SIZE OF THE ARRAY : ");
  scanf("%d", &size);
  int ARR[size];
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

  for (int i = 0; i <= size; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (ptr[i] == ptr[j] && (i != j))
      {
        counter++;
        max = ptr[j];
      }
    }
  }
  printf("\n the number %d is repeated %dth times", max, counter);
}