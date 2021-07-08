/*
    Problem Statement: Print only negative numbers in an array
    Procedure:
        1. Read n value
        2. Declare an array with n size
        3. REad elements into an array [positive and negative]
        4. Traverse through the array and check if element is negative
            -> if yes, print it
            -> if no, go to next element
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n],i;
    for(i=0;i<n;i++)    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
        if(arr[i] < 0)
            printf("%d ",arr[i]);
    return 0;
}
