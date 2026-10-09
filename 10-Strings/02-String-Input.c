#include <stdio.h>
int main(void) {
    char name[50];
    printf("Enter your name: ");
    if (fgets(name, sizeof name, stdin) != NULL) printf("Hello, %s", name);
    /* fgets reads spaces and limits input; scanf("%s") stops at whitespace. */
    return 0;
}
