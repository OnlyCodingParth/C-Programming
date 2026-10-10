#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *value = malloc(sizeof *value);
    if (value == NULL) return 1;
    *value = 100;
    printf("Allocated value: %d\n", *value);
    free(value);
    value = NULL; /* Prevents accidental reuse of the released address. */
    if (value == NULL) printf("Pointer is now NULL.\n");
    return 0;
}
