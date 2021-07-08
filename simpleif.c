/*
    => Simple if statement
    Syntax:
        if(expression)
        {
            -statements
        }
        if: Keyword
        (): Expression holder
        {}: Statements holder
        expression: Deciding factor [decides whether statements should execute or not]
        statements: A block of code will be executed when condition becomes true
        Quetions: 
        -> What to place in palce of expression?
            -> An mathematical expression. Eg: 10 < 20  if(10<20[True=>1=>Non-Zero])
            -> A constant. Eg: 10, 'A', "Jeevan", 98.6  if('A) or if(100)
            -> A variable. Eg: int x = 100 => if(x)
        -> How it executes?
            -> Execution will be done based on expression/constant/variable value [Result].
            -> Prints statements if Result value is non-zero/true
            -> Dont print otherwise [Result: zero] 
        -> simple if will be known as one-way branching statement   
*/
#include<stdio.h>
int main()
{
    if(10<20)//10<20 => True => 1 => Non-Zero
    {
        printf("10 value is lessthan 20\n\n");
    }
    if(100)//Non-Zero
    {
        printf("100 is integer constant\n\n");
    }
    if('A')//Non-Zero [ASCII = 65] (if(65))
    {
        printf("'A' is character constant\n\n");
    }
    if(98.6)//Non-Zero
    {
        printf("98.6 is float constant\n\n");
    }
    if(10>20)//10>20 => False => 0 => Zero
    {
        printf("10 is not greater than 20");
    }
    if(0)//0=> Zero
    {
        printf("0 is integer constant");
    }
    if(' ')//Ascii value is there for ' ' => ASCII=32 -> Non-Zero
    {
        printf("' ' is character constant\n\n");
    }
    if(-58)
    {
        printf("-58 is integer constant\n\n");
    }
    if("Jeevan")
    {
        printf("'Jeevan' is a string\n\n");
    }
    if('\0')//'\0'-> NULL value -> ASCII = 0 => Zero
    {
        printf("'\0' is a null statement");
    }
    return 0;
}
