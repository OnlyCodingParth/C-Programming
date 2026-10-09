#include <stdio.h>
int main(void) {
    int value = 25;
    int *pointer = &value;
    int **pointer_to_pointer = &pointer;
    printf("Variable: %d\nThrough pointer: %d\nThrough pointer-to-pointer: %d\n",
           value, *pointer, **pointer_to_pointer);
    return 0;
}
