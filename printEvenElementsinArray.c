/*
    Problem Statement: REad elements into an array and print even elements of the array
    Procedure:
        1. REad total number of elements value into the program [n value]
        2. Declare an array with n value
        3. by using for loop and scanf, read elements into an array
        4. Check each element of an array for even number   
            1. If it is even, then print it
            2. else do nothing
*/
#include<stdio.h>
int main()
{
    //Reflect total value in the program
    int n;
    printf("How many elements you want to store? Answer: ");
    scanf("%d",&n);

    //Refelcts storing elements into an array
    int arr[n], i;
    printf("\nEnter elements into an array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d index element: ",i);
        scanf("%d",&arr[i]);
    }

    //Printing elements which are even numbers only
    printf("\nEven elements of the array:\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    }
