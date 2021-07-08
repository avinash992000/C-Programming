#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    
    int arr[n][n],i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    
    int sum = 0;
    for(i=0;i<n;i++)
        sum = sum + arr[i][i] + arr[i][n-i-1];
    
    if(n%2) sum = sum - arr[n/2][n/2];
    
    printf("%d",sum);
    return 0;
}
