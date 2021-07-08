#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)//5 times
    {
        //printf("I value: %d ",i);
        for(j=1;j<=i;j++)//5 times
            printf("%d",j);//5*5 times
    
        printf("\n");
    }
    return 0;
}
