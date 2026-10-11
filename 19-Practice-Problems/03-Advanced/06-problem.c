/*
Problem: Command-Line Sum
Problem statement: Add integer arguments after the program name.
Concepts: argc, argv, strtol
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv){long sum=0;for(int i=1;i<argc;i++)sum+=strtol(argv[i],NULL,10);printf("%ld\n",sum);return 0;}
