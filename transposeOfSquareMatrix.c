#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Read n value
    int n;
    scanf("%d",&n);

    //Declare square matrix
    int A[n][n], i, j;

    //Fill A matrix with data by using rand()
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            A[i][j] = rand() % 30;
    
    //Print matrix A
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }

    printf("\n");
    //Print transpose of A matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",A[j][i]);
        printf("\n");
    }
        
    return 0;
}
