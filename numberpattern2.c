#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,j,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            a=1;
            b=0;
        } 
        else{
            a=0;
            b=1;
        }       
        for(j=1;j<=i;j++){
            (j%2==0) ? printf("%d",a):printf("%d",b);
        }
    printf("\n");
    }
    
    return 0;
}
