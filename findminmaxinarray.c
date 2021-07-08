/*
    Problem Statement: FInd minimum and Maximum in the list of array elements
    Procedure:
        1. REad n value
        2. Declare an array with size n
        3. Store elements into an array using rand()
        4. declare min = arr[0], max = arr[0]
        5. Compare every element of an array with min and maximim and place data according to it
        6. Print min and max value 
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n],i;
    for(i=0;i<n;i++)    arr[i] = rand();

    int min = arr[0]; 
    int max = arr[0];

    for(i=1;i<n;i++)
    {
        if(max < arr[i])    max = arr[i];
        if(min > arr[i])    min = arr[i];
    }

    for(i=0;i<n;i++)    printf("%d ",arr[i]);
    printf("\n\nMinimum: %d\n\nMaximum:  %d",min,max);
    return 0;
}
