#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,a=0,b=0,x,y;
    scanf("%d",&m);
    scanf("%d",&n);
    int c[n];
    while(m>0){
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    int i=0;
    while(n>0){
        if(i%2==0){
            a+=c[i];
            x=a;
        }
        else{
            
            b+=c[i];
            y=b;
        }
        n--;i++;
    }
    if(x>y)
        printf("%d",x);
    else
        printf("%d",y);
    m--;
    }
    return 0;
}
