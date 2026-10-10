#include <stdio.h>

int main(void) {
    FILE *file = fopen("opening-demo.txt", "r");
    if (file == NULL) {
        perror("opening-demo.txt");
        return 1;
    }
    printf("File opened successfully.\n");
    fclose(file);
    return 0;
}
