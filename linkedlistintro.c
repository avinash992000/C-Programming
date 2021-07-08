#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*ptr = NULL;

struct node* newNode(struct node *ptr)
{
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = rand();
    p->next = ptr;
    return p;
}

int main()
{
    ptr = newNode(ptr);
    ptr = newNode(ptr);
    ptr = newNode(ptr);
    return 0;
}
