/*
Problem: Palindrome Number
Problem statement: Check whether a nonnegative number reads the same backward.
Concepts: loops, arithmetic
*/
#include <stdio.h>
int main(void) { int n, original, reverse=0; scanf("%d",&n); original=n; do{reverse=reverse*10+n%10;n/=10;}while(n); puts(original==reverse?"Palindrome":"Not palindrome"); return 0; }
