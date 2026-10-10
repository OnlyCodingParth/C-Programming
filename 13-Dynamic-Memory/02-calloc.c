#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t count;
    printf("How many integers? ");
    if (scanf("%zu", &count) != 1 || count == 0) return 1;
    int *values = calloc(count, sizeof *values);
    if (values == NULL) {
        fprintf(stderr, "Allocation failed.\n");
        return 1;
    }
    printf("Initial values (calloc sets them to zero): ");
    for (size_t index = 0; index < count; index++) printf("%d ", values[index]);
    printf("\n");
    if (count > 0) values[0] = 42;
    printf("After an update: %d\n", values[0]);
    free(values);
    return 0;
}
