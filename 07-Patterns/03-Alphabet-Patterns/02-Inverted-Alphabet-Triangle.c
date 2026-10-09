#include <stdio.h>
int main(void) {
    for (int row = 5; row >= 1; row--) {
        for (int column = 0; column < row; column++) printf("%c ", 'A' + column);
        printf("\n");
    }
    return 0;
}
