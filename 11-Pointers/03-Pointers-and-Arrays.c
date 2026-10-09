#include <stdio.h>
int main(void) {
    int numbers[] = {4, 8, 12};
    int *pointer = numbers;
    for (int index = 0; index < 3; index++) printf("%d ", *(pointer + index));
    printf("\n");
    return 0;
}
