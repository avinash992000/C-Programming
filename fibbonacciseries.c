#include<stdio.h>
int main()
{
    long long firstNum, secondNum;
    printf("Enter first and second numbers: ");
    scanf("%d %d",&firstNum,&secondNum);//1 2

    int totalNumberOfSeries;
    printf("Enter total numbers you want to prepare in series: ");
    scanf("%d",&totalNumberOfSeries);

    if(totalNumberOfSeries < 1)         printf("Invalid input. Thank you!");
    else if(totalNumberOfSeries == 1)   printf("%lld",firstNum);
    else if(totalNumberOfSeries == 2)   printf("%lld %lld",firstNum,secondNum);
    else
    {
        printf("%lld %lld ",firstNum,secondNum);//F:1 S:2 
        //n=> 5 - 2[Printed] => 3
        //1 2 F:3 S:5
        int nextNum, i;
        for(i=3;i<=totalNumberOfSeries;i++) //for(i=1;i<=totalNumberOfSeries-2;i++)
        {
            nextNum = firstNum + secondNum;//3 5
            printf("%lld ",nextNum);//3 5
            firstNum = secondNum;
            secondNum = nextNum;
        }
    }
}
