// Program: Demonstrate single-line and multi-line comments.

#include <stdio.h>

int main(void)
{
    // A single-line comment ends at the newline.
    printf("Comments explain code without being executed.\n");

    /*
     * A multi-line comment can span several lines.
     * It is useful for a short block of related explanation.
     */
    printf("This line follows a multi-line comment.\n");

    return 0;
}