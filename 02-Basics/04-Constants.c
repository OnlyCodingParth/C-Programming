// Program: Demonstrate const variables and a preprocessor constant.

#include <stdio.h>

#define DAYS_IN_WEEK 7

int main(void)
{
    const float PI = 3.14159f;
    int radius = 2;
    float circumference = 2.0f * PI * radius;

    // A const value cannot be assigned a new value after initialization.
    printf("Circumference: %.2f\n", circumference);
    printf("Days in a week: %d\n", DAYS_IN_WEEK);

    // Ordinary variables, unlike constants, can be changed.
    radius = 3;
    printf("New radius: %d\n", radius);

    return 0;
}