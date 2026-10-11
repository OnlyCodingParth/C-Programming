/*
Problem: Matrix Addition
Problem statement: Add two 2x2 matrices.
Concepts: two-dimensional arrays, nested loops
*/
#include <stdio.h>
int main(void){int a[2][2],b[2][2];for(int r=0;r<2;r++)for(int c=0;c<2;c++)scanf("%d",&a[r][c]);for(int r=0;r<2;r++)for(int c=0;c<2;c++)scanf("%d",&b[r][c]);for(int r=0;r<2;r++){for(int c=0;c<2;c++)printf("%d ",a[r][c]+b[r][c]);puts("");}return 0;}
