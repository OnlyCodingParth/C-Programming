/*
Problem: Array Reversal
Problem statement: Reverse six input values in place.
Concepts: arrays, indexes
*/
#include <stdio.h>
int main(void){int a[6];for(int i=0;i<6;i++)scanf("%d",&a[i]);for(int i=0;i<3;i++){int t=a[i];a[i]=a[5-i];a[5-i]=t;}for(int i=0;i<6;i++)printf("%d ",a[i]);return 0;}
