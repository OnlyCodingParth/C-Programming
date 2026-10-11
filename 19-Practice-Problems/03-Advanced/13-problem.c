/*
Problem: Recursive Directory-Independent Search
Problem statement: Recursively find a target in a sorted array.
Concepts: recursion, binary search
*/
#include <stdio.h>
int search(const int*a,int l,int r,int x){if(l>r)return-1;int m=(l+r)/2;if(a[m]==x)return m;return a[m]<x?search(a,m+1,r,x):search(a,l,m-1,x);}
int main(void){int a[]={2,4,6,8,10},x;scanf("%d",&x);printf("%d\n",search(a,0,4,x));return 0;}
