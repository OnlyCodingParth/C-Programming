#include <stdio.h>
int main(void) {
    char word[] = "C";
    char greeting[] = {'H', 'i', '\0'};
    printf("%s %s\n", word, greeting);
    printf("The null character at index 2 marks the end of greeting.\n");
    return 0;
}
