/*
    Problem statement: Identify the given number is even or odd
    Logic:
        -> Divide the number by 2
            -> check remainder value, if it is equal to 0
                => print even number
            -> else
                => print odd number
        -> Types of logics:
            -> 1. number%2==0
            -> 2. 
*/
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number%2 == 0)//1. number%2 => 1/0 2. 1/0 == 0
        printf("%d is an even number\n",number);
    else
        printf("%d is an odd number\n",number);

    if(number%2)//1. number%2 => 1/0
        printf("%d is an odd number\n",number);
    else
        printf("%d is an even number\n",number);
    
    if(!(number%2))//1. number%2 => 1/0 2. !(1/0) => 0/1
        printf("%d is an even number\n",number);
    else
        printf("%d is an odd number\n",number);

    return 0;
}
