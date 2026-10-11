/*
Problem: File Record Search
Problem statement: Search simple name-score records in a text file.
Concepts: structures, files, searching
*/
#include <stdio.h>
#include <string.h>
struct Record{char name[30];int score;};
int main(void){char wanted[30];scanf("%29s",wanted);FILE*f=fopen("records.txt","r");if(!f)return 1;struct Record r;while(fscanf(f,"%29s %d",r.name,&r.score)==2)if(strcmp(r.name,wanted)==0)printf("%s %d\n",r.name,r.score);fclose(f);return 0;}
