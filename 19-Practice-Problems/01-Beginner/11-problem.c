/*
Problem: Multiplication Table
Problem statement: Print the table from 1 through 10.
Concepts: for loop, formatted output
*/
#include <stdio.h>
int main(void) { int n; scanf("%d",&n); for(int i=1;i<=10;i++)printf("%d x %d = %d\n",n,i,n*i); return 0; }
