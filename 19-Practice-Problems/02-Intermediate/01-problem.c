/*
Problem: Linear Search
Problem statement: Find a target in an integer array.
Concepts: arrays, traversal
*/
#include <stdio.h>
int main(void){int a[]={4,8,1,9,3},x,found=-1;scanf("%d",&x);for(int i=0;i<5;i++)if(a[i]==x){found=i;break;}printf("%d\n",found);return 0;}
