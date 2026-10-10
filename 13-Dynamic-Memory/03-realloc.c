#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t old_count = 3, new_count = 5;
    int *values = malloc(old_count * sizeof *values);
    if (values == NULL) return 1;
    for (size_t index = 0; index < old_count; index++) values[index] = (int)(index + 1);
    int *resized = realloc(values, new_count * sizeof *values);
    if (resized == NULL) {
        free(values);
        fprintf(stderr, "Resize failed.\n");
        return 1;
    }
    values = resized; /* A temporary pointer preserves the old allocation on failure. */
    for (size_t index = old_count; index < new_count; index++) values[index] = (int)(index + 1);
    for (size_t index = 0; index < new_count; index++) printf("%d ", values[index]);
    printf("\n");
    free(values);
    return 0;
}
