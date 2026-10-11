/*
Problem: Binary Search
Problem statement: Search a sorted array.
Concepts: arrays, binary search
*/
#include <stdio.h>
int main(void){int a[]={1,3,5,7,9,11},x,l=0,r=5,found=-1;scanf("%d",&x);while(l<=r){int m=(l+r)/2;if(a[m]==x){found=m;break;}if(a[m]<x)l=m+1;else r=m-1;}printf("%d\n",found);return 0;}
