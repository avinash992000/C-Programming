/*
    Problem Statement: Upper to Lower and Lower to Upper
    Procedure:
        -> ASCII values of uppercase 
            65 to 90
        -> ASCII values of lowercase
            97 to 122
        => Upper to lower: Existing value + 32
        => Lower to upper: Existing value - 32
        Example:
            A -> 65     
            a -> 97
            Diff:-32 [65-(-32)] => [65+32] => 97
            a -> 97
            A -> 65
            Diff:32 [97-32] => 65
*/
#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    int i = -1;
    while(str[++i])
    {
        if(str[i]>=65 && str[i]<=90)        str[i] = str[i] + 32; //Uppercase to Lowercase
        else if(str[i]>=97 && str[i]<=122)  str[i] -= 32; //Lowercase into uppercase
    }
    puts(str);
    return 0;
}
