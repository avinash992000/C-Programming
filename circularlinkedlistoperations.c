#include<stdio.h>
#include<stdlib.h>

//Node representation of Circular list
struct node
{
    int data;
    struct node *next;
} *tail = NULL;

struct node* insertAtBeginning(struct node *tail,int value)
{
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = value;

    if(tail == NULL)
    {
        newNode->next = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = tail->next;
        tail->next = newNode;
    }
    return tail;
}

struct node* insertAtEnding(struct node *tail,int value)
{
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = value;

    if(tail == NULL)
    {
        newNode->next = newNode;
    }
    else
    {
        newNode->next = tail->next;
        tail->next = newNode;
    }
    return newNode;
}

struct node* deleteAtBegin(struct node *tail)
{
    if(tail == NULL)
        return NULL;
    else if(tail->next == tail)
    {
        free(tail);
        return NULL;
    }
    else
    {
        struct node *temp = tail->next;//Holding first node of CLL
        tail->next = tail->next->next;
        free(temp);
        return tail;
    }
}

struct node* deleteAtEnd(struct node *tail)
{
    if(tail == NULL)
        return NULL;
    else if(tail->next == tail)
    {
        free(tail);
        return NULL;
    }
    else
    {
        struct node *ptr = tail->next, *temp = tail;
        while(ptr->next != tail)
            ptr = ptr->next;
        ptr->next = tail->next;
        tail = ptr;
        free(temp);
        return tail;
    }
}

void displayList(struct node* tail)
{
    struct node *ptr = tail->next;
    while(ptr->next != tail)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("%d=>Tail",tail->data);
}

int main()
{
    int choice;
    do
    {
        printf("\n1.Insert At Begin\n2. Insert At end\n3. Delete At begin\n4. Delete At end\n5. Display nodes\n0. Exit\nAnswer: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: tail = insertAtBeginning(tail, rand()%30); break;
            case 2: tail = insertAtEnding(tail,rand()%40); break;
            case 5: displayList(tail); break;
        }
    } while (choice != 0);

    return 0;
}
