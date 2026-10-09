#include <stdio.h>
#include <string.h>
int main(void) {
    char first[50] = "Hello";
    char copy[50];
    strcpy(copy, first);
    strcat(first, " C");
    printf("Length: %zu\nCopy: %s\nJoined: %s\nComparison: %d\n",
           strlen(copy), copy, first, strcmp(copy, "Hello"));
    return 0;
}
