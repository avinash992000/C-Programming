/*
    CostPrice < SellingPrice => Profit
    CostPrice > SellingPrice => Loss
    CostPrice == SellingPrice => No profit / loss
    Input:
        -> Two inputs: costPrice and sellingPrice
*/
#include<stdio.h>
int main()
{
    float costPrice, sellingPrice;
    printf("Enter cost price and sellng price value: ");
    scanf("%f %f",&costPrice,&sellingPrice);

    if(costPrice < sellingPrice)        printf("Profit: %.2f",sellingPrice-costPrice);
    else if(costPrice > sellingPrice)   printf("Loss: %.2f",costPrice-sellingPrice);
    else                                printf("No profit / No loss");
    return 0;
}
