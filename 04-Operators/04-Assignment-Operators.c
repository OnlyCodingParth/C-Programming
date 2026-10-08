// Program: Demonstrate simple and compound assignment operators.

#include <stdio.h>

int main(void)
{
    int value = 10;

    value = 20;
    printf("After =  : %d\n", value);
    value += 5;
    printf("After += : %d\n", value);
    value -= 3;
    printf("After -= : %d\n", value);
    value *= 2;
    printf("After *= : %d\n", value);
    value /= 4;
    printf("After /= : %d\n", value);
    value %= 3;
    printf("After %%= : %d\n", value);

    value = 6;
    value &= 3;
    printf("After &= : %d\n", value);
    value = 6;
    value |= 3;
    printf("After |= : %d\n", value);
    value = 6;
    value ^= 3;
    printf("After ^= : %d\n", value);

    return 0;
}