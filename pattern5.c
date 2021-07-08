#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
        *
       ***
      *****
     *******
    *********
*/
int main() 
{ 
    int n;
    scanf("%d",&n);//5
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)     printf(" ");
        /*for(j=1;j<=i;j++)       printf("*");
        for(j=1;j<i;j++)        printf("*");*/
        for(j=1;j<i*2;j++)      printf("*");
        printf("\n");
    }
    return 0;
}
