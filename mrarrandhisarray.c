#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,a,i;
    scanf("%d %d",&n,&a);
    int b[n],c[2*n];
    for(i=1;i<=n;i++){
        scanf("%d",&b[i]);
        }
    for(i=1;i<=n;i++){
        c[i]=b[i];
    }
    
    for(i=1;i<=n;i++){
        c[i+n]=b[i];
    }
    /*for(i=1;i<=n*2;i++){
        printf("%d ",c[i]);
    }
    printf("\n");*/
    for(i=1;i<=n;i++){
        b[i]=c[i+a];
        printf("%d ",b[i]);
    }
    /*for(i=1;i<=n*2;i++){
        printf("%d ",b[i]);
    }*/
    
    return 0;
}
