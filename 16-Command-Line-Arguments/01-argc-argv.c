#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Argument count: %d\n", argc);
    for (int index = 0; index < argc; index++)
        printf("argv[%d] = %s\n", index, argv[index]);
    if (argc == 1) printf("No additional arguments were provided.\n");
    return 0;
}
