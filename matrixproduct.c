#include<stdio.h>
int main()
{
    int i,j,m,N,k;
    scanf("%d", &N);
    scanf("%d",&m);
    int matrix[N][m],y[N][m];// transpose[N][m];
    //your code here
    for(i=0;i<N;i++){
        for(j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
            
        }
    }
    int a,b;
    scanf("%d %d",&a,&b);
    if(m!=a){
        printf("-1");
        return 0;
    }
    int matrix2[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&matrix2[i][j]);
            
        }
    }
    for(i=0;i<N;i++){    
        for(j=0;j<m;j++){    
            y[i][j]=0;    
            for(k=0;k<m;k++){    
                y[i][j]+=matrix[i][k]*matrix2[k][j];    
            }    
        }    
    }    
    /*for(k=0;k<N;k++){
        for(i=0;i<N;i++){
            for(j=0;j<m;j++){
                x[k][i]=matrix[k][j]*matrix2[j][i];
                y[k][i]=y[k][i]+x[k][i];    
            }
        }
    }*/
    for(i=0;i<N;i++){
        for(j=0;j<m;j++){
            printf("%d ",y[i][j]);
            
        }
    printf("\n");
    }
    return 0;
}
