#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top = NULL;

struct node* push(struct node *top,int value)
{
    //Note: No chance of having overflow situation
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = top;
    printf("\nNew value %d inserted successfully",value);
    return newNode;
}

struct node* pop(struct node *top)
{
    if(top == NULL)  
    {
        printf("\nElements are not existed to perform pop operation");
        return NULL;
    }       
    if(top->next == NULL)   
    {
        printf("\nDeleted value is: %d",top->data);
        free(top);
        return NULL;
    }
    struct node *temp = top;
    top = top->next;
    temp->next = NULL;
    printf("\nDeleted value is: %d",temp->data);
    free(temp);
    return top;
}

struct node* peek(struct node *top)
{
    return top == NULL ? NULL : top;
}

int isEmpty(struct node *top)
{
    return top == NULL ? 1 : 0;
}

void display(struct node *top)
{
    if(top != NULL)
    {
        printf("%d\n",top->data);
        display(top->next);
    }
}

int sizeStack(struct node *top)
{
    int count = 0;
    struct node *ptr = top;
    while(ptr)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}

int main()
{
    int choice;
    do
    {
        int value;
        struct node *ptr;
        printf("\nEnter your choice:\n1. Push\n2. Pop\n3. Peek\n4. isEmpty\n5. Display\n6. Stack size\n0. Exit\nAnswer: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter new node value to insert into stack: ");
                    scanf("%d",&value);
                    top = push(top,value);
                    break;
            case 2: top = pop(top); break;
            case 3: ptr = peek(top);
                    ptr == NULL ? printf("\nElements are not existed in the stack") : printf("\nTop of stack is: %d",ptr->data);
                    //top==NULL ? printf("Empty stack") : printf("%d",top->data);
                    break;
            case 4: isEmpty(top) == 1 ? printf("\nTrue") : printf("\nFalse"); break;
            case 5: display(top); break;
            case 6: printf("\nSize of stack is: %d",sizeStack(top));
        }
    }while(choice != 0);
    return 0;
}
