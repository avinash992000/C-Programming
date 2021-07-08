/*
    switch condition:
        -> Can be called as multi-way branching statement [equal to nested if block]
        -> Syntax:
            switch(expression/constant/variable)
            {
                case constant1: -statements; break;
                case constant2: -statements; break;
                .
                .
                .
                .
                default: statements: break;
            }
        => **Rules:
            -> What should be the value of expression/constant/variable?
                -> Only character / integer
                    Eg: 10+15
                        A
                        10+A+85
                        10+98.6 => 108.6 [Float] //Invalid value
            -> Is space required between case and constant?
                -> Yes, requred according to syntax
            -> What will be the value of constant?
                -> Same as like as expression/constant/variable
            -> Can we place an expression in place of constant?
                -> No, expressions can be evaluated at the time running of program, But constant values should be decided at the time of compilation only. 
                -> Eg: 10+15
            -> Can we have duplicate constants i.e. directly or indirectly?
                -> No, Duplicate constants shall not be applied.
                -> Eg:
                    case 'A':
                    case 'B':
                    case 65:
                    case 66:
            -> Is is mandate to write break statement after every case block?
                -> Yes / No
                -> Yes: If you want to get proper answer for the given problem it is mandate to place, if you dont place even though it matches the constant displays the output value as present statements and next statements until reach to break
                -> No: If you dont place break, the compiler is not going to show error, because I can claim that break not mandatory
            -> Is it mandate to place default case at the end of all the cases?
                -> No, It can be placed anywhere else
*/
#include<stdio.h>
int main()
{
    int i = 2;
    switch(i)
    {
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        default: printf("Default"); break;
    }
}
