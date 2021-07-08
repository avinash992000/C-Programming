#include<stdio.h>
#include<stdlib.h>
int main()
{
    //REading row and column values
    int r,c;
    scanf("%d %d",&r,&c);

    //Declaring A, B and R matrices
    int A[r][c], B[r][c], R[r][c], i, j;

    /*
    //Preparing matrix A with data by using rand()
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            A[i][j] = rand() % 100;
    
    ////Preparing matrix B with data by using rand()
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            B[i][j] = rand() % 50;
    
    //Calculating sum of each cell and stores result int R matrix cell
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            R[i][j] = A[i][j] + B[i][j];
    */

    //Preparing data into A,B and calculating result and storing into R
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            A[i][j] = rand() % 100;
            B[i][j] = rand() % 50;
            R[i][j] = A[i][j] + B[i][j];
        }
    }
    //Printing MAtrix A
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }

    printf("\n\n");
    //Printing MAtrix B
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",B[i][j]);
        printf("\n");
    }

    printf("\n\n");
    //Printing Result MAtrix R
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",R[i][j]);
        printf("\n");
    }
    return 0;
}
