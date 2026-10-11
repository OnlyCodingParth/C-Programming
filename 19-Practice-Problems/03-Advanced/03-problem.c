/*
Problem: File Line Statistics
Problem statement: Count lines and characters in a named text file.
Concepts: file handling, EOF, counters
*/
#include <stdio.h>
int main(void){char name[100],buffer[256];scanf("%99s",name);FILE *f=fopen(name,"r");if(!f)return 1;long lines=0,chars=0;while(fgets(buffer,sizeof buffer,f)){lines++;for(int i=0;buffer[i];i++)chars++;}fclose(f);printf("lines=%ld chars=%ld\n",lines,chars);return 0;}
