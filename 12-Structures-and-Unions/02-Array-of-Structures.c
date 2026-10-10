#include <stdio.h>
struct Student { char name[30]; int marks; };
int main(void) {
    struct Student students[] = {{"Asha", 88}, {"Noah", 95}};
    int count = sizeof students / sizeof students[0];
    for (int index = 0; index < count; index++)
        printf("%s: %d\n", students[index].name, students[index].marks);
    return 0;
}
