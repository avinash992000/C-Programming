#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number < 0)
        number = abs(number);//abs is function [absolute value (MOD value)] |-12| or |12| = 12

    short lastDigit = number % 10;

    while(number >= 10)
        number = number / 10;
    
    printf("\nFirst digit value is: %d",number);
    printf("\nLast digit value is: %hd",lastDigit);
    return 0;
}
