#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,count=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]==0 && a[i+2]==0){
            count++;
            i+=1;
        }
        else if(a[i]==0 && a[i+1]==0)
            count++;
    }
    printf("%d",count);
    
    
    return 0;
}
