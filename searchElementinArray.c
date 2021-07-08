/*
    Problem Statement: Searching an array element in the given list of elements
    Procedure:
        1. REad n value
        2. Declare an array with size n
        3. Read elements into an array
        4. REad key value for which you want to search
        5. Declare a flag = 1
        5. Traverse through the array elements and compare array element value with key value
            1. If it maches print element found and make flag = 0 come out from traversing of an array
        6. If element is not avaiable print element was not found based on flag [flag = 1]. 
*/
#include<stdio.h>
int main()
{
    //REad n value into the program
    int n;
    scanf("%d",&n);

    //REad n elements into an array
    int arr[n], i;
    for(i=0;i<n;i++)    scanf("%d",&arr[i]);

    //Read key value into the program
    int key;
    scanf("%d",&key);

    //Search process
    int flag = 1;
    for(i=0;i<n;i++)
    {
        if(key == arr[i])
        {
            printf("\nElement %d was found at %d position.",key,i);
            flag = 0;
            break;
        }
    }
    if(flag == 1)   printf("Element %d was not found",key);

    /*for(i=0;i<n;i++)
    {
        if(key == arr[i])
        {
            printf("\nElement %d was found at %d position.",key,i);
            return 0;
        }
    }
    printf("\nElement %d was not found.",key);*/
    return 0;
}
