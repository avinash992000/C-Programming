#include<stdio.h>
int main()
{
    int i, j,m,  N;
    scanf("%d", &N);
    scanf("%d",&m);
    int matrix[N][m];// transpose[N][m];
    //your code here
    for(i=0;i<N;i++){
        for(j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
            
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<N;j++){
            printf("%d ",matrix[j][i]);
        }
    printf("\n");
    }
    
    
    /*for(i=0;i<N;i++){
        for(j=0;j<m;j++){
            transpose[i][j]=matrix[j][i];
        }
    }
    
    for(i=0;i<N;i++){
        for(j=0;j<m;j++){
            printf("%d ",transpose[i][j]);
        }
    printf("\n");
    }
    */


    return 0;
}
