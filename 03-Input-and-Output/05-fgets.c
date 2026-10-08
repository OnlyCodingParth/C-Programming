// Program: Read a line safely with fgets.

#include <stdio.h>

int main(void)
{
    char name[50];

    printf("Enter your name: ");
    if (fgets(name, sizeof name, stdin) == NULL)
    {
        printf("Input could not be read.\n");
        return 1;
    }

    // fgets may keep the newline when it fits in the array.
    printf("Hello, %s", name);

    return 0;
}