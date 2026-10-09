#include <stdio.h>

int main(void) {
    for (int number = 1; number <= 10; number++) {
        if (number == 6) {
            break; /* Terminates the loop immediately at 6. */
        }
        printf("%d ", number);
    }
    printf("\n");
    return 0;
}
