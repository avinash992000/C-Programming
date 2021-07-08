/*
    Problem: Multiplication Table
    Input:
        -> N value
        -> Upto which value
*/
#include<stdio.h>
int main()
{
    int n, upto;
    printf("Enter n, upto value: ");
    scanf("%d %d",&n,&upto);//5 5

    int i;
    for(i=1;i<=upto;i++)    printf("%d * %d = %d\n",n,i,n*i);
}
