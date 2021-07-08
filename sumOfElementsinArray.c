/*
    Problem Statement: Find out sum of all the elements of an array
    Procedure:
        1. Read n value
        2. Declare an array with size n
        3. Load data elements into an array
        4. Initialize sum = 0
        5. Traverse through an array from 0 index position to last index position   
            -> prepare sum = sum + arrayName[index]
        6. Print final result of sum variable
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n], i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int sum = 0;
    for(i=0;i<n;i++)
        sum = sum + arr[i];
    
    printf("Sum of array elements is: %d",sum);
    return 0;
}
