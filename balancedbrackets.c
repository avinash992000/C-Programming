#include<stdio.h>
#define MAX 10

char stack[MAX];
int top = -1;//Initially stack is empty

void push(char ch)
{
    stack[++top] = ch;//top: [,{,(,{
}

int main()
{
    //Declaring a string and reading string into the program
    char str[MAX];
    printf("Enter input bracket string: ");//{({[]})}
    scanf("%s",str);

    int i = -1;
    while(str[++i])
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')   
            push(str[i]);
        else if(str[i]==']'&&stack[top]=='[' || str[i]=='}'&&stack[top]=='{' || str[i]==')'&&stack[top]=='(')  
        {
            printf("\n%c %c",stack[top],str[i]);
            top--;
        } 
        else
        {
            printf("\nNo, Invalid brackets");
            return 0;
        }
    }
    top== -1 ? printf("\nYes, valid brackets") : printf("\nNo, Invalid brackets");
    return 0;
}
