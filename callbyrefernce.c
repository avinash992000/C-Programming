#include<stdio.h>

void swapData(int*,int*);//Function declaration

void swapData(int *x,int *y)//Function definition 
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("\nInside the swapData function, The values of x,y is: %d %d",*x,*y);
}

int main()
{
    int x,y;
    printf("Enter values of x , y: ");
    scanf("%d %d",&x,&y);
    printf("\nInside the Main function before swapping data, The values of x,y is: %d %d",x,y);
    swapData(&x,&y);//Function call
    printf("\nInside the Main function after swapping data by swapData function, The values of x,y is: %d %d",x,y);
    return 0;
}
/*
    Differences between Call by Value and Call by Reference:
    1. In CBV, The copy of variable will be passed from calling function to called function
    1. In CBR, The address of variable will be passed from calling function to called function
    2. In CBV, inside called function if we made any changes on formal arguments which will not affect on original location
    2. In CBR, inside called function if we made any changes on formal arguments which will be effected on original location
*/
