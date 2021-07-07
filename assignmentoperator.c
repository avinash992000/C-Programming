#include<stdio.h>
int main()
{
    //int x = 1,2,3;//Invalid statement because of variable declaration
    /*
        int x = 1,2,3 => variable declaration
        Note: Whenever compiler encounters , symbols then compiler looks for next variable 
        Example: int x = 1, y = 2, z = 3;
    */
    int x;
    x = 1,2,3;
    100;//Valid
    /*
        NOte: Here matter about operator precedence, i.e.  =  is having highiest precedence than the , operator 
        2,3 as consideres null/constant statement
    */
    printf("%d\n",x);

    int y = (1,2,3,5,1);//Last value will be loaded as the result of (1,2,3,5,1)
    printf("%d\n",y);

    float z = (5.5,65,9.6,85.5);
    printf("%f\n",z);
    return 0;
}
