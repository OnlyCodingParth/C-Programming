/*
Problem: Recursive Sum
Problem statement: Find 1 + ... + n recursively.
Concepts: recursion, base case
*/
#include <stdio.h>
int sum(int n){return n<=0?0:n+sum(n-1);}
int main(void){int n;scanf("%d",&n);printf("%d\n",sum(n));return 0;}
