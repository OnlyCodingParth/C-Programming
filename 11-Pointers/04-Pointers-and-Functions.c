#include <stdio.h>
void swap(int *first, int *second) {
    int temporary = *first;
    *first = *second;
    *second = temporary;
}
int main(void) {
    int first = 3, second = 7;
    swap(&first, &second);
    printf("first = %d, second = %d\n", first, second);
    return 0;
}
