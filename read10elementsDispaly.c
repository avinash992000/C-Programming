/*
    Problem Statement: Read 10 elements and display
    Procedure:
        1. Declare an array with size [size will be taken by you or given by the user]
        2. By using for loop and scanf, we can read data into the program
        3. By using for loop and printf, we can print output on the screen
*/
#include<stdio.h>
#include<stdlib.h>
#define size 50 //Macro definition
int main()
{
    //[size will be taken by you
    int arr[size];//Index starts from 0 to size-1
    int i;
    for(i=0;i<size;i++)
        arr[i] = i+1;
    
    //Size will be given by the used
    int n;
    printf("\nHow many elements you wants to store in an array? Answer: ");
    scanf("%d",&n);
    int brr[n];
    printf("\nEnter elements into an array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d index location element:",i);
        scanf("%d",&brr[i]);
    }

    //how to store random numbers
    //By using rand(Min:0,Max:32767)
    int crr[size];
    for(i=0;i<size;i++)
        crr[i] = rand();
    
    printf("\nFirst array elements:\n");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);

    printf("\n\nSecond array elements:\n");
    for(i=0;i<n;i++)
        printf("%d ",brr[i]);

    printf("\n\nThird array elements:\n");
    for(i=0;i<size;i++)
        printf("%d ",crr[i]);
    return 0;
}
