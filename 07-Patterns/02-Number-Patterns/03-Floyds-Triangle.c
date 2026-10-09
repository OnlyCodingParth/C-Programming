#include <stdio.h>
int main(void) {
    int value = 1;
    for (int row = 1; row <= 5; row++) {
        for (int column = 1; column <= row; column++) printf("%d ", value++);
        printf("\n");
    }
    return 0;
}
