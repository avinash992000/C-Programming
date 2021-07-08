/*
    Recursion:
        -> Def: A function is calling itself is known as resursion [A function having a statement inside of its block, that statement is calling same function is known as recursion]
        => HOw to write?
            -> Base case [Termination condition]
            -> Regular case [Normal-flow of execution]
        => NOte: If you miss to write proper base condition, it reaches to infinite interations
        -> Recursion execution procedure:
            -> First, Divides the main problem into sub-problems
            -> Whenever it meets the base case the division process will be stopped
            -> Come back to the first by doing if any operations are left [Combining sub-problems into ain problem]
        -> Writting of recursion is really easy to implement
        -> For efficiency checking, iterative solutions are more efficient than recursive solutions
        => Types of recursions:
            -> Head recursion: if the first statement is recursion call
            -> Tail recirsion: if the last statement is recursion call
            -> Indirect recursion: If the recursion call is not within the function but from outside of another functon
*/
//Print numbers from 1 to 10 using iterative and recursive
#include<stdio.h>

void printNumbersIter(int);
void printNumbersRec(int);

void printNumbersIter(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
}

void printNumbersRec(int n)
{
    if(n>=1)//Base case
    {
        printNumbersRec(n-1);//Regular case => Head recursion
        printf("%d ",n);
    }
}

void printNumbersRecT(int n)
{
    if(n>=1)//Base case
    {
        printf("%d ",n);
        printNumbersRec(n-1);//Regular case => Tail recursion
    }
}

int main()
{
    printNumbersIter(10);
    printf("\n\nHead recursion: ");
    printNumbersRec(10);
    printf("\n\nTail REcursion: ");
    printNumbersRecT(10);
    return 0;
}
