#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned n,i,j,a,c=0,d=0;
    scanf("%d",&n);
    int mat[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                a=mat[i][j];
                c=c+a;
            }
            if(i+j==n-1){
                if(i==j) continue;
                else{
                    a=mat[i][j];
                    d=d+a;
                }
                
            }
        }
   
    }
    printf("%d",c+d);
    return 0;
}
