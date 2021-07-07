/*
    Problem: Calculating compound intrest
    Input: principle, time, rate
    Outpur: pr * (1+r/100) ^ time
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float pr, ti, ra;
    printf("Enter priciple amount, time period in years, rate of intrest: ");
    scanf("%f %f %f",&pr,&ti,&ra);

    float ci = pr * pow((1+ra/100),ti);

    printf("Simple intrest amount: %.2f",ci);
    return 0;
}
