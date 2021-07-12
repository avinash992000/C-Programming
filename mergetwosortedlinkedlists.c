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

struct node* MergeLists(struct node* headA, struct node* headB) 
{
    if(headA == NULL)   return headB;
    if(headB == NULL)   return headA;
    if(headA->data < headB->data)
    {
        headA->next = MergeLists(headA->next,headB);
        return headA;
    }
    else
    {
        headB->next = MergeLists(headA,headB->next);
        return headB;
    }
}

struct node* mergeSortedLists(struct node *head1, struct node *head2)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node)), *current = temp;
    temp->next = NULL;
    while(head1 && head2)
    {
        if(head1->data <= head2->data)
        {
            current = current->next = head1;
            head1 = head1->next;
        }
        else
        {
            current = current->next = head2;
            head2 = head2->next;
        }
    }

    if(head1 == NULL)       current->next = head2;
    else if(head2 == NULL)  current->next = head1;
    else                    current->next = NULL;
    return temp->next;
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
    head1 = mergeSortedLists(head1,head2);
    printf("\n\nFinal list of data: ");
    printDataIter(head1);
    return 0;
}
