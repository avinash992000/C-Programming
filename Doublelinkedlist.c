#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *head = NULL;

struct node* insertAtBeginning(struct node *head,int value)
{
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->prev = NULL;
    newNode->data = value;
    newNode->next = head;
    if(head != NULL)
    {
        head->prev = newNode;
    }
    return newNode;
}

struct node* insertAtEnding(struct node* head,int value)
{
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;
    }
    else
    {
        struct node *ptr = head;
        while(ptr->next != NULL)
            ptr = ptr->next;//Moves from first node to last node
        ptr->next = newNode;
        newNode->prev = ptr;
    }
    return head;
}

struct node* deleteAtBegin(struct node *head)
{
    if(head == NULL)        return NULL;
    else if(head->next == NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        struct node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        fre(temp);
        return head;
    }
}

struct node* deleteAtEnd(struct node *head)
{
    if(head == NULL)        return NULL;
    else if(head->next == NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        struct node *temp = head, *ptr;
        while(temp->next != NULL)
        {
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = NULL;
        temp->prev = NULL;
        free(temp);
        return head;
    }
}

void displayList(struct node *head)
{
    struct node *ptr = head;
    printf("NULL <-- ");
    while(ptr->next != NULL)
    {
        printf("%d <--> ",ptr->data);
        ptr = ptr->next;
    }
    printf("%d --> NULL",ptr->data);
}

int main()
{
    int choice;
    do
    {
        printf("\n1. Insert at begin\n2. Insert at end\n3. Delete at begin\n4. Delete at end\n5. Display data\n0. Exit");
        switch(choice)
        {
            case 1: head = insertAtBeginning(head,rand()%50); break;
            case 2: head = insertAtEnding(head,rand()%60); break;
            case 3: head = deleteAtBegin(head); break;
            case 4: head = deleteAtEnd(head); break;
            case 5: displayList(head); break;
        }
    } while(choice != 0);

    return 0;
}
