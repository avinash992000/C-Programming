#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

struct node* insertAtBeginning(struct node *head, int value)
{
    struct node *newNode = (struct node*) malloc(sizeof(struct node));//Allocation of memory
    newNode->data = value;
    if(head==NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        newNode->next = head;
    }
    printf("\nNew element placed in List at beginning is: %d",value);
    head = newNode;
    return head;
    /*
        struct node *newNode = (struct node*) malloc(sizeof(struct node));//Allocation of memory
        newNode->data = value;
        newNode->next = head;
        printf("\nNew element placed in List is: %d",value);
        return newNode;
    */
}

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
    printf("\nNew element placed in List at ending is: %d",value);
    return head;
}

struct node* insertAtPosition(struct node *head,int value,int position)
{
    if(position == 1)   return insertAtBeginning(head,value);

    struct node *newNode = (struct node*) malloc(sizeof(struct node));//Allocation of memory
    newNode->data = value;
    struct node *ptr = head;
    int i;
    for(i=1;i<=position-2;i++)
    {
        ptr = ptr->next;
        if(ptr == NULL)
            return head;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
    printf("\nNew element placed in list at %d position is: %d",position,value);
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

void displayListR(struct node *head)
{
    if(head!=NULL)
    {
        printf("%d ",head->data);
        displayListR(head->next);
    }
}

void displayListRev(struct node *head)
{
    if(head != NULL)
    {
        displayListRev(head->next);
        printf("%d ",head->data);
    }
}

struct node* deleteAtBeginning(struct node *head)
{
    if(head == NULL)    return head;
    if(head->next == NULL)
    {
        free(head);
        return NULL;
    }
    struct node *ptr = head;
    head = head->next;
    ptr->next = NULL;
    free(ptr);
    return head;
}

struct node* deleteAtEnding(struct node *head)
{
    if(head == NULL)    return head;
    if(head->next == NULL)
    {
        free(head);
        return NULL;
    }
    struct node *temp = head, *ptr;
    while(temp->next != NULL)
    {
        ptr = temp;
        temp = temp->next;
    }
    ptr->next = NULL;
    free(temp);
    return head;
}

struct node* deleteAtPosition(struct node *head,int position)
{
    if(position == 1)   return deleteAtBeginning(head);

    struct node *ptr = head, *temp;
    int i;
    for(i=1;i<=position-2;i++)
    {
        ptr = ptr->next;
        if(ptr == NULL)
            return head;
    }
    temp = ptr->next;
    ptr->next = temp->next;
    temp->next = NULL;
    free(temp);
    return head;
}

int main()
{
    int choice;
    do
    {
        printf("\nEnter your choice:\n1. Insert at the beginning\n2. Insert at ending\n3. Insert at position\n4. Display nodes of list\n5. Delete at beginning\n6. Delete at ending\n7. Delete at position\n8. Display list in Reverse\n0. Exit\nAnswer: ");
        scanf("%d",&choice);
        int position;
        switch(choice)
        {
            case 1: head = insertAtBeginning(head,rand()%30); break;
            case 2: head = insertAtEnding(head, rand()%40); break;
            case 3: printf("\nIn which position you want to place new node: ");
                    scanf("%d",&position);
                    head = insertAtPosition(head,rand()%50,position); 
                    break;
            case 4: displayListR(head); break;
            case 5: head = deleteAtBeginning(head); break;
            case 6: head = deleteAtEnding(head); break;
            case 7: printf("\nIn which position you want to place new node: ");
                    scanf("%d",&position);
                    head = deleteAtPosition(head,position);
                    break;
            case 8: displayListRev(head); break;
            case 0: break;
            default: printf("\nInvalid choice, Please try again");
        }
    }while(choice != 0);
    return 0;
} 
