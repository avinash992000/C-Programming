/*
    Problem: HCF or GCD of two numbers
    Input: Two numbers n1,n2
    Logic:
        -> Identify minimum value from n1,n2
        -> take a new value [i] and initialize with 1
        -> Start divide the two numbers by using i
            -> If two numbers divides the number perfectly then place the value of i into gcd, then increment value of i by one
            -> Else, increment the value of i by one
            -> Rotate above process, until the value of i becomes to min value
*/

#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter n1,n2 values: ");
    scanf("%d %d",&n1,&n2);
    //int min = n1<=n2 ? n1 : n2;
    int i, gcd = 1;
    for(i=1; i<=n1 && i<=n2; i++)//i<=n1 && i<=n2 <==> i<=min
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    printf("GCD of given two numbers %d and %d is: %d",n1,n2,gcd);
    return 0;
}
