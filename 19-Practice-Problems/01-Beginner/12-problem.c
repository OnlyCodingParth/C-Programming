/*
Problem: Fibonacci Sequence
Problem statement: Print the first n Fibonacci values.
Concepts: loop, variables
*/
#include <stdio.h>
int main(void) { int n; long long a=0,b=1; scanf("%d",&n); for(int i=0;i<n;i++){printf("%lld ",a);long long next=a+b;a=b;b=next;} puts(""); return 0; }
