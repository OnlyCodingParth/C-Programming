/*
Problem: Prime Test
Problem statement: Determine whether an integer is prime.
Concepts: loop, conditions
*/
#include <stdio.h>
int main(void) { int n, prime=1; scanf("%d",&n); if(n<2)prime=0; for(int d=2;d<=n/d;d++)if(n%d==0)prime=0; puts(prime?"Prime":"Not prime"); return 0; }
