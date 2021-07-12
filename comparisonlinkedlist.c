#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data; 
    struct node *next;
} *head1 = NULL, *head2 = NULL;

struct node* insertAtEnd(struct node *head,int newValue)
{
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = newValue;
    newNode->next = NULL;
    if(head == NULL)     head = newNode;
    else
    {
        struct node *ptr = head;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newNode;
    }
    return head;
}

void printDataIter(struct node *head)
{
    struct node *ptr = head;
    while(ptr->next != NULL)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("%d",ptr->data);
}

int compareLinkedLists(struct node *head1, struct node *head2)
{
    while(head1 && head2)
    {
        if(head1->data != head2->data)
            return 0;
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1==NULL && head2==NULL ? 1 : 0;
}

int main()
{
    int n;
    printf("\nHow many nodes you want to place in the first linked list? Answer: ");
    scanf("%d",&n);
    int newValue, i;
    for(i=1;i<=n;i++)
    {
        printf("Enter new node value: ");
        scanf("%d",&newValue);
        head1 = insertAtEnd(head1, newValue);
    }
    printf("\nHow many nodes you want to place in the second linked list? Answer: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter new node value: ");
        scanf("%d",&newValue);
        head2 = insertAtEnd(head2, newValue);
    }
    printf("\nFirst linked list elements: ");
    printDataIter(head1);
    printf("\nSecond linked list elements: ");
    printDataIter(head2);
    compareLinkedLists(head1,head2) ? printf("\n\nList are identical") : printf("\n\nLists are not identical");
    return 0;
}
