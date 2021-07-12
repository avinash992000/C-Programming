#include<stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int value)
{
    if(top == MAX-1)    printf("\nStack is overflow, Not possible to insert");
    else                stack[++top] = value;
}

int pop()
{
    if(top == -1)   return top;
    else            return stack[top--];
}

void display()
{
    if(top == -1)
    {
        printf("\nNo elements are existed in stack");
        return;
    }
    int i = top;
    for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
}

int peek()
{
    return top == -1 ? -1 : stack[top];
}

int isFull()
{
    return top == MAX-1 ? 1 : 0;
}

int isEmpty()
{
    return top == -1 ? 1 : 0;
}

int main()
{
    int choice;
    do
    {
        int value;
        printf("\nEnter your choice:\n1. Push\n2. Pop\n3. Peek\n4. isEmpty\n5. isFull\n6. Display\n7. Get Stack size\n0. Exit\nAnswer: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter new value to insert into stack: ");
                    scanf("%d",&value);
                    push(value);
                    break;
            case 2: value = pop(); 
                    value == -1 ? printf("\nStack is underflow, Not possible to delete") : printf("\nDeleted element is: %d",value);
                    break;
            case 3: value = peek();
                    value == -1 ? printf("\nElements are not existed in the stack") : printf("\nTop of stack is: %d",value);
                    break;
            case 4: isEmpty() == 1 ? printf("\nTrue") : printf("\nFalse"); break;
            case 5: isFull() == 1 ? printf("\nTrue") : printf("\nFalse"); break;
            case 6: display(); break;
            case 7: printf("\nTotal elements in stack is: %d",top+1);
        }
    }while(choice != 0);
    return 0;
}
