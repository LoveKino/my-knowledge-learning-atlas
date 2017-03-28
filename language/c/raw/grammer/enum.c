#include<stdio.h>

enum WeekdayType {
    sun = 3, mon, tue, wed, thu, fri, sat
};
int main(void) {
    enum WeekdayType today;
    today = sun;
    printf("%6d\n", today);

    today = mon;
    printf("%6d\n", today);
};
