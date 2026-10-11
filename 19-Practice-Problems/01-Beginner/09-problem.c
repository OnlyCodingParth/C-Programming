/*
Problem: Sum of Digits
Problem statement: Add the decimal digits of a nonnegative integer.
Concepts: while loop, remainder
*/
#include <stdio.h>
int main(void) { int n,sum=0; scanf("%d",&n); while(n>0){sum+=n%10;n/=10;} printf("%d\n",sum); return 0; }
