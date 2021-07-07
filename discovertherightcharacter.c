#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    char str[32];
    int j=0,index =0;
    while(n){
        index = (n-1) %26;
        str[j++]=(index +'A');
        n= (n-1)/26;
    }
    for(--j;j>=0;j--)
        printf("%c",str[j]);
    return 0;
}
