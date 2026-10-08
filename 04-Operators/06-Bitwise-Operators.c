// Program: Demonstrate bitwise operations on small integer values.

#include <stdio.h>

int main(void)
{
    unsigned int a = 12U;  // Binary: 1100
    unsigned int b = 10U;  // Binary: 1010

    printf("a & b  = %u\n", a & b);
    printf("a | b  = %u\n", a | b);
    printf("a ^ b  = %u\n", a ^ b);
    printf("~a     = %u (unsigned representation)\n", ~a);
    printf("a << 1 = %u\n", a << 1);
    printf("a >> 1 = %u\n", a >> 1);

    return 0;
}