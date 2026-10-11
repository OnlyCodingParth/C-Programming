/*
Problem: Bubble Sort
Problem statement: Sort five integers in ascending order.
Concepts: arrays, nested loops, swapping
*/
#include <stdio.h>
int main(void){int a[5];for(int i=0;i<5;i++)scanf("%d",&a[i]);for(int i=0;i<4;i++)for(int j=0;j<4-i;j++)if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;}for(int i=0;i<5;i++)printf("%d ",a[i]);return 0;}
