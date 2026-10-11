/*
Problem: Character Frequency
Problem statement: Count occurrences of a requested character.
Concepts: strings, traversal
*/
#include <stdio.h>
int main(void){char s[100],wanted;scanf("%99s %c",s,&wanted);int count=0;for(int i=0;s[i];i++)if(s[i]==wanted)count++;printf("%d\n",count);return 0;}
