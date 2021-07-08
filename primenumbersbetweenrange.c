#include<stdio.h>

int isPrime(int);
void printPrimes(int,int);

int isPrime(int n)
{
    if(n<=1)    return 0;
    int i;
    for(i=2;i<=n/2;i++)
        if(n%i == 0)
            return 0;
    return 1;
}

void printPrimes(int start,int stop)
{
    int i;
    for(i=start;i<=stop;i++)
        if(isPrime(i) == 1)
            printf("%d ",i);
}

int main()
{
    int start, stop;
    printf("Enter start value and stop value: ");
    scanf("%d %d",&start,&stop);
    printPrimes(start,stop);
    return 0;
}
