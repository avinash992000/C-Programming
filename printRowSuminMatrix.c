#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    //Note: The following logic will be executed if user enters data [Input] in a single line
    int arr[r][c], i, j;
    for(i=0;i<r;i++)
    {
        int sum = 0;
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            sum += arr[i][j];
        }
        printf("\nRow number: %d\tSUm is: %d",i+1,sum);
    }

    /*for(i=0;i<r;i++)
    {
        int sum = 0;
        for(j=0;j<c;j++)
            sum += arr[i][j];
        printf("\nRow number: %d\tSUm is: %d",i+1,sum);
    }*/
    return 0;
}
