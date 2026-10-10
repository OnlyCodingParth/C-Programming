#include <stdio.h>

int main(void) {
    FILE *file = fopen("writing-demo.txt", "a");
    if (file == NULL) {
        perror("writing-demo.txt");
        return 1;
    }
    fputs("This line was appended.\n", file);
    fclose(file);
    printf("Content appended. Mode \"a\" preserves existing text.\n");
    return 0;
}
