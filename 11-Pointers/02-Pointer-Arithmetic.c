#include <stdio.h>
int main(void) {
    int numbers[] = {10, 20, 30};
    int *pointer = numbers;
    printf("First: %d\n", *pointer);
    pointer++;
    printf("After increment: %d\n", *pointer);
    pointer--;
    printf("After decrement: %d\n", *pointer);
    return 0;
}
