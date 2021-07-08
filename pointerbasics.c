#include<stdio.h>
int main()
{
    int x = 100;
    printf("The value is: %d\n",x);
    printf("The address is: %u\n",&x);

    /*
        POinter: A special variable used to hold address of another variable
        Syntax to define pointer:
            1. datatype *pointerVariableName
                Eg: int *px,y;
                    px: Pointer variable
                    y : Normal variable
            2. datatype* pointerVariableName
                Eg: int* px,y;
                    px: Pointer variable
                    y : Normal variable
    */
    int *px = &x;
    printf("The address of variable is: %u",px);
    return 0;
}
