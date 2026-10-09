#include <stdio.h>
int main(void) {
    int matrix[2][3];
    for (int row = 0; row < 2; row++)
        for (int column = 0; column < 3; column++) matrix[row][column] = row + column;
    for (int row = 0; row < 2; row++) {
        for (int column = 0; column < 3; column++) printf("%d ", matrix[row][column]);
        printf("\n");
    }
    return 0;
}
