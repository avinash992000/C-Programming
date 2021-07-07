#include<stdio.h>

void swapData(int,int);//Function declaration

void swapData(int x,int y)//Function definition 
{
    int temp = x;
    x = y;
    y = temp;
    printf("\nInside the swapData function, The values of x,y is: %d %d",x,y);
}

int main()
{
    int x,y;
    printf("Enter values of x , y: ");
    scanf("%d %d",&x,&y);
    printf("\nInside the Main function before swapping data, The values of x,y is: %d %d",x,y);
    swapData(x,y);//Function call
    printf("\nInside the Main function after swapping data by swapData function, The values of x,y is: %d %d",x,y);
    return 0;
}
