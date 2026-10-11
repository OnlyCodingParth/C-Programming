/*
Problem: Even or Odd
Problem statement: Read an integer and classify it.
Concepts: input, if/else, remainder
*/
#include <stdio.h>
int main(void) { int n; scanf("%d", &n); printf("%s\n", n % 2 == 0 ? "Even" : "Odd"); return 0; }
