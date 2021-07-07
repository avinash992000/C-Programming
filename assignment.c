#include<stdio.h>
int main()
{
    /*
        Assignment operators:
            -> Only one assignment operators i.e.   = 
            -> Purpose: Assigning right side value into left side variable[memory location];
            -> SYntax:  leftSideVariable = rightSideValue[Literal(COnstant)]
            -> But, With the combination of other operators [Arithmetic and bitwise] we can use assignment operators also
            -> How?
                -> leftSideVariable [+,-,*,/,%,&,|,^,~,<<,>>]= rightSideValue
                -> Example:
                    int x = 100;
                    x += 50     <=>  x = x + 50;
                    += -> Shorthand operator
    */
    float x = 10.68;
    printf("%f\n",x);
    x += 50;
    printf("%f\n",x);
    x *= 10;
    printf("%f\n",x);
    return 0;
}
