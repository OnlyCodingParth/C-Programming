#include <stdio.h>
int main(void) {
    for (int row = 0; row < 5; row++) {
        int value = 1;
        for (int space = row; space < 5; space++) printf(" ");
        for (int column = 0; column <= row; column++) {
            printf("%d ", value);
            value = value * (row - column) / (column + 1);
        }
        printf("\n");
    }
    return 0;
}
