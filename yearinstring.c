#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int main(){
    
    char str[10000];
    gets(str);
    int n=strlen(str);
    int count=0,arr[n],arr1[n],k=0,i=0,x=0;
    while(str[i]!='\0'){
        if(str[i]=='-'){
            count++;
            i++;
        }
        else{
            i++;
        }
        if(count==2){
            x=0;
            int b=0;
            while(b<4){
                x=x*10+(str[i]-'0');
                i++;b++;
            }
            arr1[k]=0;
            arr[k++]=x;
            count=0;
        }
    }
    for(i=0;i<k;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
