#include <stdio.h>
int main(void) {
    for (int row = 5; row >= 1; row--) {
        for (int column = 1; column <= row; column++) printf("%d ", column);
        printf("\n");
    }
    return 0;
}
