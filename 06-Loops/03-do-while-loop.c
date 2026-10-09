#include <stdio.h>

int main(void) {
    int number = 10;
    do {
        printf("The body runs once even though number is %d.\n", number);
        number++;
    } while (number < 5);
    return 0;
}
