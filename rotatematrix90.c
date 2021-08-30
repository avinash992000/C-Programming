#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=n;i>0;i--){
        for(int j=1;j<=m;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

  return 0;
}
