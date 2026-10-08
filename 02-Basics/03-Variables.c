// Program: Demonstrate declaration, initialization, assignment, and changes.

#include <stdio.h>

int main(void)
{
    int age = 20;
    float height = 1.75f;
    char grade = 'A';

    // Assignment changes the value stored in an existing variable.
    age = 21;

    // Multiple variables can be declared and used together.
    int firstNumber = 8;
    int secondNumber = 4;
    int total = firstNumber + secondNumber;

    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);
    printf("Total: %d\n", total);

    return 0;
}