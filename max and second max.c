#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int n,i,max,smax;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        max=arr[0];
        smax=arr[1];
    }
    else{
        max=arr[1];
        smax=arr[0];
    }
    for(i=2;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];   
        }
        else if(smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d",smax);
    return 0;
}
