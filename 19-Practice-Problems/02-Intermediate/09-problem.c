/*
Problem: String Palindrome
Problem statement: Check a word without spaces.
Concepts: strings, strlen, indexes
*/
#include <stdio.h>
#include <string.h>
int main(void){char s[100];scanf("%99s",s);size_t n=strlen(s);int ok=1;for(size_t i=0;i<n/2;i++)if(s[i]!=s[n-i-1])ok=0;puts(ok?"Palindrome":"Not palindrome");return 0;}
