#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char str[100],ch;
    scanf("%[^\n]s",str);
    int i=0,len=0;
    
    while(str[i]!='\0'){
        len++;
        i++;
    }
    int j=len-1;
    i=0;
    while(i<j){
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        i++;
        j--;
    }
    printf("%s",str);
    return 0;
}
