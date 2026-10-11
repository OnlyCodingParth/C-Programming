/*
Problem: Dynamic String Length
Problem statement: Read a line into a growing allocation.
Concepts: realloc, fgets, strings
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){char *s=NULL;size_t cap=0,len=0;int ch;while((ch=getchar())!='\n'&&ch!=EOF){if(len+1>=cap){size_t next=cap?cap*2:16;char *t=realloc(s,next);if(!t){free(s);return 1;}s=t;cap=next;}s[len++]=(char)ch;}if(s)s[len]='\0';printf("%zu\n",len);free(s);return 0;}
