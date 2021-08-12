#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main(){
    
    int n,temp,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    printf("%d",a[n-4]);
        

    
    return 0;
}
