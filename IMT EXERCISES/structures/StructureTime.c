#include "stdlib.h"
#include "stdio.h"

struct Watch
{
    int hours;
    int minutes;
    int seconds;
};
struct Watch TimeAdd(struct Watch *point1, struct Watch *point2);
int main()
{
    struct Watch returnValue;
    struct Watch first;
    struct Watch second;
    struct Watch *ptr1 = &first;
    struct Watch *ptr2 = &second;

    puts("ENTER THE FIRST WATCH HOURS ,MINUTES,SECONDS");
    scanf("%d %d %d", &ptr1->hours, &ptr1->minutes, &ptr1->seconds);
    puts("ENTER THE SECOND WATCH HOURS ,MINUTES,SECONDS");
    scanf("%d %d %d", &ptr2->hours, &ptr2->minutes, &ptr2->seconds);
    puts("THE FIRST WATCH HOURS ,MINUTES,SECONDS");
    printf("%d:%d:%d \n", ptr1->hours, ptr1->minutes, ptr1->seconds);
    puts("THE SECOND WATCH HOURS ,MINUTES,SECONDS");
    printf("%d:%d:%d \n", ptr2->hours, ptr2->minutes, ptr2->seconds);
    puts("THE DIFFERENCE OF THE TWO TIMES");
    returnValue = TimeAdd(ptr1, ptr2);
    printf("%d:%d:%d", returnValue.hours, returnValue.minutes, returnValue.seconds);
}
struct Watch TimeAdd(struct Watch *point1, struct Watch *point2)
{
    struct Watch final;
    final.hours = (point1->hours - point2->hours);
    final.minutes = (point1->minutes - point2->minutes);
    final.seconds = (point1->seconds - point2->seconds);

    return final;
}