#include "stdio.h"
#include "stdlib.h"

int main()
{
    int numb1, numb2;
    char operator;
    puts("ENTER THE OPERATOR YOU WANT: (+,-,*,/)");
    scanf("%c", &operator);
    puts("ENTER THE FIRST NUMBER ");
    scanf("%d", &numb1);
    puts("ENTER THE SECOND NUMBER ");
    scanf("%d", &numb2);

    switch (operator)
    {
    case '+':
    {
        puts("THE ADDITION OF THE  NUMBERS IS");
        printf("%d", numb1 + numb2);
        break;
    }
    case '-':
    {
        puts("THE SUBTRACTION OF THE  NUMBERS IS");
        printf("%d", (numb1 - numb2));
        break;
    }
    case '*':
    {
        puts("THE MULTIPLICATION OF THE  NUMBERS IS");
        printf("%d", numb1 * numb2);
        break;
    }
    case '/':
    {
        puts("THE DIVISION OF THE  NUMBERS IS");
        printf("%d", numb1 / numb2);
        break;
    }
    default:
        break;
    }
}
