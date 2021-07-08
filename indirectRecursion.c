#include<stdio.h>

void A(int);
void B(int);

void A(int n)
{
    if(n>=1)
    {
        printf("From A function: %d\n",n);
        B(n-1);
    }
}

void B(int n)
{
    if(n>=1)
    {
        printf("From B function: %d\n",n);
        A(n-1);
    }
}

int main()
{
    A(8);
    return 0;
}
