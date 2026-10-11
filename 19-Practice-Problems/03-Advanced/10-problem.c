/*
Problem: Linked-Style Record Chain
Problem statement: Link two records with pointers and print them.
Concepts: structures, pointers
*/
#include <stdio.h>
struct Node{int value;struct Node *next;};
int main(void){struct Node second={20,NULL},first={10,&second};for(struct Node*p=&first;p;p=p->next)printf("%d ",p->value);return 0;}
