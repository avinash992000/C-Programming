#include<stdio.h>
int main()
{
    //REad row and column values of two matrix
    int r1,c1,r2,c2;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);

    if(r1==r2 && c1==c2)
    {
        int A[r1][c1], B[r2][c2], i, j;
        printf("Enter elements into A matrix: ");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&A[i][j]);
        
        printf("Enter elements into B matrix: ");
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                scanf("%d",&B[i][j]);
        
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                if(A[i][j] != B[i][j])
                {
                    printf("GIven matrices are not identical");
                    return 0;
                }
            }
        }
        printf("GIven matrices are identical");
        return 0;
    }
    else    
        printf("GIven matrices are not identical");
    return 0;
}
