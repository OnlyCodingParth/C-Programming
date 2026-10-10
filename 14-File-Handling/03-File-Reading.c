#include <stdio.h>

int main(void) {
    char line[100];
    FILE *file = fopen("writing-demo.txt", "r");
    if (file == NULL) {
        perror("writing-demo.txt");
        return 1;
    }
    while (fgets(line, sizeof line, file) != NULL) printf("%s", line);
    if (ferror(file)) fprintf(stderr, "A read error occurred.\n");
    fclose(file);
    return 0;
}
