#include <stdio.h>
int main(void) {
    for (int row = 1; row <= 5; row++) {
        for (int space = row; space < 5; space++) printf(" ");
        for (int column = 0; column < row; column++) printf("%c ", 'A' + column);
        printf("\n");
    }
    return 0;
}
