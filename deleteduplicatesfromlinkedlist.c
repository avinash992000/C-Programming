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

struct node* deleteDuplicateNodes(struct node *head)
{
    struct node *ptr = head;
    while(ptr->next != NULL)
    {
        if(ptr->data == ptr->next->data)
            ptr->next = ptr->next->next;
        else
            ptr = ptr->next;            
    }
    return head;
}

int main()
{
    int n,i,value;
    printf("\nHow many nodes you want to place? Answer: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter new node value: ");
        scanf("%d",&value);
        head = insertAtEnding(head,value);
    }

    printf("\nList of nodes before deleting duplicate nodes: ");
    displayList(head);

    head = deleteDuplicateNodes(head);

    printf("\nList of nodes after deleting duplicate nodes: ");
    displayList(head);
    return 0;
}
