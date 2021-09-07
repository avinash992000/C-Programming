/*
Given an array that contains both positive and negative integers, find the product of the maximum product 
subarray.

Examples:

Input: arr[] = {6, -3, -10, 0, 2}
Output:   180  // The subarray is {6, -3, -10}

Input: arr[] = {-1, -3, -10, 0, 60}
Output:   60  // The subarray is {60}

Input: arr[] = {-2, -40, 0, -2, -3}
Output:   80  // The subarray is {-2, -40}

6, -3, -10, 0, 2

6 
6 -3 
6 -3 -10
6 -3 -10 0 
6 -3 -10 0 2 
-3 
-3 -10
-3 -10 0 
-3 -10 0 2 
-10
-10 0 
-10 0 2 
0 
0 2 
2 

*/
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[100],N,i,j,product,max=INT_MIN;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<N;i++)
    {
        product=1;
        for(j=i;j<N;j++)
        {
            product = product * arr[j];
            if(product>max)
                max = product;
        }
    }
    printf("%d",max);
    return 0;
}
