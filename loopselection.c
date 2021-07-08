/*
    How to select loop:
        1. for: Should select to work with for loop whenever you know the number of times the statements has to execute. Becuase for loop can be called as counter [Number of times execution] controlled loop.
            Eg: print 10 times as SRM University, AP, print factorial of a given number
        
        2. while: Select to work with while loop whenever you dont know how many number times the statement has to execute. Because while loop can be called as event [The value waht we are using in the program] controlled loop
            Eg: Print reverse of a number, Identify armstrong number
*/
    //Problem1: Print factorial of 6
    //Problem2: Print reverse number of 741
/*
#include<stdio.h>
int main()
{
    int number;
    printf("Enter number value to calculate factorial: ");
    scanf("%d",&number);
    //  5! = 5 * 4 * 3 * 2 * 1
    int i;
    long fact = 1;
    for(i=number ; i>=1 ; i--)
    {
        fact = fact * i;
    }
    printf("Factorial of a given number is: %d",fact);
}*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    int rev = 0, rem;
    while(number != 0)
    {
        rem = number % 10;
        rev = rev * 10 + rem;
        number = number / 10;
    }

    printf("REverse of a number is: %d",rev);
}
