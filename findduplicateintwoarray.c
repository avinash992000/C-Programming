#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main(){

    int n,m,temp,x=0,count=0;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n],a2[m],a1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=m+n;i++){
        scanf("%d",&a[n+i]);
    }
    for(int i=0;i<n+m;i++){
        for(int j=0;j<n+m;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
    for(int i=0;i<m+n;i++){
        if(a[i]==a[i+1]){
            x+=2;
        }
        printf("%d",a[x]);
        x++;count++;
        if(x==m+n)
            break;
        printf(",");
    }
    printf("\n%d",count);
    
    
    return 0;
}
