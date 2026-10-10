#include <stdio.h>
struct Date { int day, month, year; };
struct Event { char title[30]; struct Date date; };
int main(void) {
    struct Event event = {"C Workshop", {8, 10, 2026}};
    printf("%s: %02d/%02d/%d\n", event.title, event.date.day, event.date.month, event.date.year);
    return 0;
}
