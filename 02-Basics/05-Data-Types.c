// Program: Demonstrate common fundamental C data types.

#include <stdio.h>

int main(void)
{
    char initial = 'C';
    int population = 100000;
    float temperature = 36.5f;
    double preciseValue = 3.1415926535;
    short smallNumber = -12;
    long largeNumber = 1000000L;
    signed int signedNumber = -5;
    unsigned int unsignedNumber = 5U;

    printf("char: %c\n", initial);
    printf("int: %d\n", population);
    printf("float: %.1f\n", temperature);
    printf("double: %.10f\n", preciseValue);
    printf("short: %hd\n", smallNumber);
    printf("long: %ld\n", largeNumber);
    printf("signed int: %d\n", signedNumber);
    printf("unsigned int: %u\n", unsignedNumber);

    return 0;
}