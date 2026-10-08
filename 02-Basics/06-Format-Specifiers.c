// Program: Demonstrate common printf format specifiers.

#include <stdio.h>

int main(void)
{
    int decimalNumber = 42;
    unsigned int positiveNumber = 42U;
    float decimalFloat = 3.5f;
    double decimalDouble = 3.14159;
    char letter = 'C';
    const char word[] = "C language";
    long long largeNumber = 9000000000LL;

    printf("%%d: %d\n", decimalNumber);
    printf("%%i: %i\n", decimalNumber);
    printf("%%u: %u\n", positiveNumber);
    printf("%%f: %f\n", decimalFloat);
    printf("%%lf as printf input: %f\n", decimalDouble);
    printf("%%c: %c\n", letter);
    printf("%%s: %s\n", word);
    printf("%%ld: %ld\n", 100000L);
    printf("%%lld: %lld\n", largeNumber);

    return 0;
}