/*
    Problem Statement: Copy one array elements into another array
    Procedure:
        1. REad n value
        2. Declare an array with size n
        3. Read elements into source array [Using rand()]
        4. Travese through first index to last index in source array and copy index by index into destination array
        5. Print source and destination arrays separately 
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);

    int sourceArray[n], destinationArray[n], i;
    for(i=0;i<n;i++)    sourceArray[i] = rand(); //Preparing an array with random elements
    /*
        destinationArray = sourceArray //Invalid Statement
        Reason:
            destinationArray ==> &destinationArray[0]
            sourceArray ==> &sourceArray[0]
    */
    for(i=0;i<n;i++)    destinationArray[i] = sourceArray[i];

    for(i=0;i<n;i++)    printf("%d ",sourceArray[i]);
    printf("\n\n");
    for(i=0;i<n;i++)    printf("%d ",destinationArray[i]);
    return 0;
}
