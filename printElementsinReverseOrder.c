/*
    Problem Statement: Print data elements in reverse order
    Procedure:
        1. REad total number of elements value [n value]
        2. Declare an array with size of n
        3. REad input in the program [We can use rand()]
        4. Declare a variable i = n-1, and print arr[i] from n-1 to 0 index location
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n], i;
    for(i=0;i<n;i++)
        arr[i] = rand();
    
    for(i=0;i<n;i++)    printf("%d ",arr[i]);
    printf("\n\n");
    for(i=n-1;i>=0;i--) printf("%d ",arr[i]);
    return 0;
}
