/*
    Problem Statement: Print unique elements in the array
    Procedure:
        1. Read n value from user
        2. Declare an array with size n
        3. REad n number of elements into an array
        4. Prepare one variable [i] which can point from 0 index to last index location-1
        5. Prepare another variable [j] which point from 0 to previous variable-1 [i]
            1. if i!=j and a[i]==a[j]
                then come out from inner loop
            2. Check if i==j
                if yes print element
                if no move to next iteration
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n], i, j;
    for(i=0;i<n;i++)    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(i!=j && arr[i]==arr[j])
                break;
        }
        if(i==j)    printf("%d ",arr[i]);
    }
}
