#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    return stack[top--];
}

int precedence(char ch)
{
    return (ch=='+' || ch=='-') ? 1 : (ch=='*' || ch=='/' || ch=='%') ? 2 : 0;
}

int main()
{
    char str[100],ch;
    printf("Enter an expression without space: ");
    scanf("%s",str);

    int i= -1;
    while(str[++i])
    {
        //If scanned character is an operand place it into postfix notation
        if(isalnum(str[i]))
            printf("%c",str[i]);
        else if(str[i] == '(')
            push(str[i]);
        else if(str[i] == ')')
        {
            while((ch = pop()) != '(')
                printf("%c",ch);
        }
        else
        {
            while(precedence(stack[top]) >= precedence(str[i]))
                printf("%c",pop());
            push(str[i]);
        }
    }
    while(top != -1)
        printf("%c",pop());
    return 0;
}
