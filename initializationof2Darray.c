#include<stdio.h>
int main()
{
    //1. Individual element initialization
    int arr[2][2];
    arr[0][0] = 10; arr[0][1] = 20; arr[1][0] = 30; arr[1][1] = 40;

    //2. Basic initialization
    int brr[3][3] = {1,2,3,4,5,6,7,8,9};
    int crr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    //3. Partial initialization
    int drr[2][3] = {14,2,5,36};//Remaining locations will be filled with 0
    int err[3][4] = {0};//Initializing all the elements of 0

    //4. Without row value
    int frr[][2] = {1,2,3,4};

    //Printing of data
    printf("%d %d %d %d\n\n",arr[0][0],arr[0][1],arr[1][0],arr[1][1]);
    int i,j;
    for(i=0;i<3;i++)//Row index
    {
        for(j=0;j<3;j++)
            printf("%d ",crr[i][j]);//Row-major printing
            //printf("%d ",arr[j][i]); column-major printing
        printf("\n");
    }
    return 0;
}
