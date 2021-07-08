#include<stdio.h>
int main()
{
    int n;
    printf("Enter upto which natural number sum you want to calculate? Answer: ");
    scanf("%d",&n);
    printf("%d",(n*(n+1))/2);
    return 0;
}
