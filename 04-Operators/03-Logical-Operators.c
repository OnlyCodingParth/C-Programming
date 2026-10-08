// Program: Demonstrate logical AND, OR, and NOT.

#include <stdio.h>

int main(void)
{
    int age = 20;
    int hasId = 1;

    printf("Adult and has ID: %d\n", age >= 18 && hasId);
    printf("Adult or has ID: %d\n", age >= 18 || hasId);
    printf("Not an adult: %d\n", !(age >= 18));

    return 0;
}