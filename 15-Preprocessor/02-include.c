#include <stdio.h>
#include <string.h>

int main(void) {
    char text[] = "Headers provide declarations for library functions.";
    printf("%s\nLength: %zu\n", text, strlen(text));
    return 0;
}
