/*
Problem: Word Frequency
Problem statement: Count a target word in a text file.
Concepts: strings, files, comparison
*/
#include <stdio.h>
#include <string.h>
int main(void){char target[40],word[40];scanf("%39s",target);FILE*f=fopen("words.txt","r");if(!f)return 1;int count=0;while(fscanf(f,"%39s",word)==1)if(strcmp(target,word)==0)count++;fclose(f);printf("%d\n",count);return 0;}
