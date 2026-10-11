/*
Problem: Student Record
Problem statement: Store and display a student's record.
Concepts: structures, members
*/
#include <stdio.h>
struct Student{int id;char name[30];float marks;};
int main(void){struct Student s;scanf("%d %29s %f",&s.id,s.name,&s.marks);printf("%d %s %.1f\n",s.id,s.name,s.marks);return 0;}
