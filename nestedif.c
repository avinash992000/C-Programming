/*
    Nested if:
        -> Placing one if condition within another if condition is known as nested if statement.
        -> Syntax:
            if(expression1)
            {
                if(expression2)
                {
                    -Statements1 [we able to place one more if condition also]
                }
                else
                {
                    -statements2
                }
            }
            else
            {
                -statements3
            }
        -> For the above syntax, First expression1 will be evaluated, if expression value is
            -> True, Then go inside of block and verify expression2,if expression value is
                -> True, Statements1 will be executed
                -> False, Statements2 will be executed
            -> False, Statements3 will be executed
*/
/*
    Problem Statement: Check given number can be divided by 2 and 3, 2 or 3
*/
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");//I. 6, II. 4, III. 15

    if(number%2==0)
    {
        if(number%3==0)
        {
            printf("%d can divided by %d and %d",number,2,3);
        }
        else
        {
            printf("%d can divided by only %d",number,2);
        }
    }
    else
    {
        if(number%3==0)
        {
            printf("%d can divided by only %d",number,3);
        }
        else
        {
            printf("%d cannot divided by %d and %d",number,2,3);
        }
    }
    return 0;
}
