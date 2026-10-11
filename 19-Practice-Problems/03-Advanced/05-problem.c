/*
Problem: Recursive Fibonacci
Problem statement: Compute a small Fibonacci value recursively.
Concepts: recursion, base cases
*/
#include <stdio.h>
long long fib(int n){return n<2?n:fib(n-1)+fib(n-2);}
int main(void){int n;scanf("%d",&n);if(n<0||n>40)return 1;printf("%lld\n",fib(n));return 0;}
