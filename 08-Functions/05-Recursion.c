#include <stdio.h>
long factorial(int number) {
    if (number <= 1) return 1; /* Base case stops recursion. */
    return number * factorial(number - 1); /* Recursive case. */
}
int main(void) { printf("5! = %ld\n", factorial(5)); return 0; }
