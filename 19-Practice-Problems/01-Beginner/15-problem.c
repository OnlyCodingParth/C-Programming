/*
Problem: Function Average
Problem statement: Return and print the average of three values.
Concepts: function, parameters, return value
*/
#include <stdio.h>
double average(int a,int b,int c){return (a+b+c)/3.0;}
int main(void){int a,b,c;scanf("%d%d%d",&a,&b,&c);printf("%.2f\n",average(a,b,c));return 0;}
