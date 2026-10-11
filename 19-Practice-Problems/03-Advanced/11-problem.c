/*
Problem: Safe Reallocation
Problem statement: Grow an allocation while preserving its values.
Concepts: realloc, temporary pointer
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){int*a=malloc(2*sizeof*a);if(!a)return 1;a[0]=1;a[1]=2;int*t=realloc(a,4*sizeof*a);if(!t){free(a);return 1;}a=t;a[2]=3;a[3]=4;for(int i=0;i<4;i++)printf("%d ",a[i]);free(a);return 0;}
