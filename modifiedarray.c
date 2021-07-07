#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for (i = 1; i <= n; i++) scanf("%d", &a[i]);
    //print the odd indexed elements of the array here
    for(i=1;i<=n;i=i+2) a[i]=a[i]*2;
    for(i=2;i<=n;i=i+2) a[i]=a[i]/2;
    for (i = 1; i <= n; i++) printf("%d ",a[i]);
    

    return 0;
}
