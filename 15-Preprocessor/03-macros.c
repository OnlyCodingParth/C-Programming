#include <stdio.h>
#define SQUARE(value) ((value) * (value))
#define MAX(first, second) ((first) > (second) ? (first) : (second))

int main(void) {
    int number = 4;
    printf("Square: %d\n", SQUARE(number + 1));
    printf("Maximum: %d\n", MAX(8, 3));
    return 0;
}
