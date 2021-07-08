#include<stdio.h>
int isPrime(int); //Function declaration / Prototype
/*
    The above statement contain following information
        1. What is the function name?
        2. What is the type of input paramater?
        3. What is the return type?
*/
int isPrime(int n) //Function definition => Cotains logic of the function
{
    if(n<=1)    return 0;
    int i;
    for(i=2;i<=n/2;i++)
        if(n%i == 0)   
            return 0;
    return 1;
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    isPrime(number) ? printf("YES") : printf("NO");
    return 0;
}
/*
    main() => Calling function
    number => Actual argument
    n => Formal argument to prepare a space for storing number value
    isPrime(number) => Function call / Execution of function
*/
