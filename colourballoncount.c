#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int main(){
    
    char str[10000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%c",&str[i]);
    }
    int i=0;
    for(i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        arr[i]=count;
    }
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("%c",str[i]);
        }
    }
    return 0;
}
