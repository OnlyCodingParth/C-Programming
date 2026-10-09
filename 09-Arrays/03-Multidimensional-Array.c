#include <stdio.h>
int main(void) {
    int cube[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    for (int layer = 0; layer < 2; layer++)
        for (int row = 0; row < 2; row++) {
            for (int column = 0; column < 2; column++) printf("%d ", cube[layer][row][column]);
            printf("\n");
        }
    return 0;
}
