/*
    Ternary operators: The operator which can be applied more than two operands will be known as ternamry operator.
    Types of operators:
        -> Unary operators: Applied only on one operand
        -> Binary operators: Applied on two operand
        -> Ternary operators: Apllied on more than two operands
    -> Example:
        -> Conditional operator:   ?:
        -> Syntax:
            Expression ? Statement1 : Statement2;
        -> Execution Procedure:
            -> If expression value is
                -> True or non-zero, Statement1 will be executed
                -> False or zero, Statement2 will be executed 
*/
#include<stdio.h>
int main()
{
    printf("Hello") ? printf("Hi\n") : printf("Welcome\n");
    /*
        -> First printf("Hello") executes, means prints Hello on the screen and returns value 5
        -> So, Expression will become, => 5 ? printf("Hi") : printf("Welcome");
        -> Because of 5 is non-zero printf("Hi") will be executed.
        -> FInal Output: HelloHI
    */
    printf("0") ? printf("Hi\n") : printf("Welcome\n");
    /*
        -> First printf("0") executes, means prints 0 on the sceen, and returns value 1
        -> Expression will become, =? 1 ? printf("Hi\n") : printf("Welcome\n");
        -> Because of 1 is non-zero printf("Hi") will be displayed.
        -> FInal output: 0Hi
    */
    printf("") ? printf("Hi\n") : printf("Welcome\n");
    /*
        -> First printf("") executes, means prints nothing on the sceen, and returns value 0
        -> Expression will become, =? 0 ? printf("Hi\n") : printf("Welcome\n");
        -> Because of 0 is zero printf("Welcome") will be displayed.
        -> FInal output: 0Hi
    */
    printf(" ") ? printf("Hi\n") : printf("Welcome\n");
    /*
        -> First printf(" ") executes, means prints space on the sceen, and returns value 1
        -> Expression will become, =? 1 ? printf("Hi\n") : printf("Welcome\n");
        -> Because of 1 is non-zero printf("HI") will be displayed.
        -> FInal output:  Hi
    */
    return 0;
}
