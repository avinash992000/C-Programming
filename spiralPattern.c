/*
    Spiral Pattern:
    Input: NUmber of rows
    1 2
    4 3
    5 6
    8 7
    9 10
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i, k = 1;
    /*for(i=1;i<=n*2;i+=2)
    {
        if(k%2)     printf("%d %d\n",i,i+1);
        else        printf("%d %d\n",i+1,i);
        k++;
    }*/

    for(i=1;i<=n*2;i+=2)
        k++%2 ? printf("%d %d\n",i,i+1) : printf("%d %d\n",i+1,i);
}
