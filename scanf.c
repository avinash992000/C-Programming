#include<stdio.h>
int main()
{
    /*
        Syntax:
            scanf("Format specifiers",address of variables);
    */
    int x,y,z;
    char ch;
    /*
        Properties of varibles [A name memory location]:
            -> Name of memory location [Identifier]
            -> **Address of memory locaton [Unsigned data and unique value]
            -> Type of data can be stored
            -> Value what you want to store
    */
    //scanf("%d",&x);//REading input value into the program
    //printf("%d",x);//Printing output value on the monitor
    /*
        Question of day: Why to use & in scanf and why not to use & in printf 
    */

    /*scanf("%3d%3d%3d",&x,&y,&z);//3 is the max digits can read and store into variable
    printf("%d %d %d",x,y,z);*/
    /*
        Input: 58745 963
        x = 587 [45 will be moved into input buffer]
        y = 45
        printf => ?
    */    

    //scanf("%d %d %d",&x,&y,&z);
    /*
        Note: Whenever working with numbers [int and float], there will be no difference between %d%d%d to %d %d %d, but whenever working with numbers along with characters it really matters
    */
    //printf("%d %d %d",x,y,z);
    //printf("%cHello",' ');
    printf("\n%d",scanf("%d %c %d",&x,&ch,&y));
    /*
        NOte: scanf returns an integer, i.e. total number of inputs taken into program
    */
    printf("\n%d %c %d",x,ch,y);
    /*
        147 A 369
        147: x
        ' ': ch
           : y
        147,A,369
        x: 147
        ch: A
        y: 369
    */

    return 0;
}
