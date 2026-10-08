// Program: Read one character using getchar.

#include <stdio.h>

int main(void)
{
    int character;

    printf("Enter one character: ");
    character = getchar();

    if (character != EOF)
    {
        printf("You entered: ");
        putchar(character);
        putchar('\n');
    }

    return 0;
}