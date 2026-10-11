/*
Problem: Reverse a Number
Problem statement: Print the decimal digits in reverse order.
Concepts: division, remainder, loop
*/
#include <stdio.h>
int main(void) { int n, reverse=0; scanf("%d",&n); do{reverse=reverse*10+n%10;n/=10;}while(n); printf("%d\n",reverse); return 0; }
