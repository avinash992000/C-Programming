/*
    Problem statement: Read elements from user and print odd position and even position separately
    Procedure:
        1. REad total number of elements from user [n value]
        2. Declare an array with n value
        3. Read values into an array
        4. To print even position elements follow the below   
            1. for(i=0;i<n;i+=2)
            2. if(i%2==0) [Index must be ordered]
        5. To print odd position elements follow the below
            1. for(i=1;i<n;i+=2)
            2. if(i%2==1)   [Index must be ordered]
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("How many elements you wants tp store? Answer: ");
    scanf("%d",&n);

    int arr[n],i;
    for(i=0;i<n;i++)
        arr[i] = rand();
    
    printf("\nPrinting even position elements:\n");
    for(i=0;i<n;i+=2)
        printf("\nIndex value: %d ==> Element value at index: %d",i,arr[i]);
    
    printf("\n\nPrinting odd position elements:\n");
    for(i=0;i<n;i++)
    {
        if(i%2)
            printf("\nIndex value: %d ==> Element value at index: %d",i,arr[i]);
    }
    return 0;
}
