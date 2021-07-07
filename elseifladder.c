/*
    Else if ladder:
        -> Known as multi-way branching statement
        -> Syntax:
            if(expression1)
            {
                -Statements1;
            }
            else if(expression2)
            {
                -Statements2
            }
            else if(expression3)
            {
                -Statements3
            }
            .
            .
            .
            else
            {
                -Statements;
            }
        -> Execution Procedure: If expression1 is true, statements1 will be executed, If expression2 is true, statements2 will be executed, and go on ....., If all the expressions are failed then else statements will be executed.
*/
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter total marks between 1 - 100: ");
    scanf("%d",&marks);

    if(marks>=70)                   printf("Distinction");
    else if(marks>=60 && marks<70)  printf("First Class");
    else if(marks>=50 && marks<60)  printf("Second Class");
    else if(marks>=40 && marks<50)  printf("Third Class");
    else                            printf("Fail");
}
