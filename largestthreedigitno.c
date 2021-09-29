#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int main(){
    
    long long int n;
    scanf("%lld",&n);
    int i=0,arr[10000],arr1[10000];
    while(n!=0){
        arr[i]=n%10;
        n=n/10;
        i++;
    }
    i=i-1;
    for(int j=0;j<i;j++){
        arr1[j]=arr[i-j];
    }
    int j=0,max=0,x=0;
    while(j<i-2){
        if(x<arr1[j]){
            x=arr1[j];
            max=j;
        }
        j++;
    }
    i=0;
    while(i<3){
        printf("%d",arr[max]);
        max--;i++;
    }
    
    return 0;
}
