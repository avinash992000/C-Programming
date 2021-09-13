#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int main(){
    
    int n;
    scanf("%d",&n);
    int arr[n],count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==0 && arr[j]==1){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
