/*
    Input: Two numbers
    Logic: 
        -> Identify max value in the given two numbers [n1,n2]
        -> try to divide max by n1, n2
            -> If both are completely divides max value
                -> print max as LCM
            -> else increment max by one [Repeat above steps until identify the answer]
*/
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    int max = n1 >= n2 ? n1 : n2;
    /*if(n1 >= n2) max = n1;
    else         max = n2;*/

    while(1)
    {
        if(max%n1 == 0 && max%n2 == 0)
        {
            printf("LCM of given two numbers %d and %d is: %d",n1,n2,max);
            break;
        }
        max++;
    }
    return 0;
}
