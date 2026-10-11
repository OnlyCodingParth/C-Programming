/*
Problem: Command-Line File Size
Problem statement: Print the byte count of a file named in argv[1].
Concepts: argc, files, fseek
*/
#include <stdio.h>
int main(int argc,char**argv){if(argc!=2)return 1;FILE*f=fopen(argv[1],"rb");if(!f)return 1;if(fseek(f,0,SEEK_END)!=0){fclose(f);return 1;}long size=ftell(f);fclose(f);printf("%ld\n",size);return 0;}
