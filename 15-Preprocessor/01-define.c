#include <stdio.h>
#define TAX_RATE 0.05
#define DAYS_IN_WEEK 7

int main(void) {
    double price = 100.0;
    printf("Total with tax: %.2f\n", price + price * TAX_RATE);
    printf("Days in a week: %d\n", DAYS_IN_WEEK);
    return 0;
}
