#include <stdio.h>
int main(void) {
    for (int row = 1; row <= 5; row++) {
        for (int space = row; space < 5; space++) printf(" ");
        for (int column = 1; column <= 2 * row - 1; column++) printf("*");
        printf("\n");
    }
    for (int row = 4; row >= 1; row--) {
        for (int space = row; space < 5; space++) printf(" ");
        for (int column = 1; column <= 2 * row - 1; column++) printf("*");
        printf("\n");
    }
    return 0;
}
