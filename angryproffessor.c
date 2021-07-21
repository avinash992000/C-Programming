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
    
    int n,m,a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d %d",&m,&n);
        int b[m],count=0;
        for(j=0;j<m;j++){
            scanf("%d",&b[j]);
            if(b[j]<=0)
                count++;
        }
        if(count>=n)
            printf("NO");
        else
            printf("YES");
    printf("\n");
    }
    
    return 0;
}
