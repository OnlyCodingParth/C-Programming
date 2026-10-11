/*
Problem: Largest of Three
Problem statement: Print the largest of three integers.
Concepts: comparisons, conditions
*/
#include <stdio.h>
int main(void) { int a,b,c; scanf("%d%d%d",&a,&b,&c); int m=a; if(b>m)m=b; if(c>m)m=c; printf("%d\n",m); return 0; }
