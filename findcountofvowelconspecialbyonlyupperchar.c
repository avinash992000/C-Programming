#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int main() {
    
    char str[100];
    scanf("%[^\n]s",str);
    int  v = 0, cc = 0, wc = 0, i = 0; 
    while (str[i]!='\0'){
        char ch;
        ch=str[i];
        if(islower(ch)) ch=ch-32;
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O'||ch=='U') v++;
        else if (ch>=65 && ch<=90)                        cc++;
        else if(ch==' ')                                wc++; 
        i++;
    }
    printf("Vowel Count: %d\nCOns COunt: %d\nWords Count: %d",v,cc,wc+1);
        
    return 0;
}
