#include <stdio.h>
int main(void) {
    int values[] = {8, 3, 12, 5, 7};
    int count = sizeof values / sizeof values[0], sum = 0;
    int minimum = values[0], maximum = values[0];
    for (int index = 0; index < count; index++) {
        sum += values[index];
        if (values[index] < minimum) minimum = values[index];
        if (values[index] > maximum) maximum = values[index];
    }
    printf("Values: ");
    for (int index = 0; index < count; index++) printf("%d ", values[index]);
    printf("\nSum: %d\nAverage: %.2f\nMinimum: %d\nMaximum: %d\n",
           sum, (double)sum / count, minimum, maximum);
    return 0;
}
