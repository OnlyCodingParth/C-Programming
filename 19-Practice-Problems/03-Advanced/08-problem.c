/*
Problem: Dynamic Integer Sort
Problem statement: Allocate and sort n integers.
Concepts: malloc, sorting, free
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){size_t n;scanf("%zu",&n);int*a=malloc(n*sizeof*a);if(!a)return 1;for(size_t i=0;i<n;i++)scanf("%d",&a[i]);for(size_t i=0;i<n;i++)for(size_t j=i+1;j<n;j++)if(a[j]<a[i]){int t=a[i];a[i]=a[j];a[j]=t;}for(size_t i=0;i<n;i++)printf("%d ",a[i]);free(a);return 0;}
