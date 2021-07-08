#include<stdio.h>
int main()
{
    //Read row1, col1
	int r1, c1;
    scanf("%d %d",&r1,&c1);
    
    int A[r1][c1], i, j;
    
    //Read values into matrix A
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&A[i][j]);
    
    //REading row2, col2
    int r2, c2;
    scanf("%d %d",&r2,&c2);
    
    int B[r2][c2];
    
    //REading values into matrix B
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&B[i][j]);
    
    if(c1 == r2)
    {
        int result[r1][c2], k;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                result[i][j] = 0;
                for(k=0;k<c1;k++)
                    result[i][j] += A[i][k] * B[k][j]; 
            }
        }   
        
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d ",result[i][j]);
            printf("\n");
        }
    }
    else
    {
        printf("-1");
    }
	return 0;
}
