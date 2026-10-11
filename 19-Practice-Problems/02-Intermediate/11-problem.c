/*
Problem: String Reversal
Problem statement: Reverse a word manually.
Concepts: strings, loops, swapping
*/
#include <stdio.h>
#include <string.h>
int main(void){char s[100];scanf("%99s",s);size_t n=strlen(s);for(size_t i=0;i<n/2;i++){char t=s[i];s[i]=s[n-i-1];s[n-i-1]=t;}puts(s);return 0;}
