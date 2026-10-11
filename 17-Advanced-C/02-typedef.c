#include <stdio.h>

typedef unsigned long PositiveCount;
typedef struct {
    char name[30];
    int score;
} Student;

int main(void) {
    PositiveCount count = 3;
    Student student = {"Lina", 88};
    printf("Count: %lu\nStudent: %s (%d)\n", count, student.name, student.score);
    return 0;
}
