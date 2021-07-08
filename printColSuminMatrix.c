#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c], i, j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            arr[i][j] = rand();
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        int sum = 0;
        for(j=0;j<c;j++)
            sum += arr[j][i];
        printf("\nColumn number: %d\tSUm is: %d",i+1,sum);
    }
    return 0;
}
