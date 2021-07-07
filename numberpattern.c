#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,j,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(y=n;y>i;--y){
            printf(" ");
        }
        
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
    printf("\n");
    }
    return 0;
}
