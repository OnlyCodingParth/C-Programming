#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t count;
    printf("How many integers? ");
    if (scanf("%zu", &count) != 1 || count == 0) return 1;
    int *values = malloc(count * sizeof *values);
    if (values == NULL) {
        fprintf(stderr, "Allocation failed.\n");
        return 1;
    }
    for (size_t index = 0; index < count; index++) values[index] = (int)(index + 1);
    for (size_t index = 0; index < count; index++) printf("%d ", values[index]);
    printf("\n");
    free(values);
    return 0;
}
