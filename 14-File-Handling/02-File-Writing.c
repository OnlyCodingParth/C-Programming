#include <stdio.h>

int main(void) {
    FILE *file = fopen("writing-demo.txt", "w");
    if (file == NULL) {
        perror("writing-demo.txt");
        return 1;
    }
    if (fprintf(file, "This line was written by C.\n") < 0) {
        fprintf(stderr, "Writing failed.\n");
        fclose(file);
        return 1;
    }
    fclose(file);
    printf("Text written successfully.\n");
    return 0;
}
