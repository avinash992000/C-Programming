/*
Given a value N, if we want to make change for N cents, and we have infinite supply of 
each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? 
The order of coins doesn’t matter.
For example, for N = 4 and S = {1,2,3}, there are four solutions: 
{1,1,1,1},{1,1,2},{2,2},{1,3}. 
So output should be 4. 
For N = 10 and S = {2, 5, 3, 6}, there are five solutions: 
{2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. 
So the output should be 5.

1 1 1 1 1 
1 1 1 2 
1 2 2 
5
*/

#include <stdio.h>
int no_of_ways(int* arr,int n,int N)
{
    int table[N+1][n],i,j,x,y;
    for(i=0;i<n;i++)
        table[0][i] = 1;
    for(i=1;i<N+1;i++)
    {
        for(j=0;j<n;j++)
        {
            x = (i-arr[j]>=0)?table[i-arr[j]][j]:0;
            y = (j >= 1)? table[i][j-1]: 0;
            table[i][j] = x + y;
        }
    }
    return table[N][n-1];
}
int main()
{
    int N,arr[100],ind;
    scanf("%d",&N);
    int n;
    scanf("%d",&n);
    for(ind=0;ind<n;ind++)
        scanf("%d",&arr[ind]);
    printf("%d",no_of_ways(arr,n,N));
    return 0;
}
