#include <stdio.h>
#include <string.h>
int main(void) {
    char text[] = "program";
    size_t length = strlen(text);
    for (size_t left = 0; left < length / 2; left++) {
        char temporary = text[left];
        text[left] = text[length - left - 1];
        text[length - left - 1] = temporary;
    }
    printf("%s\n", text);
    return 0;
}
