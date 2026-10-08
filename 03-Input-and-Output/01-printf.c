// Program: Demonstrate formatted output with printf.

#include <stdio.h>

int main(void)
{
    int items = 3;
    float price = 12.50f;
    char category = 'A';

    printf("Text output\n");
    printf("Items: %d\n", items);
    printf("Price: %.2f\n", price);
    printf("Category: %c\n", category);
    printf("Multiple values: %d items at %.2f each\n", items, price);
    printf("A tab\tand a newline\n");
    printf("A quotation mark: \"C\"\n");

    return 0;
}