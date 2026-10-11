/*
Problem: Dynamic Frequency Table
Problem statement: Count values from zero through nine using allocated counters.
Concepts: calloc, arrays, free
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){int*n=calloc(10,sizeof*n),value;if(!n)return 1;while(scanf("%d",&value)==1)if(value>=0&&value<10)n[value]++;for(int i=0;i<10;i++)printf("%d:%d ",i,n[i]);free(n);return 0;}
