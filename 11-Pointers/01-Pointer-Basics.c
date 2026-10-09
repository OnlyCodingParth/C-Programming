#include <stdio.h>
int main(void) {
    int value = 42;
    int *pointer = &value;
    printf("Value: %d\nAddress: %p\nDereferenced value: %d\n",
           value, (void *)pointer, *pointer);
    return 0;
}
