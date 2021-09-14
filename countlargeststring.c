#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    char str[1000];
    gets(str);
    int i=0,count=0,a=0,max=0;
    while(str[i]!='\0'){
        
        if(str[i]==' '){
            a=count;
            count=0;
            
        }
        if(max<a){
            max=a;
        }
        count++;
        i++;
    }
    printf("%d",max);
    
    return 0;
}
