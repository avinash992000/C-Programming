
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>


int main(){
    
    int n,m,x;
    scanf("%d %d",&n,&m);
    int a[m];
    for(int i=1;i<=n;i++){
        x=0;
        for(int j=0;j<m;j++){
            scanf("%d",&a[i]);
            if(x<a[i])
                x=a[i];
        }
        printf("%d ",x);
    }
    return 0;
}
