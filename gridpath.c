#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main(){
    
    int n,count=0;
    scanf("%d",&n);
    int a[n][2];
    for(int i=0;i<n;i++){
        for(int j=1;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<2;j++){
            //printf("%d",a[i][j]);
            if(a[i+1][j+1] > a[i][j+1]){
                int b=a[i+1][j+1];
                int c=a[i][j+1];
                //printf("%d %d\n",b,c);
                count+=a[i][j+1];
            }
            else{
                count+=a[i][j+1];
                printf("%d",count);
                return 0;
            }
            //count=a[i+1][j+1] + a[i][j];
        }
        //printf("\n");
    }
    printf("%d",count);
    
    
    return 0;
}
