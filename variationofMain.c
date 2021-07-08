/*
    Main: main also a function, after function executes we will expect / not expect a return value from the function
        1.  main()//Default int will be taken
            {
                -Statements
            }
        2.  void main()
            {
                -Statements
            }
        3.  int main()
            {
                -Statements
                -Return value
            }
        4.  int main(int argc,char *argv[])//ANSI standard way to write main function
            {
                -Statements
                return 0;
            }
                int: return value
                main: function name
                argc: argument counter [identifier]
                argv*: argument vector
                    Note: above two [argc,argv] could be known as command line arguments 
                    Mean: Passing input to the main function
*/
#include<stdio.h>
/*main()
{
    printf("Hello World!");
}
void main()
{
    printf("Hello World!");
}*/
int main()
{
    printf("Welcome to C programming sessions!");
    return 0;
}
