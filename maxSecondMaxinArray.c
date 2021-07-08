/*
    Problem Statement: Identify max and second max in an array
    Procedure:
        1. Read n value
        2. Declare an array with size n
        3. Store data into an array using rand()
        4. Identify max and min value in first two index locations [0 and 1] of an array
            1. Assign max value to max variable
            2. Assign min value to smax variable
        5. Traverse through the index locations from 2 index onwards [Repeat process until index becomes n-1]
            1. if next index value is greaterthan max value
                1. Assign max value into smax variable
                2. Assign index element into max location
            2. else, if next index location is greaterthan smax
                1. Assign index element into smax location
        6. print max and smax
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n], i;
    for(i=0;i<n;i++)    arr[i] = rand();

    int max, smax;

    if(arr[0] > arr[1])
    {
        max = arr[0];
        smax = arr[1];
    }
    else
    {
        max = arr[1];
        smax = arr[0];
    }

    for(i=2;i<n;i++)
    {
        if(max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if(smax < arr[i])
            smax = arr[i];
    }

    for(i=0;i<n;i++)    printf("%d ",arr[i]);
    printf("\n\nMax value is: %d\n\nSecond max value is: %d",max,smax);
    return 0;
}
