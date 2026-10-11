/*
Problem: Dynamic Array Average
Problem statement: Allocate n integers, then calculate their average.
Concepts: malloc, validation, free
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){size_t n;scanf("%zu",&n);if(!n)return 1;int *a=malloc(n*sizeof*a);if(!a)return 1;long sum=0;for(size_t i=0;i<n;i++){scanf("%d",&a[i]);sum+=a[i];}printf("%.2f\n",(double)sum/n);free(a);return 0;}
