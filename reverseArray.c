/*
    Problem Statement: Prepare an array into reverse order
    Procedure:
        1. Read n value
        2. Declare an array with size n [arr]
        3. Prepare data into an array using rand()
        4. Declare one more array with same size of first array [brr]
        5. Do reverse copy of arr into brr
        6. Do copy of brr into arr
        7. print arr
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);

    /*int arr[n], brr[n], i, j;
    //Prepare an array
    for(i=0;i<n;i++)    arr[i] = rand();
    //Reverse copy of arr into brr
    for(i=0,j=n-1;i<n;i++,j--)  brr[i] = arr[j];
    //Print arr
    for(i=0;i<n;i++)    printf("%d ",arr[i]);
    //Copy brr into arr
    for(i=0;i<n;i++)    arr[i] = brr[i];
    //Print an array arr
    printf("\n\n");
    for(i=0;i<n;i++)    printf("%d ",arr[i]);*/

    int arr[n],i,j,temp;
    for(i=0;i<n;i++)    arr[i] = rand();

    for(i=0;i<n;i++)    printf("%d ",arr[i]);

    i = 0; j = n-1;
    while(i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; j--;
    }
    printf("\n\n");
    for(i=0;i<n;i++)    printf("%d ",arr[i]);
    return 0;
}
