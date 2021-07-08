#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Read row and Column
    int r,c;
    scanf("%d %d",&r,&c);

    //Prepare a rectangular matrix with data
    int A[r][c], i, j;

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            A[i][j] = rand() % 20;
    
    //Print matrix A
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }

    printf("\n");
    //Print transpose of matrix A
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",A[j][i]);
        printf("\n");
    }
    return 0;
}
