/*
Problem: Record File Copy
Problem statement: Copy a text file byte by byte.
Concepts: fgetc, fputc, errors
*/
#include <stdio.h>
int main(void){char in[100],out[100];scanf("%99s %99s",in,out);FILE*a=fopen(in,"r"),*b=fopen(out,"w");if(!a||!b){if(a)fclose(a);if(b)fclose(b);return 1;}int ch;while((ch=fgetc(a))!=EOF)fputc(ch,b);fclose(a);fclose(b);return 0;}
