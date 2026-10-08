// Program: Demonstrate the conditional (ternary) operator.

#include <stdio.h>

int main(void)
{
    int firstNumber = 12;
    int secondNumber = 8;
    int largerNumber = firstNumber > secondNumber ? firstNumber : secondNumber;
    const char *result = firstNumber % 2 == 0 ? "even" : "odd";

    printf("Larger number: %d\n", largerNumber);
    printf("%d is %s.\n", firstNumber, result);

    return 0;
}