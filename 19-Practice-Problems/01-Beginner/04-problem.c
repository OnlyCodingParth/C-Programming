/*
Problem: Simple Calculator
Problem statement: Apply an operator to two numbers.
Concepts: switch, arithmetic
*/
#include <stdio.h>
int main(void) { double a,b; char op; scanf("%lf %c %lf",&a,&op,&b); if(op=='/'&&b==0) puts("Invalid"); else if(op=='+')printf("%.2f\n",a+b); else if(op=='-')printf("%.2f\n",a-b); else if(op=='*')printf("%.2f\n",a*b); else if(op=='/')printf("%.2f\n",a/b); else puts("Invalid"); return 0; }
