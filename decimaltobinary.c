#include<stdio.h>

void decimalToBinary(int);

void decimalToBinary(int n)
{
    int binary[32], i = 0;
    while(n!=0)//31!=0, 15!=0, 7!=0, 3!=0, 1!=0, 0!=0[False]
    {
        binary[i] = n%2;//0:31%2=1, 1:15%2=1, 2:7%2=1, 3:3%2=1, 4:1%2=1 [0:1 1:1 2:1 3:1 4:1]
        n = n/2;//31/2=15, 15/2=7, 7/2=3, 3/2=1, 1/2=0
        i++;//1,2,3,4,5
    }
    for(--i;i>=0;i--)
        printf("%d",binary[i]);
}

int main()
{
    int decimalValue;
    printf("Enter a decimal number: ");
    scanf("%d",&decimalValue);
    decimalToBinary(decimalValue);
    return 0;
}
