#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned i,j,x,y,z;
    int n=3,c;
    int a[n][n];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    x=((a[2][2]*a[3][3])-(a[3][2]*a[2][3]));
    y=((a[2][1]*a[3][3])-(a[3][1]*a[2][3]));
    z=((a[2][1]*a[3][2])-(a[3][1]*a[2][2]));
    x=x*a[1][1];
    y=y*a[1][2];
    z=z*a[1][3];
    c=x-y+z;
    printf("%d",c);
    /*for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    */
    return 0;
}
