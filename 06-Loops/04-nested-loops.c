#include <stdio.h>

int main(void) {
    for (int row = 1; row <= 3; row++) {       /* Outer loop: rows. */
        for (int column = 1; column <= 4; column++) { /* Inner loop: columns. */
            printf("%d ", row * column);
        }
        printf("\n");
    }
    return 0;
}
