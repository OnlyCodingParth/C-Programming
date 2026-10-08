// Program: Demonstrate prefix and postfix increment and decrement.

#include <stdio.h>

int main(void)
{
    int value = 5;

    printf("Prefix increment: %d\n", ++value);
    printf("Postfix increment: %d\n", value++);
    printf("Value after postfix increment: %d\n", value);
    printf("Prefix decrement: %d\n", --value);
    printf("Postfix decrement: %d\n", value--);
    printf("Value after postfix decrement: %d\n", value);

    return 0;
}