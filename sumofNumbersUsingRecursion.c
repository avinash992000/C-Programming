#include<stdio.h>

int sumofN(int);
int sumofNI(int);

int sumofN(int n)
{
    if(n==1)    return 1;
    return n + sumofN(n-1);
}

int sumofNI(int n)
{
    int sum = 0;
    int i;
    for(i=n;i>=1;i--)
        sum = sum + i;
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("Sum is: %d\n",sumofN(n));
    printf("Sum is: %d\n",sumofNI(n));
    return 0;
}
