#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,m,i,j,x=0,count=0;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[n],b[m];
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        //printf("%d",a[n]);
    }
    for(j=1;j<=m;j++){
        b[j]=j;
    }
    
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i]==b[j])
                b[j]=0;
            }
    }
    for(j=1;j<=m;j++){
        if(x<m){
            if(b[j]==0)
                continue;
            x=x+b[j];
            //printf("%d ",x);
            count++;
        }
    }
    printf("%d",count-1);
    return 0;
}

