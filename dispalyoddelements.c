/*
    Problem Statement: Display all of the odd elements in an array
    Procedure:
        1. Read total number of elements into an array
        2. Prepare / store random numbers into all of the index locations
        3. While printing data check if the element is odd [if(arrayName[index]%2==1)]
            -> if odd print it
            -> else do nothing  
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("How many elements you wants to store? Answer: ");
    scanf("%d",&n);

    int arr[n], i;
    for(i=0;i<n;i++)
        arr[i] = rand();
    
    printf("\nAll of the odd numbers in the list\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2)//arr[i]%2==1
            printf("%d ",arr[i]);
    }
    return 0;
}
