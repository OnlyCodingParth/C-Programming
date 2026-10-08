// Program: Read basic values with scanf.

#include <stdio.h>

int main(void)
{
    int age;
    float height;
    double balance;
    char initial;

    printf("Enter age, height, balance, and initial: ");
    if (scanf("%d %f %lf %c", &age, &height, &balance, &initial) != 4)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Ordinary variables need & so scanf can write into their addresses.
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Balance: %.2f\n", balance);
    printf("Initial: %c\n", initial);

    return 0;
}