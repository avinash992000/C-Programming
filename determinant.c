#include<stdio.h>
#include<stdlib.h>
/*int determinant(int** a)
{
    // your code here
}*/   
int main()
{
    /*int **arr, i, j,x,y,z,c;
    arr = (int**) malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++)
        arr[i] = (int*) malloc(sizeof(int) * 3);
    for (i = 0; i < 3; i++) for (j = 0; j < 3; j++) scanf("%d", &arr[i][j]);
    x=((*arr[2][2]*arr[3][3])-(arr[3][2]*arr[2][3]));
    y=((arr[2][1]*arr[3][3])-(arr[3][1]*arr[2][3]));
    z=((arr[2][1]*arr[3][2])-(arr[3][1]*arr[2][2]));
    x=x*arr[1][1];
    printf("%d",x);
    y=y*arr[1][2];
    z=z*arr[1][3];
    c=x-y+z;
    printf("%d",c);
    //printf("%d", determinant(arr));
    return 0;
}*/
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
    return 0;
}
