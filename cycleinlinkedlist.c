#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

struct node* insertAtEnding(struct node *head,int value)
{
    struct node *newNode = (struct node*) malloc(sizeof(struct node));//Allocation of memory
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct node *ptr = head;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newNode;
    }
    return head;
}

void displayList(struct node *head)
{
    struct node *ptr = head;
    while(ptr->next != NULL)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("%d",ptr->data);
}

int isCycledList(struct node *head)
{
    struct node *ptr = head, *fwdptr = head;
    while(ptr!=NULL && fwdptr!=NULL && fwdptr->next!=NULL)
    {
        ptr = ptr->next;
        fwdptr = fwdptr->next->next;
        if(ptr == fwdptr)
            return 1;
    }
    return 0;
}

int main()
{
    int i,value;

    for(i=1;i<=5;i++)
    {
        printf("Enter new node value: ");
        scanf("%d",&value);
        head = insertAtEnding(head,value);
    }

    //14 -> 52 -> 15 -> 80 -> 63 => Preparing cycle in linked list
    head->next->next->next->next->next = head->next->next;

    isCycledList(head) ? printf("Yes, List is cycled") : printf("No, List is not cycled");
    return 0;
} 
