#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    //Prepare a matrix A with data using rand()
    int A[n][n], i, j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            A[i][j] = rand() % 40;
    
    //Printing all the elements of A matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%4d",A[i][j]);
        printf("\n");
    }
    printf("\n");
    //Printing Upper traingle elements are 0
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            i>=j ? printf("%4d",A[i][j]) : printf("%4d",0);
        printf("\n");
    }
    return 0;
}
