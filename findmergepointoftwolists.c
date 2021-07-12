#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head1 = NULL, *head2 = NULL;

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

int findMergePoint(struct node *h1, struct node *h2)
{
    int len1 = 0, len2 = 0;
    struct node *temp;
    for(temp=h1;temp!=NULL;temp=temp->next)     len1++;
    for(temp=h2;temp!=NULL;temp=temp->next)     len2++;

    while(len1 > len2)
    {
        h1 = h1->next;
        len1--;
    }

    while(len2 > len1)
    {
        h2 = h2->next;
        len2--;
    }

    while(h1->data != h2->data)
    {
        h1 = h1->next;
        h2 = h2->next;
    }
    return h1->data;
}

int main()
{
    int n,i,value;
    printf("\nHow many nodes you want to place in list1? Answer: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter new node value: ");
        scanf("%d",&value);
        head1 = insertAtEnding(head1,value);
    }

    printf("\nHow many nodes you want to place in list2? Answer: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter new node value: ");
        scanf("%d",&value);
        head2 = insertAtEnding(head2,value);
    }

    struct node *head3 = NULL, *temp;
    for(i=1;i<=3;i++)
        head3 = insertAtEnding(head3,rand()%40);

    temp = head1;
    while(temp->next != NULL)  
        temp = temp->next;
    temp->next = head3;

    temp = head2;
    while(temp->next != NULL)  
        temp = temp->next;
    temp->next = head3;


    printf("\nList of nodes first list: ");
    displayList(head1);

    printf("\nList of nodes second list: ");
    displayList(head2);

    printf("\n\nConverge point is: %d",findMergePoint(head1,head2));
    return 0;
}
