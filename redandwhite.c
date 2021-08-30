#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int n,c1=0,x=0,i,j;
    scanf("%d",&n);
    int count=0,b[n];
    char a[n][n];
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            scanf("%c",&a[i][j]);
            if(a[i][j]=='R'){
                count++;
            }
            if(i>j){
                c1++;
            }
        }
        printf("%d\n",count);
        x+=count;
        b[i]=count;
    }
    //printf("%d %d",x,c1);
    if(x<c1){
        printf("-1");
        return 0;
    }
    count=0;
    for(j=0;j<n;j++){
        //printf("%d ",b[i]);
        for(i=0;i<n-1;i++){
            if(b[i]>b[i+1]){
                x=b[i];
                b[i]=b[i+1];
                b[i+1]=x;
                count++;
            }
        }
    }
    //printf("%d",count);

  return 0;
}
