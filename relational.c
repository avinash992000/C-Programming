#include<stdio.h>
int main()
{
    /*
        Relational Operators:
            -> The following operators are supported under relational operators category
                <[Lessthan], >[Greaterthan], <=[lessthan or equal], >=[Greaterthan or equal], ==[is equal], !=[is not equal]
            -> Purpose:
                -> To check the relation between two values / two operands
            -> Return value: boolean
                -> 1: true
                -> 0: false
    */
    printf("%d\n",10<20<0==0);//1
    /*
        10<20<0==0: (((10<20)<0)==0)
            -> 10 < 20 [True] => 1
            -> 1 < 0 [False] => 0
            -> 0 == 0 [True] => 1
    */
    printf("%d\n",10>20);//0
    printf("%d\n",10<=20);//1
    printf("%d\n",10>=20);//0
    printf("%d\n",10==20);//0
    printf("%d\n",10!=20);//1

    return 0;
}
