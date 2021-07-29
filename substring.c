#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    
    int i,j,x=0;
    char str[100];
    scanf("%[^\n]s",str);
    int n= strlen(str);
    for(int k=1;k<=n;k++){
        //printf("%d\n",k);
        for(i=k;i<=n;i++){
            //printf("%d",i);
            for(j=x;j<i;j++){
                //printf("%d",j);
                printf("%c",str[j]);
            }
            printf("\n");
        }
        x=x+1;
    }
    return 0;
}
