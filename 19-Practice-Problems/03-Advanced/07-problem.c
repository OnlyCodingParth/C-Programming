/*
Problem: Pointer Matrix Transpose
Problem statement: Print the transpose of a 2x3 matrix using pointers.
Concepts: pointers, matrices
*/
#include <stdio.h>
int main(void){int a[2][3];for(int r=0;r<2;r++)for(int c=0;c<3;c++)scanf("%d",&a[r][c]);for(int c=0;c<3;c++){for(int r=0;r<2;r++)printf("%d ",*(*(a+r)+c));puts("");}return 0;}
