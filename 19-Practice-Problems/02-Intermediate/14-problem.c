/*
Problem: Pointer Array Sum
Problem statement: Sum an array using pointer notation.
Concepts: pointers, arrays
*/
#include <stdio.h>
int main(void){int a[5],sum=0;for(int i=0;i<5;i++)scanf("%d",&a[i]);for(int *p=a;p<a+5;p++)sum+=*p;printf("%d\n",sum);return 0;}
