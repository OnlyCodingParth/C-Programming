/*
Problem: Duplicate Detection
Problem statement: Report whether five values contain a duplicate.
Concepts: arrays, nested loops
*/
#include <stdio.h>
int main(void){int a[5],duplicate=0;for(int i=0;i<5;i++)scanf("%d",&a[i]);for(int i=0;i<5;i++)for(int j=i+1;j<5;j++)if(a[i]==a[j])duplicate=1;puts(duplicate?"Duplicate":"Unique");return 0;}
