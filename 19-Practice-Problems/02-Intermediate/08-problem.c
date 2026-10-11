/*
Problem: Matrix Multiplication
Problem statement: Multiply two 2x2 matrices.
Concepts: matrices, triple nested loops
*/
#include <stdio.h>
int main(void){int a[2][2],b[2][2];for(int r=0;r<2;r++)for(int c=0;c<2;c++)scanf("%d",&a[r][c]);for(int r=0;r<2;r++)for(int c=0;c<2;c++)scanf("%d",&b[r][c]);for(int r=0;r<2;r++){for(int c=0;c<2;c++){int s=0;for(int k=0;k<2;k++)s+=a[r][k]*b[k][c];printf("%d ",s);}puts("");}return 0;}
