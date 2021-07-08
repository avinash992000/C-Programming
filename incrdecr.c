/*
    Increment / Decrement operators:
        -> Add value by one / subtract value by one
        -> Operators:
            ++ => Add value by one
            -- => Subtract value by one
            Add 1 to existing value of num:
                num = 10;
                I. num = num + 1 [By using an expression]
                II. num += 1 [By using shorthand operator]
                III. num++ / ++num [By using increment operators]
        -> Way to use?
            -> Before an operand: [Pre-Increment/Decrement]
                -> First value will be updated later value will be used
                int num = 100;
                ++num
                --num
            -> After an operand: [Post-Increment/Decrement]
                -> First value will be used then value will be updated
                int num = 100;
                num++;
                num--;
*/

#include<stdio.h>
int main()
{
    int x = 10;
    int y = 20;
    int z = x++;
    printf("z = %d x = %d\n",z,x);
    z = --y;
    printf("z = %d y = %d\n",z,y);

    //z = 100++;//No, Invalid Statement
}
