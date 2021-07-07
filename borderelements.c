#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,m,i;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=m;i<=n;i=i+m){
        printf("%d ",a[i]);
    }
    return 0;
}
