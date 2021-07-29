#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    
    int n,i,j,x=1;
    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        //printf("%d\n",k);
        for(i=k;i<=n;i++){
            //printf("%d",i);
            for(j=x;j<=i;j++){
                //printf("%d",i);
                printf("%d",j);
            }
            printf("\n");
        }
        x=x+1;
    }
    return 0;
}
