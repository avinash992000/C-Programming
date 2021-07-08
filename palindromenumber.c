#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);//121

    int temp = number, rev = 0;

    //Reverse of given number logic
    while(temp)//121, 12, 1, 0[False]
    {
        rev = rev * 10 + (temp%10);//0*10+(121%10)=0+1=1, 1*10+(12%10)=10+2=12, 12*10+1%10=120+1=121
        temp = temp / 10;//121/10=12, 12/10=1, 1/10=0
    }

    if(rev == number)   printf("%d is palindromic number",number);
    else                printf("%d is not a palindromic number",number);

    return 0;
}
