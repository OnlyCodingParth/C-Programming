/*
Problem: GCD and LCM
Problem statement: Find the greatest common divisor and least common multiple.
Concepts: functions, loops
*/
#include <stdio.h>
int gcd(int a,int b){while(b){int t=a%b;a=b;b=t;}return a;}
int main(void) { int a,b;scanf("%d%d",&a,&b);int g=gcd(a,b);printf("GCD=%d LCM=%d\n",g,g? a/g*b:0);return 0;}
