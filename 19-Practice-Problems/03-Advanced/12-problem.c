/*
Problem: Preprocessor Debug Flag
Problem statement: Compile a message only when DEBUG is defined.
Concepts: conditional compilation, macros
*/
#include <stdio.h>
#define DOUBLE(x) ((x)*(x))
int main(void) {
    printf("%d\n", DOUBLE(6));
#ifdef DEBUG
    puts("Debug enabled");
#endif
    return 0;
}
