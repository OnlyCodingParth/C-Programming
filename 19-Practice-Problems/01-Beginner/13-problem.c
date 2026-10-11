/*
Problem: Star Triangle
Problem statement: Print a five-row right triangle.
Concepts: nested loops, patterns
*/
#include <stdio.h>
int main(void) { for(int r=1;r<=5;r++){for(int c=1;c<=r;c++)putchar('*');putchar('\n');} return 0; }
