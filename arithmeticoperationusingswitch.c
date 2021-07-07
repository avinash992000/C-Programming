//Arithmetic operations with switch statement
#include<stdio.h>
int main()
{
    int x,y;
    char ch;
    printf("Enter x,y values and enter an operation [+,-,*,/,%%]: ");
    scanf("%d %d %c",&x,&y,&ch);

    switch(ch)
    {
        case '+': printf("Addition is: %d", x+y); break;
        case '-': printf("Subtraction is: %d",x-y); break;
        case '*': printf("Multiplication is: %d",x*y); break;
        case '/': printf("Division value is: %f",(float)x/y); break;
        case '%': printf("Remainder value is: %d",x%y); break;
        default: printf("Invalid Input. Try again"); break;
    }
    return 0;
}
