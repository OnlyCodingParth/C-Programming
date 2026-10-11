/*
Problem: Second Largest
Problem statement: Find the second distinct largest value.
Concepts: arrays, conditions
*/
#include <stdio.h>
int main(void){int a[5],largest,second;for(int i=0;i<5;i++)scanf("%d",&a[i]);largest=second=a[0];for(int i=1;i<5;i++){if(a[i]>largest){second=largest;largest=a[i];}else if(a[i]>second&&a[i]!=largest)second=a[i];}printf("%d\n",second);return 0;}
