/*
    Problem statement: Program to initialize an array and print it
    Procedure:
        -> Initializing data elements before compilcation of program
        -> Different ways:
            1. Individual element initialization
            2. Initializing all of the elements
            3. Partial initialization
        -> Printing output:
            1. Print each element individually
            2. Print each element using loop
*/
#include<stdio.h>
int main()
{
    //1. Individual element initialization: index starts from 0 and ends with 5-1=4
    int arr1[5];
    arr1[0] = 10; arr1[1] = 20; arr1[2] = 30; arr1[3] = 40; arr1[4] = 50; 

    //2. Initializing all of the elements
    int arr2[5] = {1,2,3,4,5};//Index: 0 1 2 3 4

    //3. Partial initialization
    int arr3[5] = {100,200};//Remaining three locations will be initialized with 0
    int arr4[5] = {0};//Initializing all of the elements with 0

    //1. Print each element individually
    printf("%d %d %d %d %d\n",arr1[0],arr1[1],arr1[2],arr1[3],arr1[4]);

    //2. Print each element using loop
    int i;
    for(i=0;i<5;i++)
        printf("%d ",arr2[i]);
    return 0;
}
