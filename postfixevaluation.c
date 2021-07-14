#include<stdio.h>
#include<ctype.h>

int stack[100], top = -1;

void push(int n)
{
    stack[++top] = n;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char str[100];
    printf("Enter postfix notation without space: ");
    scanf("%s",str);

    int i = -1, num1, num2, result;

    while(str[++i])
    {
        if(isdigit(str[i]))
            push(str[i] - '0');
        else
        {
            num2 = pop();
            num1 = pop();
            switch(str[i])
            {
                case '+': result = num1 + num2; break;
                case '-': result = num1 - num2; break;
                case '*': result = num1 * num2; break;
                case '/': result = num1 / num2; break;
            }
            push(result);
        }
    }
    printf("Final result is: %d",pop());
    return 0;
}
