/*
Problem: Factorial
Problem statement: Compute n factorial for a nonnegative n.
Concepts: loop, multiplication
*/
#include <stdio.h>
int main(void) { int n; unsigned long long result=1; scanf("%d",&n); if(n<0)return 1; for(int i=2;i<=n;i++)result*=i; printf("%llu\n",result); return 0; }
