#include <stdio.h>
struct Student { char name[30]; int age; float grade; };
int main(void) {
    struct Student student = {"Maya", 20, 91.5f};
    printf("Name: %s\nAge: %d\nGrade: %.1f\n", student.name, student.age, student.grade);
    return 0;
}
