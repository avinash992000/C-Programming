#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main(){
    
    int n,x=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        count=0;
        for(int j=1;j<=n;j++){
            if(i%j==0){
                count++;
            }
                
        }
        if(count==2){
            //printf("%d",i);
            a[x]=i;x++;
        }
    }
    //printf("%d",x);
    for(int i=0;i<=x-1;i++){
        //printf("%d",a[i]);
        if((a[i]+2)==a[i+1])
            printf("(\%d,%d)\n",a[i],a[i+1]);
    }
    return 0;
}
