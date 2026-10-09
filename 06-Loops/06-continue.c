#include <stdio.h>

int main(void) {
    for (int number = 1; number <= 10; number++) {
        if (number % 2 == 0) {
            continue; /* Skip even numbers and start the next iteration. */
        }
        printf("%d ", number);
    }
    printf("\n");
    return 0;
}
