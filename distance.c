#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int main(){
    
    char str[10];
    gets(str);
    int n=strlen(str);
    for(int i=0;i<n-1;i++){
        int a=str[i]-'0';
        int b=str[i+1]-'0';
        printf("%d ",b-a);
    }
    
    return 0;
}
