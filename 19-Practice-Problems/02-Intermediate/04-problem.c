/*
Problem: Selection Sort
Problem statement: Sort five integers by selecting minimums.
Concepts: arrays, selection sort
*/
#include <stdio.h>
int main(void){int a[5];for(int i=0;i<5;i++)scanf("%d",&a[i]);for(int i=0;i<4;i++){int m=i;for(int j=i+1;j<5;j++)if(a[j]<a[m])m=j;int t=a[i];a[i]=a[m];a[m]=t;}for(int i=0;i<5;i++)printf("%d ",a[i]);return 0;}
