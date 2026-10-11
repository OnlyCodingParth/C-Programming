/*
Problem: Count Digits
Problem statement: Count digits in a nonnegative integer.
Concepts: do/while
*/
#include <stdio.h>
int main(void) { int n,count=0; scanf("%d",&n); do{count++;n/=10;}while(n); printf("%d\n",count); return 0; }
