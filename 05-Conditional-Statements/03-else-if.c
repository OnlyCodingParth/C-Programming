#include <stdio.h>

int main(void) {
    int marks = 82;

    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 75) {
        printf("Grade: B\n");
    } else if (marks >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }
    return 0;
}
