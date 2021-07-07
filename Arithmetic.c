#include<stdio.h>
int main()
{
    /*
    Arithmetic operators: Total is 5
        +: Addition
        -: Subtraction
        *: Multiplication
        /: Quotient
        %: REmainder
    */
    /*int x = 100, y = 24;
    printf("Addition: %d\n",x+y);//124
    printf("Subtraction: %d\n",x-y);//76
    printf("Multiplication: %d\n",x*y);//2400
    printf("Quotient: %d\n",x/y);//4
    printf("Remainder: %d\n",x%y);//4*/

    float x = 125.00, y = 25.00; 
    printf("Addition: %f\n",x+y);
    printf("Subtraction: %f\n",x-y);
    printf("Multiplication: %f\n",x*y);
    printf("Quotient: %f\n",x/y);
    /*
        Note: %[Modulus] operator cannot be applied on floating-point data because of complete division performs on floating-point data
        printf("Remainder: %f",x%y);//Invalid statement
    */
    return 0;
}
