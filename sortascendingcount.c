#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int main() {
    
    int n,i,j,x,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i] > a[j]){
                x=a[i];
                a[i]=a[j];
                a[j]=x;
                count++;
            }
        }
        
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n%d",count);
    return 0;
}
