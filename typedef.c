/* 
    Points to remember about typedef:
        1. Used to give the user-defined name to fundamental / user-defined type(s)
        2. Called as user datatypes
        3. Make a habbit of given the names for new one in UPPERCASE characters [There will be no conflit if it is the case]
        4. At the pre-processing [One of the program execution process] stage, the compiler converts these names back to original names 
*/
#include<stdio.h>
int main()
{
    typedef int NUMBER;

    NUMBER x,y; //int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",x+y);
}
